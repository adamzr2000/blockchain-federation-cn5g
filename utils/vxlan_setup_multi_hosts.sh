#!/bin/bash

usage() {
    echo "Usage: $0 -l <local_ip> -i <interface> -v <vxlan_id> -p <port> -b <bridge_ip> -r <remote_ip1,remote_ip2,...>"
    echo "  -l <local_ip>       Local underlay IP"
    echo "  -i <interface>      Physical NIC (e.g., ens3)"
    echo "  -v <vxlan_id>       VXLAN VNI (e.g., 200)"
    echo "  -p <port>           VXLAN UDP port (e.g., 4789)"
    echo "  -b <bridge_ip>      Bridge IP (e.g., 192.168.200.1/24)"
    echo "  -r <remote_ips>     Comma-separated list of remote underlay IPs"
    exit 1
}

generate_mac_from_ip() {
    local ip=$1
    IFS='.' read -r -a octets <<< "$ip"
    printf "02:%02x:%02x:%02x:%02x:%02x\n" ${octets[0]} ${octets[1]} ${octets[2]} ${octets[3]} $(( RANDOM % 256 ))
}

while getopts "l:i:v:p:b:r:" opt; do
    case ${opt} in
        l ) local_ip=$OPTARG ;;
        i ) iface=$OPTARG ;;
        v ) vni=$OPTARG ;;
        p ) port=$OPTARG ;;
        b ) bridge_ip=$OPTARG ;;
        r ) remote_ips=$OPTARG ;;
        * ) usage ;;
    esac
done

if [[ -z "$local_ip" || -z "$iface" || -z "$vni" || -z "$port" || -z "$bridge_ip" || -z "$remote_ips" ]]; then
    usage
fi

vxlan_iface="vxlan${vni}"
bridge_iface="br${vni}"
mac=$(generate_mac_from_ip "$local_ip")

echo "[*] Cleaning up previous interfaces (if any)..."
ip link del "$vxlan_iface" 2>/dev/null
ip link del "$bridge_iface" 2>/dev/null

echo "[*] Creating VXLAN interface $vxlan_iface"
ip link add "$vxlan_iface" type vxlan id "$vni" dstport "$port" dev "$iface" local "$local_ip" nolearning
ip link set "$vxlan_iface" address "$mac"
ip link set "$vxlan_iface" up

echo "[*] Creating bridge $bridge_iface"
ip link add "$bridge_iface" type bridge
ip link set "$bridge_iface" address "$mac"
ip link set "$bridge_iface" up

echo "[*] Attaching VXLAN interface to bridge"
ip link set "$vxlan_iface" master "$bridge_iface"

echo "[*] Assigning $bridge_ip to bridge interface"
ip addr flush dev "$bridge_iface"
ip addr add "$bridge_ip" dev "$bridge_iface"

echo "[*] Adding FDB entries for remote peers"
IFS=',' read -ra remotes <<< "$remote_ips"
for remote in "${remotes[@]}"; do
    echo "  → $remote"
    bridge fdb add 00:00:00:00:00:00 dev "$vxlan_iface" dst "$remote"
done

echo "[✔] Multi-host VXLAN setup complete."

