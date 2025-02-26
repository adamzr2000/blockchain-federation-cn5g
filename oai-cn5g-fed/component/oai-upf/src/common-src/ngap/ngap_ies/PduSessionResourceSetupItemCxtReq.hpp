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

#ifndef _PDU_SESSION_RESOURCE_SETUP_ITEM_CXT_REQ_H_
#define _PDU_SESSION_RESOURCE_SETUP_ITEM_CXT_REQ_H_

#include <optional>

#include "NasPdu.hpp"
#include "PduSessionId.hpp"
#include "SNssai.hpp"

extern "C" {
#include "Ngap_PDUSessionResourceSetupItemCxtReq.h"
}

namespace oai::ngap {

class PduSessionResourceSetupItemCxtReq {
 public:
  PduSessionResourceSetupItemCxtReq();
  virtual ~PduSessionResourceSetupItemCxtReq();

  void set(
      const PduSessionId& pduSessionId, const std::optional<NasPdu>& nasPdu,
      const SNssai& sNssai,
      const OCTET_STRING_t& pduSessionResourceSetupRequestTransfer);
  void get(
      PduSessionId& pduSessionId, std::optional<NasPdu>& nasPdu, SNssai& sNssai,
      OCTET_STRING_t& pduSessionResourceSetupRequestTransfer) const;

  bool encode(
      Ngap_PDUSessionResourceSetupItemCxtReq_t& pduSessionResourceItem) const;
  bool decode(
      const Ngap_PDUSessionResourceSetupItemCxtReq_t& pduSessionResourceItem);

 private:
  PduSessionId m_PduSessionId;                              // Mandatory
  std::optional<NasPdu> m_NasPdu;                           // Optional
  SNssai m_SNssai;                                          // Mandatory
  OCTET_STRING_t m_PduSessionResourceSetupRequestTransfer;  // Mandatory
};

}  // namespace oai::ngap

#endif
