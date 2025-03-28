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

#include "TerminationCause.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::lmf {

TerminationCause::TerminationCause() {}

void TerminationCause::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool TerminationCause::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool TerminationCause::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "TerminationCause" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool TerminationCause::operator==(const TerminationCause& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool TerminationCause::operator!=(const TerminationCause& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const TerminationCause& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, TerminationCause& o) {
  from_json(j, o.m_value);
}

TerminationCause_anyOf TerminationCause::getValue() const {
  return m_value;
}

void TerminationCause::setValue(TerminationCause_anyOf value) {
  m_value = value;
}

TerminationCause_anyOf::eTerminationCause_anyOf TerminationCause::getEnumValue()
    const {
  return m_value.getValue();
}

void TerminationCause::setEnumValue(
    TerminationCause_anyOf::eTerminationCause_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::model::lmf
