#!/bin/bash

usage() {
    echo "Usage: $0 -l <local_ip> -i <interface_name> -v <vxlan_id> -p <dst_port> -a <vxlan_ip> -r <remote_ip1,remote_ip2,...>"
    echo "  -l <local_ip>        Local IP address"
    echo "  -i <interface_name>  Device interface (e.g., ens3)"
    echo "  -v <vxlan_id>        VXLAN ID"
    echo "  -p <dst_port>        VXLAN UDP destination port"
    echo "  -a <vxlan_ip>        VXLAN interface IP address (e.g., 10.10.10.2/24)"
    echo "  -r <remote_ips>      Comma-separated list of remote IPs"
    exit 1
}

generate_mac_from_ip() {
    local ip=$1
    IFS='.' read -r -a octets <<< "$ip"
    printf "02:%02x:%02x:%02x:%02x:%02x\n" ${octets[0]} ${octets[1]} ${octets[2]} ${octets[3]} $(( RANDOM % 256 ))
}

# Parse arguments
while getopts "l:r:i:v:p:a:" opt; do
    case ${opt} in
        l ) local_ip=$OPTARG ;;
        r ) remote_ips=$OPTARG ;;
        i ) dev_interface=$OPTARG ;;
        v ) vxlan_id=$OPTARG ;;
        p ) dst_port=$OPTARG ;;
        a ) vxlan_ip=$OPTARG ;;
        * ) usage ;;
    esac
done

[ -z "$local_ip" ] || [ -z "$remote_ips" ] || [ -z "$dev_interface" ] || [ -z "$vxlan_id" ] || [ -z "$dst_port" ] || [ -z "$vxlan_ip" ] && usage

vxlan_iface="vxlan$vxlan_id"
unique_mac=$(generate_mac_from_ip "$local_ip")

echo -e "\nCreating VXLAN interface '$vxlan_iface'..."
ip link add $vxlan_iface type vxlan id $vxlan_id local $local_ip dstport $dst_port dev $dev_interface nolearning

ip link set $vxlan_iface address $unique_mac
ip addr add $vxlan_ip dev $vxlan_iface
ip link set $vxlan_iface up

# Add static FDB entries for each remote peer
IFS=',' read -ra REMOTES <<< "$remote_ips"
for peer_ip in "${REMOTES[@]}"; do
    peer_mac=$(generate_mac_from_ip "$peer_ip")
    echo "Adding FDB entry: MAC $peer_mac → $peer_ip"
    bridge fdb append $peer_mac dev $vxlan_iface dst $peer_ip
done

# Show result
ip a show $vxlan_iface

