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

#include "AdditionalQosFlowInformation.hpp"

namespace oai::ngap {

//------------------------------------------------------------------------------
AdditionalQosFlowInformation::AdditionalQosFlowInformation() {
  m_QosFlowInfo = 0;
}

//------------------------------------------------------------------------------
AdditionalQosFlowInformation::AdditionalQosFlowInformation(
    e_Ngap_AdditionalQosFlowInformation value) {
  m_QosFlowInfo = value;
}
//------------------------------------------------------------------------------
AdditionalQosFlowInformation::~AdditionalQosFlowInformation() {}

//------------------------------------------------------------------------------
void AdditionalQosFlowInformation::set(
    e_Ngap_AdditionalQosFlowInformation value) {
  m_QosFlowInfo = value;
}

//------------------------------------------------------------------------------
bool AdditionalQosFlowInformation::get(
    e_Ngap_AdditionalQosFlowInformation& value) const {
  if (m_QosFlowInfo == Ngap_AdditionalQosFlowInformation_more_likely)
    value = (e_Ngap_AdditionalQosFlowInformation) m_QosFlowInfo;
  else
    return false;

  return true;
}

//------------------------------------------------------------------------------
bool AdditionalQosFlowInformation::encode(
    Ngap_AdditionalQosFlowInformation_t& value) const {
  value = m_QosFlowInfo;

  return true;
}

//------------------------------------------------------------------------------
bool AdditionalQosFlowInformation::decode(
    const Ngap_AdditionalQosFlowInformation_t& value) {
  m_QosFlowInfo = value;

  return true;
}
}  // namespace oai::ngap
