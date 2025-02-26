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

#include "SmContextCreatedData.h"

namespace oai::model::smf {

using namespace oai::model::common;

SmContextCreatedData::SmContextCreatedData() {
  m_HSmfUri                   = "";
  m_HSmfUriIsSet              = false;
  m_PduSessionId              = 0;
  m_PduSessionIdIsSet         = false;
  m_SNssaiIsSet               = false;
  m_UpCnxStateIsSet           = false;
  m_N2SmInfoIsSet             = false;
  m_N2SmInfoTypeIsSet         = false;
  m_AllocatedEbiListIsSet     = false;
  m_HoStateIsSet              = false;
  m_Gpsi                      = "";
  m_GpsiIsSet                 = false;
  m_SmfServiceInstanceId      = "";
  m_SmfServiceInstanceIdIsSet = false;
  m_RecoveryTime              = "";
  m_RecoveryTimeIsSet         = false;
  m_SupportedFeatures         = "";
  m_SupportedFeaturesIsSet    = false;
}

SmContextCreatedData::~SmContextCreatedData() {}

void SmContextCreatedData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const SmContextCreatedData& o) {
  j = nlohmann::json();
  if (o.hSmfUriIsSet()) j["hSmfUri"] = o.m_HSmfUri;
  if (o.pduSessionIdIsSet()) j["pduSessionId"] = o.m_PduSessionId;
  if (o.sNssaiIsSet()) j["sNssai"] = o.m_SNssai;
  if (o.upCnxStateIsSet()) j["upCnxState"] = o.m_UpCnxState;
  if (o.n2SmInfoIsSet()) j["n2SmInfo"] = o.m_N2SmInfo;
  if (o.n2SmInfoTypeIsSet()) j["n2SmInfoType"] = o.m_N2SmInfoType;
  if (o.allocatedEbiListIsSet()) j["allocatedEbiList"] = o.m_AllocatedEbiList;
  if (o.hoStateIsSet()) j["hoState"] = o.m_HoState;
  if (o.gpsiIsSet()) j["gpsi"] = o.m_Gpsi;
  if (o.smfServiceInstanceIdIsSet())
    j["smfServiceInstanceId"] = o.m_SmfServiceInstanceId;
  if (o.recoveryTimeIsSet()) j["recoveryTime"] = o.m_RecoveryTime;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
}

void from_json(const nlohmann::json& j, SmContextCreatedData& o) {
  if (j.find("hSmfUri") != j.end()) {
    j.at("hSmfUri").get_to(o.m_HSmfUri);
    o.m_HSmfUriIsSet = true;
  }
  if (j.find("pduSessionId") != j.end()) {
    j.at("pduSessionId").get_to(o.m_PduSessionId);
    o.m_PduSessionIdIsSet = true;
  }
  if (j.find("sNssai") != j.end()) {
    j.at("sNssai").get_to(o.m_SNssai);
    o.m_SNssaiIsSet = true;
  }
  if (j.find("upCnxState") != j.end()) {
    j.at("upCnxState").get_to(o.m_UpCnxState);
    o.m_UpCnxStateIsSet = true;
  }
  if (j.find("n2SmInfo") != j.end()) {
    j.at("n2SmInfo").get_to(o.m_N2SmInfo);
    o.m_N2SmInfoIsSet = true;
  }
  if (j.find("n2SmInfoType") != j.end()) {
    j.at("n2SmInfoType").get_to(o.m_N2SmInfoType);
    o.m_N2SmInfoTypeIsSet = true;
  }
  if (j.find("allocatedEbiList") != j.end()) {
    j.at("allocatedEbiList").get_to(o.m_AllocatedEbiList);
    o.m_AllocatedEbiListIsSet = true;
  }
  if (j.find("hoState") != j.end()) {
    j.at("hoState").get_to(o.m_HoState);
    o.m_HoStateIsSet = true;
  }
  if (j.find("gpsi") != j.end()) {
    j.at("gpsi").get_to(o.m_Gpsi);
    o.m_GpsiIsSet = true;
  }
  if (j.find("smfServiceInstanceId") != j.end()) {
    j.at("smfServiceInstanceId").get_to(o.m_SmfServiceInstanceId);
    o.m_SmfServiceInstanceIdIsSet = true;
  }
  if (j.find("recoveryTime") != j.end()) {
    j.at("recoveryTime").get_to(o.m_RecoveryTime);
    o.m_RecoveryTimeIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
}

std::string SmContextCreatedData::getHSmfUri() const {
  return m_HSmfUri;
}
void SmContextCreatedData::setHSmfUri(std::string const& value) {
  m_HSmfUri      = value;
  m_HSmfUriIsSet = true;
}
bool SmContextCreatedData::hSmfUriIsSet() const {
  return m_HSmfUriIsSet;
}
void SmContextCreatedData::unsetHSmfUri() {
  m_HSmfUriIsSet = false;
}
int32_t SmContextCreatedData::getPduSessionId() const {
  return m_PduSessionId;
}
void SmContextCreatedData::setPduSessionId(int32_t const value) {
  m_PduSessionId      = value;
  m_PduSessionIdIsSet = true;
}
bool SmContextCreatedData::pduSessionIdIsSet() const {
  return m_PduSessionIdIsSet;
}
void SmContextCreatedData::unsetPduSessionId() {
  m_PduSessionIdIsSet = false;
}
Snssai SmContextCreatedData::getSNssai() const {
  return m_SNssai;
}
void SmContextCreatedData::setSNssai(Snssai const& value) {
  m_SNssai      = value;
  m_SNssaiIsSet = true;
}
bool SmContextCreatedData::sNssaiIsSet() const {
  return m_SNssaiIsSet;
}
void SmContextCreatedData::unsetSNssai() {
  m_SNssaiIsSet = false;
}
UpCnxState SmContextCreatedData::getUpCnxState() const {
  return m_UpCnxState;
}
void SmContextCreatedData::setUpCnxState(UpCnxState const& value) {
  m_UpCnxState      = value;
  m_UpCnxStateIsSet = true;
}
bool SmContextCreatedData::upCnxStateIsSet() const {
  return m_UpCnxStateIsSet;
}
void SmContextCreatedData::unsetUpCnxState() {
  m_UpCnxStateIsSet = false;
}
RefToBinaryData SmContextCreatedData::getN2SmInfo() const {
  return m_N2SmInfo;
}
void SmContextCreatedData::setN2SmInfo(RefToBinaryData const& value) {
  m_N2SmInfo      = value;
  m_N2SmInfoIsSet = true;
}
bool SmContextCreatedData::n2SmInfoIsSet() const {
  return m_N2SmInfoIsSet;
}
void SmContextCreatedData::unsetN2SmInfo() {
  m_N2SmInfoIsSet = false;
}
N2SmInfoType SmContextCreatedData::getN2SmInfoType() const {
  return m_N2SmInfoType;
}
void SmContextCreatedData::setN2SmInfoType(N2SmInfoType const& value) {
  m_N2SmInfoType      = value;
  m_N2SmInfoTypeIsSet = true;
}
bool SmContextCreatedData::n2SmInfoTypeIsSet() const {
  return m_N2SmInfoTypeIsSet;
}
void SmContextCreatedData::unsetN2SmInfoType() {
  m_N2SmInfoTypeIsSet = false;
}
std::vector<EbiArpMapping>& SmContextCreatedData::getAllocatedEbiList() {
  return m_AllocatedEbiList;
}
bool SmContextCreatedData::allocatedEbiListIsSet() const {
  return m_AllocatedEbiListIsSet;
}
void SmContextCreatedData::unsetAllocatedEbiList() {
  m_AllocatedEbiListIsSet = false;
}
HoState SmContextCreatedData::getHoState() const {
  return m_HoState;
}
void SmContextCreatedData::setHoState(HoState const& value) {
  m_HoState      = value;
  m_HoStateIsSet = true;
}
bool SmContextCreatedData::hoStateIsSet() const {
  return m_HoStateIsSet;
}
void SmContextCreatedData::unsetHoState() {
  m_HoStateIsSet = false;
}
std::string SmContextCreatedData::getGpsi() const {
  return m_Gpsi;
}
void SmContextCreatedData::setGpsi(std::string const& value) {
  m_Gpsi      = value;
  m_GpsiIsSet = true;
}
bool SmContextCreatedData::gpsiIsSet() const {
  return m_GpsiIsSet;
}
void SmContextCreatedData::unsetGpsi() {
  m_GpsiIsSet = false;
}
std::string SmContextCreatedData::getSmfServiceInstanceId() const {
  return m_SmfServiceInstanceId;
}
void SmContextCreatedData::setSmfServiceInstanceId(std::string const& value) {
  m_SmfServiceInstanceId      = value;
  m_SmfServiceInstanceIdIsSet = true;
}
bool SmContextCreatedData::smfServiceInstanceIdIsSet() const {
  return m_SmfServiceInstanceIdIsSet;
}
void SmContextCreatedData::unsetSmfServiceInstanceId() {
  m_SmfServiceInstanceIdIsSet = false;
}
std::string SmContextCreatedData::getRecoveryTime() const {
  return m_RecoveryTime;
}
void SmContextCreatedData::setRecoveryTime(std::string const& value) {
  m_RecoveryTime      = value;
  m_RecoveryTimeIsSet = true;
}
bool SmContextCreatedData::recoveryTimeIsSet() const {
  return m_RecoveryTimeIsSet;
}
void SmContextCreatedData::unsetRecoveryTime() {
  m_RecoveryTimeIsSet = false;
}
std::string SmContextCreatedData::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void SmContextCreatedData::setSupportedFeatures(std::string const& value) {
  m_SupportedFeatures      = value;
  m_SupportedFeaturesIsSet = true;
}
bool SmContextCreatedData::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void SmContextCreatedData::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}

}  // namespace oai::model::smf
