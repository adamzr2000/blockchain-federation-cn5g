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

#include "ReportingAreaType.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::lmf {

ReportingAreaType::ReportingAreaType() {}

void ReportingAreaType::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool ReportingAreaType::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool ReportingAreaType::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "ReportingAreaType" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool ReportingAreaType::operator==(const ReportingAreaType& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool ReportingAreaType::operator!=(const ReportingAreaType& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ReportingAreaType& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, ReportingAreaType& o) {
  from_json(j, o.m_value);
}

ReportingAreaType_anyOf ReportingAreaType::getValue() const {
  return m_value;
}

void ReportingAreaType::setValue(ReportingAreaType_anyOf value) {
  m_value = value;
}

ReportingAreaType_anyOf::eReportingAreaType_anyOf
ReportingAreaType::getEnumValue() const {
  return m_value.getValue();
}

void ReportingAreaType::setEnumValue(
    ReportingAreaType_anyOf::eReportingAreaType_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::model::lmf
