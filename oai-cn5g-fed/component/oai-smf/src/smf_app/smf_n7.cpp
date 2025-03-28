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

/*! \file smf_n7.cpp
 \author  Stefan Spettel
 \company Openairinterface Software Alliance
 \date 2022
 \email: stefan.spettel@eurecom.fr
 */

#include "smf_n7.hpp"
#include "smf_config.hpp"
#include "fqdn.hpp"
#include "smf_sbi.hpp"
#include "nlohmann/json.hpp"
#include "3gpp_29.500.h"
#include "ProblemDetails.h"
#include "uint_generator.hpp"
#include "SmPolicyControl.h"
#include <regex>
#include "http_client.hpp"

using namespace smf;
using namespace smf::n7;
using namespace oai::model::pcf;
using namespace oai::model::common;
using namespace oai::common::sbi;
using namespace oai::http;

extern std::unique_ptr<oai::config::smf::smf_config> smf_cfg;
extern std::shared_ptr<oai::http::http_client> http_client_inst;

uint32_t smf_n7::select_pcf(const SmPolicyContextData& context) {
  // TODO PCF selection

  if (policy_storages.empty()) {
    std::unique_lock policies_lock(policy_storages_mutex);
    // TODO choose between local PCC rules and PCF client, for now only PCF
    // client
    if (smf_cfg->use_local_pcc_rules) {
      Logger::smf_n7().warn("Local PCC rules are not supported yet");
      return 0;
    } else {
      PlmnId plmn_id = {};
      plmn_id.setMcc(context.getServingNetwork().getMcc());
      plmn_id.setMnc(context.getServingNetwork().getMnc());
      std::shared_ptr<smf_pcf_client> storage = smf_pcf_client::discover_pcf(
          context.getSliceInfo(), plmn_id, context.getDnn());

      if (storage) {
        // TODO for now, only use the first PCF
        policy_storages.insert(std::make_pair(1, storage));
        return 1;  // ID is always 1, only one PF
      } else {
        Logger::smf_n7().info("Did not find PCF");
        return 0;
      }
    }
  }

  // TODO for now, only use first PCF
  return 1;
}

sm_policy_status_code smf_n7::create_sm_policy_association(
    policy_association& association) {
  uint32_t pcf_id = select_pcf(association.context);
  if (pcf_id == 0) {
    return sm_policy_status_code::PCF_NOT_AVAILABLE;
  }
  association.pcf_id = pcf_id;
  std::shared_ptr<policy_storage> storage =
      get_policy_storage(association.pcf_id);

  if (!storage) {
    return sm_policy_status_code::PCF_NOT_AVAILABLE;
  }

  sm_policy_status_code res = storage->create_policy_association(association);

  if (res == sm_policy_status_code::CREATED) {
    if (association.id == 0) {
      association.id =
          oai::utils::uint_uid_generator<uint64_t>::get_instance().get_uid();
    }
    association.pcf_id = pcf_id;

    Logger::smf_n7().debug(
        "Successfully created policy association with ID: %lu ",
        association.id);
  }

  return res;
}

sm_policy_status_code smf_n7::remove_sm_policy_association(
    const policy_association& association,
    const SmPolicyDeleteData& delete_data) {
  std::shared_ptr<policy_storage> storage =
      get_policy_storage(association.pcf_id);
  if (!storage) return sm_policy_status_code::PCF_NOT_AVAILABLE;

  return storage->remove_policy_association(association, delete_data);
}

sm_policy_status_code smf_n7::update_sm_policy_association(
    policy_association& association,
    const SmPolicyUpdateContextData& update_data) {
  std::shared_ptr<policy_storage> storage =
      get_policy_storage(association.pcf_id);

  if (!storage) return sm_policy_status_code::PCF_NOT_AVAILABLE;

  return storage->update_policy_association(update_data, association);
}

std::shared_ptr<policy_storage> smf_n7::get_policy_storage(uint32_t pcf_id) {
  std::shared_lock policies_lock(policy_storages_mutex);
  auto it = policy_storages.find(pcf_id);

  if (it == policy_storages.end()) {
    return nullptr;
  }
  return it->second;
}

smf_n7::~smf_n7() {
  Logger::smf_n7().info("Deleting SMF N7 instance...");
}

///////////////////////////////////////////////////////////////////////////
/////////////////////// smf_pcf_client ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////

std::shared_ptr<smf_pcf_client> smf_pcf_client::discover_pcf(
    const Snssai& snssai, const PlmnId& plmn_id, const std::string& dnn) {
  if (smf_cfg->use_local_pcc_rules) {
    Logger::smf_n7().info("Local PCC rules are enabled, do not discover PCF");
    return nullptr;
  }

  std::string pcf_addr;
  std::string api_version;

  if (smf_cfg->discover_pcf) {
    if (!discover_pcf_with_nrf(pcf_addr, api_version, snssai, plmn_id, dnn)) {
      Logger::smf_n7().warn("Could not discover PCF from NRF");
      return nullptr;
    }
  } else {
    if (!discover_pcf_from_config_file(
            pcf_addr, api_version, snssai, plmn_id, dnn)) {
      Logger::smf_n7().warn("Could not discover PCF from config file");
      return nullptr;
    }
  }
  Logger::smf_n7().info("Created new PCF connection: %s", pcf_addr.c_str());
  return std::make_unique<smf_pcf_client>(pcf_addr, api_version);
}

bool smf_pcf_client::discover_pcf_with_nrf(
    std::string& addr, std::string& api_version, const Snssai& snssai,
    const PlmnId& plmn_id, const std::string& dnn) {
  Logger::smf_n7().debug("Discover PCF with NRF");
  Logger::smf_n7().warn("NRF discovery not yet supported!");
  return false;
}

bool smf_pcf_client::discover_pcf_from_config_file(
    std::string& addr, std::string& api_version, const Snssai& snssai,
    const PlmnId& plmn_id, const std::string& dnn) {
  // TODO ignore snssai, plmn_id and dnn, because it is not part of
  // configuration
  Logger::smf_n7().debug("Discover PCF from config file");
  api_version = smf_cfg->get_nf(oai::config::PCF_CONFIG_NAME)
                    ->get_sbi()
                    .get_api_version();
  addr = smf_cfg->get_nf(oai::config::PCF_CONFIG_NAME)->get_sbi().get_url();
  return true;
}

sm_policy_status_code smf_pcf_client::create_policy_association(
    policy_association& association) {
  nlohmann::json json_data;
  to_json(json_data, association.context);

  Logger::smf_n7().info("Sending PCF SM policy association creation request");

  request req =
      http_client_inst->prepare_json_request(root_uri, json_data.dump());
  response resp = http_client_inst->send_http_request(method_e::POST, req);

  if (resp.status_code == http_status_code::CREATED) {
    if (resp.headers.find("location") == resp.headers.end()) {
      Logger::smf_n7().debug(
          "SM Policy Association response does not contain Location!");
      return sm_policy_status_code::INTERNAL_ERROR;
    } else {
      association.pcf_location = resp.headers["location"];
      nlohmann::json j         = nlohmann::json::parse(resp.body);
      from_json(j, association.decision);
      Logger::smf_n7().info(
          "Successfully created SM Policy Association for SUPI %s",
          association.context.getSupi().c_str());
      return sm_policy_status_code::CREATED;
    }
  }

  // failure case
  ProblemDetails problem_details;
  from_json(resp.body, problem_details);

  std::string info;
  sm_policy_status_code response;
  switch (resp.status_code) {
    case http_status_code::FORBIDDEN:
      info     = "SM Policy Association Creation Forbidden";
      response = sm_policy_status_code::CONTEXT_DENIED;
      break;
    case http_status_code::BAD_REQUEST:
      if (problem_details.getCause() == "USER_UNKNOWN") {
        response = sm_policy_status_code::USER_UNKOWN;
        info     = "SM Policy Association Creation: Unknown User";
      } else {
        response = sm_policy_status_code::INVALID_PARAMETERS;
        info     = "SM Policy Association Creation: Bad Request";
      }
      break;
    case http_status_code::INTERNAL_SERVER_ERROR:
      response = sm_policy_status_code::INTERNAL_ERROR;
      info     = "SM Policy Association Creation: Internal Error";
      break;
    default:
      response = sm_policy_status_code::INTERNAL_ERROR;
      info =
          "SM Policy Association Creation: Unknown Error Code from "
          "PCF: " +
          std::to_string(resp.status_code);
  }

  Logger::smf_n7().warn(
      "%s -- Details: %s - %s", info.c_str(),
      problem_details.getCause().c_str(), problem_details.getDetail().c_str());
  return response;
}

sm_policy_status_code smf_pcf_client::remove_policy_association(
    const policy_association& association,
    const SmPolicyDeleteData& delete_data) {
  std::string uri = association.pcf_location + "/" + delete_suffix;
  nlohmann::json json_data;
  to_json(json_data, delete_data);

  request req   = http_client_inst->prepare_json_request(uri, json_data.dump());
  response resp = http_client_inst->send_http_request(method_e::POST, req);

  switch (resp.status_code) {
    case http_status_code::NO_CONTENT:
      Logger::smf_n7().info("Successfully removed PCF Policy Association");
      return sm_policy_status_code::OK;
    case http_status_code::NOT_FOUND:
      Logger::smf_n7().info(
          "Could not remove PCF Policy Association. Wrong PCF Location");
      return sm_policy_status_code::NOT_FOUND;
    default:
      Logger::smf_n7().info(
          "Could not remove PCF Policy Association: Unknown Return code");
      return sm_policy_status_code::INTERNAL_ERROR;
  }
}

sm_policy_status_code smf_pcf_client::update_policy_association(
    const SmPolicyUpdateContextData& update_data,
    policy_association& association) {
  std::string uri = association.pcf_location + "/" + update_suffix;
  nlohmann::json json_data;
  to_json(json_data, update_data);
  request req   = http_client_inst->prepare_json_request(uri, json_data.dump());
  response resp = http_client_inst->send_http_request(method_e::POST, req);

  nlohmann::json json_resp;

  // TODO in the standard it is written that PCF should only update to decision
  // but here we overwrite object this works because PCF does the same but it is
  // not standard-compliant

  switch (resp.status_code) {
    case http_status_code::OK:
      json_resp = nlohmann::json::parse(resp.body);
      from_json(json_resp, association.decision);
      Logger::smf_n7().info("Successfully updated PCF association");
      return sm_policy_status_code::OK;
    case http_status_code::NOT_FOUND:
      Logger::smf_n7().info(
          "Could not update PCF Policy Association. Wrong PCF Location");
      return sm_policy_status_code::NOT_FOUND;
    default:
      Logger::smf_n7().info(
          "Could not update PCF Policy Association: Unknown Return code");
      return sm_policy_status_code::INTERNAL_ERROR;
  }
}

sm_policy_status_code smf_pcf_client::get_policy_association(
    policy_association& association) {
  std::string uri = association.pcf_location;
  std::string empty;
  request req;
  req.uri          = uri;
  response resp    = http_client_inst->send_http_request(method_e::GET, req);
  nlohmann::json j = nlohmann::json::parse(resp.body);

  SmPolicyControl control;
  switch (resp.status_code) {
    case http_status_code::OK:

      from_json(j, control);
      association.decision = control.getPolicy();
      association.context  = control.getContext();

      Logger::smf_n7().info("Successfully retrieved PCF Policy Association");
      return sm_policy_status_code::OK;
    case http_status_code::NOT_FOUND:
      Logger::smf_n7().info(
          "Could not retrieve PCF Policy Association. Wrong PCF Location");
      return sm_policy_status_code::NOT_FOUND;
    default:
      Logger::smf_n7().info(
          "Could not retrieve PCF Policy Association: Unknown Return code");
      return sm_policy_status_code::INTERNAL_ERROR;
  }
}

smf_pcf_client::~smf_pcf_client() {
  Logger::smf_n7().debug("Deleting PCF client instance");
}