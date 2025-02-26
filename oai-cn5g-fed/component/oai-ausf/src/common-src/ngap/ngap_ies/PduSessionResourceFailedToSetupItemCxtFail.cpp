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

#include "PduSessionResourceFailedToSetupItemCxtFail.hpp"

namespace oai::ngap {

//------------------------------------------------------------------------------
PduSessionResourceFailedToSetupItemCxtFail::
    PduSessionResourceFailedToSetupItemCxtFail() {}

//------------------------------------------------------------------------------
PduSessionResourceFailedToSetupItemCxtFail::
    ~PduSessionResourceFailedToSetupItemCxtFail() {}

//------------------------------------------------------------------------------
void PduSessionResourceFailedToSetupItemCxtFail::set(
    const PduSessionId& pduSessionId,
    const OCTET_STRING_t& pduSessionResource) {
  m_PduSessionId                                = pduSessionId;
  m_PduSessionResourceSetupUnsuccessfulTransfer = pduSessionResource;
}

//------------------------------------------------------------------------------
void PduSessionResourceFailedToSetupItemCxtFail::get(
    PduSessionId& pduSessionId, OCTET_STRING_t& pduSessionResource) const {
  pduSessionId       = m_PduSessionId;
  pduSessionResource = m_PduSessionResourceSetupUnsuccessfulTransfer;
}

//------------------------------------------------------------------------------
bool PduSessionResourceFailedToSetupItemCxtFail::encode(
    Ngap_PDUSessionResourceFailedToSetupItemCxtFail_t& pdu_session_cxt) const {
  if (!m_PduSessionId.encode(pdu_session_cxt.pDUSessionID)) return false;
  pdu_session_cxt.pDUSessionResourceSetupUnsuccessfulTransfer =
      m_PduSessionResourceSetupUnsuccessfulTransfer;

  return true;
}

//------------------------------------------------------------------------------
bool PduSessionResourceFailedToSetupItemCxtFail::decode(
    const Ngap_PDUSessionResourceFailedToSetupItemCxtFail_t& pdu_session_cxt) {
  if (!m_PduSessionId.decode(pdu_session_cxt.pDUSessionID)) return false;
  m_PduSessionResourceSetupUnsuccessfulTransfer =
      pdu_session_cxt.pDUSessionResourceSetupUnsuccessfulTransfer;

  return true;
}

}  // namespace oai::ngap
