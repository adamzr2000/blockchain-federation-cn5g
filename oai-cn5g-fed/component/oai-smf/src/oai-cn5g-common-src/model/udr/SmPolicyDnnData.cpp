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

#include "SmPolicyDnnData.h"

namespace oai::udr::model {

SmPolicyDnnData::SmPolicyDnnData() {
  m_Dnn                      = "";
  m_AllowedServicesIsSet     = false;
  m_SubscCatsIsSet           = false;
  m_GbrUl                    = "";
  m_GbrUlIsSet               = false;
  m_GbrDl                    = "";
  m_GbrDlIsSet               = false;
  m_AdcSupport               = false;
  m_AdcSupportIsSet          = false;
  m_SubscSpendingLimits      = false;
  m_SubscSpendingLimitsIsSet = false;
  m_Ipv4Index                = 0;
  m_Ipv4IndexIsSet           = false;
  m_Ipv6Index                = 0;
  m_Ipv6IndexIsSet           = false;
  m_Offline                  = false;
  m_OfflineIsSet             = false;
  m_Online                   = false;
  m_OnlineIsSet              = false;
  m_ChfInfoIsSet             = false;
  m_RefUmDataLimitIdsIsSet   = false;
  m_MpsPriority              = false;
  m_MpsPriorityIsSet         = false;
  m_McsPriority              = false;
  m_McsPriorityIsSet         = false;
  m_ImsSignallingPrio        = false;
  m_ImsSignallingPrioIsSet   = false;
  m_MpsPriorityLevel         = 0;
  m_MpsPriorityLevelIsSet    = false;
  m_McsPriorityLevel         = 0;
  m_McsPriorityLevelIsSet    = false;
  m_PraInfosIsSet            = false;
  m_BdtRefIdsIsSet           = false;
  m_LocRoutNotAllowed        = false;
  m_LocRoutNotAllowedIsSet   = false;
}

SmPolicyDnnData::~SmPolicyDnnData() {}

void SmPolicyDnnData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const SmPolicyDnnData& o) {
  j        = nlohmann::json();
  j["dnn"] = o.m_Dnn;
  if (o.allowedServicesIsSet() || !o.m_AllowedServices.empty())
    j["allowedServices"] = o.m_AllowedServices;
  if (o.subscCatsIsSet() || !o.m_SubscCats.empty())
    j["subscCats"] = o.m_SubscCats;
  if (o.gbrUlIsSet()) j["gbrUl"] = o.m_GbrUl;
  if (o.gbrDlIsSet()) j["gbrDl"] = o.m_GbrDl;
  if (o.adcSupportIsSet()) j["adcSupport"] = o.m_AdcSupport;
  if (o.subscSpendingLimitsIsSet())
    j["subscSpendingLimits"] = o.m_SubscSpendingLimits;
  if (o.ipv4IndexIsSet()) j["ipv4Index"] = o.m_Ipv4Index;
  if (o.ipv6IndexIsSet()) j["ipv6Index"] = o.m_Ipv6Index;
  if (o.offlineIsSet()) j["offline"] = o.m_Offline;
  if (o.onlineIsSet()) j["online"] = o.m_Online;
  if (o.chfInfoIsSet()) j["chfInfo"] = o.m_ChfInfo;
  if (o.refUmDataLimitIdsIsSet() || !o.m_RefUmDataLimitIds.empty())
    j["refUmDataLimitIds"] = o.m_RefUmDataLimitIds;
  if (o.mpsPriorityIsSet()) j["mpsPriority"] = o.m_MpsPriority;
  if (o.mcsPriorityIsSet()) j["mcsPriority"] = o.m_McsPriority;
  if (o.imsSignallingPrioIsSet())
    j["imsSignallingPrio"] = o.m_ImsSignallingPrio;
  if (o.mpsPriorityLevelIsSet()) j["mpsPriorityLevel"] = o.m_MpsPriorityLevel;
  if (o.mcsPriorityLevelIsSet()) j["mcsPriorityLevel"] = o.m_McsPriorityLevel;
  if (o.praInfosIsSet() || !o.m_PraInfos.empty()) j["praInfos"] = o.m_PraInfos;
  if (o.bdtRefIdsIsSet() || !o.m_BdtRefIds.empty())
    j["bdtRefIds"] = o.m_BdtRefIds;
  if (o.locRoutNotAllowedIsSet())
    j["locRoutNotAllowed"] = o.m_LocRoutNotAllowed;
}

void from_json(const nlohmann::json& j, SmPolicyDnnData& o) {
  j.at("dnn").get_to(o.m_Dnn);
  if (j.find("allowedServices") != j.end()) {
    j.at("allowedServices").get_to(o.m_AllowedServices);
    o.m_AllowedServicesIsSet = true;
  }
  if (j.find("subscCats") != j.end()) {
    j.at("subscCats").get_to(o.m_SubscCats);
    o.m_SubscCatsIsSet = true;
  }
  if (j.find("gbrUl") != j.end()) {
    j.at("gbrUl").get_to(o.m_GbrUl);
    o.m_GbrUlIsSet = true;
  }
  if (j.find("gbrDl") != j.end()) {
    j.at("gbrDl").get_to(o.m_GbrDl);
    o.m_GbrDlIsSet = true;
  }
  if (j.find("adcSupport") != j.end()) {
    j.at("adcSupport").get_to(o.m_AdcSupport);
    o.m_AdcSupportIsSet = true;
  }
  if (j.find("subscSpendingLimits") != j.end()) {
    j.at("subscSpendingLimits").get_to(o.m_SubscSpendingLimits);
    o.m_SubscSpendingLimitsIsSet = true;
  }
  if (j.find("ipv4Index") != j.end()) {
    j.at("ipv4Index").get_to(o.m_Ipv4Index);
    o.m_Ipv4IndexIsSet = true;
  }
  if (j.find("ipv6Index") != j.end()) {
    j.at("ipv6Index").get_to(o.m_Ipv6Index);
    o.m_Ipv6IndexIsSet = true;
  }
  if (j.find("offline") != j.end()) {
    j.at("offline").get_to(o.m_Offline);
    o.m_OfflineIsSet = true;
  }
  if (j.find("online") != j.end()) {
    j.at("online").get_to(o.m_Online);
    o.m_OnlineIsSet = true;
  }
  if (j.find("chfInfo") != j.end()) {
    j.at("chfInfo").get_to(o.m_ChfInfo);
    o.m_ChfInfoIsSet = true;
  }
  if (j.find("refUmDataLimitIds") != j.end()) {
    j.at("refUmDataLimitIds").get_to(o.m_RefUmDataLimitIds);
    o.m_RefUmDataLimitIdsIsSet = true;
  }
  if (j.find("mpsPriority") != j.end()) {
    j.at("mpsPriority").get_to(o.m_MpsPriority);
    o.m_MpsPriorityIsSet = true;
  }
  if (j.find("mcsPriority") != j.end()) {
    j.at("mcsPriority").get_to(o.m_McsPriority);
    o.m_McsPriorityIsSet = true;
  }
  if (j.find("imsSignallingPrio") != j.end()) {
    j.at("imsSignallingPrio").get_to(o.m_ImsSignallingPrio);
    o.m_ImsSignallingPrioIsSet = true;
  }
  if (j.find("mpsPriorityLevel") != j.end()) {
    j.at("mpsPriorityLevel").get_to(o.m_MpsPriorityLevel);
    o.m_MpsPriorityLevelIsSet = true;
  }
  if (j.find("mcsPriorityLevel") != j.end()) {
    j.at("mcsPriorityLevel").get_to(o.m_McsPriorityLevel);
    o.m_McsPriorityLevelIsSet = true;
  }
  if (j.find("praInfos") != j.end()) {
    j.at("praInfos").get_to(o.m_PraInfos);
    o.m_PraInfosIsSet = true;
  }
  if (j.find("bdtRefIds") != j.end()) {
    j.at("bdtRefIds").get_to(o.m_BdtRefIds);
    o.m_BdtRefIdsIsSet = true;
  }
  if (j.find("locRoutNotAllowed") != j.end()) {
    j.at("locRoutNotAllowed").get_to(o.m_LocRoutNotAllowed);
    o.m_LocRoutNotAllowedIsSet = true;
  }
}

std::string SmPolicyDnnData::getDnn() const {
  return m_Dnn;
}
void SmPolicyDnnData::setDnn(std::string const& value) {
  m_Dnn = value;
}
std::vector<std::string>& SmPolicyDnnData::getAllowedServices() {
  return m_AllowedServices;
}
void SmPolicyDnnData::setAllowedServices(
    std::vector<std::string> const& value) {
  m_AllowedServices      = value;
  m_AllowedServicesIsSet = true;
}
bool SmPolicyDnnData::allowedServicesIsSet() const {
  return m_AllowedServicesIsSet;
}
void SmPolicyDnnData::unsetAllowedServices() {
  m_AllowedServicesIsSet = false;
}
std::vector<std::string>& SmPolicyDnnData::getSubscCats() {
  return m_SubscCats;
}
void SmPolicyDnnData::setSubscCats(std::vector<std::string> const& value) {
  m_SubscCats      = value;
  m_SubscCatsIsSet = true;
}
bool SmPolicyDnnData::subscCatsIsSet() const {
  return m_SubscCatsIsSet;
}
void SmPolicyDnnData::unsetSubscCats() {
  m_SubscCatsIsSet = false;
}
std::string SmPolicyDnnData::getGbrUl() const {
  return m_GbrUl;
}
void SmPolicyDnnData::setGbrUl(std::string const& value) {
  m_GbrUl      = value;
  m_GbrUlIsSet = true;
}
bool SmPolicyDnnData::gbrUlIsSet() const {
  return m_GbrUlIsSet;
}
void SmPolicyDnnData::unsetGbrUl() {
  m_GbrUlIsSet = false;
}
std::string SmPolicyDnnData::getGbrDl() const {
  return m_GbrDl;
}
void SmPolicyDnnData::setGbrDl(std::string const& value) {
  m_GbrDl      = value;
  m_GbrDlIsSet = true;
}
bool SmPolicyDnnData::gbrDlIsSet() const {
  return m_GbrDlIsSet;
}
void SmPolicyDnnData::unsetGbrDl() {
  m_GbrDlIsSet = false;
}
bool SmPolicyDnnData::isAdcSupport() const {
  return m_AdcSupport;
}
void SmPolicyDnnData::setAdcSupport(bool const value) {
  m_AdcSupport      = value;
  m_AdcSupportIsSet = true;
}
bool SmPolicyDnnData::adcSupportIsSet() const {
  return m_AdcSupportIsSet;
}
void SmPolicyDnnData::unsetAdcSupport() {
  m_AdcSupportIsSet = false;
}
bool SmPolicyDnnData::isSubscSpendingLimits() const {
  return m_SubscSpendingLimits;
}
void SmPolicyDnnData::setSubscSpendingLimits(bool const value) {
  m_SubscSpendingLimits      = value;
  m_SubscSpendingLimitsIsSet = true;
}
bool SmPolicyDnnData::subscSpendingLimitsIsSet() const {
  return m_SubscSpendingLimitsIsSet;
}
void SmPolicyDnnData::unsetSubscSpendingLimits() {
  m_SubscSpendingLimitsIsSet = false;
}
int32_t SmPolicyDnnData::getIpv4Index() const {
  return m_Ipv4Index;
}
void SmPolicyDnnData::setIpv4Index(int32_t const value) {
  m_Ipv4Index      = value;
  m_Ipv4IndexIsSet = true;
}
bool SmPolicyDnnData::ipv4IndexIsSet() const {
  return m_Ipv4IndexIsSet;
}
void SmPolicyDnnData::unsetIpv4Index() {
  m_Ipv4IndexIsSet = false;
}
int32_t SmPolicyDnnData::getIpv6Index() const {
  return m_Ipv6Index;
}
void SmPolicyDnnData::setIpv6Index(int32_t const value) {
  m_Ipv6Index      = value;
  m_Ipv6IndexIsSet = true;
}
bool SmPolicyDnnData::ipv6IndexIsSet() const {
  return m_Ipv6IndexIsSet;
}
void SmPolicyDnnData::unsetIpv6Index() {
  m_Ipv6IndexIsSet = false;
}
bool SmPolicyDnnData::isOffline() const {
  return m_Offline;
}
void SmPolicyDnnData::setOffline(bool const value) {
  m_Offline      = value;
  m_OfflineIsSet = true;
}
bool SmPolicyDnnData::offlineIsSet() const {
  return m_OfflineIsSet;
}
void SmPolicyDnnData::unsetOffline() {
  m_OfflineIsSet = false;
}
bool SmPolicyDnnData::isOnline() const {
  return m_Online;
}
void SmPolicyDnnData::setOnline(bool const value) {
  m_Online      = value;
  m_OnlineIsSet = true;
}
bool SmPolicyDnnData::onlineIsSet() const {
  return m_OnlineIsSet;
}
void SmPolicyDnnData::unsetOnline() {
  m_OnlineIsSet = false;
}
ChargingInformation SmPolicyDnnData::getChfInfo() const {
  return m_ChfInfo;
}
void SmPolicyDnnData::setChfInfo(ChargingInformation const& value) {
  m_ChfInfo      = value;
  m_ChfInfoIsSet = true;
}
bool SmPolicyDnnData::chfInfoIsSet() const {
  return m_ChfInfoIsSet;
}
void SmPolicyDnnData::unsetChfInfo() {
  m_ChfInfoIsSet = false;
}
std::map<std::string, LimitIdToMonitoringKey>&
SmPolicyDnnData::getRefUmDataLimitIds() {
  return m_RefUmDataLimitIds;
}
void SmPolicyDnnData::setRefUmDataLimitIds(
    std::map<std::string, LimitIdToMonitoringKey> const& value) {
  m_RefUmDataLimitIds      = value;
  m_RefUmDataLimitIdsIsSet = true;
}
bool SmPolicyDnnData::refUmDataLimitIdsIsSet() const {
  return m_RefUmDataLimitIdsIsSet;
}
void SmPolicyDnnData::unsetRefUmDataLimitIds() {
  m_RefUmDataLimitIdsIsSet = false;
}
bool SmPolicyDnnData::isMpsPriority() const {
  return m_MpsPriority;
}
void SmPolicyDnnData::setMpsPriority(bool const value) {
  m_MpsPriority      = value;
  m_MpsPriorityIsSet = true;
}
bool SmPolicyDnnData::mpsPriorityIsSet() const {
  return m_MpsPriorityIsSet;
}
void SmPolicyDnnData::unsetMpsPriority() {
  m_MpsPriorityIsSet = false;
}
bool SmPolicyDnnData::isMcsPriority() const {
  return m_McsPriority;
}
void SmPolicyDnnData::setMcsPriority(bool const value) {
  m_McsPriority      = value;
  m_McsPriorityIsSet = true;
}
bool SmPolicyDnnData::mcsPriorityIsSet() const {
  return m_McsPriorityIsSet;
}
void SmPolicyDnnData::unsetMcsPriority() {
  m_McsPriorityIsSet = false;
}
bool SmPolicyDnnData::isImsSignallingPrio() const {
  return m_ImsSignallingPrio;
}
void SmPolicyDnnData::setImsSignallingPrio(bool const value) {
  m_ImsSignallingPrio      = value;
  m_ImsSignallingPrioIsSet = true;
}
bool SmPolicyDnnData::imsSignallingPrioIsSet() const {
  return m_ImsSignallingPrioIsSet;
}
void SmPolicyDnnData::unsetImsSignallingPrio() {
  m_ImsSignallingPrioIsSet = false;
}
int32_t SmPolicyDnnData::getMpsPriorityLevel() const {
  return m_MpsPriorityLevel;
}
void SmPolicyDnnData::setMpsPriorityLevel(int32_t const value) {
  m_MpsPriorityLevel      = value;
  m_MpsPriorityLevelIsSet = true;
}
bool SmPolicyDnnData::mpsPriorityLevelIsSet() const {
  return m_MpsPriorityLevelIsSet;
}
void SmPolicyDnnData::unsetMpsPriorityLevel() {
  m_MpsPriorityLevelIsSet = false;
}
int32_t SmPolicyDnnData::getMcsPriorityLevel() const {
  return m_McsPriorityLevel;
}
void SmPolicyDnnData::setMcsPriorityLevel(int32_t const value) {
  m_McsPriorityLevel      = value;
  m_McsPriorityLevelIsSet = true;
}
bool SmPolicyDnnData::mcsPriorityLevelIsSet() const {
  return m_McsPriorityLevelIsSet;
}
void SmPolicyDnnData::unsetMcsPriorityLevel() {
  m_McsPriorityLevelIsSet = false;
}
std::map<std::string, oai::model::common::PresenceInfo>&
SmPolicyDnnData::getPraInfos() {
  return m_PraInfos;
}
void SmPolicyDnnData::setPraInfos(
    std::map<std::string, oai::model::common::PresenceInfo> const& value) {
  m_PraInfos      = value;
  m_PraInfosIsSet = true;
}
bool SmPolicyDnnData::praInfosIsSet() const {
  return m_PraInfosIsSet;
}
void SmPolicyDnnData::unsetPraInfos() {
  m_PraInfosIsSet = false;
}
std::map<std::string, std::string>& SmPolicyDnnData::getBdtRefIds() {
  return m_BdtRefIds;
}
void SmPolicyDnnData::setBdtRefIds(
    std::map<std::string, std::string> const& value) {
  m_BdtRefIds      = value;
  m_BdtRefIdsIsSet = true;
}
bool SmPolicyDnnData::bdtRefIdsIsSet() const {
  return m_BdtRefIdsIsSet;
}
void SmPolicyDnnData::unsetBdtRefIds() {
  m_BdtRefIdsIsSet = false;
}
bool SmPolicyDnnData::isLocRoutNotAllowed() const {
  return m_LocRoutNotAllowed;
}
void SmPolicyDnnData::setLocRoutNotAllowed(bool const value) {
  m_LocRoutNotAllowed      = value;
  m_LocRoutNotAllowedIsSet = true;
}
bool SmPolicyDnnData::locRoutNotAllowedIsSet() const {
  return m_LocRoutNotAllowedIsSet;
}
void SmPolicyDnnData::unsetLocRoutNotAllowed() {
  m_LocRoutNotAllowedIsSet = false;
}

}  // namespace oai::udr::model
