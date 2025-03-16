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

#include "SecurityModeComplete.hpp"

#include "NasHelper.hpp"

using namespace oai::nas;

//------------------------------------------------------------------------------
SecurityModeComplete::SecurityModeComplete()
    : ie_header_(
          k5gsMobilityManagementMessages, kPlain5gsMessage,
          kSecurityModeComplete) {
  ie_imeisv_                = std::nullopt;
  ie_nas_message_container_ = std::nullopt;
  ie_non_imeisvpei_         = std::nullopt;
};

//------------------------------------------------------------------------------
SecurityModeComplete::~SecurityModeComplete() {}

//------------------------------------------------------------------------------
uint32_t SecurityModeComplete::GetLength() const {
  uint32_t msg_len = 0;
  msg_len += ie_header_.GetLength();
  if (ie_imeisv_.has_value()) msg_len += ie_imeisv_.value().GetIeLength();
  if (ie_nas_message_container_.has_value())
    msg_len += ie_nas_message_container_.value().GetIeLength();
  if (ie_non_imeisvpei_.has_value())
    msg_len += ie_non_imeisvpei_.value().GetIeLength();
  return msg_len;
}

//------------------------------------------------------------------------------
void SecurityModeComplete::SetHeader(uint8_t security_header_type) {
  ie_header_.SetSecurityHeaderType(security_header_type);
}

//------------------------------------------------------------------------------
void SecurityModeComplete::SetImeisv(const IMEI_IMEISV_t& imeisv) {
  ie_imeisv_ =
      std::make_optional<_5gsMobileIdentity>(kIei5gsMobileIdentityImeiSv);
  // ie_imeisv_->SetIei(kIei5gsMobileIdentityImeiSv);
  ie_imeisv_.value().SetImeisv(imeisv);
}

//------------------------------------------------------------------------------
void SecurityModeComplete::SetNasMessageContainer(const bstring& value) {
  ie_nas_message_container_ = std::make_optional<NasMessageContainer>(value);
}

//------------------------------------------------------------------------------
void SecurityModeComplete::SetNonImeisv(const IMEI_IMEISV_t& imeisv) {
  ie_non_imeisvpei_ =
      std::make_optional<_5gsMobileIdentity>(kIei5gsMobileIdentityNonImeiSvPei);
  // ie_non_imeisvpei_->SetIei(kIei5gsMobileIdentityNonImeiSvPei);
  ie_non_imeisvpei_.value().SetImeisv(imeisv);
}

//------------------------------------------------------------------------------
bool SecurityModeComplete::GetImeisv(IMEI_IMEISV_t& imeisv) const {
  if (ie_imeisv_.has_value()) {
    ie_imeisv_.value().GetImeisv(imeisv);
    return true;
  } else {
    return false;
  }
}

//------------------------------------------------------------------------------
bool SecurityModeComplete::GetNasMessageContainer(bstring& nas) const {
  if (ie_nas_message_container_.has_value()) {
    ie_nas_message_container_.value().GetValue(nas);
    return true;
  } else {
    return false;
  }
}

//------------------------------------------------------------------------------
bool SecurityModeComplete::GetNonImeisv(IMEI_IMEISV_t& imeisv) const {
  if (ie_non_imeisvpei_.has_value()) {
    ie_non_imeisvpei_.value().GetImeisv(imeisv);
    return true;
  } else {
    return false;
  }
}

//------------------------------------------------------------------------------
int SecurityModeComplete::Encode(uint8_t* buf, int len) {
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Encoding SecurityModeComplete message");
  int encoded_size    = 0;
  int encoded_ie_size = 0;

  // Header
  if ((encoded_ie_size = ie_header_.Encode(buf, len)) == KEncodeDecodeError) {
    oai::logger::logger_registry::get_logger(LOGGER_COMMON)
        .error("Encoding NAS Header error");
    return KEncodeDecodeError;
  }
  encoded_size += encoded_ie_size;

  // IMEISV
  if ((encoded_ie_size = NasHelper::Encode(
           ie_imeisv_, buf, len, encoded_size)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // NAS Message Container
  if ((encoded_ie_size = NasHelper::Encode(
           ie_nas_message_container_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // non-IMEISV PEI
  if ((encoded_ie_size = NasHelper::Encode(
           ie_non_imeisvpei_, buf, len, encoded_size)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Encoded SecurityModeComplete message len (%d)", encoded_size);
  return encoded_size;
}

//------------------------------------------------------------------------------
int SecurityModeComplete::Decode(uint8_t* buf, int len) {
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Decoding SecurityModeComplete message");

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
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Decoded_size (%d)", decoded_size);

  // while ((octet != 0x0)) {
  while (len - decoded_size > 0) {
    uint8_t octet = 0x00;
    DECODE_U8_VALUE(buf, octet, decoded_size, len);
    oai::logger::logger_registry::get_logger(LOGGER_COMMON)
        .debug("Decoding IEI (0x%x)", octet);
    switch (octet) {
      case kIei5gsMobileIdentityImeiSv: {
        if ((decoded_ie_size =
                 NasHelper::Decode(ie_imeisv_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
      } break;

      case kIeiNasMessageContainer: {
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_nas_message_container_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
      } break;

      case kIei5gsMobileIdentityNonImeiSvPei: {
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_non_imeisvpei_, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
      } break;

      default: {
        oai::logger::logger_registry::get_logger(LOGGER_COMMON)
            .warn("Unexpected IEI (0x%x)", octet);
        return decoded_size;
      }
    }
  }

  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Decoded SecurityModeComplete message len (%d)", decoded_size);
  return decoded_size;
}
