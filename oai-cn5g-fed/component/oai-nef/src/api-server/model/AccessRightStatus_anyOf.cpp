/**
 * 3gpp-iptvconfiguration
 * API for IPTV configuration. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AccessRightStatus_anyOf.h"

#include <sstream>
#include <stdexcept>

#include "Helpers.h"

namespace oai::nef::model {

AccessRightStatus_anyOf::AccessRightStatus_anyOf() {}

void AccessRightStatus_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool AccessRightStatus_anyOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool AccessRightStatus_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "AccessRightStatus_anyOf" : pathPrefix;

  if (m_value == AccessRightStatus_anyOf::eAccessRightStatus_anyOf::
                     INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool AccessRightStatus_anyOf::operator==(
    const AccessRightStatus_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool AccessRightStatus_anyOf::operator!=(
    const AccessRightStatus_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AccessRightStatus_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case AccessRightStatus_anyOf::eAccessRightStatus_anyOf::
        INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case AccessRightStatus_anyOf::eAccessRightStatus_anyOf::FULLY_ALLOWED:
      j = "FULLY_ALLOWED";
      break;
    case AccessRightStatus_anyOf::eAccessRightStatus_anyOf::PREVIEW_ALLOWED:
      j = "PREVIEW_ALLOWED";
      break;
    case AccessRightStatus_anyOf::eAccessRightStatus_anyOf::NO_ALLOWED:
      j = "NO_ALLOWED";
      break;
  }
}

void from_json(const nlohmann::json& j, AccessRightStatus_anyOf& o) {
  auto s = j.get<std::string>();
  if (s == "FULLY_ALLOWED") {
    o.setValue(
        AccessRightStatus_anyOf::eAccessRightStatus_anyOf::FULLY_ALLOWED);
  } else if (s == "PREVIEW_ALLOWED") {
    o.setValue(
        AccessRightStatus_anyOf::eAccessRightStatus_anyOf::PREVIEW_ALLOWED);
  } else if (s == "NO_ALLOWED") {
    o.setValue(AccessRightStatus_anyOf::eAccessRightStatus_anyOf::NO_ALLOWED);
  } else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " AccessRightStatus_anyOf::eAccessRightStatus_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

AccessRightStatus_anyOf::eAccessRightStatus_anyOf
AccessRightStatus_anyOf::getValue() const {
  return m_value;
}
void AccessRightStatus_anyOf::setValue(
    AccessRightStatus_anyOf::eAccessRightStatus_anyOf value) {
  m_value = value;
}

}  // namespace oai::nef::model
