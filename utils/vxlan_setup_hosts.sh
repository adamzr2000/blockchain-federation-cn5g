#!/bin/bash

# Function to display usage information
usage() {
    echo "Usage: $0 -l <local_ip> -r <remote_ip> -i <interface_name> -v <vxlan_id> -p <dst_port> -x <ip_range> -a <vxlan_ip>"
    echo "  -l <local_ip>        Local IP address"
    echo "  -r <remote_ip>       Remote IP address"
    echo "  -i <interface_name>  Interface name (e.g., enp0s3)"
    echo "  -v <vxlan_id>        VXLAN ID"
    echo "  -p <dst_port>        Destination port"
    echo "  -a <vxlan_ip>        IP address for VXLAN interface (must be within the specified range)"
    exit 1
}

# Function to validate IP address format
validate_ip() {
    local ip=$1
    local valid_ip_regex="^([0-9]{1,3}\.){3}[0-9]{1,3}$"
    if [[ $ip =~ $valid_ip_regex ]]; then
        IFS='.' read -r -a octets <<< "$ip"
        for octet in "${octets[@]}"; do
            if (( octet < 0 || octet > 255 )); then
                return 1
            fi
        done
        return 0
    else
        return 1
    fi
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

# Validate IP address format
if ! validate_ip $local_ip; then
    echo "Invalid local IP address format: $local_ip"
    exit 1
fi

if ! validate_ip $remote_ip; then
    echo "Invalid remote IP address format: $remote_ip"
    exit 1
fi


# Create a VXLAN network interface
vxlan_iface="vxlan$vxlan_id"
echo -e "\nCreating VXLAN network interface '$vxlan_iface' with parameters:"
echo "  VXLAN ID: $vxlan_id"
echo "  Local IP: $local_ip"
echo "  Remote IP: $remote_ip"
echo "  Destination Port: $dst_port"
echo "  Device Interface: $dev_interface"
echo "  VXLAN IP: $vxlan_ip"

# Enable IP forwarding and load required kernel modules
echo 1 > /proc/sys/net/ipv4/ip_forward
echo "Enabling IP forwarding..."
# modprobe vxlan

ip link add $vxlan_iface type vxlan id $vxlan_id local $local_ip remote $remote_ip dstport $dst_port dev $dev_interface

# Assign the user-provided IP address to the VXLAN interface
echo -e "\nAssigning IP address '$vxlan_ip' to VXLAN interface '$vxlan_iface'..."
ip addr add $vxlan_ip dev $vxlan_iface

# Enable the VXLAN network interface
echo -e "\nEnabling the VXLAN interface '$vxlan_iface'..."
ip link set $vxlan_iface up

# Verify that the VXLAN interface is correctly configured
echo -e "\nChecking the list of interfaces for '$vxlan_iface'..."
ip a | grep $vxlan_iface
