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

#include "lmf_n1_n2_message_subscription.hpp"

#include <arpa/inet.h>

#include <string>
using namespace std::string_literals;

#include "ProblemDetails.h"
#include "UeN1N2InfoSubscriptionCreateData.h"
#include "UeN1N2InfoSubscriptionCreatedData.h"
#include "http_client.hpp"
#include "lmf_config.hpp"
#include "lmf_nrf.hpp"
#include "lmf_sbi_helper.hpp"
#include "logger.hpp"
#include "nlohmann/json.hpp"
#include "pistache/http_defs.h"

using namespace oai::model::lmf;
using namespace oai::lmf::api;

extern std::shared_ptr<oai::http::http_client> http_client_inst;

// 3GPP TS 29.518 version 16.4.0 Release 16
// 5.2.2.3.5 N1MessageNotify
// 5.2.2.3.5.5 Using N1MessageNotify in the LCS Event Report, LCS Cancel
// Location and LCS Periodic-Triggered Invoke Procedures

//------------------------------------------------------------------------------
// 5.2.2.3.4 N1N2MessageUnSubscribe
void N1N2MessageSubscription::unsubscribe(
    std::string const& id, std::string const& supi) {
  // 1. DELETE
  // ./namf_comm/v1/ue_contexts/{ueContextId}/n1-n2-messages/subscriptions/{subscriptionId}
  std::string amf_uri = {};
  lmf_sbi_helper::get_amf_comm_n1n2_message_un_subscribe_uri(
      lmf_cfg.amf_addr, supi, id, amf_uri);

  Logger::lmf_app().debug("AMF's URI %s", amf_uri);

  // 2. 204 No Content
  std::string response;

  // Send HTTP request
  oai::http::request http_request =
      http_client_inst->prepare_json_request(amf_uri);
  auto http_response = http_client_inst->send_http_request(
      oai::common::sbi::method_e::DELETE, http_request);
  response = http_response.body;

  Logger::lmf_app().debug("Response from AMF: %s", response);

  if (!response.empty()) {
    Logger::lmf_app().error("deleted UeN1N2InfoSubscription %s failed", id);
  } else {
    Logger::lmf_app().info(
        "deleted UeN1N2InfoSubscription %s successfully", id);
  }
}

//------------------------------------------------------------------------------
// 3GPP TS 29.518 version 16.4.0 Release 16 / 5.2.2.3.3 N1N2MessageSubscribe
std::string N1N2MessageSubscription::subscribe(std::string const& supi) {
  // 1. POST
  // ./namf_comm/v1/ue_contexts/{ueContextld}/nl-n2-messages/subscriptions
  // (UeN1N2lnfoSubscriptionCreateData)
  std::string amf_uri = {};
  lmf_sbi_helper::get_amf_comm_n1n2_message_subscribe_uri(
      lmf_cfg.amf_addr, supi, amf_uri);

  // TODO:
  // 5.2.2.3.6 N2InfoNotify n2InfoNotifyUri
  std::string n2NotifyCallbackUri = {};
  lmf_sbi_helper::get_lmf_n2_info_notify_nrppa_callback_uri(
      lmf_cfg.sbi, supi, n2NotifyCallbackUri);

  Logger::lmf_app().debug("AMF's URI %s", amf_uri);

  // 6.1.6.2.12 Type: UeN1N2InfoSubscriptionCreateData
  N2InformationClass n2InformationClass;
  n2InformationClass.setEnumValue(
      N2InformationClass_anyOf::eN2InformationClass_anyOf::NRPPA);

  UeN1N2InfoSubscriptionCreateData ueN1N2InfoSubscriptionCreateData;
  ueN1N2InfoSubscriptionCreateData.setN2InformationClass(n2InformationClass);
  ueN1N2InfoSubscriptionCreateData.setN2NotifyCallbackUri(n2NotifyCallbackUri);
  ueN1N2InfoSubscriptionCreateData.setNfId(lmf_nrf_inst->lmf_instance_id);

  // 2. 201 Created (UeN1N2InfoSubscriptionCreatedData)
  std::string response = {};

  // Send HTTP request
  oai::http::request http_request = http_client_inst->prepare_json_request(
      amf_uri, nlohmann::json(ueN1N2InfoSubscriptionCreateData).dump());
  auto http_response = http_client_inst->send_http_request(
      oai::common::sbi::method_e::POST, http_request);
  response = http_response.body;

  Logger::lmf_app().debug("Response from AMF: %s", response);

  try {
    // 6.1.6.2.13 Type: UeN1N2InfoSubscriptionCreatedData
    UeN1N2InfoSubscriptionCreatedData ueN1N2InfoSubscriptionCreatedData{
        nlohmann::json::parse(response)};
    auto const& id =
        ueN1N2InfoSubscriptionCreatedData.getN1n2NotifySubscriptionId();
    return id;
  } catch (nlohmann::detail::exception const& ex) {
    auto title  = "subscribe ueN1N2InfoSubscription failed"s;
    auto detail = "amf_uri: '" + amf_uri + "', respone: '" + response +
                  "', ex: " + ex.what();
    oai::lmf::api::lmf_sbi_helper::throwHttpError(title, detail);
    return {};  // suppress no return warning
  }
}
