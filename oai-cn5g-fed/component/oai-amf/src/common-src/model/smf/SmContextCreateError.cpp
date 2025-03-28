/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SmContextCreateError.h"

namespace oai::model::smf {

using namespace oai::model::common;

SmContextCreateError::SmContextCreateError() {
  m_N1SmMsgIsSet      = false;
  m_RecoveryTime      = "";
  m_RecoveryTimeIsSet = false;
}

SmContextCreateError::~SmContextCreateError() {}

void SmContextCreateError::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const SmContextCreateError& o) {
  j          = nlohmann::json();
  j["error"] = o.m_Error;
  if (o.n1SmMsgIsSet()) j["n1SmMsg"] = o.m_N1SmMsg;
  if (o.recoveryTimeIsSet()) j["recoveryTime"] = o.m_RecoveryTime;
}

void from_json(const nlohmann::json& j, SmContextCreateError& o) {
  j.at("error").get_to(o.m_Error);
  if (j.find("n1SmMsg") != j.end()) {
    j.at("n1SmMsg").get_to(o.m_N1SmMsg);
    o.m_N1SmMsgIsSet = true;
  }
  if (j.find("recoveryTime") != j.end()) {
    j.at("recoveryTime").get_to(o.m_RecoveryTime);
    o.m_RecoveryTimeIsSet = true;
  }
}

ProblemDetails SmContextCreateError::getError() const {
  return m_Error;
}
void SmContextCreateError::setError(ProblemDetails const& value) {
  m_Error = value;
}
RefToBinaryData SmContextCreateError::getN1SmMsg() const {
  return m_N1SmMsg;
}
void SmContextCreateError::setN1SmMsg(RefToBinaryData const& value) {
  m_N1SmMsg      = value;
  m_N1SmMsgIsSet = true;
}
bool SmContextCreateError::n1SmMsgIsSet() const {
  return m_N1SmMsgIsSet;
}
void SmContextCreateError::unsetN1SmMsg() {
  m_N1SmMsgIsSet = false;
}
std::string SmContextCreateError::getRecoveryTime() const {
  return m_RecoveryTime;
}
void SmContextCreateError::setRecoveryTime(std::string const& value) {
  m_RecoveryTime      = value;
  m_RecoveryTimeIsSet = true;
}
bool SmContextCreateError::recoveryTimeIsSet() const {
  return m_RecoveryTimeIsSet;
}
void SmContextCreateError::unsetRecoveryTime() {
  m_RecoveryTimeIsSet = false;
}

}  // namespace oai::model::smf
