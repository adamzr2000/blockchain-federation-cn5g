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

#include "N2InfoNotifyApiImpl.h"

#include "lmf_nrf.hpp"
#include "logger.hpp"
#include "conversions.hpp"
#include "bstrlib.h"

#include "N2InformationNotification.h"

using namespace oai::model::common;
using namespace oai::model::lmf;

namespace oai::lmf::api {

N2InfoNotifyApiImpl::N2InfoNotifyApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr,
    oai::lmf::app::lmf_app* lmf_app_inst)
    : N2InfoNotifyApi(rtr), m_lmf_app(lmf_app_inst) {}

void N2InfoNotifyApiImpl::receive_n2info_nrppa_notification(
    const std::string& ueContextId, std::vector<mime_part>& parts,
    Pistache::Http::ResponseWriter& response) {
  Logger::lmf_server().debug("Receive an N2Info NRPPA Notify, handling...");

  N2InformationNotification n2InformationNotification{
      nlohmann::json::parse(parts.at(0).body)};
  // TODO: handle subscrription id
  auto const& n2NotifySubscriptionId =
      n2InformationNotification.getN2NotifySubscriptionId();
  // TODO: handle lcs corrlation id
  n2InformationNotification.getLcsCorrelationId();

  Logger::lmf_server().debug("SUPI %s", ueContextId);

  auto nrppa = lmf_app::parse_n2_info_container_nrppa(
      n2InformationNotification, parts.at(1));

  if (!m_lmf_app->handle_n2info_nrppa_notification(ueContextId, nrppa)) {
    N1N2MessageSubscription::unsubscribe(ueContextId, n2NotifySubscriptionId);
  }
}

}  // namespace oai::lmf::api
