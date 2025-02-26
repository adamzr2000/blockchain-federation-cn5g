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
/**
 * Nudm_UECM
 * Nudm Context Management Service. � 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SMFSmfRegistrationApiImpl.h"

#include "http_client.hpp"
#include "logger.hpp"
#include "udm.h"
#include "udm_config.hpp"
#include "udm_sbi_helper.hpp"

extern oai::udm::config::udm_config udm_cfg;
extern std::shared_ptr<oai::http::http_client> http_client_inst;

namespace oai {
namespace udm {
namespace api {

using namespace oai::model::common;
using namespace oai::model::udm;
using namespace oai::udm::app;
using namespace oai::udm::config;

SMFSmfRegistrationApiImpl::SMFSmfRegistrationApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr, udm_app* udm_app_inst,
    std::string address)
    : SMFSmfRegistrationApi(rtr) {}

void SMFSmfRegistrationApiImpl::get_smf_registration(
    const std::string& ueId, const Pistache::Optional<Snssai>& singleNssai,
    const Pistache::Optional<std::string>& dnn,
    const Pistache::Optional<std::string>& supportedFeatures,
    Pistache::Http::ResponseWriter& response) {
  response.send(
      Pistache::Http::Code::Ok,
      "SMFSmfRegistrationApiImpl::get_smf_registration API has not been "
      "implemented yet!\n");
}
void SMFSmfRegistrationApiImpl::registration(
    const std::string& ueId, const int32_t& pduSessionId,
    const SmfRegistration& smfRegistration,
    Pistache::Http::ResponseWriter& response) {
  std::string udr_ip =
      std::string(inet_ntoa(*((struct in_addr*) &udm_cfg.udr_addr.ipv4_addr)));
  std::string udr_port            = std::to_string(udm_cfg.udr_addr.port);
  std::string remote_uri          = {};
  std::string response_str        = {};
  nlohmann::json j_ProblemDetails = {};
  ProblemDetails m_ProblemDetails = {};

  // TODO: to move it to UDM_APP
  // UDR GET interface
  // get SmfRegistration related info
  remote_uri =
      oai::udm::api::udm_sbi_helper::get_udr_uri_base() +
      fmt::format(
          oai::udm::api::udm_sbi_helper::
              UdrDrPathSubscriptionDataContextDataSmfRegistrationsPduSession,
          ueId, std::to_string(pduSessionId));
  Logger::udm_uecm().debug("PUT Request:" + remote_uri);

  nlohmann::json smf_registration_json;
  to_json(smf_registration_json, smfRegistration);
  uint32_t http_code = 0;

  oai::http::request http_request = http_client_inst->prepare_json_request(
      remote_uri, smf_registration_json.dump());
  auto http_response = http_client_inst->send_http_request(
      oai::common::sbi::method_e::PUT, http_request);

  response_str = http_response.body;
  http_code    = http_response.status_code;

  nlohmann::json response_data = {};
  try {
    Logger::udm_uecm().debug("PUT Response:" + response_str);
    response_data = nlohmann::json::parse(response_str.c_str());

  } catch (nlohmann::json::exception& e) {  // error handling
    Logger::udm_uecm().info("Could not get JSON content from UDR response");

    m_ProblemDetails.setCause("USER_NOT_FOUND");
    m_ProblemDetails.setStatus(404);
    m_ProblemDetails.setDetail("User " + ueId + " not found in Database");
    to_json(j_ProblemDetails, m_ProblemDetails);

    Logger::udm_uecm().error("User " + ueId + " not found in Database");
    Logger::udm_uecm().info("Send 404 Not_Found response to client");

    response.headers().add<Pistache::Http::Header::ContentType>(
        Pistache::Http::Mime::MediaType("application/problem+json"));

    response.send(
        Pistache::Http::Code::Not_Found, j_ProblemDetails.dump().c_str());
    return;
  }
  Logger::udm_uecm().debug("HTTP Response code %d", http_code);

  // Set content type

  response.headers().add<Pistache::Http::Header::ContentType>(
      Pistache::Http::Mime::MediaType("application/json"));

  response.send(
      static_cast<Pistache::Http::Code>(http_code),
      smf_registration_json.dump().c_str());
}

}  // namespace api
}  // namespace udm
}  // namespace oai
