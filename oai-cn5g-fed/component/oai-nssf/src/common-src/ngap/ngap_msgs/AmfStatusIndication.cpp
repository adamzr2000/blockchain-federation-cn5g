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

#include "AmfStatusIndication.hpp"

#include "logger.hpp"
#include "utils.hpp"

namespace oai::ngap {

//------------------------------------------------------------------------------
AmfStatusIndication::AmfStatusIndication() : NgapMessage() {
  m_AmfStatusIndicationIEs = nullptr;
  NgapMessage::setMessageType(NgapMessageType::AMF_STATUS_INDICATION);
  initialize();
}

//------------------------------------------------------------------------------
AmfStatusIndication::~AmfStatusIndication() {}

//------------------------------------------------------------------------------
void AmfStatusIndication::initialize() {
  m_AmfStatusIndicationIEs =
      &(ngapPdu->choice.initiatingMessage->value.choice.AMFStatusIndication);
}

//------------------------------------------------------------------------------
void AmfStatusIndication::setUnavailableGuamiList(
    const UnavailableGuamiList& list) {
  m_UnavailableGuamiList = list;
}

//------------------------------------------------------------------------------
void AmfStatusIndication::getUnavailableGuamiList(
    UnavailableGuamiList& list) const {
  list = m_UnavailableGuamiList;
}

//------------------------------------------------------------------------------
bool AmfStatusIndication::decode(Ngap_NGAP_PDU_t* ngapMsgPdu) {
  ngapPdu = ngapMsgPdu;

  if (ngapPdu->present == Ngap_NGAP_PDU_PR_initiatingMessage) {
    if (ngapPdu->choice.initiatingMessage &&
        ngapPdu->choice.initiatingMessage->procedureCode ==
            Ngap_ProcedureCode_id_AMFStatusIndication &&
        ngapPdu->choice.initiatingMessage->criticality ==
            Ngap_Criticality_ignore &&
        ngapPdu->choice.initiatingMessage->value.present ==
            Ngap_InitiatingMessage__value_PR_AMFStatusIndication) {
      m_AmfStatusIndicationIEs =
          &ngapPdu->choice.initiatingMessage->value.choice.AMFStatusIndication;
    } else {
      Logger::ngap().error("Check AMFStatusIndication message error");
      return false;
    }
  } else {
    Logger::ngap().error(
        "MessageType error, ngapPdu->present %d", ngapPdu->present);
    return false;
  }

  for (int i = 0; i < m_AmfStatusIndicationIEs->protocolIEs.list.count; i++) {
    switch (m_AmfStatusIndicationIEs->protocolIEs.list.array[i]->id) {
      case Ngap_ProtocolIE_ID_id_UnavailableGUAMIList: {
        if (m_AmfStatusIndicationIEs->protocolIEs.list.array[i]->criticality ==
                Ngap_Criticality_reject &&
            m_AmfStatusIndicationIEs->protocolIEs.list.array[i]
                    ->value.present ==
                Ngap_AMFStatusIndicationIEs__value_PR_UnavailableGUAMIList) {
          if (!m_UnavailableGuamiList.decode(
                  m_AmfStatusIndicationIEs->protocolIEs.list.array[i]
                      ->value.choice.UnavailableGUAMIList)) {
            Logger::ngap().error("Decoded NGAP UnavailableGUAMIList error");
            return false;
          }
        } else {
          Logger::ngap().error("Decoded NGAP UnavailableGUAMIList error");
          return false;
        }
      } break;
      default: {
        Logger::ngap().error("Decoded NGAP Message PDU error");
        return false;
      }
    }
  }

  return true;
}

}  // namespace oai::ngap
