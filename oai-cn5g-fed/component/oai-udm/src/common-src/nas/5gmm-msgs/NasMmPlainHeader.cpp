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

#include "NasMmPlainHeader.hpp"

#include "3gpp_24.501.hpp"
#include "NasHelper.hpp"
#include "common_defs.h"
#include "logger_base.hpp"

using namespace oai::nas;

//------------------------------------------------------------------------------
NasMmPlainHeader::NasMmPlainHeader(uint8_t epd) : epd_(epd) {}

//------------------------------------------------------------------------------
NasMmPlainHeader::NasMmPlainHeader(uint8_t epd, uint8_t msg_type)
    : epd_(epd), msg_type_(msg_type) {}

//------------------------------------------------------------------------------
NasMmPlainHeader::NasMmPlainHeader(
    uint8_t epd, uint8_t security_header_type, uint8_t msg_type)
    : epd_(epd), secu_header_type_(security_header_type), msg_type_(msg_type) {}

//------------------------------------------------------------------------------
NasMmPlainHeader::~NasMmPlainHeader() {}

//------------------------------------------------------------------------------
void NasMmPlainHeader::SetEpd(uint8_t epd) {
  epd_.Set(epd);
}

//------------------------------------------------------------------------------
uint8_t NasMmPlainHeader::GetEpd() const {
  return epd_.Get();
}

//------------------------------------------------------------------------------
void NasMmPlainHeader::SetSecurityHeaderType(uint8_t type) {
  secu_header_type_.Set(type);
}

//------------------------------------------------------------------------------
uint8_t NasMmPlainHeader::GetSecurityHeaderType() const {
  return secu_header_type_.Get();
}

//------------------------------------------------------------------------------
void NasMmPlainHeader::SetMessageType(uint8_t type) {
  msg_type_.Set(type);
}

//------------------------------------------------------------------------------
uint8_t NasMmPlainHeader::GetMessageType() const {
  return msg_type_.Get();
}

//------------------------------------------------------------------------------
void NasMmPlainHeader::SetHeader(
    uint8_t epd, uint8_t security_header_type, uint8_t msg_type) {
  epd_.Set(epd);
  secu_header_type_.Set(security_header_type);
  msg_type_.Set(msg_type);
}

//------------------------------------------------------------------------------
uint32_t NasMmPlainHeader::GetLength() const {
  return kNasMmPlainHeaderLength;
}

//------------------------------------------------------------------------------
bool NasMmPlainHeader::Validate(uint32_t len) const {
  uint32_t actual_length = GetLength();
  if (len < actual_length) {
    oai::logger::logger_registry::get_logger(LOGGER_COMMON)
        .error(
            "Buffer length is less than the minimum length of this message "
            "(0x%x "
            "octet)",
            actual_length);
    return false;
  }
  return true;
}

//------------------------------------------------------------------------------
int NasMmPlainHeader::Encode(uint8_t* buf, int len) {
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Encoding NasMmPlainHeader");

  if (!Validate(len)) return KEncodeDecodeError;

  int encoded_size    = 0;
  int encoded_ie_size = 0;

  if ((encoded_ie_size = NasHelper::Encode(epd_, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           secu_header_type_, buf, len, encoded_size)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((encoded_ie_size = NasHelper::Encode(
           msg_type_, buf, len, encoded_size)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Encoded NasMmPlainHeader (len %d octets)", encoded_size);
  return encoded_size;
}

//------------------------------------------------------------------------------
int NasMmPlainHeader::Decode(uint8_t* buf, int len) {
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Decoding NasMmPlainHeader");

  int decoded_size    = 0;
  int decoded_ie_size = 0;

  if (len < kNasMmPlainHeaderLength) {
    oai::logger::logger_registry::get_logger(LOGGER_COMMON)
        .error("Buffer length is less than %d octets", kNasMmPlainHeaderLength);
    return KEncodeDecodeError;
  }

  if ((decoded_ie_size = NasHelper::Decode(
           epd_, buf, len, decoded_size, true)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((decoded_ie_size = NasHelper::Decode(
           secu_header_type_, buf, len, decoded_size, true)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  if ((decoded_ie_size = NasHelper::Decode(
           msg_type_, buf, len, decoded_size, true)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Decoded NasMmPlainHeader len (%d octets)", decoded_size);
  return decoded_size;
}
