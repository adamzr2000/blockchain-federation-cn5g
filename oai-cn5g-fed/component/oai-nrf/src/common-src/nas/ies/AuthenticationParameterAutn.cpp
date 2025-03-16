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

#include "AuthenticationParameterAutn.hpp"

#include "3gpp_24.501.hpp"
#include "common_defs.h"
#include "logger_base.hpp"
using namespace oai::nas;

//------------------------------------------------------------------------------
AuthenticationParameterAutn::AuthenticationParameterAutn(uint8_t iei)
    : Type4NasIe(iei), value_() {
  SetLengthIndicator(kAuthenticationParameterAutnValueLength);
}

//------------------------------------------------------------------------------
AuthenticationParameterAutn::AuthenticationParameterAutn(
    uint8_t iei, uint8_t value[kAuthenticationParameterAutnValueLength])
    : Type4NasIe(iei) {
  for (int i = 0; i < kAuthenticationParameterAutnValueLength; i++) {
    this->value_[i] = value[i];
  }
  SetLengthIndicator(kAuthenticationParameterAutnValueLength);
}

//------------------------------------------------------------------------------
AuthenticationParameterAutn::AuthenticationParameterAutn()
    : Type4NasIe(), value_() {
  SetLengthIndicator(kAuthenticationParameterAutnValueLength);
}

//------------------------------------------------------------------------------
AuthenticationParameterAutn::~AuthenticationParameterAutn() {}

//------------------------------------------------------------------------------
int AuthenticationParameterAutn::Encode(uint8_t* buf, int len) const {
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Encoding %s", GetIeName().c_str());

  int encoded_size = 0;
  // Validate the buffer's length and Encode IEI/Length
  int encoded_header_size = Type4NasIe::Encode(buf + encoded_size, len);
  if (encoded_header_size == KEncodeDecodeError) return KEncodeDecodeError;
  encoded_size += encoded_header_size;

  if (GetLengthIndicator() != kAuthenticationParameterAutnValueLength)
    return KEncodeDecodeError;

  for (int i = 0; i < kAuthenticationParameterAutnValueLength; i++) {
    ENCODE_U8(buf + encoded_size, value_[i], encoded_size);
  }

  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Encoded AuthenticationParameterAutn len (%d)", encoded_size);
  return encoded_size;
}

//------------------------------------------------------------------------------
int AuthenticationParameterAutn::Decode(
    const uint8_t* const buf, int len, bool is_iei) {
  uint8_t decoded_size = 0;
  uint8_t octet        = 0;
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Decoding %s", GetIeName().c_str());

  // IEI and Length
  int decoded_header_size = Type4NasIe::Decode(buf + decoded_size, len, is_iei);
  if (decoded_header_size == KEncodeDecodeError) return KEncodeDecodeError;
  decoded_size += decoded_header_size;

  if (GetLengthIndicator() != kAuthenticationParameterAutnValueLength)
    return KEncodeDecodeError;

  for (int i = 0; i < kAuthenticationParameterAutnValueLength; i++) {
    DECODE_U8(buf + decoded_size, value_[i], decoded_size);
  }
  for (int j = 0; j < kAuthenticationParameterAutnValueLength; j++) {
    oai::logger::logger_registry::get_logger(LOGGER_COMMON)
        .debug("Decoded AuthenticationParameterAutn value (0x%2x)", value_[j]);
  }
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Decoded %s, len (%d)", GetIeName().c_str(), decoded_size);
  return decoded_size;
}
