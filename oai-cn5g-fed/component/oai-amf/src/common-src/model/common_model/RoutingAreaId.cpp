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

#include "RoutingAreaId.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

RoutingAreaId::RoutingAreaId() {
  m_Lac = "";
  m_Rac = "";
}

void RoutingAreaId::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool RoutingAreaId::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool RoutingAreaId::validate(
    std::stringstream& /* msg */, const std::string& /* pathPrefix */) const {
  bool success = true;
  /*
  const std::string _pathPrefix =
      pathPrefix.empty() ? "RoutingAreaId" : pathPrefix;

  // Lac
  {
    const std::string& value           = m_Lac;
    const std::string currentValuePath = _pathPrefix + ".lac";
  }

  // Rac
  {
    const std::string& value           = m_Rac;
    const std::string currentValuePath = _pathPrefix + ".rac";
  }
  */
  return success;
}

bool RoutingAreaId::operator==(const RoutingAreaId& rhs) const {
  return

      (getPlmnId() == rhs.getPlmnId()) &&

      (getLac() == rhs.getLac()) &&

      (getRac() == rhs.getRac())

          ;
}

bool RoutingAreaId::operator!=(const RoutingAreaId& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const RoutingAreaId& o) {
  j           = nlohmann::json();
  j["plmnId"] = o.m_PlmnId;
  j["lac"]    = o.m_Lac;
  j["rac"]    = o.m_Rac;
}

void from_json(const nlohmann::json& j, RoutingAreaId& o) {
  j.at("plmnId").get_to(o.m_PlmnId);
  j.at("lac").get_to(o.m_Lac);
  j.at("rac").get_to(o.m_Rac);
}

oai::model::common::PlmnId RoutingAreaId::getPlmnId() const {
  return m_PlmnId;
}
void RoutingAreaId::setPlmnId(oai::model::common::PlmnId const& value) {
  m_PlmnId = value;
}
std::string RoutingAreaId::getLac() const {
  return m_Lac;
}
void RoutingAreaId::setLac(std::string const& value) {
  m_Lac = value;
}
std::string RoutingAreaId::getRac() const {
  return m_Rac;
}
void RoutingAreaId::setRac(std::string const& value) {
  m_Rac = value;
}

}  // namespace oai::model::common
