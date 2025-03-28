/**
 * LMF Location
 * LMF Location Service. © 2022, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.5
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "PositioningMethodAndUsage.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::lmf {

PositioningMethodAndUsage::PositioningMethodAndUsage() {
  m_MethodCode      = 0;
  m_MethodCodeIsSet = false;
}

void PositioningMethodAndUsage::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool PositioningMethodAndUsage::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool PositioningMethodAndUsage::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "PositioningMethodAndUsage" : pathPrefix;

  if (methodCodeIsSet()) {
    const int32_t& value               = m_MethodCode;
    const std::string currentValuePath = _pathPrefix + ".methodCode";

    if (value < 16) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 16;";
    }
    if (value > 31) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 31;";
    }
  }

  return success;
}

bool PositioningMethodAndUsage::operator==(
    const PositioningMethodAndUsage& rhs) const {
  return

      (getMethod() == rhs.getMethod()) &&

      (getMode() == rhs.getMode()) &&

      (getUsage() == rhs.getUsage()) &&

      ((!methodCodeIsSet() && !rhs.methodCodeIsSet()) ||
       (methodCodeIsSet() && rhs.methodCodeIsSet() &&
        getMethodCode() == rhs.getMethodCode()))

          ;
}

bool PositioningMethodAndUsage::operator!=(
    const PositioningMethodAndUsage& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const PositioningMethodAndUsage& o) {
  j           = nlohmann::json();
  j["method"] = o.m_Method;
  j["mode"]   = o.m_Mode;
  j["usage"]  = o.m_Usage;
  if (o.methodCodeIsSet()) j["methodCode"] = o.m_MethodCode;
}

void from_json(const nlohmann::json& j, PositioningMethodAndUsage& o) {
  j.at("method").get_to(o.m_Method);
  j.at("mode").get_to(o.m_Mode);
  j.at("usage").get_to(o.m_Usage);
  if (j.find("methodCode") != j.end()) {
    j.at("methodCode").get_to(o.m_MethodCode);
    o.m_MethodCodeIsSet = true;
  }
}

oai::model::lmf::PositioningMethod PositioningMethodAndUsage::getMethod()
    const {
  return m_Method;
}
void PositioningMethodAndUsage::setMethod(
    oai::model::lmf::PositioningMethod const& value) {
  m_Method = value;
}
oai::model::lmf::PositioningMode PositioningMethodAndUsage::getMode() const {
  return m_Mode;
}
void PositioningMethodAndUsage::setMode(
    oai::model::lmf::PositioningMode const& value) {
  m_Mode = value;
}
oai::model::lmf::Usage PositioningMethodAndUsage::getUsage() const {
  return m_Usage;
}
void PositioningMethodAndUsage::setUsage(oai::model::lmf::Usage const& value) {
  m_Usage = value;
}
int32_t PositioningMethodAndUsage::getMethodCode() const {
  return m_MethodCode;
}
void PositioningMethodAndUsage::setMethodCode(int32_t const value) {
  m_MethodCode      = value;
  m_MethodCodeIsSet = true;
}
bool PositioningMethodAndUsage::methodCodeIsSet() const {
  return m_MethodCodeIsSet;
}
void PositioningMethodAndUsage::unsetMethodCode() {
  m_MethodCodeIsSet = false;
}

}  // namespace oai::model::lmf
