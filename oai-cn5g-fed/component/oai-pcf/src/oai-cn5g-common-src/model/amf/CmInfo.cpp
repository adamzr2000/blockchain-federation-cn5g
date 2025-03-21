/**
 * Namf_EventExposure
 * AMF Event Exposure Service © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "CmInfo.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::amf {

CmInfo::CmInfo() {}

void CmInfo::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool CmInfo::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool CmInfo::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success                  = true;
  const std::string _pathPrefix = pathPrefix.empty() ? "CmInfo" : pathPrefix;

  return success;
}

bool CmInfo::operator==(const CmInfo& rhs) const {
  return

      (getCmState() == rhs.getCmState()) &&

      (getAccessType() == rhs.getAccessType())

          ;
}

bool CmInfo::operator!=(const CmInfo& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CmInfo& o) {
  j               = nlohmann::json();
  j["cmState"]    = o.m_CmState;
  j["accessType"] = o.m_AccessType;
}

void from_json(const nlohmann::json& j, CmInfo& o) {
  j.at("cmState").get_to(o.m_CmState);
  j.at("accessType").get_to(o.m_AccessType);
}

CmState CmInfo::getCmState() const {
  return m_CmState;
}
void CmInfo::setCmState(CmState const& value) {
  m_CmState = value;
}
oai::model::common::AccessType CmInfo::getAccessType() const {
  return m_AccessType;
}
void CmInfo::setAccessType(oai::model::common::AccessType const& value) {
  m_AccessType = value;
}

}  // namespace oai::model::amf
