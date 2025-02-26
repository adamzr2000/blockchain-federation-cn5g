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

#ifndef _LMF_SBI_HELPER_HPP
#define _LMF_SBI_HELPER_HPP

#include <pistache/http.h>

#include <nlohmann/json.hpp>

#include "lmf_config.hpp"
#include "sbi_helper.hpp"

using namespace oai::lmf::config;
using namespace oai::common::sbi;

extern oai::lmf::config::lmf_config lmf_cfg;

namespace oai::lmf::api {

class lmf_sbi_helper : public sbi_helper {
 public:
  static inline const std::string LmfLocationServiceBase =
      sbi_helper::LmfLocBase +
      lmf_cfg.sbi.api_version.value_or(kDefaultSbiApiVersion);

  static inline const std::string LmfN2InfoNotifyServiceBase =
      sbi_helper::LmfN2InfoNotifyBase +
      lmf_cfg.sbi.api_version.value_or(kDefaultSbiApiVersion);

  static inline const std::string LmfNonUeN2InfoNotifyServiceBase =
      sbi_helper::LmfNonUeN2InfoNotifyBase +
      lmf_cfg.sbi.api_version.value_or(kDefaultSbiApiVersion);

  // for AMF's APIs
  static void get_amf_comm_api_root(
      const nf_addr_t& amf_addr, std::string& api_root);
  static void get_amf_comm_n1n2_message_subscribe_uri(
      const nf_addr_t& amf_addr, const std::string& ue_context_id,
      std::string& uri);
  static void get_amf_comm_n1n2_message_un_subscribe_uri(
      const nf_addr_t& amf_addr, const std::string& ue_context_id,
      const std::string& nf_instance, std::string& uri);
  static void get_amf_comm_n1n2_message_transfer_uri(
      const nf_addr_t& amf_addr, const std::string& ue_context_id,
      std::string& uri);
  static void get_amf_comm_non_ue_n1n2_message_transfer_uri(
      const nf_addr_t& amf_addr, std::string& uri);
  static void get_amf_comm_non_ue_n2_info_subscribe_uri(
      const nf_addr_t& amf_addr, std::string& uri);
  static void get_amf_comm_non_ue_n2_info_un_subscribe_uri(
      const nf_addr_t& amf_addr, const std::string& subscription_id,
      std::string& uri);

  // for LMF's APIs
  static void get_lmf_loc_api_root(
      const interface_cfg_t& sbi, std::string& api_root);
  static void get_lmf_loc_determine_location_uri(
      const interface_cfg_t& sbi, std::string& uri);
  static void get_lmf_loc_cancel_location_uri(
      const interface_cfg_t& sbi, std::string& uri);
  static void get_lmf_loc_location_context_transfer_uri(
      const interface_cfg_t& sbi, std::string& uri);
  static void get_lmf_n2_info_notify_api_root(
      const interface_cfg_t& sbi, std::string& api_root);
  static void get_lmf_n2_info_notify_nrppa_callback_uri(
      const interface_cfg_t& sbi, std::string& uri);
  static void get_lmf_n2_info_notify_nrppa_callback_uri(
      const interface_cfg_t& sbi, const std::string& supi, std::string& uri);

  static void get_lmf_non_ue_n2_info_notify_api_root(
      const interface_cfg_t& sbi, std::string& api_root);
  static void get_lmf_non_ue_n2_info_notify_nrppa_callback_uri(
      const interface_cfg_t& sbi, std::string& uri);

  static void throwHttpError(
      std::string const& title, std::string const& detail,
      std::string const& instance = "",
      Pistache::Http::Code const& code =
          Pistache::Http::Code::Internal_Server_Error);
};

}  // namespace oai::lmf::api

#endif
