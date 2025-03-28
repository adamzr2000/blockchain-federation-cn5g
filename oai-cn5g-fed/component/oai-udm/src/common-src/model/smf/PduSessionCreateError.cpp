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

#include "PduSessionCreateError.h"

namespace oai::model::smf {

using namespace oai::model::common;

PduSessionCreateError::PduSessionCreateError() {
  m_N1smCause         = "";
  m_N1smCauseIsSet    = false;
  m_N1SmInfoToUeIsSet = false;
  m_BackOffTimer      = 0;
  m_BackOffTimerIsSet = false;
  m_RecoveryTime      = "";
  m_RecoveryTimeIsSet = false;
}

PduSessionCreateError::~PduSessionCreateError() {}

void PduSessionCreateError::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const PduSessionCreateError& o) {
  j          = nlohmann::json();
  j["error"] = o.m_Error;
  if (o.n1smCauseIsSet()) j["n1smCause"] = o.m_N1smCause;
  if (o.n1SmInfoToUeIsSet()) j["n1SmInfoToUe"] = o.m_N1SmInfoToUe;
  if (o.backOffTimerIsSet()) j["backOffTimer"] = o.m_BackOffTimer;
  if (o.recoveryTimeIsSet()) j["recoveryTime"] = o.m_RecoveryTime;
}

void from_json(const nlohmann::json& j, PduSessionCreateError& o) {
  j.at("error").get_to(o.m_Error);
  if (j.find("n1smCause") != j.end()) {
    j.at("n1smCause").get_to(o.m_N1smCause);
    o.m_N1smCauseIsSet = true;
  }
  if (j.find("n1SmInfoToUe") != j.end()) {
    j.at("n1SmInfoToUe").get_to(o.m_N1SmInfoToUe);
    o.m_N1SmInfoToUeIsSet = true;
  }
  if (j.find("backOffTimer") != j.end()) {
    j.at("backOffTimer").get_to(o.m_BackOffTimer);
    o.m_BackOffTimerIsSet = true;
  }
  if (j.find("recoveryTime") != j.end()) {
    j.at("recoveryTime").get_to(o.m_RecoveryTime);
    o.m_RecoveryTimeIsSet = true;
  }
}

ProblemDetails PduSessionCreateError::getError() const {
  return m_Error;
}
void PduSessionCreateError::setError(ProblemDetails const& value) {
  m_Error = value;
}
std::string PduSessionCreateError::getN1smCause() const {
  return m_N1smCause;
}
void PduSessionCreateError::setN1smCause(std::string const& value) {
  m_N1smCause      = value;
  m_N1smCauseIsSet = true;
}
bool PduSessionCreateError::n1smCauseIsSet() const {
  return m_N1smCauseIsSet;
}
void PduSessionCreateError::unsetN1smCause() {
  m_N1smCauseIsSet = false;
}
RefToBinaryData PduSessionCreateError::getN1SmInfoToUe() const {
  return m_N1SmInfoToUe;
}
void PduSessionCreateError::setN1SmInfoToUe(RefToBinaryData const& value) {
  m_N1SmInfoToUe      = value;
  m_N1SmInfoToUeIsSet = true;
}
bool PduSessionCreateError::n1SmInfoToUeIsSet() const {
  return m_N1SmInfoToUeIsSet;
}
void PduSessionCreateError::unsetN1SmInfoToUe() {
  m_N1SmInfoToUeIsSet = false;
}
int32_t PduSessionCreateError::getBackOffTimer() const {
  return m_BackOffTimer;
}
void PduSessionCreateError::setBackOffTimer(int32_t const value) {
  m_BackOffTimer      = value;
  m_BackOffTimerIsSet = true;
}
bool PduSessionCreateError::backOffTimerIsSet() const {
  return m_BackOffTimerIsSet;
}
void PduSessionCreateError::unsetBackOffTimer() {
  m_BackOffTimerIsSet = false;
}
std::string PduSessionCreateError::getRecoveryTime() const {
  return m_RecoveryTime;
}
void PduSessionCreateError::setRecoveryTime(std::string const& value) {
  m_RecoveryTime      = value;
  m_RecoveryTimeIsSet = true;
}
bool PduSessionCreateError::recoveryTimeIsSet() const {
  return m_RecoveryTimeIsSet;
}
void PduSessionCreateError::unsetRecoveryTime() {
  m_RecoveryTimeIsSet = false;
}

}  // namespace oai::model::smf
