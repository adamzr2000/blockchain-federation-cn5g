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

#include "_5gsTrackingAreaIdentity.hpp"

#include "3gpp_24.501.hpp"
#include "IeConst.hpp"
#include "common_defs.h"
#include "logger_base.hpp"
#include "nas_utils.hpp"

using namespace oai::nas;

//------------------------------------------------------------------------------
_5gsTrackingAreaIdentity::_5gsTrackingAreaIdentity()
    : Type3NasIe(kIei5gsTrackingAreaIdentity) {
  mcc_ = {};
  mnc_ = {};
  tac_ = 0;
}

//------------------------------------------------------------------------------
_5gsTrackingAreaIdentity::_5gsTrackingAreaIdentity(
    const std::string& mcc, const std::string& mnc, uint32_t tac)
    : Type3NasIe(kIei5gsTrackingAreaIdentity) {
  mcc_ = mcc;
  mnc_ = mnc;
  tac_ = tac & 0x0fff;
}

//------------------------------------------------------------------------------
_5gsTrackingAreaIdentity::~_5gsTrackingAreaIdentity() {}

//------------------------------------------------------------------------------
uint32_t _5gsTrackingAreaIdentity::GetIeLength() const {
  return (k5gsTrackingAreaIdentityLength - 1 + Type3NasIe::GetIeLength());
}

//------------------------------------------------------------------------------
void _5gsTrackingAreaIdentity::SetTac(uint32_t value) {
  tac_ = value & 0x0fff;
}

//------------------------------------------------------------------------------
uint32_t _5gsTrackingAreaIdentity::GetTac() const {
  return tac_;
}
//------------------------------------------------------------------------------
void _5gsTrackingAreaIdentity::GetTac(uint32_t& value) const {
  value = tac_;
}

//------------------------------------------------------------------------------
void _5gsTrackingAreaIdentity::SetMcc(const std::string& mcc) {
  mcc_ = mcc;
}

//------------------------------------------------------------------------------
void _5gsTrackingAreaIdentity::GetMcc(std::string& mcc) const {
  mcc = mcc_;
}

//------------------------------------------------------------------------------
void _5gsTrackingAreaIdentity::SetMnc(const std::string& mnc) {
  mnc_ = mnc;
}

//------------------------------------------------------------------------------
void _5gsTrackingAreaIdentity::GetMnc(std::string& mnc) const {
  mnc = mnc_;
}

//------------------------------------------------------------------------------
int _5gsTrackingAreaIdentity::Encode(uint8_t* buf, int len) const {
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Encoding %s", GetIeName().c_str());

  if (len < k5gsTrackingAreaIdentityLength) {
    oai::logger::logger_registry::get_logger(LOGGER_COMMON)
        .error(
            "Buffer length is less than the minimum length of this IE (%d "
            "octet)",
            k5gsTrackingAreaIdentityLength);
    return KEncodeDecodeError;
  }
  int encoded_size = 0;

  // IEI
  encoded_size += Type3NasIe::Encode(buf + encoded_size, len);
  // MCC, MNC
  encoded_size += nas_utils::encodeMccMnc2Buffer(
      mcc_, mnc_, buf + encoded_size, len - encoded_size);
  // TAC
  ENCODE_U24(buf + encoded_size, tac_, encoded_size);

  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Encoded %s, len (%d)", GetIeName().c_str(), encoded_size);
  return encoded_size;
}

//------------------------------------------------------------------------------
int _5gsTrackingAreaIdentity::Decode(
    const uint8_t* const buf, int len, bool is_iei) {
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Decoding %s", GetIeName().c_str());

  if (len < k5gsTrackingAreaIdentityLength) {
    oai::logger::logger_registry::get_logger(LOGGER_COMMON)
        .error(
            "Buffer length is less than the minimum length of this IE (%d "
            "octet)",
            k5gsTrackingAreaIdentityLength);
    return KEncodeDecodeError;
  }

  int decoded_size = 0;

  // IEI and Length
  decoded_size += Type3NasIe::Decode(buf + decoded_size, len, true);

  decoded_size += nas_utils::decodeMccMncFromBuffer(
      mcc_, mnc_, buf + decoded_size, len - decoded_size);

  DECODE_U24(buf + decoded_size, tac_, decoded_size);

  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Decoded TAC 0x%x", tac_);
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Decoded %s, len (%d)", GetIeName().c_str(), decoded_size);
  return decoded_size;
}
