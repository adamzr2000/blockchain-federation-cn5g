### **OAI 5G Core Deployment - Documented Steps**

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
