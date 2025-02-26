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

#include "IdentityResponse.hpp"

#include "NasHelper.hpp"

using namespace oai::nas;

//------------------------------------------------------------------------------
IdentityResponse::IdentityResponse()
    : ie_header_(
          k5gsMobilityManagementMessages, kPlain5gsMessage, kIdentityResponse) {
}

//------------------------------------------------------------------------------
IdentityResponse::~IdentityResponse() {}

//------------------------------------------------------------------------------
uint32_t IdentityResponse::GetLength() const {
  uint32_t msg_len = 0;
  msg_len += ie_header_.GetLength();
  msg_len += ie_mobile_identity_.GetIeLength();

  return msg_len;
}

//------------------------------------------------------------------------------
void IdentityResponse::SetHeader(uint8_t security_header_type) {
  ie_header_.SetSecurityHeaderType(security_header_type);
}

//------------------------------------------------------------------------------
void IdentityResponse::Get5gsMobileIdentity(
    _5gsMobileIdentity& mobile_identity) const {
  mobile_identity = ie_mobile_identity_;
}

//------------------------------------------------------------------------------
_5gsMobileIdentity IdentityResponse::Get5gsMobileIdentity() const {
  return ie_mobile_identity_;
}

//------------------------------------------------------------------------------
void IdentityResponse::SetSuciSupiFormatImsi(
    const std::string& mcc, const std::string& mnc,
    const std::string& routing_ind, uint8_t protection_sch_id,
    const std::string& msin) {
  if (protection_sch_id != kNullScheme) {
    oai::logger::logger_registry::get_logger(LOGGER_COMMON)
        .error(
            "Encoding suci and supi format for imsi error, please choose right "
            "interface");
    return;
  } else {
    ie_mobile_identity_.SetSuciWithSupiImsi(
        mcc, mnc, routing_ind, protection_sch_id, msin);
  }
}

//------------------------------------------------------------------------------
void IdentityResponse::SetSuciSupiFormatImsi(
    const std::string& mcc, const std::string& mnc,
    const std::string& routingInd, uint8_t protection_sch_id, uint8_t hnpki,
    const std::string& msin) {
  // TODO:
}

//------------------------------------------------------------------------------
void IdentityResponse::Set5gGuti() {
  // TODO:
}

//------------------------------------------------------------------------------
void IdentityResponse::SetImeiImeisv() {
  // TODO:
}

//------------------------------------------------------------------------------
void IdentityResponse::Set5gSTmsi() {
  // TODO:
}

//------------------------------------------------------------------------------
int IdentityResponse::Encode(uint8_t* buf, int len) {
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Encoding IdentityResponse message");
  int encoded_size    = 0;
  int encoded_ie_size = 0;

  // Header
  if ((encoded_ie_size = ie_header_.Encode(buf, len)) == KEncodeDecodeError) {
    oai::logger::logger_registry::get_logger(LOGGER_COMMON)
        .error("Encoding NAS Header error");
    return KEncodeDecodeError;
  }
  encoded_size += encoded_ie_size;

  // Mobile Identity
  if ((encoded_ie_size =
           NasHelper::Encode(ie_mobile_identity_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Encoded IdentityResponse message len (%d)", encoded_size);
  return encoded_size;
}

//------------------------------------------------------------------------------
int IdentityResponse::Decode(uint8_t* buf, int len) {
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Decoding IdentityResponse message");

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

  // Mobile Identity
  if ((decoded_ie_size = NasHelper::Decode(
           ie_mobile_identity_, buf, len, decoded_size, false)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Decoded IdentityResponse message len (%d)", decoded_size);
  return decoded_size;
}
