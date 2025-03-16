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

#ifndef _UE_ASSOCIATED_LOGICAL_NG_CONNECTION_LIST_H_
#define _UE_ASSOCIATED_LOGICAL_NG_CONNECTION_LIST_H_

#include <vector>

#include "UeAssociatedLogicalNgConnectionItem.hpp"

extern "C" {
#include "Ngap_ProtocolIE-Field.h"
#include "Ngap_UE-associatedLogicalNG-connectionList.h"
}

namespace oai::ngap {

class UeAssociatedLogicalNgConnectionList {
 public:
  UeAssociatedLogicalNgConnectionList();
  virtual ~UeAssociatedLogicalNgConnectionList();

  void set(const std::vector<UeAssociatedLogicalNgConnectionItem>& list);
  void get(std::vector<UeAssociatedLogicalNgConnectionItem>& list) const;

  void addItem(UeAssociatedLogicalNgConnectionItem& item);

  bool encode(Ngap_UE_associatedLogicalNG_connectionList_t& list) const;
  bool decode(const Ngap_UE_associatedLogicalNG_connectionList_t& list);

 private:
  std::vector<UeAssociatedLogicalNgConnectionItem> m_ItemList;
};

}  // namespace oai::ngap
#endif
