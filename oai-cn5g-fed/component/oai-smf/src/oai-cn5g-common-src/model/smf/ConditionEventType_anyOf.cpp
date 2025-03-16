/**
 * NRF NFManagement Service
 * NRF NFManagement Service.   © 2022, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC).   All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.8
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ConditionEventType_anyOf.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace oai::model::smf {

ConditionEventType_anyOf::ConditionEventType_anyOf() {}

void ConditionEventType_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool ConditionEventType_anyOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool ConditionEventType_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "ConditionEventType_anyOf" : pathPrefix;

  if (m_value == ConditionEventType_anyOf::eConditionEventType_anyOf::
                     INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool ConditionEventType_anyOf::operator==(
    const ConditionEventType_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool ConditionEventType_anyOf::operator!=(
    const ConditionEventType_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ConditionEventType_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case ConditionEventType_anyOf::eConditionEventType_anyOf::
        INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case ConditionEventType_anyOf::eConditionEventType_anyOf::ADDED:
      j = "NF_ADDED";
      break;
    case ConditionEventType_anyOf::eConditionEventType_anyOf::REMOVED:
      j = "NF_REMOVED";
      break;
  }
}

void from_json(const nlohmann::json& j, ConditionEventType_anyOf& o) {
  auto s = j.get<std::string>();
  if (s == "NF_ADDED") {
    o.setValue(ConditionEventType_anyOf::eConditionEventType_anyOf::ADDED);
  } else if (s == "NF_REMOVED") {
    o.setValue(ConditionEventType_anyOf::eConditionEventType_anyOf::REMOVED);
  } else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " ConditionEventType_anyOf::eConditionEventType_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

ConditionEventType_anyOf::eConditionEventType_anyOf
ConditionEventType_anyOf::getValue() const {
  return m_value;
}
void ConditionEventType_anyOf::setValue(
    ConditionEventType_anyOf::eConditionEventType_anyOf value) {
  m_value = value;
}

}  // namespace oai::model::smf
