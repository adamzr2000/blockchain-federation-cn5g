/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */
/**
 * Nudm_SDM
 * Nudm Subscriber Data Management Service. � 2019, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SubscriptionDataSets.h"

namespace oai::model::udm {

SubscriptionDataSets::SubscriptionDataSets() {
  m_AmDataIsSet      = false;
  m_SmfSelDataIsSet  = false;
  m_UecSmfDataIsSet  = false;
  m_UecSmsfDataIsSet = false;
  m_SmsSubsDataIsSet = false;
  m_SmDataIsSet      = false;
  m_TraceDataIsSet   = false;
  m_SmsMngDataIsSet  = false;
}

SubscriptionDataSets::~SubscriptionDataSets() {}

void SubscriptionDataSets::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const SubscriptionDataSets& o) {
  j = nlohmann::json();
  if (o.amDataIsSet()) j["amData"] = o.m_AmData;
  if (o.smfSelDataIsSet()) j["smfSelData"] = o.m_SmfSelData;
  if (o.uecSmfDataIsSet()) j["uecSmfData"] = o.m_UecSmfData;
  if (o.uecSmsfDataIsSet()) j["uecSmsfData"] = o.m_UecSmsfData;
  if (o.smsSubsDataIsSet()) j["smsSubsData"] = o.m_SmsSubsData;
  if (o.smDataIsSet()) j["smData"] = o.m_SmData;
  if (o.traceDataIsSet()) j["traceData"] = o.m_TraceData;
  if (o.smsMngDataIsSet()) j["smsMngData"] = o.m_SmsMngData;
}

void from_json(const nlohmann::json& j, SubscriptionDataSets& o) {
  if (j.find("amData") != j.end()) {
    j.at("amData").get_to(o.m_AmData);
    o.m_AmDataIsSet = true;
  }
  if (j.find("smfSelData") != j.end()) {
    j.at("smfSelData").get_to(o.m_SmfSelData);
    o.m_SmfSelDataIsSet = true;
  }
  if (j.find("uecSmfData") != j.end()) {
    j.at("uecSmfData").get_to(o.m_UecSmfData);
    o.m_UecSmfDataIsSet = true;
  }
  if (j.find("uecSmsfData") != j.end()) {
    j.at("uecSmsfData").get_to(o.m_UecSmsfData);
    o.m_UecSmsfDataIsSet = true;
  }
  if (j.find("smsSubsData") != j.end()) {
    j.at("smsSubsData").get_to(o.m_SmsSubsData);
    o.m_SmsSubsDataIsSet = true;
  }
  if (j.find("smData") != j.end()) {
    j.at("smData").get_to(o.m_SmData);
    o.m_SmDataIsSet = true;
  }
  if (j.find("traceData") != j.end()) {
    j.at("traceData").get_to(o.m_TraceData);
    o.m_TraceDataIsSet = true;
  }
  if (j.find("smsMngData") != j.end()) {
    j.at("smsMngData").get_to(o.m_SmsMngData);
    o.m_SmsMngDataIsSet = true;
  }
}

AccessAndMobilitySubscriptionData SubscriptionDataSets::getAmData() const {
  return m_AmData;
}
void SubscriptionDataSets::setAmData(
    AccessAndMobilitySubscriptionData const& value) {
  m_AmData      = value;
  m_AmDataIsSet = true;
}
bool SubscriptionDataSets::amDataIsSet() const {
  return m_AmDataIsSet;
}
void SubscriptionDataSets::unsetAmData() {
  m_AmDataIsSet = false;
}
SmfSelectionSubscriptionData SubscriptionDataSets::getSmfSelData() const {
  return m_SmfSelData;
}
void SubscriptionDataSets::setSmfSelData(
    SmfSelectionSubscriptionData const& value) {
  m_SmfSelData      = value;
  m_SmfSelDataIsSet = true;
}
bool SubscriptionDataSets::smfSelDataIsSet() const {
  return m_SmfSelDataIsSet;
}
void SubscriptionDataSets::unsetSmfSelData() {
  m_SmfSelDataIsSet = false;
}
UeContextInSmfData SubscriptionDataSets::getUecSmfData() const {
  return m_UecSmfData;
}
void SubscriptionDataSets::setUecSmfData(UeContextInSmfData const& value) {
  m_UecSmfData      = value;
  m_UecSmfDataIsSet = true;
}
bool SubscriptionDataSets::uecSmfDataIsSet() const {
  return m_UecSmfDataIsSet;
}
void SubscriptionDataSets::unsetUecSmfData() {
  m_UecSmfDataIsSet = false;
}
UeContextInSmsfData SubscriptionDataSets::getUecSmsfData() const {
  return m_UecSmsfData;
}
void SubscriptionDataSets::setUecSmsfData(UeContextInSmsfData const& value) {
  m_UecSmsfData      = value;
  m_UecSmsfDataIsSet = true;
}
bool SubscriptionDataSets::uecSmsfDataIsSet() const {
  return m_UecSmsfDataIsSet;
}
void SubscriptionDataSets::unsetUecSmsfData() {
  m_UecSmsfDataIsSet = false;
}
SmsSubscriptionData SubscriptionDataSets::getSmsSubsData() const {
  return m_SmsSubsData;
}
void SubscriptionDataSets::setSmsSubsData(SmsSubscriptionData const& value) {
  m_SmsSubsData      = value;
  m_SmsSubsDataIsSet = true;
}
bool SubscriptionDataSets::smsSubsDataIsSet() const {
  return m_SmsSubsDataIsSet;
}
void SubscriptionDataSets::unsetSmsSubsData() {
  m_SmsSubsDataIsSet = false;
}
std::vector<SessionManagementSubscriptionData>&
SubscriptionDataSets::getSmData() {
  return m_SmData;
}
bool SubscriptionDataSets::smDataIsSet() const {
  return m_SmDataIsSet;
}
void SubscriptionDataSets::unsetSmData() {
  m_SmDataIsSet = false;
}
oai::model::common::TraceData SubscriptionDataSets::getTraceData() const {
  return m_TraceData;
}
void SubscriptionDataSets::setTraceData(
    oai::model::common::TraceData const& value) {
  m_TraceData      = value;
  m_TraceDataIsSet = true;
}
bool SubscriptionDataSets::traceDataIsSet() const {
  return m_TraceDataIsSet;
}
void SubscriptionDataSets::unsetTraceData() {
  m_TraceDataIsSet = false;
}
SmsManagementSubscriptionData SubscriptionDataSets::getSmsMngData() const {
  return m_SmsMngData;
}
void SubscriptionDataSets::setSmsMngData(
    SmsManagementSubscriptionData const& value) {
  m_SmsMngData      = value;
  m_SmsMngDataIsSet = true;
}
bool SubscriptionDataSets::smsMngDataIsSet() const {
  return m_SmsMngDataIsSet;
}
void SubscriptionDataSets::unsetSmsMngData() {
  m_SmsMngDataIsSet = false;
}

}  // namespace oai::model::udm
