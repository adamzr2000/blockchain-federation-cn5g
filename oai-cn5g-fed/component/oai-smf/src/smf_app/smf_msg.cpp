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

/*! \file smf_msg.cpp
 \brief
 \author  Tien-Thinh NGUYEN
 \company Eurecom
 \date 2019
 \email: tien-thinh.nguyen@eurecom.fr
 */
#include "smf_msg.hpp"

using namespace smf;

/*
 * class: QoS Flow Context Updated
 */
//-----------------------------------------------------------------------------
void qos_flow_context_updated::set_cause(const uint8_t cause) {
  cause_value = cause;
}

//-----------------------------------------------------------------------------
void qos_flow_context_updated::set_qfi(const pfcp::qfi_t& q) {
  qfi = q;
}

//-----------------------------------------------------------------------------
void qos_flow_context_updated::set_ul_fteid(const pfcp::fteid_t& teid) {
  ul_fteid = teid;
}

//-----------------------------------------------------------------------------
void qos_flow_context_updated::set_dl_fteid(const pfcp::fteid_t& teid) {
  dl_fteid = teid;
}

//-----------------------------------------------------------------------------
void qos_flow_context_updated::add_qos_rule(const QOSRulesIE& rule) {
  uint8_t rule_id = rule.qosruleidentifer;
  if ((rule_id >= QOS_RULE_IDENTIFIER_FIRST) and
      (rule_id <= QOS_RULE_IDENTIFIER_LAST)) {
    qos_rules.erase(rule_id);
    qos_rules.insert(std::pair<uint8_t, QOSRulesIE>(rule_id, rule));
    Logger::smf_app().trace(
        "qos_flow_context_updated::add_qos_rule(%d) success", rule_id);
  }
}

//-----------------------------------------------------------------------------

void qos_flow_context_updated::set_qos_profile(const qos_profile_t& profile) {
  qos_profile = profile;
}

//-----------------------------------------------------------------------------
void qos_flow_context_updated::set_priority_level(uint8_t p) {
  // priority_level = p;
  qos_profile.priority_level = p;
}

/*
 * class: PDU Session MSG
 */
//-----------------------------------------------------------------------------
pdu_session_msg_type_t pdu_session_msg::get_msg_type() const {
  return m_msg_type;
}

//-----------------------------------------------------------------------------
void pdu_session_msg::set_msg_type(const pdu_session_msg_type_t& msg_type) {
  m_msg_type = msg_type;
}

//-----------------------------------------------------------------------------
supi_t pdu_session_msg::get_supi() const {
  return m_supi;
}

//-----------------------------------------------------------------------------
void pdu_session_msg::set_supi(const supi_t& supi) {
  m_supi = supi;
}

//-----------------------------------------------------------------------------
std::string pdu_session_msg::get_supi_prefix() const {
  return m_supi_prefix;
}

//-----------------------------------------------------------------------------
void pdu_session_msg::set_supi_prefix(const std::string& prefix) {
  m_supi_prefix = prefix;
}

//-----------------------------------------------------------------------------
pdu_session_id_t pdu_session_msg::get_pdu_session_id() const {
  return m_pdu_session_id;
}

//-----------------------------------------------------------------------------
void pdu_session_msg::set_pdu_session_id(
    const pdu_session_id_t pdu_session_id) {
  m_pdu_session_id = pdu_session_id;
}

//-----------------------------------------------------------------------------
std::string pdu_session_msg::get_dnn() const {
  return m_dnn;
}

//-----------------------------------------------------------------------------
void pdu_session_msg::set_dnn(const std::string& dnn) {
  m_dnn = dnn;
}

//-----------------------------------------------------------------------------
snssai_t pdu_session_msg::get_snssai() const {
  return m_snssai;
}

//-----------------------------------------------------------------------------
void pdu_session_msg::set_snssai(const snssai_t& snssai) {
  m_snssai = snssai;
}

//-----------------------------------------------------------------------------
void pdu_session_msg::set_api_root(const std::string& value) {
  m_api_root = value;
}

std::string pdu_session_msg::get_api_root() const {
  return m_api_root;
}

//-----------------------------------------------------------------------------
uint8_t pdu_session_msg::get_pdu_session_type() const {
  return m_pdu_session_type;
}

//-----------------------------------------------------------------------------
void pdu_session_msg::set_pdu_session_type(const uint8_t& pdu_session_type) {
  m_pdu_session_type = pdu_session_type;
}

//-----------------------------------------------------------------------------
procedure_transaction_id_t pdu_session_msg::get_pti() const {
  return m_pti;
}

//-----------------------------------------------------------------------------
void pdu_session_msg::set_pti(const procedure_transaction_id_t& pti) {
  m_pti = pti;
}

//-----------------------------------------------------------------------------
std::string pdu_session_msg::get_n1_sm_message() const {
  return m_n1_sm_message;
}

//-----------------------------------------------------------------------------
void pdu_session_msg::set_n1_sm_message(const std::string& value) {
  m_n1_sm_message    = value;
  m_n1_sm_msg_is_set = true;
}

//-----------------------------------------------------------------------------
bool pdu_session_msg::n1_sm_msg_is_set() const {
  return m_n1_sm_msg_is_set;
}

//-----------------------------------------------------------------------------
std::string pdu_session_msg::get_n2_sm_information() const {
  return m_n2_sm_information;
}

//-----------------------------------------------------------------------------
void pdu_session_msg::set_n2_sm_information(const std::string& value) {
  m_n2_sm_information = value;
  m_n2_sm_info_is_set = true;
}

//-----------------------------------------------------------------------------
bool pdu_session_msg::n2_sm_info_is_set() const {
  return m_n2_sm_info_is_set;
}

//-----------------------------------------------------------------------------
std::string pdu_session_msg::get_n2_sm_info_type() const {
  return m_n2_sm_info_type;
}

//-----------------------------------------------------------------------------
void pdu_session_msg::set_n2_sm_info_type(const std::string& value) {
  m_n2_sm_info_type        = value;
  m_n2_sm_info_type_is_set = true;
}

//-----------------------------------------------------------------------------
bool pdu_session_msg::n2_sm_info_type_is_set() const {
  return m_n2_sm_info_type_is_set;
}

//-----------------------------------------------------------------------------
void pdu_session_msg::to_json(nlohmann::json& data) const {
  data["msg_type"]                 = m_msg_type;
  data["api_root"]                 = m_api_root;
  std::string supi_str             = smf_supi_to_string(m_supi);
  data["supi"]                     = supi_str;
  data["supi_prefix"]              = m_supi_prefix;
  data["pdu_session_id"]           = m_pdu_session_id;
  data["dnn"]                      = m_dnn;
  data["snssai"]["sst"]            = m_snssai.sst;
  data["snssai"]["sd"]             = m_snssai.sd;
  data["pdu_session_type"]         = m_pdu_session_type;
  data["procedure_transaction_id"] = m_pti.procedure_transaction_id;
  if (m_n1_sm_msg_is_set) data["n1_sm_message"] = m_n1_sm_message;
  if (m_n2_sm_info_is_set) data["n2_sm_information"] = m_n2_sm_information;
  if (m_n2_sm_info_type_is_set) data["n2_sm_info_type"] = m_n2_sm_info_type;
}

//-----------------------------------------------------------------------------
void pdu_session_msg::from_json(const nlohmann::json& data) {
  if (data.find("msg_type") != data.end()) {
    m_msg_type =
        static_cast<pdu_session_msg_type_t>(data["msg_type"].get<int>());
  }

  if (data.find("api_root") != data.end()) {
    m_api_root = data["api_root"].get<std::string>();
  }

  if (data.find("supi") != data.end()) {
    smf_string_to_supi(&m_supi, data["supi"].get<std::string>().c_str());
  }

  if (data.find("supi_prefix") != data.end()) {
    m_supi_prefix = data["supi_prefix"].get<std::string>();
  }

  if (data.find("pdu_session_id") != data.end()) {
    m_pdu_session_id = data["pdu_session_id"].get<int>();
  }
  if (data.find("dnn") != data.end()) {
    m_dnn = data["dnn"].get<std::string>();
  }

  if (data.find("snssai") != data.end()) {
    if (data["snssai"].find("sst") != data["snssai"].end()) {
      m_snssai.sst = data["snssai"]["sst"].get<int>();
    }
  }
  if (data.find("snssai") != data.end()) {
    if (data["snssai"].find("sd") != data["snssai"].end()) {
      m_snssai.sd = data["snssai"]["sd"].get<std::string>();
    }
  }

  if (data.find("pdu_session_type") != data.end()) {
    m_pdu_session_type = data["pdu_session_type"].get<int>();
  }

  if (data.find("procedure_transaction_id") != data.end()) {
    m_pti.procedure_transaction_id =
        data["procedure_transaction_id"].get<int>();
  }

  if (data.find("n1_sm_message") != data.end()) {
    m_n1_sm_message    = data["n1_sm_message"].get<std::string>();
    m_n1_sm_msg_is_set = true;
  }

  if (data.find("n2_sm_information") != data.end()) {
    m_n2_sm_information = data["n2_sm_information"].get<std::string>();
    m_n2_sm_info_is_set = true;
  }
  if (data.find("n2_sm_info_type") != data.end()) {
    m_n2_sm_info_type        = data["n2_sm_info_type"].get<std::string>();
    m_n2_sm_info_type_is_set = true;
  }
}

/*
 * class: PDU Session SM Context Request
 */
//-----------------------------------------------------------------------------
extended_protocol_discriminator_t pdu_session_sm_context_request::get_epd()
    const {
  return m_epd;
}

//-----------------------------------------------------------------------------
void pdu_session_sm_context_request::set_epd(
    const extended_protocol_discriminator_t& epd) {
  m_epd = epd;
}

//-----------------------------------------------------------------------------
uint8_t pdu_session_sm_context_request::get_message_type() const {
  return m_message_type;
}

//-----------------------------------------------------------------------------
void pdu_session_sm_context_request::set_message_type(
    const uint8_t& message_type) {
  m_message_type = message_type;
}

/*
 * class: PDU Session SM Context Response
 */
//-----------------------------------------------------------------------------
void pdu_session_sm_context_response::set_cause(const uint8_t cause) {
  m_cause = cause;
}

//-----------------------------------------------------------------------------
uint8_t pdu_session_sm_context_response::get_cause() const {
  return m_cause;
}

//-----------------------------------------------------------------------------
void pdu_session_sm_context_response::set_http_code(const uint32_t code) {
  m_http_code = code;
}

//-----------------------------------------------------------------------------
uint32_t pdu_session_sm_context_response::get_http_code() const {
  return m_http_code;
}

//-----------------------------------------------------------------------------
void pdu_session_sm_context_response::set_json_data(
    const nlohmann::json& data) {
  m_json_data = data;
}

//-----------------------------------------------------------------------------
void pdu_session_sm_context_response::get_json_data(
    nlohmann::json& data) const {
  data = m_json_data;
}

//-----------------------------------------------------------------------------
void pdu_session_sm_context_response::set_json_format(
    const std::string& format) {
  m_json_format = format;
}

//-----------------------------------------------------------------------------
void pdu_session_sm_context_response::get_json_format(
    std::string& format) const {
  format = m_json_format;
}

//-----------------------------------------------------------------------------
void pdu_session_sm_context_response::to_json(nlohmann::json& data) const {
  pdu_session_msg::to_json(data);
  data["cause"]       = m_cause;
  data["json_data"]   = m_json_data;
  data["json_format"] = m_json_format;
  data["http_code"]   = m_http_code;
}

//-----------------------------------------------------------------------------
void pdu_session_sm_context_response::from_json(const nlohmann::json& data) {
  pdu_session_msg::from_json(data);
  if (data.find("cause") != data.end()) {
    m_cause = data["cause"].get<int>();
  }

  if (data.find("json_data") != data.end()) {
    m_json_data = data["json_data"];
  }

  if (data.find("json_format") != data.end()) {
    m_json_format = data["json_format"];
  }

  if (data.find("http_code") != data.end()) {
    m_http_code = data["http_code"].get<int>();
  }
}

/*
 * class: PDU Session Create SM Context Request
 */
//-----------------------------------------------------------------------------
std::string pdu_session_create_sm_context_request::get_serving_nf_id() const {
  return m_serving_nf_id;
}

//-----------------------------------------------------------------------------
void pdu_session_create_sm_context_request::set_serving_nf_id(
    const std::string& serving_nf_id) {
  m_serving_nf_id = serving_nf_id;
}

//-----------------------------------------------------------------------------
std::string pdu_session_create_sm_context_request::get_request_type() const {
  return m_request_type;
}

//-----------------------------------------------------------------------------
void pdu_session_create_sm_context_request::set_request_type(
    const std::string& request_type) {
  m_request_type = request_type;
}

//-----------------------------------------------------------------------------
void pdu_session_create_sm_context_request::set_dnn_selection_mode(
    const std::string& dnn_selection_mode) {
  m_dnn_selection_mode = dnn_selection_mode;
}

//-----------------------------------------------------------------------------
std::string pdu_session_create_sm_context_request::get_dnn_selection_mode()
    const {
  return m_dnn_selection_mode;
}

//-----------------------------------------------------------------------------
void pdu_session_create_sm_context_request::set_sm_context_status_uri(
    const std::string& value) {
  m_sm_context_status_uri = value;
}

//-----------------------------------------------------------------------------
std::string pdu_session_create_sm_context_request::get_sm_context_status_uri()
    const {
  return m_sm_context_status_uri;
}

//-----------------------------------------------------------------------------
void pdu_session_create_sm_context_request::set_epco(
    const protocol_configuration_options_t& p) {
  m_epco = p;
}

//-----------------------------------------------------------------------------
void pdu_session_create_sm_context_request::get_epco(
    protocol_configuration_options_t& p) const {
  p = m_epco;
}

//-----------------------------------------------------------------------------
void pdu_session_create_sm_context_request::set_plmn(const plmn_t p) {
  m_serving_network = p;
}

//-----------------------------------------------------------------------------
void pdu_session_create_sm_context_request::get_plmn(plmn_t& p) const {
  p = m_serving_network;
}

//-----------------------------------------------------------------------------
plmn_t pdu_session_create_sm_context_request::get_plmn() const {
  return m_serving_network;
}

//-----------------------------------------------------------------------------
void pdu_session_create_sm_context_request::set_an_type(
    const std::string& an_type) {
  m_an_type = an_type;
}

//-----------------------------------------------------------------------------
void pdu_session_create_sm_context_request::get_an_type(
    std::string& an_type) const {
  an_type = m_an_type;
}

//-----------------------------------------------------------------------------
void pdu_session_create_sm_context_request::set_guami(const guami_5g_t& guami) {
  m_guami = guami;
}

//-----------------------------------------------------------------------------
void pdu_session_create_sm_context_request::get_guami(guami_5g_t& guami) const {
  guami = m_guami;
}

/*
 * class: PDU Session Create SM Context Response
 */
//-----------------------------------------------------------------------------
void pdu_session_create_sm_context_response::set_paa(const paa_t& paa) {
  m_paa = paa;
}

//-----------------------------------------------------------------------------
paa_t pdu_session_create_sm_context_response::get_paa() const {
  return m_paa;
}

//-----------------------------------------------------------------------------
void pdu_session_create_sm_context_response::set_qos_flow_context(
    const qos_flow_context_updated& qos_flow) {
  m_qos_flow_context = qos_flow;
}

//-----------------------------------------------------------------------------
qos_flow_context_updated
pdu_session_create_sm_context_response::get_qos_flow_context() const {
  return m_qos_flow_context;
}

//-----------------------------------------------------------------------------
void pdu_session_create_sm_context_response::set_amf_url(
    const std::string& value) {
  m_amf_url = value;
}

//-----------------------------------------------------------------------------
std::string pdu_session_create_sm_context_response::get_amf_url() const {
  return m_amf_url;
}

//-----------------------------------------------------------------------------
void pdu_session_create_sm_context_response::set_smf_context_uri(
    const std::string& value) {
  m_smf_context_uri = value;
}

//-----------------------------------------------------------------------------
std::string pdu_session_create_sm_context_response::get_smf_context_uri()
    const {
  return m_smf_context_uri;
}

//-----------------------------------------------------------------------------
void pdu_session_create_sm_context_response::set_epco(
    const protocol_configuration_options_t& p) {
  m_epco = p;
}

//-----------------------------------------------------------------------------
void pdu_session_create_sm_context_response::get_epco(
    protocol_configuration_options_t& p) const {
  p = m_epco;
}

//-----------------------------------------------------------------------------
void pdu_session_create_sm_context_response::to_json(
    nlohmann::json& data) const {
  pdu_session_sm_context_response::to_json(data);
  // TODO: paa_t m_paa
  // TODO:  qos_flow_context_updated m_qos_flow_context
  // TODO: protocol_configuration_options_t m_epco
  data["amf_url"]         = m_amf_url;
  data["smf_context_uri"] = m_smf_context_uri;
}

//-----------------------------------------------------------------------------
void pdu_session_create_sm_context_response::from_json(
    const nlohmann::json& data) {
  // TODO: paa_t m_paa
  // TODO:  qos_flow_context_updated m_qos_flow_context
  // TODO: protocol_configuration_options_t m_epco
  if (data.find("amf_url") != data.end()) {
    m_amf_url = data["amf_url"].get<std::string>();
  }
  if (data.find("smf_context_uri") != data.end()) {
    m_smf_context_uri = data["smf_context_uri"].get<std::string>();
  }
}

/*
 * class: PDU Session Update SM Context Request
 */

//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_request::add_qfi(const pfcp::qfi_t& qfi) {
  qfis.push_back(qfi);
}

//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_request::add_qfi(const uint8_t& q) {
  pfcp::qfi_t qfi(q);
  qfis.push_back(qfi);
}

//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_request::get_qfis(
    std::vector<pfcp::qfi_t>& q) {
  for (auto qfi : qfis) {
    q.push_back(qfi);
  }
}

//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_request::set_dl_fteid(
    const pfcp::fteid_t& t) {
  dl_fteid = t;
}

//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_request::get_dl_fteid(pfcp::fteid_t& t) {
  t = dl_fteid;
}

//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_request::set_upCnx_state(
    const std::string& value) {
  m_upCnx_state        = value;
  m_upCnx_state_is_set = true;
}

//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_request::get_upCnx_state(
    std::string& value) const {
  value = m_upCnx_state;
}

//-----------------------------------------------------------------------------
bool pdu_session_update_sm_context_request::upCnx_state_is_set() const {
  return m_upCnx_state_is_set;
}

//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_request::set_rat_type(
    const std::string& value) {
  m_rat_type        = value;
  m_rat_type_is_set = true;
}

//-----------------------------------------------------------------------------
bool pdu_session_update_sm_context_request::rat_type_is_set() const {
  return m_rat_type_is_set;
}

//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_request::set_an_type(
    const std::string& value) {
  m_an_type        = value;
  m_an_type_is_set = true;
}

//-----------------------------------------------------------------------------
bool pdu_session_update_sm_context_request::an_type_is_set() const {
  return m_an_type_is_set;
}

//-----------------------------------------------------------------------------
bool pdu_session_update_sm_context_request::release_is_set() const {
  return m_release_is_set;
}

//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_request::set_release(bool value) {
  m_release        = value;
  m_release_is_set = true;
}

//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_request::set_to_be_switched(bool value) {
  m_to_be_switched        = value;
  m_to_be_switched_is_set = true;
}

//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_request::get_to_be_switched(
    bool& value) const {
  value = m_to_be_switched;
}

//-----------------------------------------------------------------------------
bool pdu_session_update_sm_context_request::get_to_be_switched() const {
  return m_to_be_switched;
}

//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_request::set_failed_to_be_switched(
    bool value) {
  m_failed_to_be_switched        = value;
  m_failed_to_be_switched_is_set = true;
}

//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_request::get_failed_to_be_switched(
    bool& value) const {
  value = m_failed_to_be_switched;
}

//-----------------------------------------------------------------------------
bool pdu_session_update_sm_context_request::get_failed_to_be_switched() const {
  return m_failed_to_be_switched;
}

//-----------------------------------------------------------------------------
std::string pdu_session_update_sm_context_request::get_ho_state() const {
  return m_ho_state;
}

//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_request::get_ho_state(
    std::string& state) const {
  state = m_ho_state;
}

//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_request::set_ho_state(
    const std::string& state) {
  m_ho_state        = state;
  m_ho_state_is_set = true;
}

//-----------------------------------------------------------------------------
bool pdu_session_update_sm_context_request::ho_state_is_set() const {
  return m_ho_state_is_set;
}

//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_request::get_target_serving_nf_id(
    std::string& nf_id) const {
  nf_id = m_target_serving_nf_id;
}

//-----------------------------------------------------------------------------
std::string pdu_session_update_sm_context_request::get_target_serving_nf_id()
    const {
  return m_target_serving_nf_id;
}

//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_request::set_target_serving_nf_id(
    const std::string& nf_id) {
  m_target_serving_nf_id        = nf_id;
  m_target_serving_nf_id_is_set = true;
}

//-----------------------------------------------------------------------------
bool pdu_session_update_sm_context_request::target_serving_nf_id_is_set()
    const {
  return m_target_serving_nf_id_is_set;
}

//-----------------------------------------------------------------------------
ng_ran_target_id_t pdu_session_update_sm_context_request::get_target_id()
    const {
  return m_ng_ran_target_id;
}
//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_request::get_target_id(
    ng_ran_target_id_t& value) const {
  value = m_ng_ran_target_id;
}
//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_request::set_target_id(
    const ng_ran_target_id_t& value) {
  m_ng_ran_target_id = value;
}

/*
 * class: PDU Session Update SM Context Response
 */
//-----------------------------------------------------------------------------
// TODO refactor this duplicated code, remove
void pdu_session_update_sm_context_response::add_qos_flow_context_updated(
    const qos_flow_context_updated& flow) {
  if ((flow.qfi.qfi >= QOS_FLOW_IDENTIFIER_FIRST) and
      (flow.qfi.qfi <= QOS_FLOW_IDENTIFIER_LAST)) {
    qos_flow_context_updateds.erase(flow.qfi.qfi);
    qos_flow_context_updateds.insert(
        std::pair<uint8_t, qos_flow_context_updated>(
            (uint8_t) flow.qfi.qfi, flow));
    Logger::smf_app().trace(
        "A QoS Flow Context (QFI %d) has been added successfully",
        flow.qfi.qfi);
  } else {
    Logger::smf_app().error(
        "Failed to add a QoS Flow Context (QFI %d), invalid QFI", flow.qfi.qfi);
  }
}

//-----------------------------------------------------------------------------
bool pdu_session_update_sm_context_response::get_qos_flow_context_updated(
    const pfcp::qfi_t& qfi, qos_flow_context_updated& flow) {
  for (auto it : qos_flow_context_updateds) {
    if (it.second.qfi == qfi) {
      flow = it.second;
      return true;
    }
  }
  return false;
}

//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_response::get_all_qos_flow_context_updateds(
    std::map<uint8_t, qos_flow_context_updated>& all_flows) {
  for (auto it : qos_flow_context_updateds) {
    all_flows.insert(std::pair<uint8_t, qos_flow_context_updated>(
        (uint8_t) it.first, it.second));
  }
}

//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_response::
    remove_all_qos_flow_context_updateds() {
  qos_flow_context_updateds.clear();
}

//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_response::set_smf_context_uri(
    const std::string& value) {
  m_smf_context_uri = value;
}

//-----------------------------------------------------------------------------
std::string pdu_session_update_sm_context_response::get_smf_context_uri()
    const {
  return m_smf_context_uri;
}

//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_response::to_json(
    nlohmann::json& data) const {
  pdu_session_sm_context_response::to_json(data);
  // TODO: qos_flow_context_updateds
  data["smf_context_uri"] = m_smf_context_uri;
}

//-----------------------------------------------------------------------------
void pdu_session_update_sm_context_response::from_json(
    const nlohmann::json& data) {
  pdu_session_sm_context_response::from_json(data);
  // TODO: qos_flow_context_updateds
  if (data.find("smf_context_uri") != data.end()) {
    m_smf_context_uri = data["smf_context_uri"].get<std::string>();
  }
}
/*
 * class: PDU Session Release SM Context Response
 */

//-----------------------------------------------------------------------------
void pdu_session_release_sm_context_response::to_json(
    nlohmann::json& data) const {
  pdu_session_sm_context_response::to_json(data);
}

//-----------------------------------------------------------------------------
void pdu_session_release_sm_context_response::from_json(
    const nlohmann::json& data) {
  pdu_session_sm_context_response::from_json(data);
}

/*
 * class: PDU Session Modification Network Requested
 */
//-----------------------------------------------------------------------------
void pdu_session_modification_network_requested::set_amf_url(
    const std::string& value) {
  amf_url = value;
}

//-----------------------------------------------------------------------------
std::string pdu_session_modification_network_requested::get_amf_url() const {
  return amf_url;
}

//-----------------------------------------------------------------------------
void pdu_session_modification_network_requested::add_qfi(
    const pfcp::qfi_t& qfi) {
  qfis.push_back(qfi);
}

//-----------------------------------------------------------------------------
void pdu_session_modification_network_requested::add_qfi(const uint8_t& q) {
  pfcp::qfi_t qfi(q);
  qfis.push_back(qfi);
}

//-----------------------------------------------------------------------------
void pdu_session_modification_network_requested::get_qfis(
    std::vector<pfcp::qfi_t>& q) {
  for (auto qfi : qfis) {
    q.push_back(qfi);
  }
}

//-----------------------------------------------------------------------------
void pdu_session_modification_network_requested::set_json_data(
    const nlohmann::json& data) {
  m_json_data = data;
}

//-----------------------------------------------------------------------------
void pdu_session_modification_network_requested::get_json_data(
    nlohmann::json& data) const {
  data = m_json_data;
}

//-----------------------------------------------------------------------------
void pdu_session_modification_network_requested::set_json_format(
    const std::string& format) {
  m_json_format = format;
}

//-----------------------------------------------------------------------------
void pdu_session_modification_network_requested::get_json_format(
    std::string& format) const {
  format = m_json_format;
}

//-----------------------------------------------------------------------------
void pdu_session_modification_network_requested::add_qos_flow_context_updated(
    const qos_flow_context_updated& flow) {
  if ((flow.qfi.qfi >= QOS_FLOW_IDENTIFIER_FIRST) and
      (flow.qfi.qfi <= QOS_FLOW_IDENTIFIER_LAST)) {
    qos_flow_context_updateds.erase(flow.qfi.qfi);
    qos_flow_context_updateds.insert(
        std::pair<uint8_t, qos_flow_context_updated>(
            (uint8_t) flow.qfi.qfi, flow));
    Logger::smf_app().trace(
        "A QoS Flow Context (QFI %d) has been added successfully",
        flow.qfi.qfi);
  } else {
    Logger::smf_app().error(
        "Failed to add a QoS Flow Context (QFI %d), invalid QFI", flow.qfi.qfi);
  }
}

//-----------------------------------------------------------------------------
bool pdu_session_modification_network_requested::get_qos_flow_context_updated(
    const pfcp::qfi_t& qfi, qos_flow_context_updated& flow) {
  for (auto it : qos_flow_context_updateds) {
    if (it.second.qfi == qfi) {
      flow = it.second;
      return true;
    }
  }
  return false;
}

/*
 * class: PDU Session Report Response
 */
//-----------------------------------------------------------------------------
void pdu_session_report_response::set_amf_url(const std::string& value) {
  amf_url = value;
}

//-----------------------------------------------------------------------------
std::string pdu_session_report_response::get_amf_url() const {
  return amf_url;
}

//-----------------------------------------------------------------------------
void pdu_session_report_response::add_qos_flow_context_updated(
    const qos_flow_context_updated& flow) {
  if ((flow.qfi.qfi >= QOS_FLOW_IDENTIFIER_FIRST) and
      (flow.qfi.qfi <= QOS_FLOW_IDENTIFIER_LAST)) {
    qos_flow_context_updateds.erase(flow.qfi.qfi);
    qos_flow_context_updateds.insert(
        std::pair<uint8_t, qos_flow_context_updated>(
            (uint8_t) flow.qfi.qfi, flow));
    Logger::smf_app().trace(
        "A QoS Flow Context (QFI %d) has been added successfully",
        flow.qfi.qfi);
  } else {
    Logger::smf_app().error(
        "Failed to add a QoS Flow Context (QFI %d), invalid QFI", flow.qfi.qfi);
  }
}

//-----------------------------------------------------------------------------
bool pdu_session_report_response::get_qos_flow_context_updated(
    const pfcp::qfi_t& qfi, qos_flow_context_updated& flow) {
  for (auto it : qos_flow_context_updateds) {
    if (it.second.qfi == qfi) {
      flow = it.second;
      return true;
    }
  }
  return false;
}

//-----------------------------------------------------------------------------
void pdu_session_report_response::get_all_qos_flow_context_updateds(
    std::map<uint8_t, qos_flow_context_updated>& all_flows) {
  for (auto it : qos_flow_context_updateds) {
    all_flows.insert(std::pair<uint8_t, qos_flow_context_updated>(
        (uint8_t) it.first, it.second));
  }
}

//-----------------------------------------------------------------------------
void pdu_session_report_response::set_seid(const seid_t& s) {
  seid = s;
}

//-----------------------------------------------------------------------------
void pdu_session_report_response::set_trxn_id(const uint64_t& t) {
  trxn_id = t;
}

//-----------------------------------------------------------------------------
seid_t pdu_session_report_response::get_seid() const {
  return seid;
}

//-----------------------------------------------------------------------------
uint64_t pdu_session_report_response::get_trxn_id() const {
  return trxn_id;
}

/*
 * class: Event Exposure
 */
//-----------------------------------------------------------------------------
supi_t event_exposure_msg::get_supi() const {
  return m_supi;
}

//-----------------------------------------------------------------------------
void event_exposure_msg::set_supi(const supi_t& value) {
  m_supi        = value;
  m_supi_is_set = true;
}

//-----------------------------------------------------------------------------
bool event_exposure_msg::is_supi_is_set() const {
  return m_supi_is_set;
}

//-----------------------------------------------------------------------------
std::string event_exposure_msg::get_supi_prefix() const {
  return m_supi_prefix;
}

//-----------------------------------------------------------------------------
void event_exposure_msg::set_supi_prefix(const std::string& prefix) {
  m_supi_prefix = prefix;
}
//-----------------------------------------------------------------------------
pdu_session_id_t event_exposure_msg::get_pdu_session_id() const {
  return m_pdu_session_id;
}

//-----------------------------------------------------------------------------
void event_exposure_msg::set_pdu_session_id(const pdu_session_id_t value) {
  m_pdu_session_id = value;
  m_psi_is_set     = true;
}

//-----------------------------------------------------------------------------
bool event_exposure_msg::is_psi_is_set() const {
  return m_psi_is_set;
}

//-----------------------------------------------------------------------------
void event_exposure_msg::set_sub_id(std::string const& value) {
  m_sub_id        = value;
  m_sub_id_is_set = true;
}

//-----------------------------------------------------------------------------
std::string event_exposure_msg::get_sub_id() const {
  return m_sub_id;
}

//-----------------------------------------------------------------------------
bool event_exposure_msg::is_sub_id_is_set() const {
  return m_sub_id_is_set;
}

//-----------------------------------------------------------------------------
void event_exposure_msg::set_notif_uri(std::string const& value) {
  m_notif_uri = value;
}

//-----------------------------------------------------------------------------
std::string event_exposure_msg::get_notif_uri() const {
  return m_notif_uri;
}

//-----------------------------------------------------------------------------
void event_exposure_msg::set_notif_id(std::string const& value) {
  m_notif_id = value;
}

//-----------------------------------------------------------------------------
std::string event_exposure_msg::get_notif_id() const {
  return m_notif_id;
}

//-----------------------------------------------------------------------------
std::vector<event_subscription_t> event_exposure_msg::get_event_subs() const {
  return m_event_subs;
}

//-----------------------------------------------------------------------------
void event_exposure_msg::set_event_subs(
    std::vector<event_subscription_t> const& value) {
  m_event_subs.clear();
  for (auto it : value) {
    m_event_subs.push_back(it);
  }
}

/*
 * class: Event Notification
 */
//-----------------------------------------------------------------------------

void event_notification::set_smf_event(const smf_event_t& ev) {
  m_event = ev;
}

//-----------------------------------------------------------------------------
smf_event_t event_notification::get_smf_event() const {
  return m_event;
}

//-----------------------------------------------------------------------------
// ddds change
void event_notification::set_Ddds(oai::model::smf::DddStatus const& value) {
  m_DddStatus      = value;
  m_DddStatusIsSet = true;
}
oai::model::smf::DddStatus event_notification::get_ddds() const {
  return m_DddStatus;
}

bool event_notification::is_ddds_is_set() const {
  return m_DddStatusIsSet;
}

//-----------------------------------------------------------------------------
void event_notification::set_timestamp(const std::string& ss) {
  m_timestamp = ss;
}

//-----------------------------------------------------------------------------
void event_notification::get_timestamp(std::string& ss) const {
  ss = m_timestamp;
}

//-----------------------------------------------------------------------------
std::string event_notification::get_timestamp() const {
  return m_timestamp;
}

//-----------------------------------------------------------------------------
supi64_t event_notification::get_supi() const {
  return m_supi;
}

//-----------------------------------------------------------------------------
void event_notification::set_supi(const supi64_t& value) {
  m_supi        = value;
  m_supi_is_set = true;
}

//-----------------------------------------------------------------------------
bool event_notification::is_supi_is_set() const {
  return m_supi_is_set;
}

//-----------------------------------------------------------------------------
void event_notification::set_ad_ipv4_addr(std::string const& value) {
  m_ad_ipv4_addr        = value;
  m_ad_ipv4_addr_is_set = true;
}

//-----------------------------------------------------------------------------
std::string event_notification::get_ad_ipv4_addr() const {
  return m_ad_ipv4_addr;
}

//-----------------------------------------------------------------------------
bool event_notification::is_ad_ipv4_addr_is_set() const {
  return m_ad_ipv4_addr_is_set;
}

//-----------------------------------------------------------------------------
void event_notification::set_re_ipv4_addr(std::string const& value) {
  m_re_ipv4_addr        = value;
  m_re_ipv4_addr_is_set = true;
}

//-----------------------------------------------------------------------------
std::string event_notification::get_re_ipv4_addr() const {
  return m_re_ipv4_addr;
}

//-----------------------------------------------------------------------------
bool event_notification::is_re_ipv4_addr_is_set() const {
  return m_re_ipv4_addr_is_set;
}

// m_PlmnId
void event_notification::set_PlmnId(oai::model::common::PlmnId const& value) {
  m_PlmnId      = value;
  m_PlmnIdIsSet = true;
}

oai::model::common::PlmnId event_notification::get_plmnid() const {
  return m_PlmnId;
}

bool event_notification::is_plmnid_is_set() const {
  return m_PlmnIdIsSet;
}

//-----------------------------------------------------------------------------
void event_notification::set_pdu_session_id(const pdu_session_id_t value) {
  m_pdu_session_id = value;
  m_psi_is_set     = true;
}

//-----------------------------------------------------------------------------
pdu_session_id_t event_notification::get_pdu_session_id() const {
  return m_pdu_session_id;
}

//-----------------------------------------------------------------------------
bool event_notification::is_psi_is_set() const {
  return m_psi_is_set;
}

//-----------------------------------------------------------------------------
void event_notification::set_notif_uri(std::string const& value) {
  m_notif_uri = value;
}

//-----------------------------------------------------------------------------
std::string event_notification::get_notif_uri() const {
  return m_notif_uri;
}

//-----------------------------------------------------------------------------
void event_notification::set_notif_id(std::string const& value) {
  m_notif_id = value;
}

//-----------------------------------------------------------------------------
std::string event_notification::get_notif_id() const {
  return m_notif_id;
}

//------------------------------------------------------------------------------
void event_notification::set_custom_info(const nlohmann::json& c) {
  custom_info = c;
}

//------------------------------------------------------------------------------
void event_notification::get_custom_info(nlohmann::json& c) const {
  c = custom_info;
}

//-----------------------------------------------------------------------------
void event_notification::set_dnn(std::string const& value) {
  m_dnn        = value;
  m_dnn_is_set = true;
}

//-----------------------------------------------------------------------------
std::string event_notification::get_dnn() const {
  return m_dnn;
}

//-----------------------------------------------------------------------------
bool event_notification::is_dnn_set() const {
  return m_dnn_is_set;
}

//-----------------------------------------------------------------------------
void event_notification::set_sst(uint8_t const& value) {
  m_sst        = value;
  m_sst_is_set = true;
}

//-----------------------------------------------------------------------------
uint8_t event_notification::get_sst() const {
  return m_sst;
}

//-----------------------------------------------------------------------------
bool event_notification::is_sst_set() const {
  return m_sst_is_set;
}

//-----------------------------------------------------------------------------
void event_notification::set_sd(std::string const& value) {
  m_sd        = value;
  m_sd_is_set = true;
}

//-----------------------------------------------------------------------------
std::string event_notification::get_sd() const {
  return m_sd;
}

//-----------------------------------------------------------------------------
bool event_notification::is_sd_set() const {
  return m_sd_is_set;
}

//-----------------------------------------------------------------------------
void event_notification::set_pdu_session_type(std::string const& value) {
  m_pdu_session_type        = value;
  m_pdu_session_type_is_set = true;
}

//-----------------------------------------------------------------------------
std::string event_notification::get_pdu_session_type() const {
  return m_pdu_session_type;
}

//-----------------------------------------------------------------------------
bool event_notification::is_pdu_session_type_set() const {
  return m_pdu_session_type_is_set;
}
