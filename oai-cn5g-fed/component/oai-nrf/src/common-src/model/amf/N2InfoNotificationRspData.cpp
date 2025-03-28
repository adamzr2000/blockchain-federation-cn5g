/**
 * Namf_Communication
 * AMF Communication Service © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "N2InfoNotificationRspData.h"

namespace oai::model::amf {

N2InfoNotificationRspData::N2InfoNotificationRspData() {
  m_N2InfoContentIsSet = false;
}

N2InfoNotificationRspData::~N2InfoNotificationRspData() {}

void N2InfoNotificationRspData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const N2InfoNotificationRspData& o) {
  j = nlohmann::json();
  if (o.n2InfoContentIsSet()) j["n2InfoContent"] = o.m_N2InfoContent;
}

void from_json(const nlohmann::json& j, N2InfoNotificationRspData& o) {
  if (j.find("n2InfoContent") != j.end()) {
    j.at("n2InfoContent").get_to(o.m_N2InfoContent);
    o.m_N2InfoContentIsSet = true;
  }
}

N2InfoContent N2InfoNotificationRspData::getN2InfoContent() const {
  return m_N2InfoContent;
}
void N2InfoNotificationRspData::setN2InfoContent(N2InfoContent const& value) {
  m_N2InfoContent      = value;
  m_N2InfoContentIsSet = true;
}
bool N2InfoNotificationRspData::n2InfoContentIsSet() const {
  return m_N2InfoContentIsSet;
}
void N2InfoNotificationRspData::unsetN2InfoContent() {
  m_N2InfoContentIsSet = false;
}

}  // namespace oai::model::amf
