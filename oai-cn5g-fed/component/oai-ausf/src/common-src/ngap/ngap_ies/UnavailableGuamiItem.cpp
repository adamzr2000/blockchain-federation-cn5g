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

#include "UnavailableGuamiItem.hpp"

namespace oai::ngap {

//------------------------------------------------------------------------------
UnavailableGuamiItem::UnavailableGuamiItem() {
  m_TimerApproachForGuamiRemoval = std::nullopt;
  m_BackupAmfName                = std::nullopt;
}

//------------------------------------------------------------------------------
UnavailableGuamiItem::~UnavailableGuamiItem() {}

//------------------------------------------------------------------------------
void UnavailableGuamiItem::setGuami(const Guami& guami) {
  m_Guami = guami;
}

//------------------------------------------------------------------------------
void UnavailableGuamiItem::getGuami(Guami& guami) const {
  guami = m_Guami;
}

//------------------------------------------------------------------------------
void UnavailableGuamiItem::setTimerApproachForGuamiRemoval(
    const TimerApproachForGuamiRemoval& timer) {
  m_TimerApproachForGuamiRemoval =
      std::make_optional<TimerApproachForGuamiRemoval>(timer);
}

//------------------------------------------------------------------------------
void UnavailableGuamiItem::getTimerApproachForGuamiRemoval(
    std::optional<TimerApproachForGuamiRemoval>& timer) const {
  timer = m_TimerApproachForGuamiRemoval;
}

//------------------------------------------------------------------------------
void UnavailableGuamiItem::setBackupAmfName(const AmfName& name) {
  m_BackupAmfName = std::make_optional<AmfName>(name);
}

//------------------------------------------------------------------------------
void UnavailableGuamiItem::getBackupAmfName(
    std::optional<AmfName>& name) const {
  name = m_BackupAmfName;
}

//------------------------------------------------------------------------------
bool UnavailableGuamiItem::encode(Ngap_UnavailableGUAMIItem& item) const {
  if (!m_Guami.encode(item.gUAMI)) return false;
  if (m_TimerApproachForGuamiRemoval.has_value()) {
    if (!m_TimerApproachForGuamiRemoval.value().encode(
            *item.timerApproachForGUAMIRemoval))
      return false;
  }
  if (m_BackupAmfName.has_value())
    if (!m_BackupAmfName.value().encode(*item.backupAMFName)) return false;
  return true;
}

//------------------------------------------------------------------------------
bool UnavailableGuamiItem::decode(const Ngap_UnavailableGUAMIItem& item) {
  if (!m_Guami.decode(item.gUAMI)) return false;

  if (item.timerApproachForGUAMIRemoval) {
    TimerApproachForGuamiRemoval tmp = {};
    if (!tmp.decode(*item.timerApproachForGUAMIRemoval)) return false;
    m_TimerApproachForGuamiRemoval =
        std::make_optional<TimerApproachForGuamiRemoval>(tmp);
  }

  if (item.backupAMFName) {
    AmfName tmp = {};
    if (!tmp.decode(*item.backupAMFName)) return false;
    m_BackupAmfName = std::make_optional<AmfName>(tmp);
  }
  return true;
}

}  // namespace oai::ngap
