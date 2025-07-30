#!/bin/bash

# Function to display usage information
usage() {
    echo "Usage: $0 [-v <vxlan_id>]"
    echo "  -v <vxlan_id>        VXLAN ID (default: 200)"
    exit 1
}

# Parse input arguments
vxlan_id="200"
while getopts "v:" opt; do
    case ${opt} in
        v ) vxlan_id=$OPTARG ;;
        * ) usage ;;
    esac
done

vxlan_iface="vxlan${vxlan_id}"
bridge_iface="br${vxlan_id}"

echo -e "\n[!] Cleaning up VXLAN and bridge setup for VNI $vxlan_id..."

# Remove VXLAN interface
if ip link show "$vxlan_iface" &>/dev/null; then
    echo "→ Deleting VXLAN interface: $vxlan_iface"
    sudo ip link set "$vxlan_iface" down
    sudo ip link del "$vxlan_iface"
else
    echo "→ VXLAN interface $vxlan_iface does not exist."
fi

# Remove bridge interface
if ip link show "$bridge_iface" &>/dev/null; then
    echo "→ Deleting bridge interface: $bridge_iface"
    sudo ip link set "$bridge_iface" down
    sudo ip link del "$bridge_iface"
else
    echo "→ Bridge interface $bridge_iface does not exist."
fi

echo -e "\n[✔] Cleanup completed."

