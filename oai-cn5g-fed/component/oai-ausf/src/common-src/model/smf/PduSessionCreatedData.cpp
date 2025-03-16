/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "PduSessionCreatedData.h"

namespace oai::model::smf {

using namespace oai::model::common;

PduSessionCreatedData::PduSessionCreatedData() {
  m_SscMode                            = "";
  m_HcnTunnelInfoIsSet                 = false;
  m_SessionAmbrIsSet                   = false;
  m_QosFlowsSetupListIsSet             = false;
  m_HSmfInstanceId                     = "";
  m_PduSessionId                       = 0;
  m_PduSessionIdIsSet                  = false;
  m_SNssaiIsSet                        = false;
  m_EnablePauseCharging                = false;
  m_EnablePauseChargingIsSet           = false;
  m_UeIpv4Address                      = "";
  m_UeIpv4AddressIsSet                 = false;
  m_UeIpv6PrefixIsSet                  = false;
  m_N1SmInfoToUeIsSet                  = false;
  m_EpsPdnCnxInfoIsSet                 = false;
  m_EpsBearerInfoIsSet                 = false;
  m_SupportedFeatures                  = "";
  m_SupportedFeaturesIsSet             = false;
  m_MaxIntegrityProtectedDataRateIsSet = false;
  m_AlwaysOnGranted                    = false;
  m_AlwaysOnGrantedIsSet               = false;
  m_Gpsi                               = "";
  m_GpsiIsSet                          = false;
  m_UpSecurityIsSet                    = false;
  m_RoamingChargingProfileIsSet        = false;
  m_HSmfServiceInstanceId              = "";
  m_HSmfServiceInstanceIdIsSet         = false;
  m_RecoveryTime                       = "";
  m_RecoveryTimeIsSet                  = false;
}

PduSessionCreatedData::~PduSessionCreatedData() {}

void PduSessionCreatedData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const PduSessionCreatedData& o) {
  j                   = nlohmann::json();
  j["pduSessionType"] = o.m_PduSessionType;
  j["sscMode"]        = o.m_SscMode;
  if (o.hcnTunnelInfoIsSet()) j["hcnTunnelInfo"] = o.m_HcnTunnelInfo;
  if (o.sessionAmbrIsSet()) j["sessionAmbr"] = o.m_SessionAmbr;
  if (o.qosFlowsSetupListIsSet())
    j["qosFlowsSetupList"] = o.m_QosFlowsSetupList;
  j["hSmfInstanceId"] = o.m_HSmfInstanceId;
  if (o.pduSessionIdIsSet()) j["pduSessionId"] = o.m_PduSessionId;
  if (o.sNssaiIsSet()) j["sNssai"] = o.m_SNssai;
  if (o.enablePauseChargingIsSet())
    j["enablePauseCharging"] = o.m_EnablePauseCharging;
  if (o.ueIpv4AddressIsSet()) j["ueIpv4Address"] = o.m_UeIpv4Address;
  if (o.ueIpv6PrefixIsSet()) j["ueIpv6Prefix"] = o.m_UeIpv6Prefix;
  if (o.n1SmInfoToUeIsSet()) j["n1SmInfoToUe"] = o.m_N1SmInfoToUe;
  if (o.epsPdnCnxInfoIsSet()) j["epsPdnCnxInfo"] = o.m_EpsPdnCnxInfo;
  if (o.epsBearerInfoIsSet()) j["epsBearerInfo"] = o.m_EpsBearerInfo;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
  if (o.maxIntegrityProtectedDataRateIsSet())
    j["maxIntegrityProtectedDataRate"] = o.m_MaxIntegrityProtectedDataRate;
  if (o.alwaysOnGrantedIsSet()) j["alwaysOnGranted"] = o.m_AlwaysOnGranted;
  if (o.gpsiIsSet()) j["gpsi"] = o.m_Gpsi;
  if (o.upSecurityIsSet()) j["upSecurity"] = o.m_UpSecurity;
  if (o.roamingChargingProfileIsSet())
    j["roamingChargingProfile"] = o.m_RoamingChargingProfile;
  if (o.hSmfServiceInstanceIdIsSet())
    j["hSmfServiceInstanceId"] = o.m_HSmfServiceInstanceId;
  if (o.recoveryTimeIsSet()) j["recoveryTime"] = o.m_RecoveryTime;
}

void from_json(const nlohmann::json& j, PduSessionCreatedData& o) {
  j.at("pduSessionType").get_to(o.m_PduSessionType);
  j.at("sscMode").get_to(o.m_SscMode);
  if (j.find("hcnTunnelInfo") != j.end()) {
    j.at("hcnTunnelInfo").get_to(o.m_HcnTunnelInfo);
    o.m_HcnTunnelInfoIsSet = true;
  }
  if (j.find("sessionAmbr") != j.end()) {
    j.at("sessionAmbr").get_to(o.m_SessionAmbr);
    o.m_SessionAmbrIsSet = true;
  }
  if (j.find("qosFlowsSetupList") != j.end()) {
    j.at("qosFlowsSetupList").get_to(o.m_QosFlowsSetupList);
    o.m_QosFlowsSetupListIsSet = true;
  }
  j.at("hSmfInstanceId").get_to(o.m_HSmfInstanceId);
  if (j.find("pduSessionId") != j.end()) {
    j.at("pduSessionId").get_to(o.m_PduSessionId);
    o.m_PduSessionIdIsSet = true;
  }
  if (j.find("sNssai") != j.end()) {
    j.at("sNssai").get_to(o.m_SNssai);
    o.m_SNssaiIsSet = true;
  }
  if (j.find("enablePauseCharging") != j.end()) {
    j.at("enablePauseCharging").get_to(o.m_EnablePauseCharging);
    o.m_EnablePauseChargingIsSet = true;
  }
  if (j.find("ueIpv4Address") != j.end()) {
    j.at("ueIpv4Address").get_to(o.m_UeIpv4Address);
    o.m_UeIpv4AddressIsSet = true;
  }
  if (j.find("ueIpv6Prefix") != j.end()) {
    j.at("ueIpv6Prefix").get_to(o.m_UeIpv6Prefix);
    o.m_UeIpv6PrefixIsSet = true;
  }
  if (j.find("n1SmInfoToUe") != j.end()) {
    j.at("n1SmInfoToUe").get_to(o.m_N1SmInfoToUe);
    o.m_N1SmInfoToUeIsSet = true;
  }
  if (j.find("epsPdnCnxInfo") != j.end()) {
    j.at("epsPdnCnxInfo").get_to(o.m_EpsPdnCnxInfo);
    o.m_EpsPdnCnxInfoIsSet = true;
  }
  if (j.find("epsBearerInfo") != j.end()) {
    j.at("epsBearerInfo").get_to(o.m_EpsBearerInfo);
    o.m_EpsBearerInfoIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
  if (j.find("maxIntegrityProtectedDataRate") != j.end()) {
    j.at("maxIntegrityProtectedDataRate")
        .get_to(o.m_MaxIntegrityProtectedDataRate);
    o.m_MaxIntegrityProtectedDataRateIsSet = true;
  }
  if (j.find("alwaysOnGranted") != j.end()) {
    j.at("alwaysOnGranted").get_to(o.m_AlwaysOnGranted);
    o.m_AlwaysOnGrantedIsSet = true;
  }
  if (j.find("gpsi") != j.end()) {
    j.at("gpsi").get_to(o.m_Gpsi);
    o.m_GpsiIsSet = true;
  }
  if (j.find("upSecurity") != j.end()) {
    j.at("upSecurity").get_to(o.m_UpSecurity);
    o.m_UpSecurityIsSet = true;
  }
  if (j.find("roamingChargingProfile") != j.end()) {
    j.at("roamingChargingProfile").get_to(o.m_RoamingChargingProfile);
    o.m_RoamingChargingProfileIsSet = true;
  }
  if (j.find("hSmfServiceInstanceId") != j.end()) {
    j.at("hSmfServiceInstanceId").get_to(o.m_HSmfServiceInstanceId);
    o.m_HSmfServiceInstanceIdIsSet = true;
  }
  if (j.find("recoveryTime") != j.end()) {
    j.at("recoveryTime").get_to(o.m_RecoveryTime);
    o.m_RecoveryTimeIsSet = true;
  }
}

PduSessionType PduSessionCreatedData::getPduSessionType() const {
  return m_PduSessionType;
}
void PduSessionCreatedData::setPduSessionType(PduSessionType const& value) {
  m_PduSessionType = value;
}
std::string PduSessionCreatedData::getSscMode() const {
  return m_SscMode;
}
void PduSessionCreatedData::setSscMode(std::string const& value) {
  m_SscMode = value;
}
TunnelInfo PduSessionCreatedData::getHcnTunnelInfo() const {
  return m_HcnTunnelInfo;
}
void PduSessionCreatedData::setHcnTunnelInfo(TunnelInfo const& value) {
  m_HcnTunnelInfo      = value;
  m_HcnTunnelInfoIsSet = true;
}
bool PduSessionCreatedData::hcnTunnelInfoIsSet() const {
  return m_HcnTunnelInfoIsSet;
}
void PduSessionCreatedData::unsetHcnTunnelInfo() {
  m_HcnTunnelInfoIsSet = false;
}
Ambr PduSessionCreatedData::getSessionAmbr() const {
  return m_SessionAmbr;
}
void PduSessionCreatedData::setSessionAmbr(Ambr const& value) {
  m_SessionAmbr      = value;
  m_SessionAmbrIsSet = true;
}
bool PduSessionCreatedData::sessionAmbrIsSet() const {
  return m_SessionAmbrIsSet;
}
void PduSessionCreatedData::unsetSessionAmbr() {
  m_SessionAmbrIsSet = false;
}
std::vector<QosFlowSetupItem>& PduSessionCreatedData::getQosFlowsSetupList() {
  return m_QosFlowsSetupList;
}
bool PduSessionCreatedData::qosFlowsSetupListIsSet() const {
  return m_QosFlowsSetupListIsSet;
}
void PduSessionCreatedData::unsetQosFlowsSetupList() {
  m_QosFlowsSetupListIsSet = false;
}
std::string PduSessionCreatedData::getHSmfInstanceId() const {
  return m_HSmfInstanceId;
}
void PduSessionCreatedData::setHSmfInstanceId(std::string const& value) {
  m_HSmfInstanceId = value;
}
int32_t PduSessionCreatedData::getPduSessionId() const {
  return m_PduSessionId;
}
void PduSessionCreatedData::setPduSessionId(int32_t const value) {
  m_PduSessionId      = value;
  m_PduSessionIdIsSet = true;
}
bool PduSessionCreatedData::pduSessionIdIsSet() const {
  return m_PduSessionIdIsSet;
}
void PduSessionCreatedData::unsetPduSessionId() {
  m_PduSessionIdIsSet = false;
}
oai::model::common::Snssai PduSessionCreatedData::getSNssai() const {
  return m_SNssai;
}
void PduSessionCreatedData::setSNssai(oai::model::common::Snssai const& value) {
  m_SNssai      = value;
  m_SNssaiIsSet = true;
}
bool PduSessionCreatedData::sNssaiIsSet() const {
  return m_SNssaiIsSet;
}
void PduSessionCreatedData::unsetSNssai() {
  m_SNssaiIsSet = false;
}
bool PduSessionCreatedData::isEnablePauseCharging() const {
  return m_EnablePauseCharging;
}
void PduSessionCreatedData::setEnablePauseCharging(bool const value) {
  m_EnablePauseCharging      = value;
  m_EnablePauseChargingIsSet = true;
}
bool PduSessionCreatedData::enablePauseChargingIsSet() const {
  return m_EnablePauseChargingIsSet;
}
void PduSessionCreatedData::unsetEnablePauseCharging() {
  m_EnablePauseChargingIsSet = false;
}
std::string PduSessionCreatedData::getUeIpv4Address() const {
  return m_UeIpv4Address;
}
void PduSessionCreatedData::setUeIpv4Address(std::string const& value) {
  m_UeIpv4Address      = value;
  m_UeIpv4AddressIsSet = true;
}
bool PduSessionCreatedData::ueIpv4AddressIsSet() const {
  return m_UeIpv4AddressIsSet;
}
void PduSessionCreatedData::unsetUeIpv4Address() {
  m_UeIpv4AddressIsSet = false;
}
std::string PduSessionCreatedData::getUeIpv6Prefix() const {
  return m_UeIpv6Prefix;
}
void PduSessionCreatedData::setUeIpv6Prefix(std::string const& value) {
  m_UeIpv6Prefix      = value;
  m_UeIpv6PrefixIsSet = true;
}
bool PduSessionCreatedData::ueIpv6PrefixIsSet() const {
  return m_UeIpv6PrefixIsSet;
}
void PduSessionCreatedData::unsetUeIpv6Prefix() {
  m_UeIpv6PrefixIsSet = false;
}
RefToBinaryData PduSessionCreatedData::getN1SmInfoToUe() const {
  return m_N1SmInfoToUe;
}
void PduSessionCreatedData::setN1SmInfoToUe(RefToBinaryData const& value) {
  m_N1SmInfoToUe      = value;
  m_N1SmInfoToUeIsSet = true;
}
bool PduSessionCreatedData::n1SmInfoToUeIsSet() const {
  return m_N1SmInfoToUeIsSet;
}
void PduSessionCreatedData::unsetN1SmInfoToUe() {
  m_N1SmInfoToUeIsSet = false;
}
EpsPdnCnxInfo PduSessionCreatedData::getEpsPdnCnxInfo() const {
  return m_EpsPdnCnxInfo;
}
void PduSessionCreatedData::setEpsPdnCnxInfo(EpsPdnCnxInfo const& value) {
  m_EpsPdnCnxInfo      = value;
  m_EpsPdnCnxInfoIsSet = true;
}
bool PduSessionCreatedData::epsPdnCnxInfoIsSet() const {
  return m_EpsPdnCnxInfoIsSet;
}
void PduSessionCreatedData::unsetEpsPdnCnxInfo() {
  m_EpsPdnCnxInfoIsSet = false;
}
std::vector<EpsBearerInfo>& PduSessionCreatedData::getEpsBearerInfo() {
  return m_EpsBearerInfo;
}
bool PduSessionCreatedData::epsBearerInfoIsSet() const {
  return m_EpsBearerInfoIsSet;
}
void PduSessionCreatedData::unsetEpsBearerInfo() {
  m_EpsBearerInfoIsSet = false;
}
std::string PduSessionCreatedData::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void PduSessionCreatedData::setSupportedFeatures(std::string const& value) {
  m_SupportedFeatures      = value;
  m_SupportedFeaturesIsSet = true;
}
bool PduSessionCreatedData::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void PduSessionCreatedData::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}
MaxIntegrityProtectedDataRate
PduSessionCreatedData::getMaxIntegrityProtectedDataRate() const {
  return m_MaxIntegrityProtectedDataRate;
}
void PduSessionCreatedData::setMaxIntegrityProtectedDataRate(
    MaxIntegrityProtectedDataRate const& value) {
  m_MaxIntegrityProtectedDataRate      = value;
  m_MaxIntegrityProtectedDataRateIsSet = true;
}
bool PduSessionCreatedData::maxIntegrityProtectedDataRateIsSet() const {
  return m_MaxIntegrityProtectedDataRateIsSet;
}
void PduSessionCreatedData::unsetMaxIntegrityProtectedDataRate() {
  m_MaxIntegrityProtectedDataRateIsSet = false;
}
bool PduSessionCreatedData::isAlwaysOnGranted() const {
  return m_AlwaysOnGranted;
}
void PduSessionCreatedData::setAlwaysOnGranted(bool const value) {
  m_AlwaysOnGranted      = value;
  m_AlwaysOnGrantedIsSet = true;
}
bool PduSessionCreatedData::alwaysOnGrantedIsSet() const {
  return m_AlwaysOnGrantedIsSet;
}
void PduSessionCreatedData::unsetAlwaysOnGranted() {
  m_AlwaysOnGrantedIsSet = false;
}
std::string PduSessionCreatedData::getGpsi() const {
  return m_Gpsi;
}
void PduSessionCreatedData::setGpsi(std::string const& value) {
  m_Gpsi      = value;
  m_GpsiIsSet = true;
}
bool PduSessionCreatedData::gpsiIsSet() const {
  return m_GpsiIsSet;
}
void PduSessionCreatedData::unsetGpsi() {
  m_GpsiIsSet = false;
}
UpSecurity PduSessionCreatedData::getUpSecurity() const {
  return m_UpSecurity;
}
void PduSessionCreatedData::setUpSecurity(UpSecurity const& value) {
  m_UpSecurity      = value;
  m_UpSecurityIsSet = true;
}
bool PduSessionCreatedData::upSecurityIsSet() const {
  return m_UpSecurityIsSet;
}
void PduSessionCreatedData::unsetUpSecurity() {
  m_UpSecurityIsSet = false;
}
RoamingChargingProfile PduSessionCreatedData::getRoamingChargingProfile()
    const {
  return m_RoamingChargingProfile;
}
void PduSessionCreatedData::setRoamingChargingProfile(
    RoamingChargingProfile const& value) {
  m_RoamingChargingProfile      = value;
  m_RoamingChargingProfileIsSet = true;
}
bool PduSessionCreatedData::roamingChargingProfileIsSet() const {
  return m_RoamingChargingProfileIsSet;
}
void PduSessionCreatedData::unsetRoamingChargingProfile() {
  m_RoamingChargingProfileIsSet = false;
}
std::string PduSessionCreatedData::getHSmfServiceInstanceId() const {
  return m_HSmfServiceInstanceId;
}
void PduSessionCreatedData::setHSmfServiceInstanceId(std::string const& value) {
  m_HSmfServiceInstanceId      = value;
  m_HSmfServiceInstanceIdIsSet = true;
}
bool PduSessionCreatedData::hSmfServiceInstanceIdIsSet() const {
  return m_HSmfServiceInstanceIdIsSet;
}
void PduSessionCreatedData::unsetHSmfServiceInstanceId() {
  m_HSmfServiceInstanceIdIsSet = false;
}
std::string PduSessionCreatedData::getRecoveryTime() const {
  return m_RecoveryTime;
}
void PduSessionCreatedData::setRecoveryTime(std::string const& value) {
  m_RecoveryTime      = value;
  m_RecoveryTimeIsSet = true;
}
bool PduSessionCreatedData::recoveryTimeIsSet() const {
  return m_RecoveryTimeIsSet;
}
void PduSessionCreatedData::unsetRecoveryTime() {
  m_RecoveryTimeIsSet = false;
}

}  // namespace oai::model::smf
