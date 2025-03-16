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

#include "UeRetentionInformation.hpp"

namespace oai::ngap {

//------------------------------------------------------------------------------
UeRetentionInformation::UeRetentionInformation() {
  m_UeRetentionInformation = Ngap_UERetentionInformation_ues_retained;
}

//------------------------------------------------------------------------------
UeRetentionInformation::~UeRetentionInformation() {}

//------------------------------------------------------------------------------
void UeRetentionInformation::set(const long value) {
  m_UeRetentionInformation = value;
}

//------------------------------------------------------------------------------
void UeRetentionInformation::get(long& value) const {
  value = m_UeRetentionInformation;
}

//------------------------------------------------------------------------------
void UeRetentionInformation::set(const e_Ngap_UERetentionInformation& value) {
  m_UeRetentionInformation = static_cast<long>(value);
}

//------------------------------------------------------------------------------
void UeRetentionInformation::get(e_Ngap_UERetentionInformation& value) const {
  value = static_cast<e_Ngap_UERetentionInformation>(m_UeRetentionInformation);
}

//------------------------------------------------------------------------------
e_Ngap_UERetentionInformation UeRetentionInformation::get() const {
  return static_cast<e_Ngap_UERetentionInformation>(m_UeRetentionInformation);
}

//------------------------------------------------------------------------------
bool UeRetentionInformation::encode(
    Ngap_UERetentionInformation_t& value) const {
  value = m_UeRetentionInformation;
  return true;
}

//------------------------------------------------------------------------------
bool UeRetentionInformation::decode(Ngap_UERetentionInformation_t value) {
  m_UeRetentionInformation = value;
  return true;
}

}  // namespace oai::ngap
