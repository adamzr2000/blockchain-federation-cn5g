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

#ifndef _QOS_FLOW_ITEM_WITH_DATA_FORWARDING_H_
#define _QOS_FLOW_ITEM_WITH_DATA_FORWARDING_H_

#include <optional>

#include "QosFlowIdentifier.hpp"
#include "QosFlowLevelQosParameters.hpp"

extern "C" {
#include "Ngap_QosFlowItemWithDataForwarding.h"
}

namespace oai::ngap {

class QosFlowItemWithDataForWarding {
 public:
  QosFlowItemWithDataForWarding();
  virtual ~QosFlowItemWithDataForWarding();

  void set(
      const QosFlowIdentifier& qfi,
      const std::optional<long>& dataForwardingAccepted);

  void getQosFlowIdentifier(Ngap_QosFlowIdentifier_t& qfi) const;

  bool decode(const Ngap_QosFlowItemWithDataForwarding_t& qosFlowItem);
  // TODO: encode

 private:
  QosFlowIdentifier m_Qfi;                       // Mandatory
  std::optional<long> m_DataForwardingAccepted;  // Optional
};
}  // namespace oai::ngap

#endif  // !_QOSFLOWITEMWITHDATAFORWARDING_H_
