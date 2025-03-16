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

#include "IndexToRfsp.hpp"

namespace oai::ngap {

//------------------------------------------------------------------------------
IndexToRfsp::IndexToRfsp() {
  m_Index = 0;
}
//------------------------------------------------------------------------------
IndexToRfsp::IndexToRfsp(const uint32_t& index) : m_Index(index) {}
//------------------------------------------------------------------------------
IndexToRfsp::~IndexToRfsp() {}

//------------------------------------------------------------------------------
void IndexToRfsp::set(const uint32_t& index) {
  m_Index = index;
}

//------------------------------------------------------------------------------
uint32_t IndexToRfsp::get() const {
  return m_Index;
}

//------------------------------------------------------------------------------
bool IndexToRfsp::encode(Ngap_IndexToRFSP_t& index) const {
  index = m_Index;
  return true;
}

//------------------------------------------------------------------------------
bool IndexToRfsp::decode(const Ngap_IndexToRFSP_t& index) {
  m_Index = index;
  return true;
}
}  // namespace oai::ngap
