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

#include "nssf-http2-server.h"

#include <boost/algorithm/string.hpp>
#include <boost/thread.hpp>
#include <boost/thread/future.hpp>
#include <nlohmann/json.hpp>
#include <regex>
#include <string>

#include "3gpp_29.500.h"
#include "logger.hpp"
#include "nssf.h"
#include "nssf_config.hpp"
#include "sbi_helper.hpp"

using namespace nghttp2::asio_http2;
using namespace nghttp2::asio_http2::server;
using namespace oai::nssf_server::model;
using namespace oai::model::common;
using namespace oai::common::sbi;

extern std::unique_ptr<oai::config::nssf::nssf_config> nssf_cfg;

//------------------------------------------------------------------------------
void nssf_http2_server::start() {
  boost::system::error_code ec;

  Logger::nssf_sbi().info("HTTP2 server being started");
  std::string nfId                            = {};
  std::string subscriptionID                  = {};
  NssaiAvailabilityInfo nssaiAvailabilityInfo = {};

  // NSSF NS Selection - Network Slice Information (Document)
  server.handle(
      sbi_helper::NssfNsSelectionBase +
          nssf_cfg->local().get_sbi().get_api_version() +
          sbi_helper::NssfNsSelectionPathNetworSliceInformation,
      [&](const request& request, const response& response) {
        request.on_data([&](const uint8_t* data, std::size_t len) {
          try {
            Logger::nssf_sbi().debug(
                "Received request for NS Selection - (HTTP_VERSION 2)");
            if (request.method().compare("GET") == 0) {
              // Initialise query parametres
              SliceInfoForUEConfigurationUpdate slice_info_ue_cu;
              SliceInfoForPDUSession slice_info_pdu_sess;
              SliceInfoForRegistration slice_info_reg;
              PlmnId home_plmnid;
              Tai tai;

              // Parse URI
              std::string qs = request.uri().raw_query;
              Logger::nssf_sbi().debug("QueryString: %s", qs.c_str());

              // Parse mandatory query parametrs
              std::string nfType = oai::utils::get_query_param(qs, NF_TYPE);
              std::string nfId   = oai::utils::get_query_param(qs, NF_ID);
              Logger::nssf_sbi().info(
                  " Query_PARAM::NF_TYPE - %s", nfType.c_str());
              Logger::nssf_sbi().info(" Query_PARAM::NF_ID - %s", nfId.c_str());

              // Parse optional query parametrs and API calbacks
              std::string slice_infoReg = oai::utils::get_query_param(
                  qs,
                  sbi_helper::
                      NssfNsSelectionParametersSliceInfoRequestForRegistration);
              std::string slice_infoPduSession = oai::utils::get_query_param(
                  qs,
                  sbi_helper::
                      NssfNsSelectionParametersSliceInfoRequestForPduSession);
              std::string slice_infoUeCu = oai::utils::get_query_param(
                  qs,
                  sbi_helper::
                      NssfNsSelectionParametersSliceInfoRequestForRegistration);
              std::string home_plmn_id =
                  oai::utils::get_query_param(qs, HOME_PLMN_ID);
              std::string supported_features =
                  oai::utils::get_query_param(qs, SUPPORTED_FEATURES);
              std::string tai_info = oai::utils::get_query_param(qs, TAI);

              if (!home_plmn_id.empty()) {
                nlohmann::json::parse(home_plmn_id.c_str()).get_to(home_plmnid);
                Logger::nssf_sbi().info(
                    " Query_PARAM::HOME_PLMN_ID - %s", home_plmn_id.c_str());
              }
              if (!tai_info.empty()) {
                nlohmann::json::parse(tai_info.c_str()).get_to(tai);
                Logger::nssf_sbi().info(
                    " Query_PARAM::TAI - %s", tai_info.c_str());
              }
              if (!supported_features.empty()) {
                Logger::nssf_sbi().info(
                    " Query_PARAM::SUPPORTED_FEATURES - %s",
                    supported_features.c_str());
              }
              if (!slice_infoReg.empty()) {
                nlohmann::json::parse(slice_infoReg.c_str())
                    .get_to(slice_info_reg);
                Logger::nssf_sbi().info(
                    " Query_PARAM slice-info-request-for-registration - %s",
                    slice_infoReg.c_str());
                this->get_slice_info_for_registration_handler(
                    nfType, nfId, slice_info_reg, tai, home_plmnid,
                    supported_features, response);
                return;
              }
              if (!slice_infoPduSession.empty()) {
                nlohmann::json::parse(slice_infoPduSession.c_str())
                    .get_to(slice_info_pdu_sess);
                Logger::nssf_sbi().info(
                    " Query_PARAM slice-info-request-for-pdu-session - %s",
                    slice_infoPduSession.c_str());
                this->get_slice_info_for_pdu_session_handler(
                    nfType, nfId, slice_info_pdu_sess, tai, home_plmnid,
                    supported_features, response);
                return;
              }
              if (!slice_infoUeCu.empty()) {
                nlohmann::json::parse(slice_infoUeCu.c_str())
                    .get_to(slice_info_ue_cu);
                Logger::nssf_sbi().info(
                    " Query_PARAM slice-info-request-for-registration - %s",
                    slice_infoUeCu.c_str());
                this->get_slice_info_for_ue_cu_handler(
                    nfType, nfId, slice_info_ue_cu, tai, home_plmnid,
                    supported_features, response);
                return;
              } else {
                this->get_slice_info_default_handler(
                    nfType, nfId, tai, home_plmnid, supported_features,
                    response);
              }
            } else {
              Logger::nssf_sbi().warn("Method not supported");
            }
          } catch (nlohmann::detail::exception& e) {
            Logger::nssf_sbi().warn(
                "Can not parse the json data (error: %s)!", e.what());
            response.write_head(
                oai::common::sbi::http_status_code::BAD_REQUEST);
            response.end();
            return;
          }
        });
      });

  // NSSF NSSAI Availability - NF Instance ID (Document)
  server.handle(
      sbi_helper::NssfNssaiAvailabilityBase +
          nssf_cfg->local().get_sbi().get_api_version() +
          sbi_helper::NssfNssaiAvailabilityPathNssaiAvailability,
      [&](const request& request, const response& response) {
        request.on_data([&](const uint8_t* data, std::size_t len) {
          std::string msg((char*) data, len);
          try {
            std::vector<std::string> split_result;
            boost::split(
                split_result, request.uri().path, boost::is_any_of("/"));
            nfId = split_result[split_result.size() - 1].c_str();
            if (!nfId.empty()) {
              if (request.method().compare("PUT") == 0 && len > 0) {
                // Parse URI
                NssaiAvailabilityInfo nssai_avail_data = {};
                nlohmann::json::parse(msg.c_str()).get_to(nssai_avail_data);
                Logger::nssf_sbi().info(
                    "NSSAI_AVAIL::Supported NSSAI Availability Data - %s",
                    msg.c_str());
                this->create_nssai_availability_handler(
                    nfId, nssai_avail_data, response);
              }
              if (request.method().compare("PATCH") == 0 && len > 0) {
                std::vector<PatchItem> patchItem;
                nlohmann::json::parse(msg.c_str()).get_to(patchItem);
                // this->create_nssai_availability_handler(nfId,
                // nssaiAvailabilityInfo, response);
              }

              if (request.method().compare("DELETE") == 0 && len > 0) {
                // this->create_nssai_availability_handler(nfId,
                // nssaiAvailabilityInfo, response);
              }
            }
          } catch (nlohmann::detail::exception& e) {
            Logger::nssf_sbi().warn(
                "Can not parse the json data (error: %s)!", e.what());
            response.write_head(
                oai::common::sbi::http_status_code::BAD_REQUEST);
            response.end();
            return;
          }
        });
      });

  // NSSF NSSAI Availability - Subscription ID (Collection/Document)
  server.handle(
      sbi_helper::NssfNssaiAvailabilityBase +
          nssf_cfg->local().get_sbi().get_api_version() +
          sbi_helper::NssfNssaiAvailabilityPathSubscriptions,
      [&](const request& request, const response& response) {
        request.on_data([&](const uint8_t* data, std::size_t len) {
          // ToDo
        });
      });

  //###### NSSF Custom APIs ######
  // Get default slice config
  server.handle(
      "/nnssf-slice-config",
      [&](const request& request, const response& response) {
        request.on_data([&](const uint8_t* data, std::size_t len) {
          if (request.method().compare("GET") == 0) {
            this->get_slice_config(response);
          }
        });
      });

  // Get list of supported APIs
  server.handle("/", [&](const request& request, const response& response) {
    request.on_data([&](const uint8_t* data, std::size_t len) {
      if (request.method().compare("GET") == 0) {
        this->get_api_list(response);
      }
    });
  });

  running_server = true;
  if (server.listen_and_serve(ec, m_address, std::to_string(m_port))) {
    Logger::nssf_sbi().error("HTTP Server error: %s", ec.message());
  }
  running_server = false;
  Logger::nssf_sbi().info("HTTP2 server fully stopped");
}

//------------------------------------------------------------------------------
void nssf_http2_server::get_slice_info_for_registration_handler(
    const std::string& nf_type, std::string& nf_id,
    const SliceInfoForRegistration slice_info, const Tai& tai,
    const PlmnId& home_plmnid, const std::string& features,
    const response& response) {
  Logger::nssf_app().info("");
  Logger::nssf_sbi().info(
      "NS Selection: Got a request with slice info for Registration, "
      "Instance ID: %s",
      nf_id.c_str());
  int http_code                  = 0;
  ProblemDetails problem_details = {};
  nlohmann::json json_data       = {};
  std::string content_type       = "application/json";
  std::string json_format;
  AuthorizedNetworkSliceInfo auth_slice_info;
  header_map h;
  h.emplace("content-type", header_value{content_type});

  if (nf_type.compare(NF_TYPE_AMF) == 0 || nf_type.compare(NF_TYPE_NSSF) == 0) {
    m_nssf_app->handle_slice_info_for_registration(
        slice_info, tai, home_plmnid, features, http_code, 2, problem_details,
        auth_slice_info);
    if (http_code == oai::common::sbi::http_status_code::OK) {
      to_json(json_data, auth_slice_info);

      response.write_head(http_code, h);
      response.end(json_data.dump().c_str());
    } else {
      response.write_head(http_code, h);
      to_json(json_data, problem_details);
      response.end(json_data.dump().c_str());
    }
  } else {
    Logger::nssf_sbi().error(
        "Invalid NF_Type (Valid NF_Type is AMF, NSSF, NWDAP, SMF)");
    Logger::nssf_app().info(
        "//---------------------------------------------------------");
    Logger::nssf_app().info("");
    http_code = oai::common::sbi::http_status_code::BAD_REQUEST;
    response.write_head(http_code, h);
    to_json(json_data, problem_details);
    response.end();
  }
}

//------------------------------------------------------------------------------
void nssf_http2_server::get_slice_info_for_pdu_session_handler(
    const std::string& nf_type, std::string& nf_id,
    const SliceInfoForPDUSession& slice_info, const Tai& tai,
    const PlmnId& home_plmnid, const std::string& features,
    const response& response) {
  Logger::nssf_app().info("");
  Logger::nssf_sbi().info(
      "NS Selection: Got a request with slice info for PDU Session, "
      "Instance ID: %s",
      nf_id.c_str());

  int http_code                  = 0;
  ProblemDetails problem_details = {};
  nlohmann::json json_data       = {};
  std::string content_type       = "application/json";
  std::string json_format;
  AuthorizedNetworkSliceInfo auth_slice_info;
  header_map h;
  h.emplace("content-type", header_value{content_type});

  if (nf_type.compare(NF_TYPE_AMF) == 0 || nf_type.compare(NF_TYPE_NSSF) == 0) {
    // ToDo - Check seperately first if TAI, HomePlmnId and features are
    // supported
    m_nssf_app->handle_slice_info_for_pdu_session(
        slice_info, tai, home_plmnid, features, http_code, 2, problem_details,
        auth_slice_info);
    if (http_code == oai::common::sbi::http_status_code::OK) {
      to_json(json_data, auth_slice_info);

      response.write_head(http_code, h);
      response.end(json_data.dump().c_str());
    } else {
      response.write_head(http_code, h);
      to_json(json_data, problem_details);
      response.end(json_data.dump().c_str());
    }
  } else {
    Logger::nssf_sbi().error(
        "Invalid NF_Type (Valid NF_Type is AMF, NSSF, NWDAP, SMF)");
    Logger::nssf_app().info(
        "//---------------------------------------------------------");
    Logger::nssf_app().info("");
    http_code = oai::common::sbi::http_status_code::BAD_REQUEST;
    response.write_head(http_code, h);
    to_json(json_data, problem_details);
    response.end();
  }
}

//------------------------------------------------------------------------------
void nssf_http2_server::get_slice_info_for_ue_cu_handler(
    const std::string& nf_type, std::string& nf_id,
    const SliceInfoForUEConfigurationUpdate& slice_info, const Tai& tai,
    const PlmnId& home_plmnid, const std::string& features,
    const response& response) {
  Logger::nssf_sbi().info(
      "NS Selection: Got a request with slice info for UE Config Update, "
      "Instance ID: %s",
      nf_id.c_str());
  Logger::nssf_sbi().error("Not supported");
  Logger::nssf_app().info(
      "//---------------------------------------------------------");
  long http_code = oai::common::sbi::http_status_code::SERVICE_UNAVAILABLE;
  header_map h;
  response.write_head(http_code, h);
  response.end("API not implemented yet !!!");
}

//------------------------------------------------------------------------------
void nssf_http2_server::get_slice_info_default_handler(
    const std::string& nf_type, std::string& nf_id, const Tai& tai,
    const PlmnId& home_plmnid, const std::string& features,
    const response& response) {
  Logger::nssf_sbi().info(
      "NS Selection: Got a request with default query parameters, "
      "Instance ID: %s",
      nf_id.c_str());
  // ToDo and TBD
}

//------------------------------------------------------------------------------
void nssf_http2_server::create_nssai_availability_handler(
    const std::string& nfId, const NssaiAvailabilityInfo& nssaiAvailInfo,
    const response& response) {
  Logger::nssf_sbi().info(
      "NSSAI Availability: Got a request to "
      "Updates/replaces the NSSF with the S-NSSAIs");
  Logger::nssf_sbi().info("NSSAI Availability: Instance ID: %s", nfId.c_str());

  int http_code                  = 0;
  ProblemDetails problem_details = {};
  nlohmann::json json_data       = {};
  header_map h;
  AuthorizedNssaiAvailabilityInfo auth_nssai_avail_info;

  m_nssf_app->handle_create_nssai_availability(
      nfId, nssaiAvailInfo, auth_nssai_avail_info, http_code, 2,
      problem_details);
  if (http_code == oai::common::sbi::http_status_code::NO_CONTENT) {
    response.write_head(http_code, h);
    response.end();
  } else if (http_code == oai::common::sbi::http_status_code::OK) {
    h.emplace("content-type", header_value{"application/json"});
    response.write_head(http_code, h);
    to_json(json_data, auth_nssai_avail_info);
    response.end(json_data.dump().c_str());
  } else {
    h.emplace("content-type", header_value{"application/problem+json"});
    response.write_head(http_code, h);
    to_json(json_data, problem_details);
    response.end(json_data.dump().c_str());
  }
}

//------------------------------------------------------------------------------
void nssf_http2_server::get_slice_config(const response& response) {
  Logger::nssf_sbi().info(
      "OAI-NSSF:: Default Slice Config is requested (HTTP Version 2)!!!");
  int http_code            = 0;
  nlohmann::json json_data = {};
  std::string content_type = "application/json";
  header_map h;
  h.emplace("content-type", header_value{content_type});
  // if (nssf_cfg.get_slice_config(json_data)) {
  //   http_code = oai::common::sbi::http_status_code::OK;
  //   response.write_head(http_code, h);
  //   response.end(json_data.dump(4).c_str());
  // } else {
  //   http_code = oai::common::sbi::http_status_code::SERVICE_UNAVAILABLE;
  //   response.write_head(http_code, h);
  //   response.end();
  // }
}
//------------------------------------------------------------------------------
void nssf_http2_server::get_api_list(const response& response) {
  int http_code            = 0;
  nlohmann::json json_data = {};
  std::string content_type = "application/json";
  header_map h;
  h.emplace("content-type", header_value{content_type});
  if (nssf_cfg->get_api_list(json_data)) {
    http_code = oai::common::sbi::http_status_code::OK;
    response.write_head(http_code, h);
    response.end(json_data.dump(4).c_str());
  } else {
    http_code = oai::common::sbi::http_status_code::SERVICE_UNAVAILABLE;
    response.write_head(http_code, h);
    response.end();
  }
}
//------------------------------------------------------------------------------
void nssf_http2_server::stop() {
  server.stop();
  while (running_server) {
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
  }
  Logger::nssf_sbi().info("HTTP2 server should be fully stopped");
  std::this_thread::sleep_for(std::chrono::milliseconds(50));
}
