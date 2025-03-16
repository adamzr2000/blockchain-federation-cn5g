/**
 * NRF NFDiscovery Service
 * NRF NFDiscovery Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NFProfile.h"
#include <iostream>

namespace oai::model::nrf {
using namespace oai::model::common;

NFProfile::NFProfile() {
  m_NfInstanceId                          = "";
  m_NfInstanceName                        = "";
  m_NfInstanceNameIsSet                   = false;
  m_HeartBeatTimer                        = 0;
  m_HeartBeatTimerIsSet                   = false;
  m_PlmnListIsSet                         = false;
  m_SNssaisIsSet                          = false;
  m_PerPlmnSnssaiListIsSet                = false;
  m_NsiListIsSet                          = false;
  m_Fqdn                                  = "";
  m_FqdnIsSet                             = false;
  m_InterPlmnFqdn                         = "";
  m_InterPlmnFqdnIsSet                    = false;
  m_Ipv4AddressesIsSet                    = false;
  m_Ipv6AddressesIsSet                    = false;
  m_AllowedPlmnsIsSet                     = false;
  m_AllowedNfTypesIsSet                   = false;
  m_AllowedNfDomainsIsSet                 = false;
  m_AllowedNssaisIsSet                    = false;
  m_Priority                              = 0;
  m_PriorityIsSet                         = false;
  m_Capacity                              = 0;
  m_CapacityIsSet                         = false;
  m_Load                                  = 0;
  m_LoadIsSet                             = false;
  m_Locality                              = "";
  m_LocalityIsSet                         = false;
  m_Priority                              = 0;
  m_PriorityIsSet                         = false;
  m_UdrInfoIsSet                          = false;
  m_UdrInfoExtIsSet                       = false;
  m_UdmInfoIsSet                          = false;
  m_UdmInfoExtIsSet                       = false;
  m_AusfInfoIsSet                         = false;
  m_AusfInfoExtIsSet                      = false;
  m_AmfInfoIsSet                          = false;
  m_AmfInfoExtIsSet                       = false;
  m_SmfInfoIsSet                          = false;
  m_SmfInfoExtIsSet                       = false;
  m_UpfInfoIsSet                          = false;
  m_UpfInfoExtIsSet                       = false;
  m_PcfInfoIsSet                          = false;
  m_PcfInfoExtIsSet                       = false;
  m_BsfInfoIsSet                          = false;
  m_BsfInfoExtIsSet                       = false;
  m_ChfInfoIsSet                          = false;
  m_ChfInfoExtIsSet                       = false;
  m_NrfInfoIsSet                          = false;
  m_NwdafInfoIsSet                        = false;
  m_CustomInfoIsSet                       = false;
  m_RecoveryTime                          = "";
  m_RecoveryTimeIsSet                     = false;
  m_NfServicePersistence                  = false;
  m_NfServicePersistenceIsSet             = false;
  m_NfServicesIsSet                       = false;
  m_NfProfileChangesSupportInd            = false;
  m_NfProfileChangesSupportIndIsSet       = false;
  m_NfProfileChangesInd                   = false;
  m_NfProfileChangesIndIsSet              = false;
  m_DefaultNotificationSubscriptionsIsSet = false;
}

NFProfile::~NFProfile() {}

void NFProfile::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const NFProfile& o) {
  j                 = nlohmann::json();
  j["nfInstanceId"] = o.m_NfInstanceId;
  if (o.nfInstanceNameIsSet()) j["nfInstanceName"] = o.m_NfInstanceName;
  j["nfType"]   = o.m_NfType;
  j["nfStatus"] = o.m_NfStatus;
  if (o.heartBeatTimerIsSet()) j["heartBeatTimer"] = o.m_HeartBeatTimer;
  if (o.plmnListIsSet() || !o.m_PlmnList.empty()) j["plmnList"] = o.m_PlmnList;
  if (o.sNssaisIsSet() || !o.m_SNssais.empty()) j["sNssais"] = o.m_SNssais;
  if (o.perPlmnSnssaiListIsSet() || !o.m_PerPlmnSnssaiList.empty())
    j["perPlmnSnssaiList"] = o.m_PerPlmnSnssaiList;
  if (o.nsiListIsSet() || !o.m_NsiList.empty()) j["nsiList"] = o.m_NsiList;
  if (o.fqdnIsSet()) j["fqdn"] = o.m_Fqdn;
  if (o.interPlmnFqdnIsSet()) j["interPlmnFqdn"] = o.m_InterPlmnFqdn;
  if (o.ipv4AddressesIsSet() || !o.m_Ipv4Addresses.empty())
    j["ipv4Addresses"] = o.m_Ipv4Addresses;
  if (o.ipv6AddressesIsSet() || !o.m_Ipv6Addresses.empty())
    j["ipv6Addresses"] = o.m_Ipv6Addresses;
  if (o.allowedPlmnsIsSet() || !o.m_AllowedPlmns.empty())
    j["allowedPlmns"] = o.m_AllowedPlmns;
  if (o.allowedNfTypesIsSet() || !o.m_AllowedNfTypes.empty())
    j["allowedNfTypes"] = o.m_AllowedNfTypes;
  if (o.allowedNfDomainsIsSet() || !o.m_AllowedNfDomains.empty())
    j["allowedNfDomains"] = o.m_AllowedNfDomains;
  if (o.allowedNssaisIsSet() || !o.m_AllowedNssais.empty())
    j["allowedNssais"] = o.m_AllowedNssais;
  if (o.priorityIsSet()) j["priority"] = o.m_Priority;
  if (o.capacityIsSet()) j["capacity"] = o.m_Capacity;
  if (o.loadIsSet()) j["load"] = o.m_Load;
  if (o.localityIsSet()) j["locality"] = o.m_Locality;
  if (o.priorityIsSet()) j["priority"] = o.m_Priority;
  if (o.udrInfoIsSet()) j["udrInfo"] = o.m_UdrInfo;
  if (o.udrInfoExtIsSet() || !o.m_UdrInfoExt.empty())
    j["udrInfoExt"] = o.m_UdrInfoExt;
  if (o.udmInfoIsSet()) j["udmInfo"] = o.m_UdmInfo;
  if (o.udmInfoExtIsSet() || !o.m_UdmInfoExt.empty())
    j["udmInfoExt"] = o.m_UdmInfoExt;
  if (o.ausfInfoIsSet()) j["ausfInfo"] = o.m_AusfInfo;
  if (o.ausfInfoExtIsSet() || !o.m_AusfInfoExt.empty())
    j["ausfInfoExt"] = o.m_AusfInfoExt;
  if (o.amfInfoIsSet()) j["amfInfo"] = o.m_AmfInfo;
  if (o.amfInfoExtIsSet() || !o.m_AmfInfoExt.empty())
    j["amfInfoExt"] = o.m_AmfInfoExt;
  if (o.smfInfoIsSet()) j["smfInfo"] = o.m_SmfInfo;
  if (o.smfInfoExtIsSet() || !o.m_SmfInfoExt.empty())
    j["smfInfoExt"] = o.m_SmfInfoExt;
  if (o.upfInfoIsSet()) j["upfInfo"] = o.m_UpfInfo;
  if (o.upfInfoExtIsSet() || !o.m_UpfInfoExt.empty())
    j["upfInfoExt"] = o.m_UpfInfoExt;
  if (o.pcfInfoIsSet()) j["pcfInfo"] = o.m_PcfInfo;
  if (o.pcfInfoExtIsSet() || !o.m_PcfInfoExt.empty())
    j["pcfInfoExt"] = o.m_PcfInfoExt;
  if (o.bsfInfoIsSet()) j["bsfInfo"] = o.m_BsfInfo;
  if (o.bsfInfoExtIsSet() || !o.m_BsfInfoExt.empty())
    j["bsfInfoExt"] = o.m_BsfInfoExt;
  if (o.chfInfoIsSet()) j["chfInfo"] = o.m_ChfInfo;
  if (o.chfInfoExtIsSet() || !o.m_ChfInfoExt.empty())
    j["chfInfoExt"] = o.m_ChfInfoExt;
  if (o.nrfInfoIsSet()) j["nrfInfo"] = o.m_NrfInfo;
  if (o.nwdafInfoIsSet()) j["nwdafInfo"] = o.m_NwdafInfo;
  if (o.customInfoIsSet()) j["customInfo"] = o.m_CustomInfo;
  if (o.recoveryTimeIsSet()) j["recoveryTime"] = o.m_RecoveryTime;
  if (o.nfServicePersistenceIsSet())
    j["nfServicePersistence"] = o.m_NfServicePersistence;
  if (o.nfServicesIsSet() || !o.m_NfServices.empty())
    j["nfServices"] = o.m_NfServices;
  if (o.nfProfileChangesSupportIndIsSet())
    j["nfProfileChangesSupportInd"] = o.m_NfProfileChangesSupportInd;
  if (o.nfProfileChangesIndIsSet())
    j["nfProfileChangesInd"] = o.m_NfProfileChangesInd;
  if (o.defaultNotificationSubscriptionsIsSet() ||
      !o.m_DefaultNotificationSubscriptions.empty())
    j["defaultNotificationSubscriptions"] =
        o.m_DefaultNotificationSubscriptions;
}

void from_json(const nlohmann::json& j, NFProfile& o) {
  j.at("nfInstanceId").get_to(o.m_NfInstanceId);
  if (j.find("nfInstanceName") != j.end()) {
    j.at("nfInstanceName").get_to(o.m_NfInstanceName);
    o.m_NfInstanceNameIsSet = true;
  }
  j.at("nfType").get_to(o.m_NfType);
  j.at("nfStatus").get_to(o.m_NfStatus);
  if (j.find("heartBeatTimer") != j.end()) {
    j.at("heartBeatTimer").get_to(o.m_HeartBeatTimer);
    o.m_HeartBeatTimerIsSet = true;
  }
  if (j.find("plmnList") != j.end()) {
    j.at("plmnList").get_to(o.m_PlmnList);
    o.m_PlmnListIsSet = true;
  }
  if (j.find("sNssais") != j.end()) {
    j.at("sNssais").get_to(o.m_SNssais);
    o.m_SNssaisIsSet = true;
  }
  if (j.find("perPlmnSnssaiList") != j.end()) {
    j.at("perPlmnSnssaiList").get_to(o.m_PerPlmnSnssaiList);
    o.m_PerPlmnSnssaiListIsSet = true;
  }
  if (j.find("nsiList") != j.end()) {
    j.at("nsiList").get_to(o.m_NsiList);
    o.m_NsiListIsSet = true;
  }
  if (j.find("fqdn") != j.end()) {
    j.at("fqdn").get_to(o.m_Fqdn);
    o.m_FqdnIsSet = true;
  }
  if (j.find("interPlmnFqdn") != j.end()) {
    j.at("interPlmnFqdn").get_to(o.m_InterPlmnFqdn);
    o.m_InterPlmnFqdnIsSet = true;
  }
  if (j.find("ipv4Addresses") != j.end()) {
    j.at("ipv4Addresses").get_to(o.m_Ipv4Addresses);
    o.m_Ipv4AddressesIsSet = true;
  }
  if (j.find("ipv6Addresses") != j.end()) {
    j.at("ipv6Addresses").get_to(o.m_Ipv6Addresses);
    o.m_Ipv6AddressesIsSet = true;
  }
  if (j.find("allowedPlmns") != j.end()) {
    j.at("allowedPlmns").get_to(o.m_AllowedPlmns);
    o.m_AllowedPlmnsIsSet = true;
  }
  if (j.find("allowedNfTypes") != j.end()) {
    j.at("allowedNfTypes").get_to(o.m_AllowedNfTypes);
    o.m_AllowedNfTypesIsSet = true;
  }
  if (j.find("allowedNfDomains") != j.end()) {
    j.at("allowedNfDomains").get_to(o.m_AllowedNfDomains);
    o.m_AllowedNfDomainsIsSet = true;
  }
  if (j.find("allowedNssais") != j.end()) {
    j.at("allowedNssais").get_to(o.m_AllowedNssais);
    o.m_AllowedNssaisIsSet = true;
  }
  if (j.find("priority") != j.end()) {
    j.at("priority").get_to(o.m_Priority);
    o.m_PriorityIsSet = true;
  }
  if (j.find("capacity") != j.end()) {
    j.at("capacity").get_to(o.m_Capacity);
    o.m_CapacityIsSet = true;
  }
  if (j.find("load") != j.end()) {
    j.at("load").get_to(o.m_Load);
    o.m_LoadIsSet = true;
  }
  if (j.find("locality") != j.end()) {
    j.at("locality").get_to(o.m_Locality);
    o.m_LocalityIsSet = true;
  }
  if (j.find("priority") != j.end()) {
    j.at("priority").get_to(o.m_Priority);
    o.m_PriorityIsSet = true;
  }
  if (j.find("udrInfo") != j.end()) {
    j.at("udrInfo").get_to(o.m_UdrInfo);
    o.m_UdrInfoIsSet = true;
  }
  if (j.find("udrInfoExt") != j.end()) {
    j.at("udrInfoExt").get_to(o.m_UdrInfoExt);
    o.m_UdrInfoExtIsSet = true;
  }
  if (j.find("udmInfo") != j.end()) {
    j.at("udmInfo").get_to(o.m_UdmInfo);
    o.m_UdmInfoIsSet = true;
  }
  if (j.find("udmInfoExt") != j.end()) {
    j.at("udmInfoExt").get_to(o.m_UdmInfoExt);
    o.m_UdmInfoExtIsSet = true;
  }
  if (j.find("ausfInfo") != j.end()) {
    j.at("ausfInfo").get_to(o.m_AusfInfo);
    o.m_AusfInfoIsSet = true;
  }
  if (j.find("ausfInfoExt") != j.end()) {
    j.at("ausfInfoExt").get_to(o.m_AusfInfoExt);
    o.m_AusfInfoExtIsSet = true;
  }
  if (j.find("amfInfo") != j.end()) {
    j.at("amfInfo").get_to(o.m_AmfInfo);
    o.m_AmfInfoIsSet = true;
  }
  if (j.find("amfInfoExt") != j.end()) {
    j.at("amfInfoExt").get_to(o.m_AmfInfoExt);
    o.m_AmfInfoExtIsSet = true;
  }
  if (j.find("smfInfo") != j.end()) {
    j.at("smfInfo").get_to(o.m_SmfInfo);
    o.m_SmfInfoIsSet = true;
  }
  if (j.find("smfInfoExt") != j.end()) {
    j.at("smfInfoExt").get_to(o.m_SmfInfoExt);
    o.m_SmfInfoExtIsSet = true;
  }
  if (j.find("upfInfo") != j.end()) {
    j.at("upfInfo").get_to(o.m_UpfInfo);
    o.m_UpfInfoIsSet = true;
  }
  if (j.find("upfInfoExt") != j.end()) {
    j.at("upfInfoExt").get_to(o.m_UpfInfoExt);
    o.m_UpfInfoExtIsSet = true;
  }
  if (j.find("pcfInfo") != j.end()) {
    j.at("pcfInfo").get_to(o.m_PcfInfo);
    o.m_PcfInfoIsSet = true;
  }
  if (j.find("pcfInfoExt") != j.end()) {
    j.at("pcfInfoExt").get_to(o.m_PcfInfoExt);
    o.m_PcfInfoExtIsSet = true;
  }
  if (j.find("bsfInfo") != j.end()) {
    j.at("bsfInfo").get_to(o.m_BsfInfo);
    o.m_BsfInfoIsSet = true;
  }
  if (j.find("bsfInfoExt") != j.end()) {
    j.at("bsfInfoExt").get_to(o.m_BsfInfoExt);
    o.m_BsfInfoExtIsSet = true;
  }
  if (j.find("chfInfo") != j.end()) {
    j.at("chfInfo").get_to(o.m_ChfInfo);
    o.m_ChfInfoIsSet = true;
  }
  if (j.find("chfInfoExt") != j.end()) {
    j.at("chfInfoExt").get_to(o.m_ChfInfoExt);
    o.m_ChfInfoExtIsSet = true;
  }
  if (j.find("nrfInfo") != j.end()) {
    j.at("nrfInfo").get_to(o.m_NrfInfo);
    o.m_NrfInfoIsSet = true;
  }
  if (j.find("nwdafInfo") != j.end()) {
    j.at("nwdafInfo").get_to(o.m_NwdafInfo);
    o.m_NwdafInfoIsSet = true;
  }
  if (j.find("customInfo") != j.end()) {
    j.at("customInfo").get_to(o.m_CustomInfo);
    o.m_CustomInfoIsSet = true;
  }
  if (j.find("recoveryTime") != j.end()) {
    j.at("recoveryTime").get_to(o.m_RecoveryTime);
    o.m_RecoveryTimeIsSet = true;
  }
  if (j.find("nfServicePersistence") != j.end()) {
    j.at("nfServicePersistence").get_to(o.m_NfServicePersistence);
    o.m_NfServicePersistenceIsSet = true;
  }
  if (j.find("nfServices") != j.end()) {
    j.at("nfServices").get_to(o.m_NfServices);
    o.m_NfServicesIsSet = true;
  }
  if (j.find("nfProfileChangesSupportInd") != j.end()) {
    j.at("nfProfileChangesSupportInd").get_to(o.m_NfProfileChangesSupportInd);
    o.m_NfProfileChangesSupportIndIsSet = true;
  }
  if (j.find("nfProfileChangesInd") != j.end()) {
    j.at("nfProfileChangesInd").get_to(o.m_NfProfileChangesInd);
    o.m_NfProfileChangesIndIsSet = true;
  }
  if (j.find("defaultNotificationSubscriptions") != j.end()) {
    j.at("defaultNotificationSubscriptions")
        .get_to(o.m_DefaultNotificationSubscriptions);
    o.m_DefaultNotificationSubscriptionsIsSet = true;
  }
}

std::string NFProfile::getNfInstanceId() const {
  return m_NfInstanceId;
}
void NFProfile::setNfInstanceId(std::string const& value) {
  m_NfInstanceId = value;
}
std::string NFProfile::getNfInstanceName() const {
  return m_NfInstanceName;
}
void NFProfile::setNfInstanceName(std::string const& value) {
  m_NfInstanceName      = value;
  m_NfInstanceNameIsSet = true;
}
bool NFProfile::nfInstanceNameIsSet() const {
  return m_NfInstanceNameIsSet;
}
void NFProfile::unsetNfInstanceName() {
  m_NfInstanceNameIsSet = false;
}
std::string NFProfile::getNfType() const {
  return m_NfType;
}
void NFProfile::setNfType(std::string const& value) {
  m_NfType = value;
}
std::string NFProfile::getNfStatus() const {
  return m_NfStatus;
}
void NFProfile::setNfStatus(std::string const& value) {
  m_NfStatus = value;
}
int32_t NFProfile::getHeartBeatTimer() const {
  return m_HeartBeatTimer;
}
void NFProfile::setHeartBeatTimer(int32_t const value) {
  m_HeartBeatTimer      = value;
  m_HeartBeatTimerIsSet = true;
}
bool NFProfile::heartBeatTimerIsSet() const {
  return m_HeartBeatTimerIsSet;
}
void NFProfile::unsetHeartBeatTimer() {
  m_HeartBeatTimerIsSet = false;
}
std::vector<PlmnId>& NFProfile::getPlmnList() {
  return m_PlmnList;
}
void NFProfile::setPlmnList(std::vector<PlmnId> const& value) {
  m_PlmnList      = value;
  m_PlmnListIsSet = true;
}
bool NFProfile::plmnListIsSet() const {
  return m_PlmnListIsSet;
}
void NFProfile::unsetPlmnList() {
  m_PlmnListIsSet = false;
}
std::vector<Snssai> NFProfile::getSNssais() const {
  return m_SNssais;
}
void NFProfile::setSNssais(std::vector<Snssai> const& value) {
  m_SNssais      = value;
  m_SNssaisIsSet = true;
}
bool NFProfile::sNssaisIsSet() const {
  return m_SNssaisIsSet;
}
void NFProfile::unsetSNssais() {
  m_SNssaisIsSet = false;
}
std::vector<PlmnSnssai>& NFProfile::getPerPlmnSnssaiList() {
  return m_PerPlmnSnssaiList;
}
void NFProfile::setPerPlmnSnssaiList(std::vector<PlmnSnssai> const& value) {
  m_PerPlmnSnssaiList      = value;
  m_PerPlmnSnssaiListIsSet = true;
}
bool NFProfile::perPlmnSnssaiListIsSet() const {
  return m_PerPlmnSnssaiListIsSet;
}
void NFProfile::unsetPerPlmnSnssaiList() {
  m_PerPlmnSnssaiListIsSet = false;
}
std::vector<std::string>& NFProfile::getNsiList() {
  return m_NsiList;
}
void NFProfile::setNsiList(std::vector<std::string> const& value) {
  m_NsiList      = value;
  m_NsiListIsSet = true;
}
bool NFProfile::nsiListIsSet() const {
  return m_NsiListIsSet;
}
void NFProfile::unsetNsiList() {
  m_NsiListIsSet = false;
}
std::string NFProfile::getFqdn() const {
  return m_Fqdn;
}
void NFProfile::setFqdn(std::string const& value) {
  m_Fqdn      = value;
  m_FqdnIsSet = true;
}
bool NFProfile::fqdnIsSet() const {
  return m_FqdnIsSet;
}
void NFProfile::unsetFqdn() {
  m_FqdnIsSet = false;
}
std::string NFProfile::getInterPlmnFqdn() const {
  return m_InterPlmnFqdn;
}
void NFProfile::setInterPlmnFqdn(std::string const& value) {
  m_InterPlmnFqdn      = value;
  m_InterPlmnFqdnIsSet = true;
}
bool NFProfile::interPlmnFqdnIsSet() const {
  return m_InterPlmnFqdnIsSet;
}
void NFProfile::unsetInterPlmnFqdn() {
  m_InterPlmnFqdnIsSet = false;
}
std::vector<std::string> NFProfile::getIpv4Addresses() const {
  return m_Ipv4Addresses;
}
void NFProfile::setIpv4Addresses(std::vector<std::string> const& value) {
  m_Ipv4Addresses      = value;
  m_Ipv4AddressesIsSet = true;
}
bool NFProfile::ipv4AddressesIsSet() const {
  return m_Ipv4AddressesIsSet;
}
void NFProfile::unsetIpv4Addresses() {
  m_Ipv4AddressesIsSet = false;
}
std::vector<Ipv6Addr>& NFProfile::getIpv6Addresses() {
  return m_Ipv6Addresses;
}
void NFProfile::setIpv6Addresses(std::vector<Ipv6Addr> const& value) {
  m_Ipv6Addresses      = value;
  m_Ipv6AddressesIsSet = true;
}
bool NFProfile::ipv6AddressesIsSet() const {
  return m_Ipv6AddressesIsSet;
}
void NFProfile::unsetIpv6Addresses() {
  m_Ipv6AddressesIsSet = false;
}
std::vector<PlmnId>& NFProfile::getAllowedPlmns() {
  return m_AllowedPlmns;
}
void NFProfile::setAllowedPlmns(std::vector<PlmnId> const& value) {
  m_AllowedPlmns      = value;
  m_AllowedPlmnsIsSet = true;
}
bool NFProfile::allowedPlmnsIsSet() const {
  return m_AllowedPlmnsIsSet;
}
void NFProfile::unsetAllowedPlmns() {
  m_AllowedPlmnsIsSet = false;
}
std::vector<std::string>& NFProfile::getAllowedNfTypes() {
  return m_AllowedNfTypes;
}
void NFProfile::setAllowedNfTypes(std::vector<std::string> const& value) {
  m_AllowedNfTypes      = value;
  m_AllowedNfTypesIsSet = true;
}
bool NFProfile::allowedNfTypesIsSet() const {
  return m_AllowedNfTypesIsSet;
}
void NFProfile::unsetAllowedNfTypes() {
  m_AllowedNfTypesIsSet = false;
}
std::vector<std::string>& NFProfile::getAllowedNfDomains() {
  return m_AllowedNfDomains;
}
void NFProfile::setAllowedNfDomains(std::vector<std::string> const& value) {
  m_AllowedNfDomains      = value;
  m_AllowedNfDomainsIsSet = true;
}
bool NFProfile::allowedNfDomainsIsSet() const {
  return m_AllowedNfDomainsIsSet;
}
void NFProfile::unsetAllowedNfDomains() {
  m_AllowedNfDomainsIsSet = false;
}
std::vector<Snssai>& NFProfile::getAllowedNssais() {
  return m_AllowedNssais;
}
void NFProfile::setAllowedNssais(std::vector<Snssai> const& value) {
  m_AllowedNssais      = value;
  m_AllowedNssaisIsSet = true;
}
bool NFProfile::allowedNssaisIsSet() const {
  return m_AllowedNssaisIsSet;
}
void NFProfile::unsetAllowedNssais() {
  m_AllowedNssaisIsSet = false;
}
int32_t NFProfile::getPriority() const {
  return m_Priority;
}
void NFProfile::setPriority(int32_t const value) {
  m_Priority      = value;
  m_PriorityIsSet = true;
}
bool NFProfile::priorityIsSet() const {
  return m_PriorityIsSet;
}
void NFProfile::unsetPriority() {
  m_PriorityIsSet = false;
}
int32_t NFProfile::getCapacity() const {
  return m_Capacity;
}
void NFProfile::setCapacity(int32_t const value) {
  m_Capacity      = value;
  m_CapacityIsSet = true;
}
bool NFProfile::capacityIsSet() const {
  return m_CapacityIsSet;
}
void NFProfile::unsetCapacity() {
  m_CapacityIsSet = false;
}
int32_t NFProfile::getLoad() const {
  return m_Load;
}
void NFProfile::setLoad(int32_t const value) {
  m_Load      = value;
  m_LoadIsSet = true;
}
bool NFProfile::loadIsSet() const {
  return m_LoadIsSet;
}
void NFProfile::unsetLoad() {
  m_LoadIsSet = false;
}
std::string NFProfile::getLocality() const {
  return m_Locality;
}
void NFProfile::setLocality(std::string const& value) {
  m_Locality      = value;
  m_LocalityIsSet = true;
}
bool NFProfile::localityIsSet() const {
  return m_LocalityIsSet;
}
void NFProfile::unsetLocality() {
  m_LocalityIsSet = false;
}
UdrInfo NFProfile::getUdrInfo() const {
  return m_UdrInfo;
}
void NFProfile::setUdrInfo(UdrInfo const& value) {
  m_UdrInfo      = value;
  m_UdrInfoIsSet = true;
}
bool NFProfile::udrInfoIsSet() const {
  return m_UdrInfoIsSet;
}
void NFProfile::unsetUdrInfo() {
  m_UdrInfoIsSet = false;
}
std::vector<UdrInfo>& NFProfile::getUdrInfoExt() {
  return m_UdrInfoExt;
}
void NFProfile::setUdrInfoExt(std::vector<UdrInfo> const& value) {
  m_UdrInfoExt      = value;
  m_UdrInfoExtIsSet = true;
}
bool NFProfile::udrInfoExtIsSet() const {
  return m_UdrInfoExtIsSet;
}
void NFProfile::unsetUdrInfoExt() {
  m_UdrInfoExtIsSet = false;
}
UdmInfo NFProfile::getUdmInfo() const {
  return m_UdmInfo;
}
void NFProfile::setUdmInfo(UdmInfo const& value) {
  m_UdmInfo      = value;
  m_UdmInfoIsSet = true;
}
bool NFProfile::udmInfoIsSet() const {
  return m_UdmInfoIsSet;
}
void NFProfile::unsetUdmInfo() {
  m_UdmInfoIsSet = false;
}
std::vector<UdmInfo>& NFProfile::getUdmInfoExt() {
  return m_UdmInfoExt;
}
void NFProfile::setUdmInfoExt(std::vector<UdmInfo> const& value) {
  m_UdmInfoExt      = value;
  m_UdmInfoExtIsSet = true;
}
bool NFProfile::udmInfoExtIsSet() const {
  return m_UdmInfoExtIsSet;
}
void NFProfile::unsetUdmInfoExt() {
  m_UdmInfoExtIsSet = false;
}
AusfInfo NFProfile::getAusfInfo() const {
  return m_AusfInfo;
}
void NFProfile::setAusfInfo(AusfInfo const& value) {
  m_AusfInfo      = value;
  m_AusfInfoIsSet = true;
}
bool NFProfile::ausfInfoIsSet() const {
  return m_AusfInfoIsSet;
}
void NFProfile::unsetAusfInfo() {
  m_AusfInfoIsSet = false;
}
std::vector<AusfInfo>& NFProfile::getAusfInfoExt() {
  return m_AusfInfoExt;
}
void NFProfile::setAusfInfoExt(std::vector<AusfInfo> const& value) {
  m_AusfInfoExt      = value;
  m_AusfInfoExtIsSet = true;
}
bool NFProfile::ausfInfoExtIsSet() const {
  return m_AusfInfoExtIsSet;
}
void NFProfile::unsetAusfInfoExt() {
  m_AusfInfoExtIsSet = false;
}
AmfInfo NFProfile::getAmfInfo() const {
  return m_AmfInfo;
}
void NFProfile::setAmfInfo(AmfInfo const& value) {
  m_AmfInfo      = value;
  m_AmfInfoIsSet = true;
}
bool NFProfile::amfInfoIsSet() const {
  return m_AmfInfoIsSet;
}
void NFProfile::unsetAmfInfo() {
  m_AmfInfoIsSet = false;
}
std::vector<AmfInfo>& NFProfile::getAmfInfoExt() {
  return m_AmfInfoExt;
}
void NFProfile::setAmfInfoExt(std::vector<AmfInfo> const& value) {
  m_AmfInfoExt      = value;
  m_AmfInfoExtIsSet = true;
}
bool NFProfile::amfInfoExtIsSet() const {
  return m_AmfInfoExtIsSet;
}
void NFProfile::unsetAmfInfoExt() {
  m_AmfInfoExtIsSet = false;
}
SmfInfo NFProfile::getSmfInfo() const {
  return m_SmfInfo;
}
void NFProfile::setSmfInfo(SmfInfo const& value) {
  m_SmfInfo      = value;
  m_SmfInfoIsSet = true;
}
bool NFProfile::smfInfoIsSet() const {
  return m_SmfInfoIsSet;
}
void NFProfile::unsetSmfInfo() {
  m_SmfInfoIsSet = false;
}
std::vector<SmfInfo>& NFProfile::getSmfInfoExt() {
  return m_SmfInfoExt;
}
void NFProfile::setSmfInfoExt(std::vector<SmfInfo> const& value) {
  m_SmfInfoExt      = value;
  m_SmfInfoExtIsSet = true;
}
bool NFProfile::smfInfoExtIsSet() const {
  return m_SmfInfoExtIsSet;
}
void NFProfile::unsetSmfInfoExt() {
  m_SmfInfoExtIsSet = false;
}
UpfInfo NFProfile::getUpfInfo() const {
  return m_UpfInfo;
}
void NFProfile::setUpfInfo(UpfInfo const& value) {
  m_UpfInfo      = value;
  m_UpfInfoIsSet = true;
}
bool NFProfile::upfInfoIsSet() const {
  return m_UpfInfoIsSet;
}
void NFProfile::unsetUpfInfo() {
  m_UpfInfoIsSet = false;
}
std::vector<UpfInfo>& NFProfile::getUpfInfoExt() {
  return m_UpfInfoExt;
}
void NFProfile::setUpfInfoExt(std::vector<UpfInfo> const& value) {
  m_UpfInfoExt      = value;
  m_UpfInfoExtIsSet = true;
}
bool NFProfile::upfInfoExtIsSet() const {
  return m_UpfInfoExtIsSet;
}
void NFProfile::unsetUpfInfoExt() {
  m_UpfInfoExtIsSet = false;
}
PcfInfo NFProfile::getPcfInfo() const {
  return m_PcfInfo;
}
void NFProfile::setPcfInfo(PcfInfo const& value) {
  m_PcfInfo      = value;
  m_PcfInfoIsSet = true;
}
bool NFProfile::pcfInfoIsSet() const {
  return m_PcfInfoIsSet;
}
void NFProfile::unsetPcfInfo() {
  m_PcfInfoIsSet = false;
}
std::vector<PcfInfo>& NFProfile::getPcfInfoExt() {
  return m_PcfInfoExt;
}
void NFProfile::setPcfInfoExt(std::vector<PcfInfo> const& value) {
  m_PcfInfoExt      = value;
  m_PcfInfoExtIsSet = true;
}
bool NFProfile::pcfInfoExtIsSet() const {
  return m_PcfInfoExtIsSet;
}
void NFProfile::unsetPcfInfoExt() {
  m_PcfInfoExtIsSet = false;
}
BsfInfo NFProfile::getBsfInfo() const {
  return m_BsfInfo;
}
void NFProfile::setBsfInfo(BsfInfo const& value) {
  m_BsfInfo      = value;
  m_BsfInfoIsSet = true;
}
bool NFProfile::bsfInfoIsSet() const {
  return m_BsfInfoIsSet;
}
void NFProfile::unsetBsfInfo() {
  m_BsfInfoIsSet = false;
}
std::vector<BsfInfo>& NFProfile::getBsfInfoExt() {
  return m_BsfInfoExt;
}
void NFProfile::setBsfInfoExt(std::vector<BsfInfo> const& value) {
  m_BsfInfoExt      = value;
  m_BsfInfoExtIsSet = true;
}
bool NFProfile::bsfInfoExtIsSet() const {
  return m_BsfInfoExtIsSet;
}
void NFProfile::unsetBsfInfoExt() {
  m_BsfInfoExtIsSet = false;
}
ChfInfo NFProfile::getChfInfo() const {
  return m_ChfInfo;
}
void NFProfile::setChfInfo(ChfInfo const& value) {
  m_ChfInfo      = value;
  m_ChfInfoIsSet = true;
}
bool NFProfile::chfInfoIsSet() const {
  return m_ChfInfoIsSet;
}
void NFProfile::unsetChfInfo() {
  m_ChfInfoIsSet = false;
}
std::vector<ChfInfo>& NFProfile::getChfInfoExt() {
  return m_ChfInfoExt;
}
void NFProfile::setChfInfoExt(std::vector<ChfInfo> const& value) {
  m_ChfInfoExt      = value;
  m_ChfInfoExtIsSet = true;
}
bool NFProfile::chfInfoExtIsSet() const {
  return m_ChfInfoExtIsSet;
}
void NFProfile::unsetChfInfoExt() {
  m_ChfInfoExtIsSet = false;
}
NrfInfo NFProfile::getNrfInfo() const {
  return m_NrfInfo;
}
void NFProfile::setNrfInfo(NrfInfo const& value) {
  m_NrfInfo      = value;
  m_NrfInfoIsSet = true;
}
bool NFProfile::nrfInfoIsSet() const {
  return m_NrfInfoIsSet;
}
void NFProfile::unsetNrfInfo() {
  m_NrfInfoIsSet = false;
}
NwdafInfo NFProfile::getNwdafInfo() const {
  return m_NwdafInfo;
}
void NFProfile::setNwdafInfo(NwdafInfo const& value) {
  m_NwdafInfo      = value;
  m_NwdafInfoIsSet = true;
}
bool NFProfile::nwdafInfoIsSet() const {
  return m_NwdafInfoIsSet;
}
void NFProfile::unsetNwdafInfo() {
  m_NwdafInfoIsSet = false;
}
nlohmann::json NFProfile::getCustomInfo() const {
  return m_CustomInfo;
}

void NFProfile::setCustomInfo(nlohmann::json const& value) {
  m_CustomInfo      = value;
  m_CustomInfoIsSet = true;
}
bool NFProfile::customInfoIsSet() const {
  return m_CustomInfoIsSet;
}

void NFProfile::unsetCustomInfo() {
  m_CustomInfoIsSet = false;
}

std::string NFProfile::getRecoveryTime() const {
  return m_RecoveryTime;
}
void NFProfile::setRecoveryTime(std::string const& value) {
  m_RecoveryTime      = value;
  m_RecoveryTimeIsSet = true;
}
bool NFProfile::recoveryTimeIsSet() const {
  return m_RecoveryTimeIsSet;
}
void NFProfile::unsetRecoveryTime() {
  m_RecoveryTimeIsSet = false;
}
bool NFProfile::isNfServicePersistence() const {
  return m_NfServicePersistence;
}
void NFProfile::setNfServicePersistence(bool const value) {
  m_NfServicePersistence      = value;
  m_NfServicePersistenceIsSet = true;
}
bool NFProfile::nfServicePersistenceIsSet() const {
  return m_NfServicePersistenceIsSet;
}
void NFProfile::unsetNfServicePersistence() {
  m_NfServicePersistenceIsSet = false;
}

std::vector<NFService> NFProfile::getNfServices() const {
  return m_NfServices;
}

void NFProfile::setNfServices(std::vector<NFService> const& value) {
  m_NfServices      = value;
  m_NfServicesIsSet = true;
}
bool NFProfile::nfServicesIsSet() const {
  return m_NfServicesIsSet;
}
void NFProfile::unsetNfServices() {
  m_NfServicesIsSet = false;
}
bool NFProfile::isNfProfileChangesSupportInd() const {
  return m_NfProfileChangesSupportInd;
}
void NFProfile::setNfProfileChangesSupportInd(bool const value) {
  m_NfProfileChangesSupportInd      = value;
  m_NfProfileChangesSupportIndIsSet = true;
}
bool NFProfile::nfProfileChangesSupportIndIsSet() const {
  return m_NfProfileChangesSupportIndIsSet;
}
void NFProfile::unsetNfProfileChangesSupportInd() {
  m_NfProfileChangesSupportIndIsSet = false;
}
bool NFProfile::isNfProfileChangesInd() const {
  return m_NfProfileChangesInd;
}
void NFProfile::setNfProfileChangesInd(bool const value) {
  m_NfProfileChangesInd      = value;
  m_NfProfileChangesIndIsSet = true;
}
bool NFProfile::nfProfileChangesIndIsSet() const {
  return m_NfProfileChangesIndIsSet;
}
void NFProfile::unsetNfProfileChangesInd() {
  m_NfProfileChangesIndIsSet = false;
}
std::vector<DefaultNotificationSubscription>&
NFProfile::getDefaultNotificationSubscriptions() {
  return m_DefaultNotificationSubscriptions;
}
void NFProfile::setDefaultNotificationSubscriptions(
    std::vector<DefaultNotificationSubscription> const& value) {
  m_DefaultNotificationSubscriptions      = value;
  m_DefaultNotificationSubscriptionsIsSet = true;
}
bool NFProfile::defaultNotificationSubscriptionsIsSet() const {
  return m_DefaultNotificationSubscriptionsIsSet;
}
void NFProfile::unsetDefaultNotificationSubscriptions() {
  m_DefaultNotificationSubscriptionsIsSet = false;
}

}  // namespace oai::model::nrf
