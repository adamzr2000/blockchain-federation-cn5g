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

#include "AmfName.hpp"

#include "ngap_utils.hpp"

namespace oai::ngap {

//------------------------------------------------------------------------------
AmfName::AmfName() {}

//------------------------------------------------------------------------------
AmfName::~AmfName() {}

//------------------------------------------------------------------------------
bool AmfName::set(const std::string& amf_name) {
  if (amf_name.size() > AMF_NAME_SIZE_MAX) return false;
  m_AmfName = amf_name;
  return true;
}

//------------------------------------------------------------------------------
void AmfName::get(std::string& amf_name) const {
  amf_name = m_AmfName;
}

//------------------------------------------------------------------------------
bool AmfName::encode(Ngap_AMFName_t& amf_name) const {
  ngap_utils::string_2_octet_string(m_AmfName, amf_name);
  return true;
}

//------------------------------------------------------------------------------
bool AmfName::decode(const Ngap_AMFName_t& amf_name) {
  if (!amf_name.buf) return false;
  ngap_utils::octet_string_2_string(amf_name, m_AmfName);
  return true;
}

}  // namespace oai::ngap
