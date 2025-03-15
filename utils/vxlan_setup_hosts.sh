#!/bin/bash

# Function to display usage information
usage() {
    echo "Usage: $0 -l <local_ip> -r <remote_ip> -i <interface_name> -v <vxlan_id> -p <dst_port> -a <vxlan_ip>"
    echo "  -l <local_ip>        Local IP address"
    echo "  -r <remote_ip>       Remote IP address"
    echo "  -i <interface_name>  Interface name (e.g., enp0s3)"
    echo "  -v <vxlan_id>        VXLAN ID"
    echo "  -p <dst_port>        Destination port"
    echo "  -a <vxlan_ip>        IP address for VXLAN interface (must be within the specified range)"
    exit 1
}

# Function to generate a unique MAC address from local IP
generate_mac_from_ip() {
    local ip=$1
    IFS='.' read -r -a octets <<< "$ip"
    printf "02:%02x:%02x:%02x:%02x:%02x\n" ${octets[0]} ${octets[1]} ${octets[2]} ${octets[3]} $(( RANDOM % 256 ))
}

# Parse input arguments
while getopts "l:r:i:v:p:a:" opt; do
    case ${opt} in
        l ) local_ip=$OPTARG ;;
        r ) remote_ip=$OPTARG ;;
        i ) dev_interface=$OPTARG ;;
        v ) vxlan_id=$OPTARG ;;
        p ) dst_port=$OPTARG ;;
        a ) vxlan_ip=$OPTARG ;;
        * ) usage ;;
    esac
done

# Check if all required arguments are provided
if [ -z "$local_ip" ] || [ -z "$remote_ip" ] || [ -z "$dev_interface" ] || [ -z "$vxlan_id" ] || [ -z "$dst_port" ] || [ -z "$vxlan_ip" ]; then
    usage
fi

# Generate a unique MAC address based on the local IP
unique_mac=$(generate_mac_from_ip "$local_ip")

# Create a VXLAN network interface
vxlan_iface="vxlan$vxlan_id"
echo -e "\nCreating VXLAN network interface '$vxlan_iface' with parameters:"
echo "  VXLAN ID: $vxlan_id"
echo "  Local IP: $local_ip"
echo "  Remote IP: $remote_ip"
echo "  Destination Port: $dst_port"
echo "  Device Interface: $dev_interface"
echo "  VXLAN IP: $vxlan_ip"
echo "  Generated MAC Address: $unique_mac"

# Create the VXLAN interface with the generated MAC address
ip link add $vxlan_iface type vxlan id $vxlan_id local $local_ip remote $remote_ip dstport $dst_port dev $dev_interface
ip link set $vxlan_iface address $unique_mac

# Assign the user-provided IP address to the VXLAN interface
echo -e "\nAssigning IP address '$vxlan_ip' to VXLAN interface '$vxlan_iface'..."
ip addr add $vxlan_ip dev $vxlan_iface

# Enable the VXLAN network interface
echo -e "\nEnabling the VXLAN interface '$vxlan_iface'..."
ip link set $vxlan_iface up

# Verify that the VXLAN interface is correctly configured
echo -e "\nChecking the list of interfaces for '$vxlan_iface'..."
ip a | grep -A 3 $vxlan_iface