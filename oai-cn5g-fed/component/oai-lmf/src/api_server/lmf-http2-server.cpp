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

#include "lmf-http2-server.h"

#include <pistache/http.h>

#include <boost/algorithm/string.hpp>
#include <boost/thread.hpp>
#include <boost/thread/future.hpp>
#include <filesystem>
#include <iostream>
#include <nlohmann/json.hpp>
#include <regex>
#include <string>

#include "3gpp_29.500.h"
#include "N2InformationNotification.h"
#include "ProblemDetails.h"
#include "lmf_config.hpp"
#include "lmf_sbi_helper.hpp"
#include "logger.hpp"
#include "mime_parser.hpp"
#include "string.hpp"

using namespace nghttp2::asio_http2;
using namespace nghttp2::asio_http2::server;
using namespace oai::lmf::config;
using namespace oai::model::lmf;
using namespace oai::lmf::api;
using namespace oai::model::common;

extern lmf_config lmf_cfg;

std::string get_thread_id() {
  return std::to_string(
      std::hash<std::thread::id>{}(std::this_thread::get_id()));
}

//------------------------------------------------------------------------------
void lmf_http2_server::start() {
  boost::system::error_code ec;

  Logger::lmf_server().info("HTTP2 server being started");

  // Default API
  /* TODO: Confirm base uri */
  server.handle(
      lmf_sbi_helper::LmfLocationServiceBase +
          lmf_sbi_helper::LmfLocDetermineLocation,
      [&](const request& request, const response& response) {
        auto requestBody = std::make_shared<std::stringstream>();
        request.on_data([requestBody, &request, &response, this](
                            const uint8_t* data, std::size_t len) {
          try {
            if (len > 0) {
              std::copy(
                  data, data + len,
                  std::ostream_iterator<uint8_t>(*requestBody));
            } else {
              Logger::lmf_app().debug(
                  "start determine-location: " + get_thread_id());
              auto const& msg = requestBody->str();
              requestBody->clear();
              if (msg.size() == 0 || request.method().compare("POST") != 0) {
                throw std::runtime_error("invalid request");
              }
              InputData inputData{nlohmann::json::parse(msg)};
              this->detemine_location_post_handler(inputData, response);
            }
          } catch (std::exception& e) {
            Logger::lmf_server().warn("Invalid request (error: %s)!", e.what());
            response.write_head(
                oai::common::sbi::http_status_code::BAD_REQUEST);
            response.end();
            return;
          }
        });
        response.on_close([](uint32_t cause) {
          Logger::lmf_app().debug(
              "stop determine-location: " + get_thread_id());
        });
      });

  // /nlmf-n2info-notify/v1/nrppa/callback/imsi-208950000000131
  server.handle(
      lmf_sbi_helper::LmfN2InfoNotifyServiceBase +
          lmf_sbi_helper::LmfN2InfoNotifyNrppaCallback,
      [&](const request& request, const response& response) {
        auto requestBody = std::make_shared<std::stringstream>();
        request.on_data([requestBody, &request, &response, this](
                            const uint8_t* data, std::size_t len) {
          try {
            if (len > 0) {
              std::copy(
                  data, data + len,
                  std::ostream_iterator<uint8_t>(*requestBody));
            } else {
              Logger::lmf_app().debug("start ue: " + get_thread_id());
              auto const& msg = requestBody->str();
              requestBody->clear();
              std::filesystem::path path{request.uri().path};
              std::vector<std::string> split_result{path.begin(), path.end()};
              if (msg.size() == 0 || request.method().compare("POST") != 0 ||
                  split_result.size() != 6) {
                throw std::invalid_argument("invalid request");
              }
              auto ueContextId = split_result.at(5);
              mime_parser sp;
              if (!sp.parse(msg)) {
                throw std::invalid_argument{"can not parse multipart"};
              }
              std::vector<mime_part> parts;
              sp.get_mime_parts(parts);
              if (parts.size() != 2) {
                throw std::invalid_argument{"expect two parts"};
              }
              this->n2info_nrppa_notification_post_handler(
                  ueContextId, parts, response);
            }
          } catch (std::exception& e) {
            Logger::lmf_server().warn("Invalid request (error: %s)!", e.what());
            response.write_head(
                oai::common::sbi::http_status_code::BAD_REQUEST);
            response.end();
            return;
          }
        });
        response.on_close([](uint32_t cause) {
          Logger::lmf_app().debug("stop ue: " + get_thread_id());
        });
      });

  // /nlmf-non-ue-n2info-notify/v1/nrppa/callback/
  server.handle(
      lmf_sbi_helper::LmfNonUeN2InfoNotifyServiceBase +
          lmf_sbi_helper::LmfNonUeN2InfoNotifyNrppaCallback,
      [&](const request& request, const response& response) {
        auto requestBody = std::make_shared<std::stringstream>();
        request.on_data([requestBody, &request, &response, this](
                            const uint8_t* data, std::size_t len) {
          try {
            if (len > 0) {
              std::copy(
                  data, data + len,
                  std::ostream_iterator<uint8_t>(*requestBody));
            } else {
              Logger::lmf_app().debug("start non-ue: " + get_thread_id());
              auto const& msg = requestBody->str();
              requestBody->clear();
              mime_parser sp;
              if (!sp.parse(msg)) {
                throw std::invalid_argument{"can not parse multipart"};
              }
              std::vector<mime_part> parts;
              sp.get_mime_parts(parts);
              if (parts.size() != 2) {
                throw std::invalid_argument{"expect two parts"};
              }
              this->non_ue_n2info_nrppa_notification_post_handler(
                  parts, response);
            }
          } catch (std::exception& e) {
            Logger::lmf_server().warn("Invalid request (error: %s)!", e.what());
            response.write_head(
                oai::common::sbi::http_status_code::BAD_REQUEST);
            response.end();
            return;
          }
        });
        response.on_close([](uint32_t cause) {
          Logger::lmf_app().debug("stop non-ue: " + get_thread_id());
        });
      });

  // multi threaded is needed to handle incomming AMF notifications during
  // processing determine locaiton
  running_server = true;
  server.num_threads(m_num_threads);
  server.backlog(0xffff);
  if (server.listen_and_serve(ec, m_address, std::to_string(m_port))) {
    Logger::lmf_server().error("HTTP2 server status: %s", ec.message());
  }
  running_server = false;
  Logger::lmf_server().info("HTTP2 server fully stopped");
}

void lmf_http2_server::non_ue_n2info_nrppa_notification_post_handler(
    std::vector<mime_part>& parts, const response& response) {
  N2InformationNotification n2InformationNotification{
      nlohmann::json::parse(parts.at(0).body)};
  // TODO: handle subscrription id
  auto const& n2NotifySubscriptionId =
      n2InformationNotification.getN2NotifySubscriptionId();
  // TODO: handle lcs corrlation id
  n2InformationNotification.getLcsCorrelationId();

  auto nrppa = lmf_app::parse_n2_info_container_nrppa(
      n2InformationNotification, parts.at(1));
  header_map h;
  unsigned code = oai::common::sbi::http_status_code::NO_CONTENT;
  ProblemDetails problemDetails;
  std::string reason;
  try {
    m_lmf_app->handle_non_ue_n2info_nrppa_notification(nrppa);
  } catch (nlohmann::detail::exception& e) {
    problemDetails.setDetail(e.what());
    code = oai::common::sbi::http_status_code::BAD_REQUEST;
  } catch (Pistache::Http::HttpError& e) {
    code = e.code();
    problemDetails.setDetail(e.what());
    reason = e.what();
  } catch (std::exception& e) {
    problemDetails.setDetail(e.what());
    code = oai::common::sbi::http_status_code::INTERNAL_SERVER_ERROR;
  }
  if (code != oai::common::sbi::http_status_code::NO_CONTENT) {
    problemDetails.setTitle("handle_n2info_nrppa_notification failed");
    Logger::lmf_server().error(
        problemDetails.getTitle() + ": " + problemDetails.getDetail());
    h.insert(std::make_pair<std::string, header_value>(
        "Content-Type", {"application/json", false}));
    if (reason.empty()) {
      reason = nlohmann::json(problemDetails).dump();
    }
  }
  std::cout << "code: " + std::to_string(code) + "reason: " + reason
            << std::endl;

  response.write_head(code, h);
  response.end(reason);
}

void lmf_http2_server::n2info_nrppa_notification_post_handler(
    const std::string& ueContextId, std::vector<mime_part>& parts,
    const response& response) {
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
  header_map h;
  unsigned code = oai::common::sbi::http_status_code::NO_CONTENT;
  ProblemDetails problemDetails;
  std::string reason;
  try {
    m_lmf_app->handle_n2info_nrppa_notification(ueContextId, nrppa);
  } catch (nlohmann::detail::exception& e) {
    problemDetails.setDetail(e.what());
    code = oai::common::sbi::http_status_code::BAD_REQUEST;
  } catch (Pistache::Http::HttpError& e) {
    code = e.code();
    problemDetails.setDetail(e.what());
    reason = e.what();
  } catch (std::exception& e) {
    problemDetails.setDetail(e.what());
    code = oai::common::sbi::http_status_code::INTERNAL_SERVER_ERROR;
  }
  if (code != oai::common::sbi::http_status_code::NO_CONTENT) {
    problemDetails.setTitle("handle_n2info_nrppa_notification failed");
    Logger::lmf_server().error(
        problemDetails.getTitle() + ": " + problemDetails.getDetail());
    h.insert(std::make_pair<std::string, header_value>(
        "Content-Type", {"application/json", false}));
    if (reason.empty()) {
      reason = nlohmann::json(problemDetails).dump();
    }
  }
  std::cout << "code: " + std::to_string(code) + "reason: " + reason
            << std::endl;
  response.write_head(code, h);
  response.end(reason);
}

void lmf_http2_server::detemine_location_post_handler(
    const oai::model::lmf::InputData& inputData, const response& response) {
  Logger::lmf_server().info("Received determine_location_post Request");

  nlohmann::json locationData_json = {};
  Pistache::Http::Code code        = {};
  header_map h;

  try {
    this->m_lmf_app->handle_determine_location(
        inputData, locationData_json, code);
  } catch (Pistache::Http::HttpError& e) {
    h.insert(std::make_pair<std::string, header_value>(
        "Content-Type", {"application/problem+json", false}));
    response.write_head(e.code(), h);
    response.end(e.what());
    this->m_lmf_app->release_all_n1n2subscriptions();
    this->m_lmf_app->release_non_ue_subscription();

    return;
  } catch (std::exception& e) {
    response.write_head(
        oai::common::sbi::http_status_code::INTERNAL_SERVER_ERROR, h);
    response.end(e.what());
    this->m_lmf_app->release_all_n1n2subscriptions();
    this->m_lmf_app->release_non_ue_subscription();

    return;
  }

  if (code == Pistache::Http::Code::Ok) {
    h.insert(std::make_pair<std::string, header_value>(
        "Content-Type", {"application/json", false}));
    response.write_head(oai::common::sbi::http_status_code::OK, h);
    response.end(locationData_json.dump());
  } else {
    response.write_head(static_cast<uint32_t>(code), h);
    response.end();
  }
}

//------------------------------------------------------------------------------
void lmf_http2_server::stop() {
  server.stop();
  while (running_server) {
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
  }
  Logger::lmf_server().info("HTTP2 server should be fully stopped");
  std::this_thread::sleep_for(std::chrono::milliseconds(50));
}
