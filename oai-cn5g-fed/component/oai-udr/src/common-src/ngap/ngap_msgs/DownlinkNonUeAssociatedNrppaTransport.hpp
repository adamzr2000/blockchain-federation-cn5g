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

#ifndef _DOWNLINK_NON_UE_ASSOCIATED_NRPPA_TRANSPORT_H_
#define _DOWNLINK_NON_UE_ASSOCIATED_NRPPA_TRANSPORT_H_

#include "NgapMessage.hpp"

extern "C" {
#include "Ngap_DownlinkNonUEAssociatedNRPPaTransport.h"
}

namespace oai::ngap {

class DownlinkNonUeAssociatedNrppaTransportMsg : public NgapMessage {
 public:
  DownlinkNonUeAssociatedNrppaTransportMsg();
  virtual ~DownlinkNonUeAssociatedNrppaTransportMsg();

  void initialize();

  bool decode(Ngap_NGAP_PDU_t* ngapMsgPdu) override;

  void setRoutingId(const bstring& pdu);
  void getRoutingId(bstring& pdu) const;

  void setNrppaPdu(const bstring& pdu);
  void getNrppaPdu(bstring& pdu) const;

 private:
  Ngap_DownlinkNonUEAssociatedNRPPaTransport_t*
      m_DownlinkNonUeAssociatedNrppaTransportIes;

  bstring m_RoutingId;  // Mandatory
  bstring m_NrppaPdu;   // Mandatory
};

}  // namespace oai::ngap
#endif
