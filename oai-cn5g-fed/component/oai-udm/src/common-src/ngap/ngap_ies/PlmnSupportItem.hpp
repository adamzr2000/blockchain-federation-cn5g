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

#ifndef _PLMN_SUPPORT_ITEM_H_
#define _PLMN_SUPPORT_ITEM_H_

#include <vector>

#include "PlmnId.hpp"
#include "SNssai.hpp"

extern "C" {
#include "Ngap_PLMNSupportItem.h"
}

namespace oai::ngap {

class PlmnSupportItem {
 public:
  PlmnSupportItem();
  virtual ~PlmnSupportItem();

  void set(const PlmnId& plmnId, const std::vector<SNssai>& sNssais);
  void get(PlmnId& plmnId, std::vector<SNssai>& sNssais) const;

  bool encode(Ngap_PLMNSupportItem_t&) const;
  bool decode(const Ngap_PLMNSupportItem_t&);

 private:
  PlmnId m_PlmnId;                         // Mandatory
  std::vector<SNssai> m_SliceSupportList;  // Mandatory
};

}  // namespace oai::ngap

#endif
