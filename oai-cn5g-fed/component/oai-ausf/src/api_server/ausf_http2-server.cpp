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

#include <boost/algorithm/string.hpp>
#include <boost/thread.hpp>
#include <boost/thread/future.hpp>
#include <nlohmann/json.hpp>
#include <regex>
#include <string>

#include "3gpp_29.500.h"
#include "ausf-http2-server.h"
#include "ausf_config.hpp"
#include "ausf_sbi_helper.hpp"
#include "logger.hpp"
#include "string.hpp"

using namespace nghttp2::asio_http2;
using namespace nghttp2::asio_http2::server;
using namespace oai::model::ausf;
using namespace oai::config;
using namespace oai::ausf::api;

extern ausf_config ausf_cfg;

//------------------------------------------------------------------------------
void ausf_http2_server::start() {
  boost::system::error_code ec;

  Logger::ausf_server().info("HTTP2 server being started");

  // Default API
  server.handle(
      ausf_sbi_helper::UEAuthenticationServiceBase +
          ausf_sbi_helper::AusfAuthPathUeAuthentications,
      [&](const request& request, const response& response) {
        request.on_data([&](const uint8_t* data, std::size_t len) {
          std::string msg((char*) data, len);
          try {
            std::vector<std::string> split_result;
            boost::split(
                split_result, request.uri().path, boost::is_any_of("/"));
            if (request.method().compare("POST") == 0 && len > 0) {
              AuthenticationInfo authenticationInfo;
              nlohmann::json::parse(msg.c_str()).get_to(authenticationInfo);
              this->ue_authentications_post_handler(
                  authenticationInfo, response);
            }
          } catch (std::exception& e) {
            Logger::ausf_server().warn(
                "Invalid request (error: %s)!", e.what());
            response.write_head(
                oai::common::sbi::http_status_code::BAD_REQUEST);
            response.end();
            return;
          }
        });
      });

  server.handle(
      ausf_sbi_helper::UEAuthenticationServiceBase +
          ausf_sbi_helper::AusfAuthPathUeAuthentications + "/",
      [&](const request& request, const response& response) {
        request.on_data([&](const uint8_t* data, std::size_t len) {
          std::string msg((char*) data, len);
          try {
            std::vector<std::string> split_result;
            boost::split(
                split_result, request.uri().path, boost::is_any_of("/"));
            if (request.method().compare("POST") == 0 && len > 0) {
              if (split_result[split_result.size() - 1].compare(
                      "eap-session") == 0) {
                EapSession eapSession;
                std::string authCtxId =
                    split_result[split_result.size() - 2].c_str();
                nlohmann::json::parse(msg.c_str()).get_to(eapSession);
                this->eap_auth_method_handler(authCtxId, eapSession, response);
              }
              if (split_result[split_result.size() - 1].compare("deregister") ==
                  0) {
                DeregistrationInfo deregistrationInfo;
                nlohmann::json::parse(msg.c_str()).get_to(deregistrationInfo);
                this->ue_authentications_deregister_post_handler(
                    deregistrationInfo, response);
              }
            }
            if (request.method().compare("PUT") == 0 && len > 0) {
              ConfirmationData confirmationData;
              std::string authCtxId =
                  split_result[split_result.size() - 2].c_str();
              nlohmann::json::parse(msg.c_str()).get_to(confirmationData);
              this->ue_authentications_auth_ctx_id5g_aka_confirmation_put_handler(
                  authCtxId, confirmationData, response);
            }
          } catch (std::exception& e) {
            Logger::ausf_server().warn(
                "Invalid request (error: %s)!", e.what());
            response.write_head(
                oai::common::sbi::http_status_code::BAD_REQUEST);
            response.end();
            return;
          }
        });
      });

  server.handle(
      ausf_sbi_helper::UEAuthenticationServiceBase + NAUSF_RG_AUTH,
      [&](const request& request, const response& response) {
        request.on_data([&](const uint8_t* data, std::size_t len) {
          std::string msg((char*) data, len);
          try {
            std::vector<std::string> split_result;
            boost::split(
                split_result, request.uri().path, boost::is_any_of("/"));
            if (request.method().compare("POST") == 0 && len > 0) {
              RgAuthenticationInfo rgAuthenticationInfo;
              std::string authCtxId =
                  split_result[split_result.size() - 2].c_str();
              nlohmann::json::parse(msg.c_str()).get_to(rgAuthenticationInfo);
              this->rg_authentications_post_handler(
                  rgAuthenticationInfo, response);
            }
          } catch (std::exception& e) {
            Logger::ausf_server().warn(
                "Invalid request (error: %s)!", e.what());
            response.write_head(
                oai::common::sbi::http_status_code::BAD_REQUEST);
            response.end();
            return;
          }
        });
      });

  running_server = true;
  if (server.listen_and_serve(ec, m_address, std::to_string(m_port))) {
    Logger::ausf_server().debug("HTTP Server status: %s", ec.message());
  }
  running_server = false;
  Logger::ausf_server().info("HTTP2 server fully stopped");
}

//------------------------------------------------------------------------
void ausf_http2_server::stop() {
  server.stop();
  while (running_server) {
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
  }
  Logger::ausf_server().info("HTTP2 server should be fully stopped");
  std::this_thread::sleep_for(std::chrono::milliseconds(50));
}

//------------------------------------------------------------------------
void ausf_http2_server::eap_auth_method_handler(
    const std::string& authCtxId, const EapSession& eapSession,
    const response& response) {
  Logger::ausf_server().info("eap_auth_method");
  header_map h;
  response.write_head(oai::common::sbi::http_status_code::NOT_IMPLEMENTED, h);
  response.end("eap_auth_method API has not been implemented yet!");
}

//------------------------------------------------------------------------
void ausf_http2_server::rg_authentications_post_handler(
    const RgAuthenticationInfo& rgAuthenticationInfo,
    const response& response) {
  Logger::ausf_server().info("rg_authentications_post");
  header_map h;
  response.write_head(oai::common::sbi::http_status_code::NOT_IMPLEMENTED, h);
  response.end("rg_authentications_post API has not been implemented yet!");
}

//------------------------------------------------------------------------
void ausf_http2_server::ue_authentications_deregister_post_handler(
    const DeregistrationInfo& deregistrationInfo, const response& response) {
  Logger::ausf_server().info("ue_authentications_deregister_post");
  header_map h;
  response.write_head(oai::common::sbi::http_status_code::NOT_IMPLEMENTED, h);
  response.end(
      "ue_authentications_deregister_post API has not been implemented yet!");
}

//------------------------------------------------------------------------
void ausf_http2_server::
    ue_authentications_auth_ctx_id5g_aka_confirmation_put_handler(
        const std::string& authCtxId, const ConfirmationData& confirmationData,
        const response& response) {
  Logger::ausf_server().info("Received 5g_aka_confirmation Request");

  Logger::ausf_server().info(
      "5gaka confirmation received with authctxID %s", authCtxId.c_str());

  nlohmann::json json_data  = {};
  Pistache::Http::Code code = {};
  header_map h;

  m_ausf_app->handle_ue_authentications_confirmation(
      authCtxId, confirmationData, json_data, code);

  // ausf --> seaf
  Logger::ausf_server().debug(
      "5g-aka-confirmation response:\n %s", json_data.dump().c_str());

  Logger::ausf_server().info(
      "Send 5g-aka-confirmation response to SEAF (Code %d)", (int) code);
  if (code == Pistache::Http::Code::Ok)
    response.write_head(oai::common::sbi::http_status_code::OK, h);
  else
    response.write_head(oai::common::sbi::http_status_code::FORBIDDEN, h);
  response.end(json_data.dump().c_str());
}

//------------------------------------------------------------------------
void ausf_http2_server::ue_authentications_post_handler(
    const AuthenticationInfo& authenticationInfo, const response& response) {
  Logger::ausf_server().info("Received ue_authentications_post Request");

  std::string reponse_from_udm    = {};
  std::string location            = {};
  UEAuthenticationCtx ue_auth_ctx = {};
  nlohmann::json UEAuthCtx_json   = {};
  Pistache::Http::Code code       = {};
  header_map h;

  m_ausf_app->handle_ue_authentications(
      authenticationInfo, UEAuthCtx_json, location, code, 2);

  Logger::ausf_server().debug(
      "Auth response:\n %s", UEAuthCtx_json.dump().c_str());

  Logger::ausf_server().info(
      "Send Auth response to SEAF (Code %d)", (int) code);
  if (code == Pistache::Http::Code::Created)
    response.write_head(oai::common::sbi::http_status_code::CREATED, h);
  else
    response.write_head(oai::common::sbi::http_status_code::NOT_FOUND, h);
  response.end(UEAuthCtx_json.dump().c_str());
}
//------------------------------------------------------------------------
