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

#include "LcsQosClass_anyOf.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace oai::model::lmf {

LcsQosClass_anyOf::LcsQosClass_anyOf() {}

void LcsQosClass_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool LcsQosClass_anyOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool LcsQosClass_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "LcsQosClass_anyOf" : pathPrefix;

  if (m_value ==
      LcsQosClass_anyOf::eLcsQosClass_anyOf::INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool LcsQosClass_anyOf::operator==(const LcsQosClass_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool LcsQosClass_anyOf::operator!=(const LcsQosClass_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const LcsQosClass_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case LcsQosClass_anyOf::eLcsQosClass_anyOf::INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case LcsQosClass_anyOf::eLcsQosClass_anyOf::BEST_EFFORT:
      j = "BEST_EFFORT";
      break;
    case LcsQosClass_anyOf::eLcsQosClass_anyOf::ASSURED:
      j = "ASSURED";
      break;
  }
}

void from_json(const nlohmann::json& j, LcsQosClass_anyOf& o) {
  auto s = j.get<std::string>();
  if (s == "BEST_EFFORT") {
    o.setValue(LcsQosClass_anyOf::eLcsQosClass_anyOf::BEST_EFFORT);
  } else if (s == "ASSURED") {
    o.setValue(LcsQosClass_anyOf::eLcsQosClass_anyOf::ASSURED);
  } else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " LcsQosClass_anyOf::eLcsQosClass_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

LcsQosClass_anyOf::eLcsQosClass_anyOf LcsQosClass_anyOf::getValue() const {
  return m_value;
}
void LcsQosClass_anyOf::setValue(LcsQosClass_anyOf::eLcsQosClass_anyOf value) {
  m_value = value;
}

}  // namespace oai::model::lmf
