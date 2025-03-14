### **OAI 5G Core Deployment - Documented Steps (docker)**

## **1️⃣ Enable IP Forwarding and Packet Forwarding**
To allow packet forwarding between network interfaces:
```bash
sudo sysctl -w net.ipv4.conf.all.forwarding=1
sudo iptables -P FORWARD ACCEPT
```

## **2️⃣ Pull Required OAI Docker Images**
Ensure you are authenticated with Docker and pull all necessary images:
```bash
docker login
docker pull oaisoftwarealliance/oai-amf:v2.1.0
docker pull oaisoftwarealliance/oai-nrf:v2.1.0
docker pull oaisoftwarealliance/oai-upf:v2.1.0
docker pull oaisoftwarealliance/oai-smf:v2.1.0
docker pull oaisoftwarealliance/oai-udr:v2.1.0
docker pull oaisoftwarealliance/oai-udm:v2.1.0
docker pull oaisoftwarealliance/oai-ausf:v2.1.0
docker pull oaisoftwarealliance/oai-upf-vpp:v2.1.0
docker pull oaisoftwarealliance/oai-nssf:v2.1.0
docker pull oaisoftwarealliance/oai-pcf:v2.1.0
docker pull oaisoftwarealliance/oai-lmf:v2.1.0
docker pull oaisoftwarealliance/trf-gen-cn5g:latest
```

## **3️⃣ Tested Machine Specifications**
The deployment was tested on a machine running **Ubuntu 22.04** with **16GB RAM and 4 CPUs**.

## **4️⃣ Deploy and Manage OAI 5GC in Domain 1**
### **Start OAI 5G Core (Domain 1 - VM1)**
```bash
cd oai-cn5g-fed/docker-compose
python3 core-network-vm1.py --type start-basic --scenario 1
```

### **Stop OAI 5G Core (Domain 1 - VM1)**
```bash
python3 core-network-vm1.py --type stop-basic --scenario 1
```

## **5️⃣ Deploy and Manage OAI 5GC in Domain 2**
### **Start OAI 5G Core (Domain 2 - VM2)**
```bash
cd oai-cn5g-fed/docker-compose
python3 core-network-vm2.py --type start-basic --scenario 1
```

### **Stop OAI 5G Core (Domain 2 - VM2)**
```bash
python3 core-network-vm2.py --type stop-basic --scenario 1
```


### OAI 5G Core Configuration with UERANSIM

This table summarizes the **OAI 5G Core configuration**, including **Network Functions (NFs), interconnections, IP addresses, ports, and protocols**.

| **Component** | **Function** | **Network** | **IP Address** | **Port(s)** | **Protocol** |
|--------------|-------------|------------|--------------|----------|------------|
| MySQL | Stores subscriber & NF configurations | public_net | 192.168.70.131 | 3306 | MySQL |
| NRF (Network Repository Function) | Service discovery for all NFs | public_net | 192.168.70.130 | 8080 | HTTP/2 |
| UDR (Unified Data Repository) | Stores subscriber profiles | public_net | 192.168.70.136 | 8080 | HTTP/2 |
| UDM (Unified Data Management) | Manages UE profiles & subscription data | public_net | 192.168.70.137 | 8080 | HTTP/2 |
| AUSF (Authentication Server Function) | Handles user authentication | public_net | 192.168.70.138 | 8080 | HTTP/2 |
| AMF (Access & Mobility Function) | Handles UE Registration, Authentication | public_net | 192.168.70.132 | 8080, 38412 | HTTP/2, SCTP |
| SMF (Session Management Function) | Handles UE PDU session establishment | public_net | 192.168.70.133 | 8080, 8805 | HTTP/2, UDP |
| UPF (User Plane Function) | Routes UE traffic to the Data Network | public_net, public_net_access, public_net_core | 192.168.70.134, 192.168.72.134, 192.168.73.134 | PFCP (N4), GTP-U (N3), N6 | IP Routing |
| oai-ext-dn (External Data Network) | Simulates external internet | public_net_core | 192.168.73.135 | N/A | IP Routing |
| UERANSIM (gNB & UE Simulator) | Simulates gNB & UE for testing | public_net, public_net_access | 192.168.70.141, 192.168.72.141 | NGAP (38412), GTP-U | SCTP, UDP |
| UE Default Network | UE assigned IP and network via SMF | UE PDU Session | Dynamic (e.g., 12.1.1.X) | N/A | IP Routing |
| Traffic Route Flow (UE → External) | Data traffic from UE to external DN | public_net_access → public_net_core | 12.1.1.X → 192.168.73.201 → 192.168.73.135 | N/A | GTP-U → IP Routing |
| Traffic Route Flow (UE → Internal NF) | UE signaling traffic to core NFs | public_net | 12.1.1.X → AMF (192.168.70.132) → SMF (192.168.70.133) | 38412 (SCTP), 8080 (HTTP/2) | SCTP, HTTP/2 |


## Usage

### **Start the OAI 5G Core**
```bash
cd oai-cn5g-fed/docker-compose
docker compose -f docker-compose-basic-vpp-nrf.yaml up -d
```

### **Start UERANSIM**
```bash
cd oai-cn5g-fed/docker-compose
docker compose -f docker-compose-ueransim-vpp.yaml up -d
```

### **Stop Everything**
```bash
docker compose -f docker-compose-basic-vpp-nrf.yaml down
docker compose -f docker-compose-ueransim-vpp.yaml down
```