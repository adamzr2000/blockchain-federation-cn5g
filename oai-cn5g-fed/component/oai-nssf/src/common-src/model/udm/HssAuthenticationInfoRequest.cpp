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
 * Nudm_UEAU
 * UDM UE Authentication Service. � 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "HssAuthenticationInfoRequest.h"

namespace oai::model::udm {

HssAuthenticationInfoRequest::HssAuthenticationInfoRequest() {
  m_SupportedFeatures          = "";
  m_SupportedFeaturesIsSet     = false;
  m_NumOfRequestedVectors      = 0;
  m_RequestingNodeTypeIsSet    = false;
  m_ServingNetworkIdIsSet      = false;
  m_ResynchronizationInfoIsSet = false;
  m_AnIdIsSet                  = false;
}

HssAuthenticationInfoRequest::~HssAuthenticationInfoRequest() {}

void HssAuthenticationInfoRequest::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const HssAuthenticationInfoRequest& o) {
  j = nlohmann::json();
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
  j["hssAuthType"]           = o.m_HssAuthType;
  j["numOfRequestedVectors"] = o.m_NumOfRequestedVectors;
  if (o.requestingNodeTypeIsSet())
    j["requestingNodeType"] = o.m_RequestingNodeType;
  if (o.servingNetworkIdIsSet()) j["servingNetworkId"] = o.m_ServingNetworkId;
  if (o.resynchronizationInfoIsSet())
    j["resynchronizationInfo"] = o.m_ResynchronizationInfo;
  if (o.anIdIsSet()) j["anId"] = o.m_AnId;
}

void from_json(const nlohmann::json& j, HssAuthenticationInfoRequest& o) {
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
  j.at("hssAuthType").get_to(o.m_HssAuthType);
  j.at("numOfRequestedVectors").get_to(o.m_NumOfRequestedVectors);
  if (j.find("requestingNodeType") != j.end()) {
    j.at("requestingNodeType").get_to(o.m_RequestingNodeType);
    o.m_RequestingNodeTypeIsSet = true;
  }
  if (j.find("servingNetworkId") != j.end()) {
    j.at("servingNetworkId").get_to(o.m_ServingNetworkId);
    o.m_ServingNetworkIdIsSet = true;
  }
  if (j.find("resynchronizationInfo") != j.end()) {
    j.at("resynchronizationInfo").get_to(o.m_ResynchronizationInfo);
    o.m_ResynchronizationInfoIsSet = true;
  }
  if (j.find("anId") != j.end()) {
    j.at("anId").get_to(o.m_AnId);
    o.m_AnIdIsSet = true;
  }
}

std::string HssAuthenticationInfoRequest::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void HssAuthenticationInfoRequest::setSupportedFeatures(
    std::string const& value) {
  m_SupportedFeatures      = value;
  m_SupportedFeaturesIsSet = true;
}
bool HssAuthenticationInfoRequest::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void HssAuthenticationInfoRequest::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}
HssAuthType HssAuthenticationInfoRequest::getHssAuthType() const {
  return m_HssAuthType;
}
void HssAuthenticationInfoRequest::setHssAuthType(HssAuthType const& value) {
  m_HssAuthType = value;
}
int32_t HssAuthenticationInfoRequest::getNumOfRequestedVectors() const {
  return m_NumOfRequestedVectors;
}
void HssAuthenticationInfoRequest::setNumOfRequestedVectors(
    int32_t const value) {
  m_NumOfRequestedVectors = value;
}
NodeType HssAuthenticationInfoRequest::getRequestingNodeType() const {
  return m_RequestingNodeType;
}
void HssAuthenticationInfoRequest::setRequestingNodeType(
    NodeType const& value) {
  m_RequestingNodeType      = value;
  m_RequestingNodeTypeIsSet = true;
}
bool HssAuthenticationInfoRequest::requestingNodeTypeIsSet() const {
  return m_RequestingNodeTypeIsSet;
}
void HssAuthenticationInfoRequest::unsetRequestingNodeType() {
  m_RequestingNodeTypeIsSet = false;
}
oai::model::common::PlmnId HssAuthenticationInfoRequest::getServingNetworkId()
    const {
  return m_ServingNetworkId;
}
void HssAuthenticationInfoRequest::setServingNetworkId(
    oai::model::common::PlmnId const& value) {
  m_ServingNetworkId      = value;
  m_ServingNetworkIdIsSet = true;
}
bool HssAuthenticationInfoRequest::servingNetworkIdIsSet() const {
  return m_ServingNetworkIdIsSet;
}
void HssAuthenticationInfoRequest::unsetServingNetworkId() {
  m_ServingNetworkIdIsSet = false;
}
ResynchronizationInfo HssAuthenticationInfoRequest::getResynchronizationInfo()
    const {
  return m_ResynchronizationInfo;
}
void HssAuthenticationInfoRequest::setResynchronizationInfo(
    ResynchronizationInfo const& value) {
  m_ResynchronizationInfo      = value;
  m_ResynchronizationInfoIsSet = true;
}
bool HssAuthenticationInfoRequest::resynchronizationInfoIsSet() const {
  return m_ResynchronizationInfoIsSet;
}
void HssAuthenticationInfoRequest::unsetResynchronizationInfo() {
  m_ResynchronizationInfoIsSet = false;
}
AccessNetworkId HssAuthenticationInfoRequest::getAnId() const {
  return m_AnId;
}
void HssAuthenticationInfoRequest::setAnId(AccessNetworkId const& value) {
  m_AnId      = value;
  m_AnIdIsSet = true;
}
bool HssAuthenticationInfoRequest::anIdIsSet() const {
  return m_AnIdIsSet;
}
void HssAuthenticationInfoRequest::unsetAnId() {
  m_AnIdIsSet = false;
}

}  // namespace oai::model::udm
