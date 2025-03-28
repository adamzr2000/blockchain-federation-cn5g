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

#include "5GsUserState.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::amf {

_5GsUserState::_5GsUserState() {}

void _5GsUserState::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool _5GsUserState::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool _5GsUserState::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "5GsUserState" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool _5GsUserState::operator==(const _5GsUserState& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool _5GsUserState::operator!=(const _5GsUserState& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const _5GsUserState& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, _5GsUserState& o) {
  from_json(j, o.m_value);
}

_5GsUserState_anyOf _5GsUserState::getValue() const {
  return m_value;
}

void _5GsUserState::setValue(_5GsUserState_anyOf value) {
  m_value = value;
}

_5GsUserState_anyOf::e_5GsUserState_anyOf _5GsUserState::getEnumValue() const {
  return m_value.getValue();
}

void _5GsUserState::setEnumValue(
    _5GsUserState_anyOf::e_5GsUserState_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::model::amf
