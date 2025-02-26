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

#include "PatchOperation_anyOf.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace oai::model::common {

PatchOperation_anyOf::PatchOperation_anyOf() {}

void PatchOperation_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool PatchOperation_anyOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool PatchOperation_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "PatchOperation_anyOf" : pathPrefix;

  if (m_value == PatchOperation_anyOf::ePatchOperation_anyOf::
                     INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool PatchOperation_anyOf::operator==(const PatchOperation_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool PatchOperation_anyOf::operator!=(const PatchOperation_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const PatchOperation_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case PatchOperation_anyOf::ePatchOperation_anyOf::
        INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case PatchOperation_anyOf::ePatchOperation_anyOf::ADD:
      j = "add";
      break;
    case PatchOperation_anyOf::ePatchOperation_anyOf::COPY:
      j = "copy";
      break;
    case PatchOperation_anyOf::ePatchOperation_anyOf::MOVE:
      j = "move";
      break;
    case PatchOperation_anyOf::ePatchOperation_anyOf::REMOVE:
      j = "remove";
      break;
    case PatchOperation_anyOf::ePatchOperation_anyOf::REPLACE:
      j = "replace";
      break;
    case PatchOperation_anyOf::ePatchOperation_anyOf::TEST:
      j = "test";
      break;
  }
}

void from_json(const nlohmann::json& j, PatchOperation_anyOf& o) {
  auto s = j.get<std::string>();
  if (s == "add") {
    o.setValue(PatchOperation_anyOf::ePatchOperation_anyOf::ADD);
  } else if (s == "copy") {
    o.setValue(PatchOperation_anyOf::ePatchOperation_anyOf::COPY);
  } else if (s == "move") {
    o.setValue(PatchOperation_anyOf::ePatchOperation_anyOf::MOVE);
  } else if (s == "remove") {
    o.setValue(PatchOperation_anyOf::ePatchOperation_anyOf::REMOVE);
  } else if (s == "replace") {
    o.setValue(PatchOperation_anyOf::ePatchOperation_anyOf::REPLACE);
  } else if (s == "test") {
    o.setValue(PatchOperation_anyOf::ePatchOperation_anyOf::TEST);
  } else if (s == "INVALID_VALUE_OPENAPI_GENERATED") {
    o.setValue(PatchOperation_anyOf::ePatchOperation_anyOf::
                   INVALID_VALUE_OPENAPI_GENERATED);
  } else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " PatchOperation_anyOf::ePatchOperation_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

PatchOperation_anyOf::ePatchOperation_anyOf PatchOperation_anyOf::getValue()
    const {
  return m_value;
}
void PatchOperation_anyOf::setValue(
    PatchOperation_anyOf::ePatchOperation_anyOf value) {
  m_value = value;
}

}  // namespace oai::model::common
