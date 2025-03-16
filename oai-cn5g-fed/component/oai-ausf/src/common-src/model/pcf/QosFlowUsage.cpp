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

#include "QosFlowUsage.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::pcf {

QosFlowUsage::QosFlowUsage() {}

void QosFlowUsage::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool QosFlowUsage::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool QosFlowUsage::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "QosFlowUsage" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool QosFlowUsage::operator==(const QosFlowUsage& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool QosFlowUsage::operator!=(const QosFlowUsage& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const QosFlowUsage& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, QosFlowUsage& o) {
  from_json(j, o.m_value);
}

QosFlowUsage_anyOf QosFlowUsage::getValue() const {
  return m_value;
}

void QosFlowUsage::setValue(QosFlowUsage_anyOf value) {
  m_value = value;
}

QosFlowUsage_anyOf::eQosFlowUsage_anyOf QosFlowUsage::getEnumValue() const {
  return m_value.getValue();
}

void QosFlowUsage::setEnumValue(QosFlowUsage_anyOf::eQosFlowUsage_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::model::pcf
