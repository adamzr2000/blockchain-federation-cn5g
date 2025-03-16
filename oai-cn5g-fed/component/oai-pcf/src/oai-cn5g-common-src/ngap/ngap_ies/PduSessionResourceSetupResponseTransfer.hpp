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

#ifndef _PDU_SESSION_RESOURCE_SETUP_RESPONSE_TRANSFER_H_
#define _PDU_SESSION_RESOURCE_SETUP_RESPONSE_TRANSFER_H_

#include "NgapIesStruct.hpp"
#include "QosFlowPerTnlInformationList.hpp"
#include "SecurityResult.hpp"

extern "C" {
#include "Ngap_PDUSessionResourceSetupResponseTransfer.h"
#include "Ngap_ProtocolIE-Field.h"
#include "Ngap_QosFlowPerTNLInformationList.h"
}

namespace oai::ngap {

class PduSessionResourceSetupResponseTransferIE {
 public:
  PduSessionResourceSetupResponseTransferIE();
  virtual ~PduSessionResourceSetupResponseTransferIE();

  void set(
      const GtpTunnel_t& upTransportLayerInfo,
      const std::vector<AssociatedQosFlow_t>& list);
  bool get(
      GtpTunnel_t& upTransportLayerInfo,
      std::vector<AssociatedQosFlow_t>& list) const;

  void setAdditionalDLQoSFlowPerTNLInformation(
      const QosFlowPerTnlInformationList& additionDlQoSFlowPerTnlInformation);
  bool getAdditionalDLQoSFlowPerTNLInformation(
      QosFlowPerTnlInformationList& additionDlQoSFlowPerTnlInformation) const;

  void setSecurityResult(
      e_Ngap_IntegrityProtectionResult integrityProtectionResult,
      e_Ngap_ConfidentialityProtectionResult confidentialityProtectionResult);
  bool getSecurityResult(
      long& integrityProtectionResult,
      long& confidentialityProtectionResult) const;

  int encode(uint8_t* buf, int buf_size);   // TODO: remove naked pointer
  bool decode(uint8_t* buf, int buf_size);  // TODO: remove naked pointer

 private:
  Ngap_PDUSessionResourceSetupResponseTransfer_t*
      m_PduSessionResourceSetupResponseTransferIe;

  QosFlowPerTnlInformation m_DlQosFlowPerTnlInformation;  // Mandatory
  std::optional<QosFlowPerTnlInformationList>
      m_AdditionalDlQosFlowPerTnlInformation;
  std::optional<SecurityResult> m_SecurityResult;  // Optional
  // TODO: QoS Flow Failed to Setup List
};

}  // namespace oai::ngap
#endif
