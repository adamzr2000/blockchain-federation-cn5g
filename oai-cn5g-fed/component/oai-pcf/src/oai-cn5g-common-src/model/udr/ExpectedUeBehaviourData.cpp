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
 * Nudr_DataRepository API OpenAPI file
 * Unified Data Repository Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ExpectedUeBehaviourData.h"

namespace oai::udr::model {

ExpectedUeBehaviourData::ExpectedUeBehaviourData() {
  m_StationaryIndicationIsSet       = false;
  m_CommunicationDurationTime       = 0;
  m_CommunicationDurationTimeIsSet  = false;
  m_PeriodicTime                    = 0;
  m_PeriodicTimeIsSet               = false;
  m_ScheduledCommunicationTimeIsSet = false;
  m_ScheduledCommunicationTypeIsSet = false;
  m_ExpectedUmtsIsSet               = false;
  m_TrafficProfileIsSet             = false;
  m_BatteryIndicationIsSet          = false;
  m_ValidityTime                    = "";
  m_ValidityTimeIsSet               = false;
}

ExpectedUeBehaviourData::~ExpectedUeBehaviourData() {}

void ExpectedUeBehaviourData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const ExpectedUeBehaviourData& o) {
  j = nlohmann::json();
  if (o.stationaryIndicationIsSet())
    j["stationaryIndication"] = o.m_StationaryIndication;
  if (o.communicationDurationTimeIsSet())
    j["communicationDurationTime"] = o.m_CommunicationDurationTime;
  if (o.periodicTimeIsSet()) j["periodicTime"] = o.m_PeriodicTime;
  if (o.scheduledCommunicationTimeIsSet())
    j["scheduledCommunicationTime"] = o.m_ScheduledCommunicationTime;
  if (o.scheduledCommunicationTypeIsSet())
    j["scheduledCommunicationType"] = o.m_ScheduledCommunicationType;
  if (o.expectedUmtsIsSet() || !o.m_ExpectedUmts.empty())
    j["expectedUmts"] = o.m_ExpectedUmts;
  if (o.trafficProfileIsSet()) j["trafficProfile"] = o.m_TrafficProfile;
  if (o.batteryIndicationIsSet())
    j["batteryIndication"] = o.m_BatteryIndication;
  if (o.validityTimeIsSet()) j["validityTime"] = o.m_ValidityTime;
}

void from_json(const nlohmann::json& j, ExpectedUeBehaviourData& o) {
  if (j.find("stationaryIndication") != j.end()) {
    j.at("stationaryIndication").get_to(o.m_StationaryIndication);
    o.m_StationaryIndicationIsSet = true;
  }
  if (j.find("communicationDurationTime") != j.end()) {
    j.at("communicationDurationTime").get_to(o.m_CommunicationDurationTime);
    o.m_CommunicationDurationTimeIsSet = true;
  }
  if (j.find("periodicTime") != j.end()) {
    j.at("periodicTime").get_to(o.m_PeriodicTime);
    o.m_PeriodicTimeIsSet = true;
  }
  if (j.find("scheduledCommunicationTime") != j.end()) {
    j.at("scheduledCommunicationTime").get_to(o.m_ScheduledCommunicationTime);
    o.m_ScheduledCommunicationTimeIsSet = true;
  }
  if (j.find("scheduledCommunicationType") != j.end()) {
    j.at("scheduledCommunicationType").get_to(o.m_ScheduledCommunicationType);
    o.m_ScheduledCommunicationTypeIsSet = true;
  }
  if (j.find("expectedUmts") != j.end()) {
    j.at("expectedUmts").get_to(o.m_ExpectedUmts);
    o.m_ExpectedUmtsIsSet = true;
  }
  if (j.find("trafficProfile") != j.end()) {
    j.at("trafficProfile").get_to(o.m_TrafficProfile);
    o.m_TrafficProfileIsSet = true;
  }
  if (j.find("batteryIndication") != j.end()) {
    j.at("batteryIndication").get_to(o.m_BatteryIndication);
    o.m_BatteryIndicationIsSet = true;
  }
  if (j.find("validityTime") != j.end()) {
    j.at("validityTime").get_to(o.m_ValidityTime);
    o.m_ValidityTimeIsSet = true;
  }
}

oai::model::common::StationaryIndication
ExpectedUeBehaviourData::getStationaryIndication() const {
  return m_StationaryIndication;
}
void ExpectedUeBehaviourData::setStationaryIndication(
    oai::model::common::StationaryIndication const& value) {
  m_StationaryIndication      = value;
  m_StationaryIndicationIsSet = true;
}
bool ExpectedUeBehaviourData::stationaryIndicationIsSet() const {
  return m_StationaryIndicationIsSet;
}
void ExpectedUeBehaviourData::unsetStationaryIndication() {
  m_StationaryIndicationIsSet = false;
}
int32_t ExpectedUeBehaviourData::getCommunicationDurationTime() const {
  return m_CommunicationDurationTime;
}
void ExpectedUeBehaviourData::setCommunicationDurationTime(
    int32_t const value) {
  m_CommunicationDurationTime      = value;
  m_CommunicationDurationTimeIsSet = true;
}
bool ExpectedUeBehaviourData::communicationDurationTimeIsSet() const {
  return m_CommunicationDurationTimeIsSet;
}
void ExpectedUeBehaviourData::unsetCommunicationDurationTime() {
  m_CommunicationDurationTimeIsSet = false;
}
int32_t ExpectedUeBehaviourData::getPeriodicTime() const {
  return m_PeriodicTime;
}
void ExpectedUeBehaviourData::setPeriodicTime(int32_t const value) {
  m_PeriodicTime      = value;
  m_PeriodicTimeIsSet = true;
}
bool ExpectedUeBehaviourData::periodicTimeIsSet() const {
  return m_PeriodicTimeIsSet;
}
void ExpectedUeBehaviourData::unsetPeriodicTime() {
  m_PeriodicTimeIsSet = false;
}
oai::model::common::ScheduledCommunicationTime
ExpectedUeBehaviourData::getScheduledCommunicationTime() const {
  return m_ScheduledCommunicationTime;
}
void ExpectedUeBehaviourData::setScheduledCommunicationTime(
    oai::model::common::ScheduledCommunicationTime const& value) {
  m_ScheduledCommunicationTime      = value;
  m_ScheduledCommunicationTimeIsSet = true;
}
bool ExpectedUeBehaviourData::scheduledCommunicationTimeIsSet() const {
  return m_ScheduledCommunicationTimeIsSet;
}
void ExpectedUeBehaviourData::unsetScheduledCommunicationTime() {
  m_ScheduledCommunicationTimeIsSet = false;
}
oai::model::common::ScheduledCommunicationType
ExpectedUeBehaviourData::getScheduledCommunicationType() const {
  return m_ScheduledCommunicationType;
}
void ExpectedUeBehaviourData::setScheduledCommunicationType(
    oai::model::common::ScheduledCommunicationType const& value) {
  m_ScheduledCommunicationType      = value;
  m_ScheduledCommunicationTypeIsSet = true;
}
bool ExpectedUeBehaviourData::scheduledCommunicationTypeIsSet() const {
  return m_ScheduledCommunicationTypeIsSet;
}
void ExpectedUeBehaviourData::unsetScheduledCommunicationType() {
  m_ScheduledCommunicationTypeIsSet = false;
}
std::vector<LocationArea>& ExpectedUeBehaviourData::getExpectedUmts() {
  return m_ExpectedUmts;
}
void ExpectedUeBehaviourData::setExpectedUmts(
    std::vector<LocationArea> const& value) {
  m_ExpectedUmts      = value;
  m_ExpectedUmtsIsSet = true;
}
bool ExpectedUeBehaviourData::expectedUmtsIsSet() const {
  return m_ExpectedUmtsIsSet;
}
void ExpectedUeBehaviourData::unsetExpectedUmts() {
  m_ExpectedUmtsIsSet = false;
}
oai::model::common::TrafficProfile ExpectedUeBehaviourData::getTrafficProfile()
    const {
  return m_TrafficProfile;
}
void ExpectedUeBehaviourData::setTrafficProfile(
    oai::model::common::TrafficProfile const& value) {
  m_TrafficProfile      = value;
  m_TrafficProfileIsSet = true;
}
bool ExpectedUeBehaviourData::trafficProfileIsSet() const {
  return m_TrafficProfileIsSet;
}
void ExpectedUeBehaviourData::unsetTrafficProfile() {
  m_TrafficProfileIsSet = false;
}
oai::model::common::BatteryIndication
ExpectedUeBehaviourData::getBatteryIndication() const {
  return m_BatteryIndication;
}
void ExpectedUeBehaviourData::setBatteryIndication(
    oai::model::common::BatteryIndication const& value) {
  m_BatteryIndication      = value;
  m_BatteryIndicationIsSet = true;
}
bool ExpectedUeBehaviourData::batteryIndicationIsSet() const {
  return m_BatteryIndicationIsSet;
}
void ExpectedUeBehaviourData::unsetBatteryIndication() {
  m_BatteryIndicationIsSet = false;
}
std::string ExpectedUeBehaviourData::getValidityTime() const {
  return m_ValidityTime;
}
void ExpectedUeBehaviourData::setValidityTime(std::string const& value) {
  m_ValidityTime      = value;
  m_ValidityTimeIsSet = true;
}
bool ExpectedUeBehaviourData::validityTimeIsSet() const {
  return m_ValidityTimeIsSet;
}
void ExpectedUeBehaviourData::unsetValidityTime() {
  m_ValidityTimeIsSet = false;
}

}  // namespace oai::udr::model
