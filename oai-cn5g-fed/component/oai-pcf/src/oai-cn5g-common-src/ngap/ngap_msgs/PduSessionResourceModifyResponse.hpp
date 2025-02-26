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

#ifndef PDU_SESSION_RESOURCE_MODIFY_RESPONSE_H_
#define PDU_SESSION_RESOURCE_MODIFY_RESPONSE_H_

#include "NgapUeMessage.hpp"
#include "PduSessionResourceModifyListModRes.hpp"

extern "C" {
#include "Ngap_PDUSessionResourceModifyResponse.h"
}

namespace oai::ngap {

class PduSessionResourceModifyResponseMsg : public NgapUeMessage {
 public:
  PduSessionResourceModifyResponseMsg();
  virtual ~PduSessionResourceModifyResponseMsg();

  void initialize();

  void setAmfUeNgapId(const uint64_t& id) override;
  void setRanUeNgapId(const uint32_t& id) override;
  bool decode(Ngap_NGAP_PDU_t* ngapMsgPdu) override;

  void setPduSessionResourceModifyResponseList(
      const std::vector<PDUSessionResourceModifyResponseItem_t>& list);
  bool getPduSessionResourceModifyResponseList(
      std::vector<PDUSessionResourceModifyResponseItem_t>& list) const;

 private:
  Ngap_PDUSessionResourceModifyResponse_t* pduSessionResourceModifyResponseIes;

  std::optional<PduSessionResourceModifyListModRes>
      m_PduSessionResourceModifyList;  // Optional
  // TODO: PDUSessionResourceFailedToModifyListModRes (Optional)
  // TODO: User Location Information (Optional)
  // TODO: Criticality Diagnostics (Optional)
};

}  // namespace oai::ngap
#endif
