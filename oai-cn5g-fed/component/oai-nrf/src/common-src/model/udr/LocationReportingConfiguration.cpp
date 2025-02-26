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

#include "LocationReportingConfiguration.h"

namespace oai::udr::model {

LocationReportingConfiguration::LocationReportingConfiguration() {
  m_CurrentLocation    = false;
  m_OneTime            = false;
  m_OneTimeIsSet       = false;
  m_AccuracyIsSet      = false;
  m_N3gppAccuracyIsSet = false;
}

LocationReportingConfiguration::~LocationReportingConfiguration() {}

void LocationReportingConfiguration::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const LocationReportingConfiguration& o) {
  j                    = nlohmann::json();
  j["currentLocation"] = o.m_CurrentLocation;
  if (o.oneTimeIsSet()) j["oneTime"] = o.m_OneTime;
  if (o.accuracyIsSet()) j["accuracy"] = o.m_Accuracy;
  if (o.n3gppAccuracyIsSet()) j["n3gppAccuracy"] = o.m_N3gppAccuracy;
}

void from_json(const nlohmann::json& j, LocationReportingConfiguration& o) {
  j.at("currentLocation").get_to(o.m_CurrentLocation);
  if (j.find("oneTime") != j.end()) {
    j.at("oneTime").get_to(o.m_OneTime);
    o.m_OneTimeIsSet = true;
  }
  if (j.find("accuracy") != j.end()) {
    j.at("accuracy").get_to(o.m_Accuracy);
    o.m_AccuracyIsSet = true;
  }
  if (j.find("n3gppAccuracy") != j.end()) {
    j.at("n3gppAccuracy").get_to(o.m_N3gppAccuracy);
    o.m_N3gppAccuracyIsSet = true;
  }
}

bool LocationReportingConfiguration::isCurrentLocation() const {
  return m_CurrentLocation;
}
void LocationReportingConfiguration::setCurrentLocation(bool const value) {
  m_CurrentLocation = value;
}
bool LocationReportingConfiguration::isOneTime() const {
  return m_OneTime;
}
void LocationReportingConfiguration::setOneTime(bool const value) {
  m_OneTime      = value;
  m_OneTimeIsSet = true;
}
bool LocationReportingConfiguration::oneTimeIsSet() const {
  return m_OneTimeIsSet;
}
void LocationReportingConfiguration::unsetOneTime() {
  m_OneTimeIsSet = false;
}
LocationAccuracy LocationReportingConfiguration::getAccuracy() const {
  return m_Accuracy;
}
void LocationReportingConfiguration::setAccuracy(
    LocationAccuracy const& value) {
  m_Accuracy      = value;
  m_AccuracyIsSet = true;
}
bool LocationReportingConfiguration::accuracyIsSet() const {
  return m_AccuracyIsSet;
}
void LocationReportingConfiguration::unsetAccuracy() {
  m_AccuracyIsSet = false;
}
LocationAccuracy LocationReportingConfiguration::getN3gppAccuracy() const {
  return m_N3gppAccuracy;
}
void LocationReportingConfiguration::setN3gppAccuracy(
    LocationAccuracy const& value) {
  m_N3gppAccuracy      = value;
  m_N3gppAccuracyIsSet = true;
}
bool LocationReportingConfiguration::n3gppAccuracyIsSet() const {
  return m_N3gppAccuracyIsSet;
}
void LocationReportingConfiguration::unsetN3gppAccuracy() {
  m_N3gppAccuracyIsSet = false;
}

}  // namespace oai::udr::model
