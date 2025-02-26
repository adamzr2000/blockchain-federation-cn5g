/**
 * NSSF NS Selection
 * NSSF Network Slice Selection Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SliceInfoForRegistration.h"
#include "Helpers.h"

#include <sstream>

namespace oai {
namespace nssf_server {
namespace model {

SliceInfoForRegistration::SliceInfoForRegistration() {
  m_SubscribedNssaiIsSet            = false;
  m_AllowedNssaiCurrentAccessIsSet  = false;
  m_AllowedNssaiOtherAccessIsSet    = false;
  m_SNssaiForMappingIsSet           = false;
  m_RequestedNssaiIsSet             = false;
  m_DefaultConfiguredSnssaiInd      = false;
  m_DefaultConfiguredSnssaiIndIsSet = false;
  m_MappingOfNssaiIsSet             = false;
  m_RequestMapping                  = false;
  m_RequestMappingIsSet             = false;
}

void SliceInfoForRegistration::validate() const {
  std::stringstream msg;
  // if (!validate(msg))
  // {
  //     throw oai::nssf_server::helpers::ValidationException(msg.str());
  // }
}

bool SliceInfoForRegistration::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool SliceInfoForRegistration::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "SliceInfoForRegistration" : pathPrefix;

  if (subscribedNssaiIsSet()) {
    const std::vector<SubscribedSnssai>& value = m_SubscribedNssai;
    const std::string currentValuePath = _pathPrefix + ".subscribedNssai";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const SubscribedSnssai& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success = value.validate(msg, currentValuePath + ".subscribedNssai") &&
                  success;

        i++;
      }
    }
  }

  if (sNssaiForMappingIsSet()) {
    const std::vector<oai::model::common::Snssai>& value = m_SNssaiForMapping;
    const std::string currentValuePath = _pathPrefix + ".sNssaiForMapping";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::common::Snssai& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success = value.validate(msg, currentValuePath + ".sNssaiForMapping") &&
                  success;

        i++;
      }
    }
  }

  if (requestedNssaiIsSet()) {
    const std::vector<oai::model::common::Snssai>& value = m_RequestedNssai;
    const std::string currentValuePath = _pathPrefix + ".requestedNssai";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::common::Snssai& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success = value.validate(msg, currentValuePath + ".requestedNssai") &&
                  success;

        i++;
      }
    }
  }

  if (mappingOfNssaiIsSet()) {
    const std::vector<MappingOfSnssai>& value = m_MappingOfNssai;
    const std::string currentValuePath        = _pathPrefix + ".mappingOfNssai";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const MappingOfSnssai& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success = value.validate(msg, currentValuePath + ".mappingOfNssai") &&
                  success;

        i++;
      }
    }
  }

  return success;
}

bool SliceInfoForRegistration::operator==(
    const SliceInfoForRegistration& rhs) const {
  return

      ((!subscribedNssaiIsSet() && !rhs.subscribedNssaiIsSet()) ||
       (subscribedNssaiIsSet() && rhs.subscribedNssaiIsSet() &&
        getSubscribedNssai() == rhs.getSubscribedNssai())) &&

      ((!allowedNssaiCurrentAccessIsSet() &&
        !rhs.allowedNssaiCurrentAccessIsSet()) ||
       (allowedNssaiCurrentAccessIsSet() &&
        rhs.allowedNssaiCurrentAccessIsSet() &&
        getAllowedNssaiCurrentAccess() ==
            rhs.getAllowedNssaiCurrentAccess())) &&

      ((!allowedNssaiOtherAccessIsSet() &&
        !rhs.allowedNssaiOtherAccessIsSet()) ||
       (allowedNssaiOtherAccessIsSet() && rhs.allowedNssaiOtherAccessIsSet() &&
        getAllowedNssaiOtherAccess() == rhs.getAllowedNssaiOtherAccess())) &&

      ((!sNssaiForMappingIsSet() && !rhs.sNssaiForMappingIsSet()) ||
       (sNssaiForMappingIsSet() && rhs.sNssaiForMappingIsSet() &&
        getSNssaiForMapping() == rhs.getSNssaiForMapping())) &&

      ((!requestedNssaiIsSet() && !rhs.requestedNssaiIsSet()) ||
       (requestedNssaiIsSet() && rhs.requestedNssaiIsSet() &&
        getRequestedNssai() == rhs.getRequestedNssai())) &&

      ((!defaultConfiguredSnssaiIndIsSet() &&
        !rhs.defaultConfiguredSnssaiIndIsSet()) ||
       (defaultConfiguredSnssaiIndIsSet() &&
        rhs.defaultConfiguredSnssaiIndIsSet() &&
        isDefaultConfiguredSnssaiInd() ==
            rhs.isDefaultConfiguredSnssaiInd())) &&

      ((!mappingOfNssaiIsSet() && !rhs.mappingOfNssaiIsSet()) ||
       (mappingOfNssaiIsSet() && rhs.mappingOfNssaiIsSet() &&
        getMappingOfNssai() == rhs.getMappingOfNssai())) &&

      ((!requestMappingIsSet() && !rhs.requestMappingIsSet()) ||
       (requestMappingIsSet() && rhs.requestMappingIsSet() &&
        isRequestMapping() == rhs.isRequestMapping()))

          ;
}

bool SliceInfoForRegistration::operator!=(
    const SliceInfoForRegistration& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const SliceInfoForRegistration& o) {
  j = nlohmann::json();
  if (o.subscribedNssaiIsSet() || !o.m_SubscribedNssai.empty())
    j["subscribedNssai"] = o.m_SubscribedNssai;
  if (o.allowedNssaiCurrentAccessIsSet())
    j["allowedNssaiCurrentAccess"] = o.m_AllowedNssaiCurrentAccess;
  if (o.allowedNssaiOtherAccessIsSet())
    j["allowedNssaiOtherAccess"] = o.m_AllowedNssaiOtherAccess;
  if (o.sNssaiForMappingIsSet() || !o.m_SNssaiForMapping.empty())
    j["sNssaiForMapping"] = o.m_SNssaiForMapping;
  if (o.requestedNssaiIsSet() || !o.m_RequestedNssai.empty())
    j["requestedNssai"] = o.m_RequestedNssai;
  if (o.defaultConfiguredSnssaiIndIsSet())
    j["defaultConfiguredSnssaiInd"] = o.m_DefaultConfiguredSnssaiInd;
  if (o.mappingOfNssaiIsSet() || !o.m_MappingOfNssai.empty())
    j["mappingOfNssai"] = o.m_MappingOfNssai;
  if (o.requestMappingIsSet()) j["requestMapping"] = o.m_RequestMapping;
}

void from_json(const nlohmann::json& j, SliceInfoForRegistration& o) {
  if (j.find("subscribedNssai") != j.end()) {
    j.at("subscribedNssai").get_to(o.m_SubscribedNssai);
    o.m_SubscribedNssaiIsSet = true;
  }
  if (j.find("allowedNssaiCurrentAccess") != j.end()) {
    j.at("allowedNssaiCurrentAccess").get_to(o.m_AllowedNssaiCurrentAccess);
    o.m_AllowedNssaiCurrentAccessIsSet = true;
  }
  if (j.find("allowedNssaiOtherAccess") != j.end()) {
    j.at("allowedNssaiOtherAccess").get_to(o.m_AllowedNssaiOtherAccess);
    o.m_AllowedNssaiOtherAccessIsSet = true;
  }
  if (j.find("sNssaiForMapping") != j.end()) {
    j.at("sNssaiForMapping").get_to(o.m_SNssaiForMapping);
    o.m_SNssaiForMappingIsSet = true;
  }
  if (j.find("requestedNssai") != j.end()) {
    j.at("requestedNssai").get_to(o.m_RequestedNssai);
    o.m_RequestedNssaiIsSet = true;
  }
  if (j.find("defaultConfiguredSnssaiInd") != j.end()) {
    j.at("defaultConfiguredSnssaiInd").get_to(o.m_DefaultConfiguredSnssaiInd);
    o.m_DefaultConfiguredSnssaiIndIsSet = true;
  }
  if (j.find("mappingOfNssai") != j.end()) {
    j.at("mappingOfNssai").get_to(o.m_MappingOfNssai);
    o.m_MappingOfNssaiIsSet = true;
  }
  if (j.find("requestMapping") != j.end()) {
    j.at("requestMapping").get_to(o.m_RequestMapping);
    o.m_RequestMappingIsSet = true;
  }
}

std::vector<SubscribedSnssai> SliceInfoForRegistration::getSubscribedNssai()
    const {
  return m_SubscribedNssai;
}
void SliceInfoForRegistration::setSubscribedNssai(
    std::vector<SubscribedSnssai> const& value) {
  m_SubscribedNssai      = value;
  m_SubscribedNssaiIsSet = true;
}
bool SliceInfoForRegistration::subscribedNssaiIsSet() const {
  return m_SubscribedNssaiIsSet;
}
void SliceInfoForRegistration::unsetSubscribedNssai() {
  m_SubscribedNssaiIsSet = false;
}
AllowedNssai SliceInfoForRegistration::getAllowedNssaiCurrentAccess() const {
  return m_AllowedNssaiCurrentAccess;
}
void SliceInfoForRegistration::setAllowedNssaiCurrentAccess(
    AllowedNssai const& value) {
  m_AllowedNssaiCurrentAccess      = value;
  m_AllowedNssaiCurrentAccessIsSet = true;
}
bool SliceInfoForRegistration::allowedNssaiCurrentAccessIsSet() const {
  return m_AllowedNssaiCurrentAccessIsSet;
}
void SliceInfoForRegistration::unsetAllowedNssaiCurrentAccess() {
  m_AllowedNssaiCurrentAccessIsSet = false;
}
AllowedNssai SliceInfoForRegistration::getAllowedNssaiOtherAccess() const {
  return m_AllowedNssaiOtherAccess;
}
void SliceInfoForRegistration::setAllowedNssaiOtherAccess(
    AllowedNssai const& value) {
  m_AllowedNssaiOtherAccess      = value;
  m_AllowedNssaiOtherAccessIsSet = true;
}
bool SliceInfoForRegistration::allowedNssaiOtherAccessIsSet() const {
  return m_AllowedNssaiOtherAccessIsSet;
}
void SliceInfoForRegistration::unsetAllowedNssaiOtherAccess() {
  m_AllowedNssaiOtherAccessIsSet = false;
}
std::vector<oai::model::common::Snssai>
SliceInfoForRegistration::getSNssaiForMapping() const {
  return m_SNssaiForMapping;
}
void SliceInfoForRegistration::setSNssaiForMapping(
    std::vector<oai::model::common::Snssai> const& value) {
  m_SNssaiForMapping      = value;
  m_SNssaiForMappingIsSet = true;
}
bool SliceInfoForRegistration::sNssaiForMappingIsSet() const {
  return m_SNssaiForMappingIsSet;
}
void SliceInfoForRegistration::unsetSNssaiForMapping() {
  m_SNssaiForMappingIsSet = false;
}
std::vector<oai::model::common::Snssai>
SliceInfoForRegistration::getRequestedNssai() const {
  return m_RequestedNssai;
}
void SliceInfoForRegistration::setRequestedNssai(
    std::vector<oai::model::common::Snssai> const& value) {
  m_RequestedNssai      = value;
  m_RequestedNssaiIsSet = true;
}
bool SliceInfoForRegistration::requestedNssaiIsSet() const {
  return m_RequestedNssaiIsSet;
}
void SliceInfoForRegistration::unsetRequestedNssai() {
  m_RequestedNssaiIsSet = false;
}
bool SliceInfoForRegistration::isDefaultConfiguredSnssaiInd() const {
  return m_DefaultConfiguredSnssaiInd;
}
void SliceInfoForRegistration::setDefaultConfiguredSnssaiInd(bool const value) {
  m_DefaultConfiguredSnssaiInd      = value;
  m_DefaultConfiguredSnssaiIndIsSet = true;
}
bool SliceInfoForRegistration::defaultConfiguredSnssaiIndIsSet() const {
  return m_DefaultConfiguredSnssaiIndIsSet;
}
void SliceInfoForRegistration::unsetDefaultConfiguredSnssaiInd() {
  m_DefaultConfiguredSnssaiIndIsSet = false;
}
std::vector<MappingOfSnssai> SliceInfoForRegistration::getMappingOfNssai()
    const {
  return m_MappingOfNssai;
}
void SliceInfoForRegistration::setMappingOfNssai(
    std::vector<MappingOfSnssai> const& value) {
  m_MappingOfNssai      = value;
  m_MappingOfNssaiIsSet = true;
}
bool SliceInfoForRegistration::mappingOfNssaiIsSet() const {
  return m_MappingOfNssaiIsSet;
}
void SliceInfoForRegistration::unsetMappingOfNssai() {
  m_MappingOfNssaiIsSet = false;
}
bool SliceInfoForRegistration::isRequestMapping() const {
  return m_RequestMapping;
}
void SliceInfoForRegistration::setRequestMapping(bool const value) {
  m_RequestMapping      = value;
  m_RequestMappingIsSet = true;
}
bool SliceInfoForRegistration::requestMappingIsSet() const {
  return m_RequestMappingIsSet;
}
void SliceInfoForRegistration::unsetRequestMapping() {
  m_RequestMappingIsSet = false;
}

}  // namespace model
}  // namespace nssf_server
}  // namespace oai
