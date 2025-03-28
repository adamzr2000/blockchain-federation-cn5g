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

#include "CmState.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::lmf {

CmState::CmState() {}

void CmState::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool CmState::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool CmState::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success                  = true;
  const std::string _pathPrefix = pathPrefix.empty() ? "CmState" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool CmState::operator==(const CmState& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool CmState::operator!=(const CmState& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CmState& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, CmState& o) {
  from_json(j, o.m_value);
}

CmState_anyOf CmState::getValue() const {
  return m_value;
}

void CmState::setValue(CmState_anyOf value) {
  m_value = value;
}

CmState_anyOf::eCmState_anyOf CmState::getEnumValue() const {
  return m_value.getValue();
}

void CmState::setEnumValue(CmState_anyOf::eCmState_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::model::lmf
