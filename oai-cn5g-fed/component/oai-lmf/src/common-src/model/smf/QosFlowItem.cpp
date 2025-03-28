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

#include "QosFlowItem.h"

namespace oai::model::smf {

QosFlowItem::QosFlowItem() {
  m_Qfi        = 0;
  m_CauseIsSet = false;
}

QosFlowItem::~QosFlowItem() {}

void QosFlowItem::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const QosFlowItem& o) {
  j        = nlohmann::json();
  j["qfi"] = o.m_Qfi;
  if (o.causeIsSet()) j["cause"] = o.m_Cause;
}

void from_json(const nlohmann::json& j, QosFlowItem& o) {
  j.at("qfi").get_to(o.m_Qfi);
  if (j.find("cause") != j.end()) {
    j.at("cause").get_to(o.m_Cause);
    o.m_CauseIsSet = true;
  }
}

int32_t QosFlowItem::getQfi() const {
  return m_Qfi;
}
void QosFlowItem::setQfi(int32_t const value) {
  m_Qfi = value;
}
Cause QosFlowItem::getCause() const {
  return m_Cause;
}
void QosFlowItem::setCause(Cause const& value) {
  m_Cause      = value;
  m_CauseIsSet = true;
}
bool QosFlowItem::causeIsSet() const {
  return m_CauseIsSet;
}
void QosFlowItem::unsetCause() {
  m_CauseIsSet = false;
}

}  // namespace oai::model::smf
