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

#include "DrbsSubjectToStatusTransferList.hpp"

#include "logger.hpp"
#include "utils.hpp"

namespace oai::ngap {
//------------------------------------------------------------------------------
DrbSubjectToStatusTransferList::DrbSubjectToStatusTransferList() {}

//------------------------------------------------------------------------------
DrbSubjectToStatusTransferList::~DrbSubjectToStatusTransferList() {}

//------------------------------------------------------------------------------
void DrbSubjectToStatusTransferList::set(
    const std::vector<DrbSubjectToStatusTransferItem>& list) {
  m_ItemList = list;
}

//------------------------------------------------------------------------------
void DrbSubjectToStatusTransferList::get(
    std::vector<DrbSubjectToStatusTransferItem>& list) const {
  list = m_ItemList;
}

//------------------------------------------------------------------------------
bool DrbSubjectToStatusTransferList::encode(
    Ngap_DRBsSubjectToStatusTransferList_t& drbsSubjectToStatusTransferList)
    const {
  for (auto& item : m_ItemList) {
    Ngap_DRBsSubjectToStatusTransferItem_t* ie =
        (Ngap_DRBsSubjectToStatusTransferItem_t*) calloc(
            1, sizeof(Ngap_DRBsSubjectToStatusTransferItem_t));
    if (!ie) return false;

    if (!item.encode(*ie)) {
      Logger::ngap().error("Encode DrbSubjectToStatusTransferList IE error!");
      oai::utils::utils::free_wrapper((void**) &ie);
      return false;
    }
    if (ASN_SEQUENCE_ADD(&drbsSubjectToStatusTransferList.list, ie) != 0) {
      Logger::ngap().error(
          "ASN_SEQUENCE_ADD DrbSubjectToStatusTransferList IE error!");
      return false;
    }
  }
  return true;
}

//------------------------------------------------------------------------------
bool DrbSubjectToStatusTransferList::decode(
    const Ngap_DRBsSubjectToStatusTransferList_t&
        drbsSubjectToStatusTransferList) {
  for (int i = 0; i < drbsSubjectToStatusTransferList.list.count; i++) {
    DrbSubjectToStatusTransferItem item = {};
    if (!item.decode(*drbsSubjectToStatusTransferList.list.array[i])) {
      Logger::ngap().error("Decode DrbSubjectToStatusTransferList IE error!");
      return false;
    }
    m_ItemList.push_back(item);
  }
  return true;
}
}  // namespace oai::ngap
