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

#include "NetworkNodeDiameterAddress.h"

namespace oai::model::udm {

NetworkNodeDiameterAddress::NetworkNodeDiameterAddress() {
  m_Name  = "";
  m_Realm = "";
}

NetworkNodeDiameterAddress::~NetworkNodeDiameterAddress() {}

void NetworkNodeDiameterAddress::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const NetworkNodeDiameterAddress& o) {
  j          = nlohmann::json();
  j["name"]  = o.m_Name;
  j["realm"] = o.m_Realm;
}

void from_json(const nlohmann::json& j, NetworkNodeDiameterAddress& o) {
  j.at("name").get_to(o.m_Name);
  j.at("realm").get_to(o.m_Realm);
}

std::string NetworkNodeDiameterAddress::getName() const {
  return m_Name;
}
void NetworkNodeDiameterAddress::setName(std::string const& value) {
  m_Name = value;
}
std::string NetworkNodeDiameterAddress::getRealm() const {
  return m_Realm;
}
void NetworkNodeDiameterAddress::setRealm(std::string const& value) {
  m_Realm = value;
}

}  // namespace oai::model::udm
