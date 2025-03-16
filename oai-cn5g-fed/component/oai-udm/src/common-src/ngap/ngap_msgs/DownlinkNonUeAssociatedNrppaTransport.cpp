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

#include "DownlinkNonUeAssociatedNrppaTransport.hpp"

#include "logger.hpp"
#include "ngap_utils.hpp"
#include "utils.hpp"

namespace oai::ngap {

//------------------------------------------------------------------------------
DownlinkNonUeAssociatedNrppaTransportMsg::
    DownlinkNonUeAssociatedNrppaTransportMsg()
    : NgapMessage() {
  setMessageType(NgapMessageType::DOWNLINK_NON_UE_ASSOCIATED_NRPPA_TRANSPORT);
  initialize();
}

//------------------------------------------------------------------------------
DownlinkNonUeAssociatedNrppaTransportMsg::
    ~DownlinkNonUeAssociatedNrppaTransportMsg() {}

//------------------------------------------------------------------------------
void DownlinkNonUeAssociatedNrppaTransportMsg::initialize() {
  m_DownlinkNonUeAssociatedNrppaTransportIes =
      &(ngapPdu->choice.initiatingMessage->value.choice
            .DownlinkNonUEAssociatedNRPPaTransport);
}

//------------------------------------------------------------------------------
bool DownlinkNonUeAssociatedNrppaTransportMsg::decode(
    Ngap_NGAP_PDU_t* ngapMsgPdu) {
  ngapPdu = ngapMsgPdu;

  if (ngapPdu->present == Ngap_NGAP_PDU_PR_initiatingMessage) {
    if (ngapPdu->choice.initiatingMessage &&
        ngapPdu->choice.initiatingMessage->procedureCode ==
            Ngap_ProcedureCode_id_DownlinkNonUEAssociatedNRPPaTransport &&
        ngapPdu->choice.initiatingMessage->criticality ==
            Ngap_Criticality_ignore &&
        ngapPdu->choice.initiatingMessage->value.present ==
            Ngap_InitiatingMessage__value_PR_DownlinkNonUEAssociatedNRPPaTransport) {
      m_DownlinkNonUeAssociatedNrppaTransportIes =
          &ngapPdu->choice.initiatingMessage->value.choice
               .DownlinkNonUEAssociatedNRPPaTransport;
    } else {
      Logger::ngap().error(
          "Decode NGAP DownlinkNonUEAssociatedNRPPaTransport error");
      return false;
    }
  } else {
    Logger::ngap().error("Decode NGAP MessageType IE error");
    return false;
  }

  for (int i = 0;
       i < m_DownlinkNonUeAssociatedNrppaTransportIes->protocolIEs.list.count;
       i++) {
    switch (
        m_DownlinkNonUeAssociatedNrppaTransportIes->protocolIEs.list.array[i]
            ->id) {
      case Ngap_ProtocolIE_ID_id_RoutingID: {
        if (m_DownlinkNonUeAssociatedNrppaTransportIes->protocolIEs.list
                    .array[i]
                    ->criticality == Ngap_Criticality_reject &&
            m_DownlinkNonUeAssociatedNrppaTransportIes->protocolIEs.list
                    .array[i]
                    ->value.present ==
                Ngap_DownlinkNonUEAssociatedNRPPaTransportIEs__value_PR_RoutingID) {
          ngap_utils::octet_string_2_bstring(
              m_DownlinkNonUeAssociatedNrppaTransportIes->protocolIEs.list
                  .array[i]
                  ->value.choice.RoutingID,
              m_RoutingId);
        } else {
          Logger::ngap().error("Decode NGAP RoutingID IE error");
          return false;
        }

      } break;
      case Ngap_ProtocolIE_ID_id_NRPPa_PDU: {
        if (m_DownlinkNonUeAssociatedNrppaTransportIes->protocolIEs.list
                    .array[i]
                    ->criticality == Ngap_Criticality_reject &&
            m_DownlinkNonUeAssociatedNrppaTransportIes->protocolIEs.list
                    .array[i]
                    ->value.present ==
                Ngap_DownlinkNonUEAssociatedNRPPaTransportIEs__value_PR_NRPPa_PDU) {
          ngap_utils::octet_string_2_bstring(
              m_DownlinkNonUeAssociatedNrppaTransportIes->protocolIEs.list
                  .array[i]
                  ->value.choice.NRPPa_PDU,
              m_NrppaPdu);
        } else {
          Logger::ngap().error("Decode NGAP NRPPa PDU IE error");
          return false;
        }
      } break;

      default: {
        Logger::ngap().error("Decode NGAP message PDU error");
        return false;
      }
    }
  }

  return true;
}

//------------------------------------------------------------------------------
void DownlinkNonUeAssociatedNrppaTransportMsg::setRoutingId(
    const bstring& pdu) {
  m_RoutingId = bstrcpy(pdu);
  Ngap_DownlinkNonUEAssociatedNRPPaTransportIEs_t* ie =
      (Ngap_DownlinkNonUEAssociatedNRPPaTransportIEs_t*) calloc(
          1, sizeof(Ngap_DownlinkNonUEAssociatedNRPPaTransportIEs_t));
  ie->id          = Ngap_ProtocolIE_ID_id_RoutingID;
  ie->criticality = Ngap_Criticality_reject;
  ie->value.present =
      Ngap_DownlinkNonUEAssociatedNRPPaTransportIEs__value_PR_RoutingID;

  ngap_utils::bstring_2_octet_string(m_RoutingId, ie->value.choice.RoutingID);

  int ret = ASN_SEQUENCE_ADD(
      &m_DownlinkNonUeAssociatedNrppaTransportIes->protocolIEs.list, ie);
  if (ret != 0) Logger::ngap().error("Encode RoutingID IE error");
}

//------------------------------------------------------------------------------
void DownlinkNonUeAssociatedNrppaTransportMsg::getRoutingId(
    bstring& pdu) const {
  pdu = bstrcpy(m_RoutingId);
}

//------------------------------------------------------------------------------
void DownlinkNonUeAssociatedNrppaTransportMsg::setNrppaPdu(const bstring& pdu) {
  m_NrppaPdu = bstrcpy(pdu);
  Ngap_DownlinkNonUEAssociatedNRPPaTransportIEs_t* ie =
      (Ngap_DownlinkNonUEAssociatedNRPPaTransportIEs_t*) calloc(
          1, sizeof(Ngap_DownlinkNonUEAssociatedNRPPaTransportIEs_t));
  ie->id          = Ngap_ProtocolIE_ID_id_NRPPa_PDU;
  ie->criticality = Ngap_Criticality_reject;
  ie->value.present =
      Ngap_DownlinkNonUEAssociatedNRPPaTransportIEs__value_PR_NRPPa_PDU;

  ngap_utils::bstring_2_octet_string(m_NrppaPdu, ie->value.choice.NRPPa_PDU);

  int ret = ASN_SEQUENCE_ADD(
      &m_DownlinkNonUeAssociatedNrppaTransportIes->protocolIEs.list, ie);
  if (ret != 0) Logger::ngap().error("Encode NRPPa_PDU IE error");
}

//------------------------------------------------------------------------------
void DownlinkNonUeAssociatedNrppaTransportMsg::getNrppaPdu(bstring& pdu) const {
  pdu = m_NrppaPdu;
}

}  // namespace oai::ngap
