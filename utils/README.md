# VXLAN Setup Script

```sh
sudo ./vxlan_setup_hosts.sh -l <local_ip> -r <remote_ip> -i <interface_name> -v <vxlan_id> -p <dst_port> -a <vxlan_ip>
```

```sh
sudo ./remove_vxlan_setup_hosts.sh -v <vxlan_id>
```

## Example Domain1
```sh
sudo ./vxlan_setup_hosts.sh -l 10.5.15.75 -r 10.5.15.89 -i eth0 -v 200 -p 4789 -a 10.10.10.1/24
```
```sh
sudo ./remove_vxlan_setup_hosts.sh -v 200
```

## Example Domain2
```sh
sudo ./vxlan_setup_hosts.sh -l 10.5.15.89 -r 10.5.15.75 -i eth0 -v 200 -p 4789 -a 10.10.10.2/24
```
```sh
sudo ./remove_vxlan_setup_hosts.sh -v 200
```

## Multus utils
```sh
kubectl get network-attachment-definitions.k8s.cni.cncf.io -A
```