/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2022, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.7
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "UpSecurity.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

UpSecurity::UpSecurity() {}

void UpSecurity::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool UpSecurity::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool UpSecurity::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "UpSecurity" : pathPrefix;

  return success;
}

bool UpSecurity::operator==(const UpSecurity& rhs) const {
  return

      (getUpIntegr() == rhs.getUpIntegr()) &&

      (getUpConfid() == rhs.getUpConfid())

          ;
}

bool UpSecurity::operator!=(const UpSecurity& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const UpSecurity& o) {
  j             = nlohmann::json();
  j["upIntegr"] = o.m_UpIntegr;
  j["upConfid"] = o.m_UpConfid;
}

void from_json(const nlohmann::json& j, UpSecurity& o) {
  j.at("upIntegr").get_to(o.m_UpIntegr);
  j.at("upConfid").get_to(o.m_UpConfid);
}

oai::model::common::UpIntegrity UpSecurity::getUpIntegr() const {
  return m_UpIntegr;
}
void UpSecurity::setUpIntegr(oai::model::common::UpIntegrity const& value) {
  m_UpIntegr = value;
}
oai::model::common::UpConfidentiality UpSecurity::getUpConfid() const {
  return m_UpConfid;
}
void UpSecurity::setUpConfid(
    oai::model::common::UpConfidentiality const& value) {
  m_UpConfid = value;
}

}  // namespace oai::model::common
