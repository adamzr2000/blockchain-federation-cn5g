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
 * Nudm_UECM
 * Nudm Context Management Service. � 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SmsfRegistration.h"

namespace oai::model::udm {

SmsfRegistration::SmsfRegistration() {
  m_SmsfInstanceId           = "";
  m_SmsfSetId                = "";
  m_SmsfSetIdIsSet           = false;
  m_SupportedFeatures        = "";
  m_SupportedFeaturesIsSet   = false;
  m_SmsfMAPAddress           = "";
  m_SmsfMAPAddressIsSet      = false;
  m_SmsfDiameterAddressIsSet = false;
  m_RegistrationTime         = "";
  m_RegistrationTimeIsSet    = false;
  m_ContextInfoIsSet         = false;
}

SmsfRegistration::~SmsfRegistration() {}

void SmsfRegistration::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const SmsfRegistration& o) {
  j                   = nlohmann::json();
  j["smsfInstanceId"] = o.m_SmsfInstanceId;
  if (o.smsfSetIdIsSet()) j["smsfSetId"] = o.m_SmsfSetId;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
  j["plmnId"] = o.m_PlmnId;
  if (o.smsfMAPAddressIsSet()) j["smsfMAPAddress"] = o.m_SmsfMAPAddress;
  if (o.smsfDiameterAddressIsSet())
    j["smsfDiameterAddress"] = o.m_SmsfDiameterAddress;
  if (o.registrationTimeIsSet()) j["registrationTime"] = o.m_RegistrationTime;
  if (o.contextInfoIsSet()) j["contextInfo"] = o.m_ContextInfo;
}

void from_json(const nlohmann::json& j, SmsfRegistration& o) {
  j.at("smsfInstanceId").get_to(o.m_SmsfInstanceId);
  if (j.find("smsfSetId") != j.end()) {
    j.at("smsfSetId").get_to(o.m_SmsfSetId);
    o.m_SmsfSetIdIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
  j.at("plmnId").get_to(o.m_PlmnId);
  if (j.find("smsfMAPAddress") != j.end()) {
    j.at("smsfMAPAddress").get_to(o.m_SmsfMAPAddress);
    o.m_SmsfMAPAddressIsSet = true;
  }
  if (j.find("smsfDiameterAddress") != j.end()) {
    j.at("smsfDiameterAddress").get_to(o.m_SmsfDiameterAddress);
    o.m_SmsfDiameterAddressIsSet = true;
  }
  if (j.find("registrationTime") != j.end()) {
    j.at("registrationTime").get_to(o.m_RegistrationTime);
    o.m_RegistrationTimeIsSet = true;
  }
  if (j.find("contextInfo") != j.end()) {
    j.at("contextInfo").get_to(o.m_ContextInfo);
    o.m_ContextInfoIsSet = true;
  }
}

std::string SmsfRegistration::getSmsfInstanceId() const {
  return m_SmsfInstanceId;
}
void SmsfRegistration::setSmsfInstanceId(std::string const& value) {
  m_SmsfInstanceId = value;
}
std::string SmsfRegistration::getSmsfSetId() const {
  return m_SmsfSetId;
}
void SmsfRegistration::setSmsfSetId(std::string const& value) {
  m_SmsfSetId      = value;
  m_SmsfSetIdIsSet = true;
}
bool SmsfRegistration::smsfSetIdIsSet() const {
  return m_SmsfSetIdIsSet;
}
void SmsfRegistration::unsetSmsfSetId() {
  m_SmsfSetIdIsSet = false;
}
std::string SmsfRegistration::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void SmsfRegistration::setSupportedFeatures(std::string const& value) {
  m_SupportedFeatures      = value;
  m_SupportedFeaturesIsSet = true;
}
bool SmsfRegistration::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void SmsfRegistration::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}
oai::model::common::PlmnId SmsfRegistration::getPlmnId() const {
  return m_PlmnId;
}
void SmsfRegistration::setPlmnId(oai::model::common::PlmnId const& value) {
  m_PlmnId = value;
}
std::string SmsfRegistration::getSmsfMAPAddress() const {
  return m_SmsfMAPAddress;
}
void SmsfRegistration::setSmsfMAPAddress(std::string const& value) {
  m_SmsfMAPAddress      = value;
  m_SmsfMAPAddressIsSet = true;
}
bool SmsfRegistration::smsfMAPAddressIsSet() const {
  return m_SmsfMAPAddressIsSet;
}
void SmsfRegistration::unsetSmsfMAPAddress() {
  m_SmsfMAPAddressIsSet = false;
}
NetworkNodeDiameterAddress SmsfRegistration::getSmsfDiameterAddress() const {
  return m_SmsfDiameterAddress;
}
void SmsfRegistration::setSmsfDiameterAddress(
    NetworkNodeDiameterAddress const& value) {
  m_SmsfDiameterAddress      = value;
  m_SmsfDiameterAddressIsSet = true;
}
bool SmsfRegistration::smsfDiameterAddressIsSet() const {
  return m_SmsfDiameterAddressIsSet;
}
void SmsfRegistration::unsetSmsfDiameterAddress() {
  m_SmsfDiameterAddressIsSet = false;
}
std::string SmsfRegistration::getRegistrationTime() const {
  return m_RegistrationTime;
}
void SmsfRegistration::setRegistrationTime(std::string const& value) {
  m_RegistrationTime      = value;
  m_RegistrationTimeIsSet = true;
}
bool SmsfRegistration::registrationTimeIsSet() const {
  return m_RegistrationTimeIsSet;
}
void SmsfRegistration::unsetRegistrationTime() {
  m_RegistrationTimeIsSet = false;
}
ContextInfo SmsfRegistration::getContextInfo() const {
  return m_ContextInfo;
}
void SmsfRegistration::setContextInfo(ContextInfo const& value) {
  m_ContextInfo      = value;
  m_ContextInfoIsSet = true;
}
bool SmsfRegistration::contextInfoIsSet() const {
  return m_ContextInfoIsSet;
}
void SmsfRegistration::unsetContextInfo() {
  m_ContextInfoIsSet = false;
}

}  // namespace oai::model::udm
