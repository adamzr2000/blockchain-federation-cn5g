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

#include "RegistrationAccept.hpp"

#include "NasHelper.hpp"

using namespace oai::nas;

//------------------------------------------------------------------------------
RegistrationAccept::RegistrationAccept()
    : ie_header_(
          k5gsMobilityManagementMessages, kPlain5gsMessage,
          kRegistrationAccept) {
  ie_5g_guti_                                     = std::nullopt;
  ie_equivalent_plmns_                            = std::nullopt;
  ie_allowed_nssai_                               = std::nullopt;
  ie_rejected_nssai_                              = std::nullopt;
  ie_configured_nssai_                            = std::nullopt;
  ie_5gs_network_feature_support_                 = std::nullopt;
  ie_pdu_session_status_                          = std::nullopt;
  ie_pdu_session_reactivation_result_             = std::nullopt;
  ie_pdu_session_reactivation_result_error_cause_ = std::nullopt;
  ie_ladn_information_                            = std::nullopt;
  ie_mico_indication_                             = std::nullopt;
  ie_network_slicing_indication_                  = std::nullopt;
  ie_service_area_list_                           = std::nullopt;
  ie_t3512_value_                                 = std::nullopt;
  ie_non_3gpp_deregistration_timer_value_         = std::nullopt;
  ie_t3502_value_                                 = std::nullopt;
  ie_sor_transparent_container_                   = std::nullopt;
  ie_eap_message_                                 = std::nullopt;
  ie_nssai_inclusion_mode_                        = std::nullopt;
  ie_negotiated_drx_parameters_                   = std::nullopt;
  ie_non_3gpp_nw_policies_                        = std::nullopt;
  ie_eps_bearer_context_status_                   = std::nullopt;
  ie_extended_drx_parameters_                     = std::nullopt;
  ie_t3447_value_                                 = std::nullopt;
  ie_t3448_value_                                 = std::nullopt;
  ie_t3324_value_                                 = std::nullopt;
  ie_ue_radio_capability_id_                      = std::nullopt;
  ie_pending_nssai_                               = std::nullopt;
  ie_tai_list_                                    = std::nullopt;
}

//------------------------------------------------------------------------------
RegistrationAccept::~RegistrationAccept() {}

//------------------------------------------------------------------------------
uint32_t RegistrationAccept::GetLength() const {
  uint32_t msg_len = 0;
  msg_len += ie_header_.GetLength();
  msg_len += ie_5gs_registration_result_.GetIeLength();

  if (ie_5g_guti_.has_value()) msg_len += ie_5g_guti_.value().GetIeLength();
  if (ie_equivalent_plmns_.has_value())
    msg_len += ie_equivalent_plmns_.value().GetIeLength();
  if (ie_tai_list_.has_value()) msg_len += ie_tai_list_.value().GetIeLength();
  if (ie_allowed_nssai_.has_value())
    msg_len += ie_allowed_nssai_.value().GetIeLength();
  if (ie_rejected_nssai_.has_value())
    msg_len += ie_rejected_nssai_.value().GetIeLength();
  if (ie_configured_nssai_.has_value())
    msg_len += ie_configured_nssai_.value().GetIeLength();
  if (ie_5gs_network_feature_support_.has_value())
    msg_len += ie_5gs_network_feature_support_.value().GetIeLength();
  if (ie_pdu_session_status_.has_value())
    msg_len += ie_pdu_session_status_.value().GetIeLength();
  if (ie_pdu_session_reactivation_result_.has_value())
    msg_len += ie_pdu_session_reactivation_result_.value().GetIeLength();
  if (ie_pdu_session_reactivation_result_error_cause_.has_value())
    msg_len +=
        ie_pdu_session_reactivation_result_error_cause_.value().GetIeLength();
  if (ie_ladn_information_.has_value())
    msg_len += ie_ladn_information_.value().GetIeLength();
  if (ie_mico_indication_.has_value())
    msg_len += ie_mico_indication_.value().GetIeLength();
  if (ie_network_slicing_indication_.has_value())
    msg_len += ie_network_slicing_indication_.value().GetIeLength();
  if (ie_service_area_list_.has_value())
    msg_len += ie_service_area_list_.value().GetIeLength();
  if (ie_t3512_value_.has_value())
    msg_len += ie_t3512_value_.value().GetIeLength();
  if (ie_non_3gpp_deregistration_timer_value_.has_value())
    msg_len += ie_non_3gpp_deregistration_timer_value_.value().GetIeLength();
  if (ie_t3502_value_.has_value())
    msg_len += ie_t3502_value_.value().GetIeLength();
  if (ie_sor_transparent_container_.has_value())
    msg_len += ie_sor_transparent_container_.value().GetIeLength();
  if (ie_eap_message_.has_value())
    msg_len += ie_eap_message_.value().GetIeLength();
  if (ie_nssai_inclusion_mode_.has_value())
    msg_len += ie_nssai_inclusion_mode_.value().GetIeLength();
  if (ie_negotiated_drx_parameters_.has_value())
    msg_len += ie_negotiated_drx_parameters_.value().GetIeLength();
  if (ie_non_3gpp_nw_policies_.has_value())
    msg_len += ie_non_3gpp_nw_policies_.value().GetIeLength();
  if (ie_eps_bearer_context_status_.has_value())
    msg_len += ie_eps_bearer_context_status_.value().GetIeLength();
  if (ie_extended_drx_parameters_.has_value())
    msg_len += ie_extended_drx_parameters_.value().GetIeLength();
  if (ie_t3447_value_.has_value())
    msg_len += ie_t3447_value_.value().GetIeLength();
  if (ie_t3448_value_.has_value())
    msg_len += ie_t3448_value_.value().GetIeLength();
  if (ie_t3324_value_.has_value())
    msg_len += ie_t3324_value_.value().GetIeLength();
  if (ie_ue_radio_capability_id_.has_value())
    msg_len += ie_ue_radio_capability_id_.value().GetIeLength();
  if (ie_pending_nssai_.has_value())
    msg_len += ie_pending_nssai_.value().GetIeLength();

  return msg_len;
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetHeader(uint8_t security_header_type) {
  ie_header_.SetSecurityHeaderType(security_header_type);
}

//------------------------------------------------------------------------------
void RegistrationAccept::Set5gsRegistrationResult(
    bool emergency, bool nssaa, bool sms, uint8_t value) {
  ie_5gs_registration_result_.Set(emergency, nssaa, sms, value);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetSuciSupiFormatImsi(
    const std::string& mcc, const std::string& mnc,
    const std::string& routing_ind, uint8_t protection_sch_id,
    const std::string& msin) {
  if (protection_sch_id != kNullScheme) {
    oai::logger::logger_registry::get_logger(LOGGER_COMMON)
        .error(
            "Encoding SUCI and SUPI format for IMSI error, please choose right "
            "scheme");
    return;
  } else {
    _5gsMobileIdentity ie_5g_guti_tmp = {};
    ie_5g_guti_tmp.SetIei(kIei5gGuti);
    ie_5g_guti_tmp.SetSuciWithSupiImsi(
        mcc, mnc, routing_ind, protection_sch_id, msin);
    ie_5g_guti_ = std::optional<_5gsMobileIdentity>(ie_5g_guti_tmp);
  }
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetSuciSupiFormatImsi(
    const std::string& mcc, const std::string& mnc,
    const std::string& routing_ind, uint8_t protection_sch_id, uint8_t hnpki,
    const std::string& msin) {
  // TODO:
}

//------------------------------------------------------------------------------
void RegistrationAccept::Set5gGuti(
    const std::string& mcc, const std::string& mnc, uint8_t amf_region_id,
    uint16_t amf_set_id, uint8_t amf_pointer, uint32_t tmsi) {
  _5gsMobileIdentity ie_5g_guti_tmp = {};
  ie_5g_guti_tmp.SetIei(kIei5gGuti);
  ie_5g_guti_tmp.Set5gGuti(
      mcc, mnc, amf_region_id, amf_set_id, amf_pointer, tmsi);
  ie_5g_guti_ = std::optional<_5gsMobileIdentity>(ie_5g_guti_tmp);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetImeiImeisv() {}

//------------------------------------------------------------------------------
void RegistrationAccept::Set5gSTmsi() {}

//------------------------------------------------------------------------------
void RegistrationAccept::SetEquivalentPlmns(
    const std::vector<nas_plmn_t>& list) {
  PlmnList ie_equivalent_plmns_tmp = {};
  ie_equivalent_plmns_tmp.Set(kEquivalentPlmns, list);
  ie_equivalent_plmns_ = std::optional<PlmnList>(ie_equivalent_plmns_tmp);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetAllowedNssai(
    const std::vector<struct SNSSAI_s>& nssai) {
  if (nssai.size() > 0) {
    ie_allowed_nssai_ = std::make_optional<Nssai>(kIeiNSSAIAllowed, nssai);
  }
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetRejectedNssai(
    const std::vector<RejectedSNssai>& nssai) {
  if (nssai.size() > 0) {
    ie_rejected_nssai_ = std::make_optional<RejectedNssai>(kIeiRejectedNssaiRa);
    ie_rejected_nssai_.value().SetRejectedSNssais(nssai);
  }
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetConfiguredNssai(
    const std::vector<struct SNSSAI_s>& nssai) {
  if (nssai.size() > 0) {
    ie_configured_nssai_ =
        std::make_optional<Nssai>(kIeiNSSAIConfigured, nssai);
  }
}

//------------------------------------------------------------------------------
void RegistrationAccept::Set5gsNetworkFeatureSupport(
    uint8_t value, uint8_t value2) {
  ie_5gs_network_feature_support_ =
      std::make_optional<_5gsNetworkFeatureSupport>(value, value2);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetPduSessionStatus(uint16_t value) {
  ie_pdu_session_status_ = std::make_optional<PduSessionStatus>(value);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetPduSessionReactivationResult(uint16_t value) {
  ie_pdu_session_reactivation_result_ =
      std::make_optional<PduSessionReactivationResult>(value);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetPduSessionReactivationResultErrorCause(
    uint8_t session_id, uint8_t value) {
  ie_pdu_session_reactivation_result_error_cause_ =
      std::make_optional<PduSessionReactivationResultErrorCause>(
          session_id, value);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetMicoIndication(bool sprti, bool raai) {
  ie_mico_indication_ = std::make_optional<MicoIndication>(sprti, raai);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetLadnInformation(
    const LadnInformation& ladn_information) {
  ie_ladn_information_ = std::make_optional<LadnInformation>(ladn_information);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetNetworkSlicingIndication(bool dcni, bool nssci) {
  ie_network_slicing_indication_ = std::make_optional<NetworkSlicingIndication>(
      kIeiNetworkSlicingIndication, dcni, nssci);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetServiceAreaList(
    const std::vector<service_area_list_ie_t>& list) {
  ie_service_area_list_ = std::make_optional<ServiceAreaList>(list);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetT3512Value(uint8_t unit, uint8_t value) {
  ie_t3512_value_ =
      std::make_optional<GprsTimer3>(kIeiGprsTimer3T3512, unit, value);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetNon3gppDeregistrationTimerValue(uint8_t value) {
  ie_non_3gpp_deregistration_timer_value_ = std::make_optional<GprsTimer2>(
      kIeiGprsTimer2Non3gppDeregistration, value);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetT3502Value(uint8_t value) {
  ie_t3502_value_ = std::make_optional<GprsTimer2>(kIeiGprsTimer2T3502, value);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetSorTransparentContainer(
    uint8_t header, const uint8_t (&value)[16]) {
  ie_sor_transparent_container_ =
      std::make_optional<SorTransparentContainer>(header, value);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetEapMessage(const bstring& eap) {
  ie_eap_message_ = std::make_optional<EapMessage>(kIeiEapMessage, eap);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetNssaiInclusionMode(uint8_t value) {
  ie_nssai_inclusion_mode_ = std::make_optional<NssaiInclusionMode>(value);
}

//------------------------------------------------------------------------------
void RegistrationAccept::Set5gsDrxParameters(uint8_t value) {
  ie_negotiated_drx_parameters_ = std::make_optional<_5gsDrxParameters>(value);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetNon3gppNwProvidedPolicies(uint8_t value) {
  ie_non_3gpp_nw_policies_ =
      std::make_optional<Non3gppNwProvidedPolicies>(value);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetEpsBearerContextsStatus(uint16_t value) {
  ie_eps_bearer_context_status_ =
      std::make_optional<EpsBearerContextStatus>(value);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetExtendedDrxParameters(
    uint8_t paging_time, uint8_t value) {
  ie_extended_drx_parameters_ =
      std::make_optional<ExtendedDrxParameters>(paging_time, value);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetT3447Value(uint8_t unit, uint8_t value) {
  ie_t3447_value_ =
      std::make_optional<GprsTimer3>(kIeiGprsTimer3T3447, unit, value);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetT3448Value(uint8_t unit, uint8_t value) {
  ie_t3448_value_ =
      std::make_optional<GprsTimer3>(kIeiGprsTimer3T3448, unit, value);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetT3324Value(uint8_t unit, uint8_t value) {
  ie_t3324_value_ =
      std::make_optional<GprsTimer3>(kIeiGprsTimer3T3324, unit, value);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetUeRadioCapabilityId(const bstring& value) {
  ie_ue_radio_capability_id_ = std::make_optional<UeRadioCapabilityId>(value);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetPendingNssai(
    const std::vector<struct SNSSAI_s>& nssai) {
  ie_pending_nssai_ = std::make_optional<Nssai>(kIeiNSSAIPending, nssai);
}

//------------------------------------------------------------------------------
void RegistrationAccept::SetTaiList(const std::vector<p_tai_t>& tai_list) {
  ie_tai_list_ = std::make_optional<_5gsTrackingAreaIdList>(tai_list);
}

//------------------------------------------------------------------------------
int RegistrationAccept::Encode(uint8_t* buf, int len) {
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Encoding RegistrationAccept message");
  int encoded_size    = 0;
  int encoded_ie_size = 0;
  // Header
  if ((encoded_ie_size = ie_header_.Encode(buf, len)) == KEncodeDecodeError) {
    oai::logger::logger_registry::get_logger(LOGGER_COMMON)
        .error("Encoding NAS Header error");
    return KEncodeDecodeError;
  }
  encoded_size += encoded_ie_size;

  // 5GS Registration Result
  if ((encoded_ie_size = NasHelper::Encode(
           ie_5gs_registration_result_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           ie_5g_guti_, buf, len, encoded_size)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           ie_tai_list_, buf, len, encoded_size)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size =
           NasHelper::Encode(ie_equivalent_plmns_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           ie_allowed_nssai_, buf, len, encoded_size)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           ie_rejected_nssai_, buf, len, encoded_size)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size =
           NasHelper::Encode(ie_configured_nssai_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           ie_5gs_network_feature_support_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size =
           NasHelper::Encode(ie_pdu_session_status_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           ie_pdu_session_reactivation_result_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           ie_pdu_session_reactivation_result_error_cause_, buf, len,
           encoded_size)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size =
           NasHelper::Encode(ie_ladn_information_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size =
           NasHelper::Encode(ie_mico_indication_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           ie_network_slicing_indication_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size =
           NasHelper::Encode(ie_service_area_list_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           ie_t3512_value_, buf, len, encoded_size)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           ie_non_3gpp_deregistration_timer_value_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           ie_t3502_value_, buf, len, encoded_size)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           ie_sor_transparent_container_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           ie_eap_message_, buf, len, encoded_size)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           ie_nssai_inclusion_mode_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           ie_negotiated_drx_parameters_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           ie_non_3gpp_nw_policies_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           ie_eps_bearer_context_status_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           ie_extended_drx_parameters_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           ie_t3447_value_, buf, len, encoded_size)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           ie_t3448_value_, buf, len, encoded_size)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           ie_t3324_value_, buf, len, encoded_size)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           ie_ue_radio_capability_id_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           ie_pending_nssai_, buf, len, encoded_size)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Encoded RegistrationAccept message len (%d)", encoded_size);
  return encoded_size;
}

//------------------------------------------------------------------------------
int RegistrationAccept::Decode(uint8_t* buf, int len) {
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Decoding RegistrationAccept message");
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

  if ((decoded_ie_size = NasHelper::Decode(
           ie_5gs_registration_result_, buf, len, decoded_size, false)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // Decode other IEs
  uint8_t octet = 0x00;
  DECODE_U8_VALUE(buf, octet, decoded_size, len);
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("First option IEI (0x%x)", octet);
  bool flag = false;
  while ((octet != 0x0)) {
    switch ((octet & 0xf0) >> 4) {
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
            .debug("Next IEI (0x%x)", octet);
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
            .debug("Next IEI (0x%x)", octet);
      } break;

      case kIeiNssaiInclusionMode: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiNssaiInclusionMode);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_nssai_inclusion_mode_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI (0x%x)", octet);
      } break;

      case kIeiNon3gppNwProvidedPolicies: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiNon3gppNwProvidedPolicies);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_non_3gpp_nw_policies_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI (0x%x)", octet);
      } break;

      default: {
        flag = true;
      }
    }

    switch (octet) {
      case kIei5gGuti: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIei5gGuti);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_5g_guti_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI (0x%x)", octet);
      } break;

      case kIeiNSSAIAllowed: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiNSSAIAllowed);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_allowed_nssai_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI (0x%x)", octet);
      } break;

      case kIeiRejectedNssaiRa: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiRejectedNssaiRa);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_rejected_nssai_, kIeiRejectedNssaiRa, buf, len,
                 decoded_size, true)) == KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI (0x%x)", octet);
      } break;

      case kIeiNSSAIConfigured: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiNSSAIConfigured);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_configured_nssai_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI (0x%x)", octet);
      } break;

      case kIei5gsNetworkFeatureSupport: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIei5gsNetworkFeatureSupport);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_5gs_network_feature_support_, buf, len, decoded_size,
                 true)) == KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI (0x%x)", octet);
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
            .debug("Next IEI (0x%x)", octet);
      } break;

      case kIeiPduSessionReactivationResult: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiPduSessionReactivationResult);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_pdu_session_reactivation_result_, buf, len, decoded_size,
                 true)) == KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI (0x%x)", octet);
      } break;

      case kIeiPduSessionReactivationResultErrorCause: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug(
                "Decoding IEI 0x%x",
                kIeiPduSessionReactivationResultErrorCause);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_pdu_session_reactivation_result_error_cause_, buf, len,
                 decoded_size, true)) == KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI (0x%x)", octet);
      } break;
      case kIeiLadnInformation: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiLadnInformation);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_ladn_information_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;
      case kIeiServiceAreaList: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiServiceAreaList);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_service_area_list_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI 0x%x", octet);
      } break;
      case kIeiGprsTimer3T3512: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiGprsTimer3T3512);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_t3512_value_, kIeiGprsTimer3T3512, buf, len, decoded_size,
                 true)) == KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI (0x%x)", octet);
      } break;

      case kIeiGprsTimer2Non3gppDeregistration: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiGprsTimer2Non3gppDeregistration);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_non_3gpp_deregistration_timer_value_,
                 kIeiGprsTimer2Non3gppDeregistration, buf, len, decoded_size,
                 true)) == KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI (0x%x)", octet);
      } break;

      case kIeiGprsTimer2T3502: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiGprsTimer2T3502);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_t3502_value_, kIeiGprsTimer2T3502, buf, len, decoded_size,
                 true)) == KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI (0x%x)", octet);
      } break;

      case kIeiSorTransparentContainer: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiSorTransparentContainer);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_sor_transparent_container_, buf, len, decoded_size,
                 true)) == KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI (0x%x)", octet);
      } break;

      case kIeiEapMessage: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiEapMessage);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_eap_message_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI (0x%x)", octet);
      } break;

      case kIei5gsDrxParameters: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI (0x%x)", kIei5gsDrxParameters);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_negotiated_drx_parameters_, buf, len, decoded_size,
                 true)) == KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI (0x%x)", octet);
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
            .debug("Next IEI (0x%x)", octet);
      } break;

      case kIeiExtendedDrxParameters: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiExtendedDrxParameters);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_extended_drx_parameters_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI (0x%x)", octet);
      } break;

      case kIeiGprsTimer3T3447: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiGprsTimer3T3447);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_t3447_value_, kIeiGprsTimer3T3447, buf, len, decoded_size,
                 true)) == KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI (0x%x)", octet);
      } break;

      case kIeiGprsTimer3T3448: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiGprsTimer3T3448);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_t3448_value_, kIeiGprsTimer3T3448, buf, len, decoded_size,
                 true)) == KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI (0x%x)", octet);
      } break;

      case kIeiGprsTimer3T3324: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiGprsTimer3T3324);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_t3324_value_, kIeiGprsTimer3T3324, buf, len, decoded_size,
                 true)) == KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI (0x%x)", octet);
      } break;

      case kIeiUeRadioCapabilityId: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiUeRadioCapabilityId);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_ue_radio_capability_id_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI (0x%x)", octet);
      } break;

      case kIeiNSSAIPending: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIeiNSSAIPending);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_pending_nssai_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI (0x%x)", octet);
      } break;

      case kEquivalentPlmns: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kEquivalentPlmns);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_equivalent_plmns_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI (0x%x)", octet);
      } break;

      case kIei5gsTrackingAreaIdentityList: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Decoding IEI 0x%x", kIei5gsTrackingAreaIdentityList);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_tai_list_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf, octet, decoded_size, len);
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .debug("Next IEI (0x%x)", octet);
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
      .debug("Decoded RegistrationAccept message len (%d)", decoded_size);
  return decoded_size;
}
