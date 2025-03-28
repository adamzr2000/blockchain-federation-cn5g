/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2023, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.9
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "BridgeManagementContainer.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::pcf {

BridgeManagementContainer::BridgeManagementContainer() {}

void BridgeManagementContainer::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool BridgeManagementContainer::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool BridgeManagementContainer::validate(
    std::stringstream& /*msg*/, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "BridgeManagementContainer" : pathPrefix;

  return success;
}

bool BridgeManagementContainer::operator==(
    const BridgeManagementContainer& rhs) const {
  return

      (getBridgeManCont() == rhs.getBridgeManCont())

          ;
}

bool BridgeManagementContainer::operator!=(
    const BridgeManagementContainer& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const BridgeManagementContainer& o) {
  j                  = nlohmann::json();
  j["bridgeManCont"] = o.m_BridgeManCont;
}

void from_json(const nlohmann::json& j, BridgeManagementContainer& o) {
  j.at("bridgeManCont").get_to(o.m_BridgeManCont);
}

std::string BridgeManagementContainer::getBridgeManCont() const {
  return m_BridgeManCont;
}
void BridgeManagementContainer::setBridgeManCont(std::string const& value) {
  m_BridgeManCont = value;
}

}  // namespace oai::model::pcf
