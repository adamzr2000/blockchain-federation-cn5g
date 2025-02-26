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

#ifndef _HANDOVER_NOTIFY_MSG_H_
#define _HANDOVER_NOTIFY_MSG_H_

#include "AmfUeNgapId.hpp"
#include "NgapUeMessage.hpp"
#include "UserLocationInformation.hpp"

extern "C" {
#include "Ngap_HandoverNotify.h"
}

namespace oai::ngap {
class HandoverNotifyMsg : public NgapUeMessage {
 public:
  HandoverNotifyMsg();
  virtual ~HandoverNotifyMsg();

  void initialize();
  void setAmfUeNgapId(const uint64_t& id) override;
  void setRanUeNgapId(const uint32_t& id) override;
  bool decode(Ngap_NGAP_PDU_t* ngapMsgPdu) override;

  void setUserLocationInfoNr(const NrCgi_t& cig, const Tai_t& tai);
  bool getUserLocationInfoNr(NrCgi_t& cig, Tai_t& tai) const;

 private:
  Ngap_HandoverNotify_t* m_HandoverNotifyIes;
  // AMF_UE_NGAP_ID (Mandatory)
  // RAN_UE_NGAP_ID (Mandatory)
  UserLocationInformation m_UserLocationInformation;  // Mandatory
  // TODO: Notify Source NG-RAN Node (Optional, Rel 16.14.0)
};

}  // namespace oai::ngap
#endif
