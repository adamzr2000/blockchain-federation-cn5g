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

#include "RegistrationRequest.hpp"

#include "NasHelper.hpp"
#include "conversions.hpp"
#include "utils.hpp"

using namespace oai::nas;

//------------------------------------------------------------------------------
RegistrationRequest::RegistrationRequest()
    : ie_header_(
          k5gsMobilityManagementMessages, kPlain5gsMessage,
          kRegistrationRequest) {
  ie_non_current_native_nas_ksi_  = std::nullopt;
  ie_5g_mm_capability_            = std::nullopt;
  ie_ue_security_capability_      = std::nullopt;
  ie_requested_nssai_             = std::nullopt;
  ie_s1_ue_network_capability_    = std::nullopt;
  ie_uplink_data_status_          = std::nullopt;
  ie_last_visited_registered_tai_ = std::nullopt;
  ie_pdu_session_status_          = std::nullopt;
  ie_mico_indication_             = std::nullopt;
  ie_ue_status_                   = std::nullopt;
  ie_additional_guti_             = std::nullopt;
  ie_allowed_pdu_session_status_  = std::nullopt;
  ie_ues_usage_setting_           = std::nullopt;
  ie_5gs_drx_parameters_          = std::nullopt;
  ie_eps_nas_message_container_   = std::nullopt;
  ie_ladn_indication_             = std::nullopt;
  ie_payload_container_type_      = std::nullopt;
  ie_payload_container_           = std::nullopt;
  ie_network_slicing_indication_  = std::nullopt;
  ie_5gs_update_type_             = std::nullopt;
  ie_nas_message_container_       = std::nullopt;
  ie_eps_bearer_context_status_   = std::nullopt;
}

//------------------------------------------------------------------------------
RegistrationRequest::~RegistrationRequest() {}

//------------------------------------------------------------------------------
uint32_t RegistrationRequest::GetLength() const {
  uint32_t msg_len = 0;
  msg_len += ie_header_.GetLength();
  msg_len += ie_5gs_registration_type_.GetIeLength();
  msg_len += ie_ng_ksi_.GetIeLength();
  msg_len += ie_5gs_mobile_identity_.GetIeLength();
  if (ie_non_current_native_nas_ksi_.has_value())
    msg_len += ie_non_current_native_nas_ksi_.value().GetIeLength();
  if (ie_5g_mm_capability_.has_value())
    msg_len += ie_5g_mm_capability_.value().GetIeLength();
  if (ie_ue_security_capability_.has_value())
    msg_len += ie_ue_security_capability_.value().GetIeLength();
  if (ie_requested_nssai_.has_value())
    msg_len += ie_requested_nssai_.value().GetIeLength();
  if (ie_last_visited_registered_tai_.has_value())
    msg_len += ie_last_visited_registered_tai_.value().GetIeLength();
  if (ie_s1_ue_network_capability_.has_value())
    msg_len += ie_s1_ue_network_capability_.value().GetIeLength();
  if (ie_uplink_data_status_.has_value())
    msg_len += ie_uplink_data_status_.value().GetIeLength();
  if (ie_pdu_session_status_.has_value())
    msg_len += ie_pdu_session_status_.value().GetIeLength();
  if (ie_mico_indication_.has_value())
    msg_len += ie_mico_indication_.value().GetIeLength();
  if (ie_ue_status_.has_value()) msg_len += ie_ue_status_.value().GetIeLength();
  if (ie_additional_guti_.has_value())
    msg_len += ie_additional_guti_.value().GetIeLength();
  if (ie_allowed_pdu_session_status_.has_value())
    msg_len += ie_allowed_pdu_session_status_.value().GetIeLength();
  if (ie_ues_usage_setting_.has_value())
    msg_len += ie_ues_usage_setting_.value().GetIeLength();
  if (ie_5gs_drx_parameters_.has_value())
    msg_len += ie_5gs_drx_parameters_.value().GetIeLength();
  if (ie_eps_nas_message_container_.has_value())
    msg_len += ie_eps_nas_message_container_.value().GetIeLength();
  if (ie_ladn_indication_.has_value())
    msg_len += ie_ladn_indication_.value().GetIeLength();
  if (ie_payload_container_type_.has_value())
    msg_len += ie_payload_container_type_.value().GetIeLength();
  if (ie_payload_container_.has_value())
    msg_len += ie_payload_container_.value().GetIeLength();
  if (ie_network_slicing_indication_.has_value())
    msg_len += ie_network_slicing_indication_.value().GetIeLength();
  if (ie_5gs_update_type_.has_value())
    msg_len += ie_5gs_update_type_.value().GetIeLength();
  if (ie_nas_message_container_.has_value())
    msg_len += ie_nas_message_container_.value().GetIeLength();
  if (ie_eps_bearer_context_status_.has_value())
    msg_len += ie_eps_bearer_context_status_.value().GetIeLength();

  return msg_len;
}

//------------------------------------------------------------------------------
void RegistrationRequest::SetHeader(uint8_t security_header_type) {
  ie_header_.SetSecurityHeaderType(security_header_type);
}

//------------------------------------------------------------------------------
void RegistrationRequest::Set5gsRegistrationType(bool is_for, uint8_t type) {
  ie_5gs_registration_type_.Set(is_for, type);
}

//------------------------------------------------------------------------------
bool RegistrationRequest::Get5gsRegistrationType(
    bool& is_for, uint8_t& reg_type) {
  is_for   = ie_5gs_registration_type_.IsFollowOnReq();
  reg_type = ie_5gs_registration_type_.GetRegType();
  return true;
}

//------------------------------------------------------------------------------
void RegistrationRequest::SetNgKsi(uint8_t tsc, uint8_t key_set_id) {
  ie_ng_ksi_.Set(true);  // high pos
  ie_ng_ksi_.SetNasKeyIdentifier(key_set_id);
  ie_ng_ksi_.SetTypeOfSecurityContext(tsc);
}

//------------------------------------------------------------------------------
bool RegistrationRequest::GetNgKsi(uint8_t& ng_ksi) const {
  ng_ksi = (ie_ng_ksi_.GetTypeOfSecurityContext()) |
           ie_ng_ksi_.GetNasKeyIdentifier();
  return true;
}

//------------------------------------------------------------------------------
void RegistrationRequest::SetSuciSupiFormatImsi(
    const std::string& mcc, const std::string& mnc,
    const std::string& routing_ind, uint8_t protection_sch_id,
    const std::string& msin) {
  if (protection_sch_id != kNullScheme) {
    oai::logger::logger_registry::get_logger(LOGGER_COMMON)
        .error(
            "encoding suci and supi format for imsi error, please choose right "
            "interface");
    return;
  } else {
    ie_5gs_mobile_identity_.SetSuciWithSupiImsi(
        mcc, mnc, routing_ind, protection_sch_id, msin);
  }
}

//------------------------------------------------------------------------------
uint8_t RegistrationRequest::GetMobileIdentityType() const {
  return ie_5gs_mobile_identity_.GetTypeOfIdentity();
}

//------------------------------------------------------------------------------
bool RegistrationRequest::GetSuciSupiFormatImsi(SUCI_imsi_t& imsi) const {
  ie_5gs_mobile_identity_.GetSuciWithSupiImsi(imsi);
  return true;
}

//------------------------------------------------------------------------------
std::string RegistrationRequest::Get5gGuti() const {
  std::optional<_5G_GUTI_t> guti = std::nullopt;
  ie_5gs_mobile_identity_.Get5gGuti(guti);
  if (!guti.has_value()) return {};
  std::string amf_id_str = {};
  oai::utils::conv::get_amf_id(
      guti.value().amf_region_id, guti.value().amf_set_id,
      guti.value().amf_pointer, amf_id_str);
  std::string guti_str =
      guti.value().mcc + guti.value().mnc + amf_id_str +
      oai::utils::conv::tmsi_to_string(guti.value()._5g_tmsi);
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("5G GUTI %s", guti_str.c_str());
  return guti_str;
}

//------------------------------------------------------------------------------
// Additional_GUTI
void RegistrationRequest::SetAdditionalGuti(
    const std::string& mcc, const std::string& mnc, uint8_t amf_region_id,
    uint8_t amf_set_id, uint8_t amf_pointer, const std::string& _5g_tmsi) {
  _5gsMobileIdentity ie_additional_guti_tmp = {};
  ie_additional_guti_tmp.SetIei(kIei5gGuti);
  uint32_t tmsi = oai::utils::utils::fromString<uint32_t>(_5g_tmsi);
  ie_additional_guti_tmp.Set5gGuti(
      mcc, mnc, amf_region_id, amf_set_id, amf_pointer, tmsi);
  ie_additional_guti_ =
      std::optional<_5gsMobileIdentity>(ie_additional_guti_tmp);
}

//------------------------------------------------------------------------------
bool RegistrationRequest::GetAdditionalGuti(_5G_GUTI_t& guti) const {
  if (ie_additional_guti_.has_value()) {
    std::optional<_5G_GUTI_t> guti = std::nullopt;
    ie_additional_guti_.value().Get5gGuti(guti);
    if (!guti.has_value()) return false;
    return true;
  } else {
    return false;
  }
}

//------------------------------------------------------------------------------
void RegistrationRequest::SetSuciSupiFormatImsi(
    const std::string& mcc, const std::string& mnc,
    const std::string& routing_ind, uint8_t protection_sch_id, uint8_t hnpki,
    const std::string& msin) {
  // TODO:
}

//------------------------------------------------------------------------------
void RegistrationRequest::Set5gGuti() {}

//------------------------------------------------------------------------------
void RegistrationRequest::SetImeiImeisv() {}

//------------------------------------------------------------------------------
void RegistrationRequest::Set5gSTmsi() {}

//------------------------------------------------------------------------------
void RegistrationRequest::SetNonCurrentNativeNasKSI(
    uint8_t tsc, uint8_t key_set_id) {
  ie_non_current_native_nas_ksi_ = std::make_optional<NasKeySetIdentifier>(
      kIeiNasKeySetIdentifier, tsc, key_set_id);
}

//------------------------------------------------------------------------------
bool RegistrationRequest::GetNonCurrentNativeNasKSI(uint8_t& value) const {
  if (ie_non_current_native_nas_ksi_.has_value()) {
    value |=
        (ie_non_current_native_nas_ksi_.value().GetTypeOfSecurityContext()) |
        (ie_non_current_native_nas_ksi_.value().GetNasKeyIdentifier());
    return true;
  } else {
    return false;
  }
}

//------------------------------------------------------------------------------
void RegistrationRequest::Set5gmmCapability(uint8_t value) {
  ie_5g_mm_capability_ =
      std::make_optional<_5gmmCapability>(kIei5gmmCapability, value);
}

//------------------------------------------------------------------------------
bool RegistrationRequest::Get5gmmCapability(uint8_t& value) const {
  if (ie_5g_mm_capability_.has_value()) {
    value =
        ie_5g_mm_capability_.value().GetOctet3();  // TODO: get multiple octets
    return true;
  } else
    return false;
}

//------------------------------------------------------------------------------
void RegistrationRequest::SetUeSecurityCapability(uint8_t ea, uint8_t ia) {
  ie_ue_security_capability_ = std::make_optional<UeSecurityCapability>(
      kIeiUeSecurityCapability, ea, ia);
}

//------------------------------------------------------------------------------
void RegistrationRequest::SetUeSecurityCapability(
    uint8_t ea, uint8_t ia, uint8_t eea, uint8_t eia) {
  ie_ue_security_capability_ = std::make_optional<UeSecurityCapability>(
      kIeiUeSecurityCapability, ea, ia, eea, eia);
}

//------------------------------------------------------------------------------
bool RegistrationRequest::GetUeSecurityCapability(
    uint8_t& ea, uint8_t& ia) const {
  if (ie_ue_security_capability_.has_value()) {
    ea = ie_ue_security_capability_.value().GetEa();
    ia = ie_ue_security_capability_.value().GetIa();
    return true;
  } else {
    return false;
  }
  return true;
}

//------------------------------------------------------------------------------
bool RegistrationRequest::GetUeSecurityCapability(
    uint8_t& ea, uint8_t& ia, uint8_t& eea, uint8_t& eia) const {
  if (ie_ue_security_capability_.has_value()) {
    ea = ie_ue_security_capability_.value().GetEa();
    ia = ie_ue_security_capability_.value().GetIa();
    if (ie_ue_security_capability_.value().GetLengthIndicator() >= 4) {
      ie_ue_security_capability_.value().GetEea(eea);
      ie_ue_security_capability_.value().GetEia(eia);
    }
    return true;
  } else {
    return false;
  }
  return true;
}

//------------------------------------------------------------------------------
std::optional<UeSecurityCapability>
RegistrationRequest::GetUeSecurityCapability() const {
  return ie_ue_security_capability_;
}

//------------------------------------------------------------------------------
void RegistrationRequest::SetRequestedNssai(
    const std::vector<struct SNSSAI_s>& nssai) {
  ie_requested_nssai_ = std::make_optional<Nssai>(kIeiNSSAIRequested, nssai);
}

//------------------------------------------------------------------------------
bool RegistrationRequest::GetRequestedNssai(
    std::vector<struct SNSSAI_s>& nssai) const {
  if (ie_requested_nssai_.has_value()) {
    ie_requested_nssai_.value().GetValue(nssai);
  } else {
    return false;
  }
  return true;
}

//------------------------------------------------------------------------------
void RegistrationRequest::SetLastVisitedRegisteredTai(
    const std::string& mcc, const std::string& mnc, uint32_t tac) {
  ie_last_visited_registered_tai_ =
      std::make_optional<_5gsTrackingAreaIdentity>(mcc, mnc, tac);
}

//------------------------------------------------------------------------------
void RegistrationRequest::SetUeNetworkCapability(uint8_t eea, uint8_t eia) {
  ie_s1_ue_network_capability_ = std::make_optional<UeNetworkCapability>(
      kIeiUeNetworkCapability, eea, eia);
}

//------------------------------------------------------------------------------
bool RegistrationRequest::GetS1UeNetworkCapability(
    uint8_t& eea, uint8_t& eia) const {
  if (ie_s1_ue_network_capability_.has_value()) {
    eea = ie_s1_ue_network_capability_.value().GetEea();
    eia = ie_s1_ue_network_capability_.value().GetEia();
  } else {
    return false;
  }
  return true;
}

//------------------------------------------------------------------------------
void RegistrationRequest::SetUplinkDataStatus(uint16_t value) {
  ie_uplink_data_status_ = std::make_optional<UplinkDataStatus>(value);
}

//------------------------------------------------------------------------------
bool RegistrationRequest::GetUplinkDataStatus(uint16_t& value) const {
  if (ie_uplink_data_status_.has_value()) {
    value = ie_uplink_data_status_.value().GetValue();
    return true;
  } else {
    return false;
  }
}

//------------------------------------------------------------------------------
std::optional<uint16_t> RegistrationRequest::GetUplinkDataStatus() const {
  if (ie_uplink_data_status_.has_value()) {
    return std::optional<uint16_t>(ie_uplink_data_status_.value().GetValue());
  }
  return std::nullopt;
}
//------------------------------------------------------------------------------
void RegistrationRequest::SetPduSessionStatus(uint16_t value) {
  ie_pdu_session_status_ = std::make_optional<PduSessionStatus>(value);
}

//------------------------------------------------------------------------------
bool RegistrationRequest::GetPduSessionStatus(uint16_t& value) const {
  if (ie_pdu_session_status_.has_value()) {
    value = ie_pdu_session_status_.value().GetValue();
    return true;
  } else {
    return false;
  }
}

//------------------------------------------------------------------------------
std::optional<uint16_t> RegistrationRequest::GetPduSessionStatus() const {
  if (ie_pdu_session_status_.has_value()) {
    return std::optional<uint16_t>(ie_pdu_session_status_.value().GetValue());
  }
  return std::nullopt;
}

//------------------------------------------------------------------------------
void RegistrationRequest::SetMicoIndication(bool sprti, bool raai) {
  ie_mico_indication_ = std::make_optional<MicoIndication>(sprti, raai);
}

//------------------------------------------------------------------------------
bool RegistrationRequest::GetMicoIndication(
    uint8_t& sprti, uint8_t& raai) const {
  if (ie_mico_indication_.has_value()) {
    sprti = ie_mico_indication_.value().GetSprti();
    raai  = ie_mico_indication_.value().GetRaai();
    return true;
  } else {
    return false;
  }
}

//------------------------------------------------------------------------------
void RegistrationRequest::SetUeStatus(bool n1, bool s1) {
  ie_ue_status_ = std::make_optional<UeStatus>(n1, s1);
}

//------------------------------------------------------------------------------
bool RegistrationRequest::GetUeStatus(
    uint8_t& n1_mode, uint8_t& s1_mode) const {
  if (ie_ue_status_.has_value()) {
    n1_mode = ie_ue_status_.value().GetN1();
    s1_mode = ie_ue_status_.value().GetS1();
    return true;
  } else {
    return false;
  }
}

//------------------------------------------------------------------------------
void RegistrationRequest::SetAllowedPduSessionStatus(uint16_t value) {
  ie_allowed_pdu_session_status_ =
      std::make_optional<AllowedPduSessionStatus>(value);
}

//------------------------------------------------------------------------------
uint16_t RegistrationRequest::GetAllowedPduSessionStatus() const {
  if (ie_allowed_pdu_session_status_.has_value()) {
    return ie_allowed_pdu_session_status_.value().GetValue();
  } else {
    return 0;
  }
}

//------------------------------------------------------------------------------
void RegistrationRequest::SetUeUsageSetting(bool ues_usage_setting) {
  ie_ues_usage_setting_ = std::make_optional<UeUsageSetting>(ues_usage_setting);
}

//------------------------------------------------------------------------------
uint8_t RegistrationRequest::GetUeUsageSetting() const {
  if (ie_ues_usage_setting_.has_value()) {
    return ie_ues_usage_setting_.value().GetValue();
  } else {
    return 0;
  }
}

//------------------------------------------------------------------------------
void RegistrationRequest::Set5gsDrxParameters(uint8_t value) {
  ie_5gs_drx_parameters_ = std::make_optional<_5gsDrxParameters>(value);
}

//------------------------------------------------------------------------------
uint8_t RegistrationRequest::Get5gsDrxParameters() const {
  if (ie_5gs_drx_parameters_.has_value()) {
    return ie_5gs_drx_parameters_.value().GetValue();
  } else {
    return 0;
  }
}

//------------------------------------------------------------------------------
void RegistrationRequest::SetEpsNasMessageContainer(const bstring& value) {
  ie_eps_nas_message_container_ =
      std::make_optional<EpsNasMessageContainer>(value);
}

//------------------------------------------------------------------------------
bool RegistrationRequest::GetEpsNasMessageContainer(bstring& epsNas) const {
  if (ie_eps_nas_message_container_) {
    ie_eps_nas_message_container_->GetValue(epsNas);
    return true;
  } else {
    return false;
  }
}

//------------------------------------------------------------------------------
void RegistrationRequest::SetLadnIndication(
    const std::vector<bstring>& ladn_value) {
  ie_ladn_indication_ = std::make_optional<LadnIndication>(ladn_value);
}

//------------------------------------------------------------------------------
bool RegistrationRequest::GetLadnIndication(
    std::vector<bstring>& ladn_value) const {
  if (ie_ladn_indication_.has_value()) {
    ie_ladn_indication_.value().GetValue(ladn_value);
    return true;
  } else {
    return false;
  }
}

//------------------------------------------------------------------------------
void RegistrationRequest::SetPayloadContainerType(uint8_t value) {
  ie_payload_container_type_ =
      std::make_optional<PayloadContainerType>(kIeiPayloadContainerType, value);
}

//------------------------------------------------------------------------------
uint8_t RegistrationRequest::GetPayloadContainerType() const {
  if (ie_payload_container_type_.has_value()) {
    return ie_payload_container_type_.value().GetValue();
  } else {
    return 0;
  }
}

//------------------------------------------------------------------------------
void RegistrationRequest::SetPayloadContainer(
    const std::vector<PayloadContainerEntry>& content) {
  ie_payload_container_ =
      std::make_optional<PayloadContainer>(kIeiPayloadContainer, content);
}

//------------------------------------------------------------------------------
bool RegistrationRequest::GetPayloadContainer(
    std::vector<PayloadContainerEntry>& content) const {
  if (ie_payload_container_.has_value()) {
    return ie_payload_container_.value().GetValue(content);
  } else {
    return false;
  }
}

//------------------------------------------------------------------------------
void RegistrationRequest::SetNetworkSlicingIndication(bool dcni, bool nssci) {
  ie_network_slicing_indication_ = std::make_optional<NetworkSlicingIndication>(
      kIeiNetworkSlicingIndication, dcni, nssci);
}

//------------------------------------------------------------------------------
bool RegistrationRequest::GetNetworkSlicingIndication(
    uint8_t& dcni, uint8_t& nssci) const {
  if (ie_network_slicing_indication_.has_value()) {
    dcni  = ie_network_slicing_indication_.value().GetDcni();
    nssci = ie_network_slicing_indication_.value().GetNssci();
    return true;
  } else {
    return false;
  }
}

//------------------------------------------------------------------------------
void RegistrationRequest::Set5gsUpdateType(
    uint8_t eps_pnb_ciot, uint8_t _5gs_pnb_ciot, bool ng_ran, bool sms) {
  ie_5gs_update_type_ = std::make_optional<_5gsUpdateType>(
      eps_pnb_ciot, _5gs_pnb_ciot, ng_ran, sms);
}

//------------------------------------------------------------------------------
bool RegistrationRequest::Get5gsUpdateType(
    uint8_t& eps_pnb_ciot, uint8_t& _5gs_pnb_ciot, bool& ng_ran_rcu,
    bool& sms_requested) const {
  if (ie_5gs_update_type_.has_value()) {
    eps_pnb_ciot  = ie_5gs_update_type_.value().GetEpsPnbCiot();
    _5gs_pnb_ciot = ie_5gs_update_type_.value().Get5gsPnbCiot();
    ng_ran_rcu    = ie_5gs_update_type_.value().GetNgRan();
    sms_requested = ie_5gs_update_type_.value().GetSms();
    return true;
  } else {
    return false;
  }
}

//------------------------------------------------------------------------------
void RegistrationRequest::SetNasMessageContainer(const bstring& value) {
  ie_nas_message_container_ = std::make_optional<NasMessageContainer>(value);
}

//------------------------------------------------------------------------------
bool RegistrationRequest::GetNasMessageContainer(bstring& nas) const {
  if (ie_nas_message_container_.has_value()) {
    ie_nas_message_container_.value().GetValue(nas);
    return true;
  } else {
    return false;
  }
}

//------------------------------------------------------------------------------
void RegistrationRequest::SetEpsBearerContextsStatus(uint16_t value) {
  ie_eps_bearer_context_status_ =
      std::make_optional<EpsBearerContextStatus>(value);
}

//------------------------------------------------------------------------------
bool RegistrationRequest::GetEpsBearerContextStatus(uint16_t& value) const {
  if (ie_eps_bearer_context_status_.has_value()) {
    value = ie_eps_bearer_context_status_.value().GetValue();
    return true;
  } else {
    return false;
  }
}

//------------------------------------------------------------------------------
int RegistrationRequest::Encode(uint8_t* buf, int len) {
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Encoding RegistrationRequest message");
  int encoded_size    = 0;
  int encoded_ie_size = 0;

  // Header
  if ((encoded_ie_size = ie_header_.Encode(buf, len)) == KEncodeDecodeError) {
    oai::logger::logger_registry::get_logger(LOGGER_COMMON)
        .error("Encoding NAS Header error");
    return KEncodeDecodeError;
  }
  encoded_size += encoded_ie_size;

  // 5GS Registration Type
  if ((encoded_ie_size = NasHelper::Encode(
           ie_5gs_registration_type_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  //  ngKSI
  if ((encoded_ie_size = NasHelper::Encode(
           ie_ng_ksi_, buf, len, encoded_size)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }
  // Spare half octet
  if (encoded_ie_size == 0)
    encoded_size++;  // 1/2 for 5GS registration type and 1/2 for ngKSI

  // 5GS Mobile Identity
  if ((encoded_ie_size = NasHelper::Encode(
           ie_5gs_mobile_identity_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // Non-current native NAS key set identifier
  if ((encoded_ie_size = NasHelper::Encode(
           ie_non_current_native_nas_ksi_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // 5GMM capability
  if ((encoded_ie_size =
           NasHelper::Encode(ie_5g_mm_capability_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // UE security capability
  if ((encoded_ie_size = NasHelper::Encode(
           ie_ue_security_capability_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // Requested NSSAI
  if ((encoded_ie_size =
           NasHelper::Encode(ie_requested_nssai_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // Last visited registered TAI
  if ((encoded_ie_size = NasHelper::Encode(
           ie_last_visited_registered_tai_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // S1 UE network capability
  if ((encoded_ie_size = NasHelper::Encode(
           ie_s1_ue_network_capability_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // Uplink Data Status
  if ((encoded_ie_size =
           NasHelper::Encode(ie_uplink_data_status_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // PDU Session Status
  if ((encoded_ie_size =
           NasHelper::Encode(ie_pdu_session_status_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // Mico Indication
  if ((encoded_ie_size =
           NasHelper::Encode(ie_mico_indication_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // UE status
  if ((encoded_ie_size = NasHelper::Encode(
           ie_ue_status_, buf, len, encoded_size)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // Additional GUTI
  if ((encoded_ie_size =
           NasHelper::Encode(ie_additional_guti_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // Allowed PDU Session Status
  if ((encoded_ie_size = NasHelper::Encode(
           ie_allowed_pdu_session_status_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // UEs Usage Setting
  if ((encoded_ie_size =
           NasHelper::Encode(ie_ues_usage_setting_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // 5GS DRX Parameters
  if ((encoded_ie_size =
           NasHelper::Encode(ie_5gs_drx_parameters_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // EPS NAS Message Container
  if ((encoded_ie_size = NasHelper::Encode(
           ie_eps_nas_message_container_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // LADN Indication
  if ((encoded_ie_size =
           NasHelper::Encode(ie_ladn_indication_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // Payload Container Type
  if ((encoded_ie_size = NasHelper::Encode(
           ie_payload_container_type_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // TODO: use NAS helper
  if (!ie_payload_container_ or !ie_payload_container_type_) {
    oai::logger::logger_registry::get_logger(LOGGER_COMMON)
        .debug("IE %s is not available", PayloadContainer::GetIeName().c_str());
  } else {
    if ((encoded_ie_size = ie_payload_container_->Encode(
             buf + encoded_size, len - encoded_size,
             ie_payload_container_type_.value().GetValue())) ==
        KEncodeDecodeError) {
      oai::logger::logger_registry::get_logger(LOGGER_COMMON)
          .error("Encoding %s error", PayloadContainer::GetIeName().c_str());
      return KEncodeDecodeError;
    } else {
      encoded_size += encoded_ie_size;
    }
  }

  // Network Slicing Indication
  if ((encoded_ie_size = NasHelper::Encode(
           ie_network_slicing_indication_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // 5GS Update Type
  if ((encoded_ie_size =
           NasHelper::Encode(ie_5gs_update_type_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // NAS Message Container
  if ((encoded_ie_size = NasHelper::Encode(
           ie_nas_message_container_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // EPS Bearer Context Status
  if ((encoded_ie_size = NasHelper::Encode(
           ie_eps_bearer_context_status_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("encoded RegistrationRequest message len(%d)", encoded_size);
  return encoded_size;
}

//------------------------------------------------------------------------------
int RegistrationRequest::Decode(uint8_t* buf, int len) {
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Decoding RegistrationRequest message");
  int decoded_size    = 0;
  int decoded_ie_size = 0;

  // Header
  decoded_ie_size = ie_header_.Decode(buf, len);
  if (decoded_ie_size == KEncodeDecodeError) {
    oai::logger::logger_registry::get_logger(LOGGER_COMMON)
        .error("Decoding NAS Header error");
    return KEncodeDecodeError;
  }
  decoded_size += decoded_ie_size;

  // Registration Type and Ng KSI
  if ((decoded_ie_size = NasHelper::Decode(
           ie_5gs_registration_type_, buf, len, decoded_size, false)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }
  if ((decoded_ie_size = NasHelper::Decode(
           ie_ng_ksi_, buf, len, decoded_size, true,
           false)) ==  // high, 1/2 octet
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }
  if (decoded_ie_size == 0)
    decoded_size++;  // 1/2 octet for ie_5gs_registration_type_, 1/2 octet for
                     // ie_ng_ksi

  if ((decoded_ie_size = NasHelper::Decode(
           ie_5gs_mobile_identity_, buf, len, decoded_size, false)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // Decode other IEs
  uint8_t octet = 0x00;
  DECODE_U8_VALUE(buf, octet, decoded_size, len);
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("First option IEI 0x%x", octet);
  bool flag = false;
  while ((octet != 0x0)) {
    oai::logger::logger_registry::get_logger(LOGGER_COMMON)
        .debug("IEI 0x%x", octet);
    switch ((octet & 0xf0) >> 4) {
      case kIeiNasKeySetIdentifier: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiNasKeySetIdentifier);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_non_current_native_nas_ksi_, buf, len, decoded_size, false,
                 true)) == KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;

      case kIeiMicoIndication: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiMicoIndication);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_mico_indication_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;

      case kIeiPayloadContainerType: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiPayloadContainerType);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_payload_container_type_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;

      case kIeiNetworkSlicingIndication: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiNetworkSlicingIndication);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_network_slicing_indication_, buf, len, decoded_size,
                 true)) == KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;

      default: {
        flag = true;
      }
    }

    switch (octet) {
      case kIei5gmmCapability: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIei5gmmCapability);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_5g_mm_capability_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;

      case kIeiUeSecurityCapability: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiUeSecurityCapability);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_ue_security_capability_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;

      case kIeiNSSAIRequested: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI %d", kIeiNSSAIRequested);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_requested_nssai_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;

      case kIei5gsTrackingAreaIdentity: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIei5gsTrackingAreaIdentity);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_last_visited_registered_tai_, buf, len, decoded_size,
                 true)) == KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;

      case kIeiUeNetworkCapability: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiUeNetworkCapability);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_s1_ue_network_capability_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;

      case kIeiUplinkDataStatus: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiUplinkDataStatus);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_uplink_data_status_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;

      case kIeiPduSessionStatus: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiPduSessionStatus);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_pdu_session_status_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;

      case kIeiUeStatus: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiUeStatus);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_ue_status_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;

      case kIei5gGuti: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIei5gGuti);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_additional_guti_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;

      case kIeiAllowedPduSessionStatus: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiAllowedPduSessionStatus);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_allowed_pdu_session_status_, buf, len, decoded_size,
                 true)) == KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;

      case kIeiUeUsageSetting: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiUeUsageSetting);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_ues_usage_setting_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;

      case kIei5gsDrxParameters: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIei5gsDrxParameters);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_5gs_drx_parameters_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;

      case kIeiEpsNasMessageContainer: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiEpsNasMessageContainer);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_eps_nas_message_container_, buf, len, decoded_size,
                 true)) == KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;

      case kIeiLadnIndication: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiLadnIndication);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_ladn_indication_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;

      case kIeiPayloadContainer: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiPayloadContainer);
        PayloadContainer ie_payload_container_tmp = {};
        // TODO: verified type of Payload container
        if ((decoded_ie_size = ie_payload_container_tmp.Decode(
                 buf + decoded_size, len - decoded_size, true,
                 kN1SmInformation)) == KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        decoded_size += decoded_ie_size;
        ie_payload_container_ =
            std::optional<PayloadContainer>(ie_payload_container_tmp);
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;

      case 0x53: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIei5gsUpdateType);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_5gs_update_type_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;

      case kIeiNasMessageContainer: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiNasMessageContainer);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_nas_message_container_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;

      case kIeiEpsBearerContextStatus: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiEpsBearerContextStatus);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_eps_bearer_context_status_, buf, len, decoded_size,
                 true)) == KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;

      default: {
        // TODO:
        if (flag) {
          oai::logger::logger_registry::get_logger(LOGGER_COMMON)
              .warn("Unknown IEI 0x%x, stop decoding...", octet);
          // Stop decoding
          octet = 0x00;
        }
      } break;
    }
  }
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Decoded RegistrationRequest message (len %d)", decoded_size);
  return decoded_size;
}
