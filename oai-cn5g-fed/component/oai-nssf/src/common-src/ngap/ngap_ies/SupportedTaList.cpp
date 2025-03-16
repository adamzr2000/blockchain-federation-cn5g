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

#include "SupportedTaList.hpp"

namespace oai::ngap {

//------------------------------------------------------------------------------
SupportedTaList::SupportedTaList() {}

//------------------------------------------------------------------------------
SupportedTaList::~SupportedTaList() {}

//------------------------------------------------------------------------------
bool SupportedTaList::encode(Ngap_SupportedTAList_t& supportedTaList) const {
  for (std::vector<SupportedTaItem>::const_iterator it =
           m_SupportedTaItems.begin();
       it < m_SupportedTaItems.end(); ++it) {
    Ngap_SupportedTAItem_t* ta =
        (Ngap_SupportedTAItem_t*) calloc(1, sizeof(Ngap_SupportedTAItem_t));
    if (!it->encode(*ta)) return false;
    if (ASN_SEQUENCE_ADD(&supportedTaList.list, ta) != 0) return false;
  }
  return true;
}

//------------------------------------------------------------------------------
bool SupportedTaList::decode(const Ngap_SupportedTAList_t& supportedTaList) {
  for (int i = 0; i < supportedTaList.list.count; i++) {
    SupportedTaItem item = {};
    if (!item.decode(*supportedTaList.list.array[i])) return false;
    m_SupportedTaItems.push_back(item);
  }

  return true;
}

//------------------------------------------------------------------------------
void SupportedTaList::setSupportedTaItems(
    const std::vector<SupportedTaItem>& items) {
  m_SupportedTaItems = items;
}

//------------------------------------------------------------------------------
void SupportedTaList::getSupportedTaItems(
    std::vector<SupportedTaItem>& items) const {
  items = m_SupportedTaItems;
}

}  // namespace oai::ngap
