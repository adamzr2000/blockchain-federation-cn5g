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

#include "AssociatedQosFlowList.hpp"

#include "utils.hpp"

namespace oai::ngap {

//------------------------------------------------------------------------------
AssociatedQosFlowList::AssociatedQosFlowList() {}

//------------------------------------------------------------------------------
AssociatedQosFlowList::~AssociatedQosFlowList() {}

//------------------------------------------------------------------------------
void AssociatedQosFlowList::set(
    const std::vector<AssociatedQosFlowItem>& item_list) {
  uint8_t actual_size = (item_list.size() > kMaxNoOfQoSFlows) ?
                            kMaxNoOfQoSFlows :
                            item_list.size();
  for (int i = 0; i < actual_size; i++) {
    m_List.push_back(item_list[i]);
  }
}

//------------------------------------------------------------------------------
void AssociatedQosFlowList::get(
    std::vector<AssociatedQosFlowItem>& item_list) const {
  item_list = m_List;
}

//------------------------------------------------------------------------------
bool AssociatedQosFlowList::encode(
    Ngap_AssociatedQosFlowList_t& associatedQosFlowList) const {
  for (int i = 0; i < m_List.size(); i++) {
    Ngap_AssociatedQosFlowItem_t* ie = (Ngap_AssociatedQosFlowItem_t*) calloc(
        1, sizeof(Ngap_AssociatedQosFlowItem_t));
    if (!ie) return false;
    if (!m_List[i].encode(*ie)) {
      oai::utils::utils::free_wrapper((void**) &ie);
      return false;
    }
    if (ASN_SEQUENCE_ADD(&associatedQosFlowList.list, ie) != 0) {
      oai::utils::utils::free_wrapper((void**) &ie);
      return false;
    }
    oai::utils::utils::free_wrapper((void**) &ie);
  }
  return true;
}

//------------------------------------------------------------------------------
bool AssociatedQosFlowList::decode(
    const Ngap_AssociatedQosFlowList_t& associatedQosFlowList) {
  uint8_t actual_size = (associatedQosFlowList.list.count > kMaxNoOfQoSFlows) ?
                            kMaxNoOfQoSFlows :
                            associatedQosFlowList.list.count;
  for (int i = 0; i < actual_size; i++) {
    AssociatedQosFlowItem item = {};
    if (!item.decode(*associatedQosFlowList.list.array[i])) return false;
    m_List.push_back(item);
  }
  return true;
}

}  // namespace oai::ngap
