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

#ifndef _UE_CONTEXT_RELEASE_COMMAND_H_
#define _UE_CONTEXT_RELEASE_COMMAND_H_

#include "AmfUeNgapId.hpp"
#include "Cause.hpp"
#include "NgapUeMessage.hpp"
#include "RanUeNgapId.hpp"

extern "C" {
#include "Ngap_UEContextReleaseCommand.h"
}

namespace oai::ngap {

class UeContextReleaseCommandMsg : public NgapMessage {
 public:
  UeContextReleaseCommandMsg();
  ~UeContextReleaseCommandMsg();

  void initialize();

  bool decode(Ngap_NGAP_PDU_t* ngapMsgPdu) override;

  void setAmfUeNgapId(const uint64_t& id);
  bool getAmfUeNgapId(uint64_t& id) const;

  void setUeNgapIdPair(const uint64_t& amfId, const uint32_t& ranId);
  bool getUeNgapIdPair(uint64_t& amfId, uint32_t& ranId) const;

  void addCauseIe();
  void setCauseRadioNetwork(const e_Ngap_CauseRadioNetwork& cause);
  void setCauseNas(const e_Ngap_CauseNas& cause);

 private:
  Ngap_UEContextReleaseCommand_t* m_UEContextReleaseCommandIes;
  AmfUeNgapId m_AmfUeNgapId;
  std::optional<RanUeNgapId>
      m_RanUeNgapId;   // CHOICE UE NGAP IDs: AMF UE NGAP ID
  Cause m_CauseValue;  // Mandatory
};

}  // namespace oai::ngap

#endif
