/**
 * 3gpp-acs-pp
 * API for 5G ACS Parameter Provision. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AcsConfigurationData.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

AcsConfigurationData::AcsConfigurationData() {
  m_Self               = "";
  m_SelfIsSet          = false;
  m_ExterGroupId       = "";
  m_ExterGroupIdIsSet  = false;
  m_Gpsi               = "";
  m_GpsiIsSet          = false;
  m_MtcProviderId      = "";
  m_MtcProviderIdIsSet = false;
  m_SuppFeat           = "";
}

void AcsConfigurationData::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool AcsConfigurationData::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool AcsConfigurationData::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "AcsConfigurationData" : pathPrefix;

  if (gpsiIsSet()) {
    const std::string& value           = m_Gpsi;
    const std::string currentValuePath = _pathPrefix + ".gpsi";
  }

  /* SuppFeat */ {
    const std::string& value           = m_SuppFeat;
    const std::string currentValuePath = _pathPrefix + ".suppFeat";
  }

  return success;
}

bool AcsConfigurationData::operator==(const AcsConfigurationData& rhs) const {
  return

      ((!selfIsSet() && !rhs.selfIsSet()) ||
       (selfIsSet() && rhs.selfIsSet() && getSelf() == rhs.getSelf())) &&

      ((!exterGroupIdIsSet() && !rhs.exterGroupIdIsSet()) ||
       (exterGroupIdIsSet() && rhs.exterGroupIdIsSet() &&
        getExterGroupId() == rhs.getExterGroupId())) &&

      ((!gpsiIsSet() && !rhs.gpsiIsSet()) ||
       (gpsiIsSet() && rhs.gpsiIsSet() && getGpsi() == rhs.getGpsi())) &&

      (getAcsInfo() == rhs.getAcsInfo()) &&

      ((!mtcProviderIdIsSet() && !rhs.mtcProviderIdIsSet()) ||
       (mtcProviderIdIsSet() && rhs.mtcProviderIdIsSet() &&
        getMtcProviderId() == rhs.getMtcProviderId())) &&

      (getSuppFeat() == rhs.getSuppFeat())

          ;
}

bool AcsConfigurationData::operator!=(const AcsConfigurationData& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AcsConfigurationData& o) {
  j = nlohmann::json();
  if (o.selfIsSet()) j["self"] = o.m_Self;
  if (o.exterGroupIdIsSet()) j["exterGroupId"] = o.m_ExterGroupId;
  if (o.gpsiIsSet()) j["gpsi"] = o.m_Gpsi;
  j["acsInfo"] = o.m_AcsInfo;
  if (o.mtcProviderIdIsSet()) j["mtcProviderId"] = o.m_MtcProviderId;
  j["suppFeat"] = o.m_SuppFeat;
}

void from_json(const nlohmann::json& j, AcsConfigurationData& o) {
  if (j.find("self") != j.end()) {
    j.at("self").get_to(o.m_Self);
    o.m_SelfIsSet = true;
  }
  if (j.find("exterGroupId") != j.end()) {
    j.at("exterGroupId").get_to(o.m_ExterGroupId);
    o.m_ExterGroupIdIsSet = true;
  }
  if (j.find("gpsi") != j.end()) {
    j.at("gpsi").get_to(o.m_Gpsi);
    o.m_GpsiIsSet = true;
  }
  j.at("acsInfo").get_to(o.m_AcsInfo);
  if (j.find("mtcProviderId") != j.end()) {
    j.at("mtcProviderId").get_to(o.m_MtcProviderId);
    o.m_MtcProviderIdIsSet = true;
  }
  j.at("suppFeat").get_to(o.m_SuppFeat);
}

std::string AcsConfigurationData::getSelf() const {
  return m_Self;
}
void AcsConfigurationData::setSelf(std::string const& value) {
  m_Self      = value;
  m_SelfIsSet = true;
}
bool AcsConfigurationData::selfIsSet() const {
  return m_SelfIsSet;
}
void AcsConfigurationData::unsetSelf() {
  m_SelfIsSet = false;
}
std::string AcsConfigurationData::getExterGroupId() const {
  return m_ExterGroupId;
}
void AcsConfigurationData::setExterGroupId(std::string const& value) {
  m_ExterGroupId      = value;
  m_ExterGroupIdIsSet = true;
}
bool AcsConfigurationData::exterGroupIdIsSet() const {
  return m_ExterGroupIdIsSet;
}
void AcsConfigurationData::unsetExterGroupId() {
  m_ExterGroupIdIsSet = false;
}
std::string AcsConfigurationData::getGpsi() const {
  return m_Gpsi;
}
void AcsConfigurationData::setGpsi(std::string const& value) {
  m_Gpsi      = value;
  m_GpsiIsSet = true;
}
bool AcsConfigurationData::gpsiIsSet() const {
  return m_GpsiIsSet;
}
void AcsConfigurationData::unsetGpsi() {
  m_GpsiIsSet = false;
}
AcsInfo AcsConfigurationData::getAcsInfo() const {
  return m_AcsInfo;
}
void AcsConfigurationData::setAcsInfo(AcsInfo const& value) {
  m_AcsInfo = value;
}
std::string AcsConfigurationData::getMtcProviderId() const {
  return m_MtcProviderId;
}
void AcsConfigurationData::setMtcProviderId(std::string const& value) {
  m_MtcProviderId      = value;
  m_MtcProviderIdIsSet = true;
}
bool AcsConfigurationData::mtcProviderIdIsSet() const {
  return m_MtcProviderIdIsSet;
}
void AcsConfigurationData::unsetMtcProviderId() {
  m_MtcProviderIdIsSet = false;
}
std::string AcsConfigurationData::getSuppFeat() const {
  return m_SuppFeat;
}
void AcsConfigurationData::setSuppFeat(std::string const& value) {
  m_SuppFeat = value;
}

}  // namespace oai::nef::model
