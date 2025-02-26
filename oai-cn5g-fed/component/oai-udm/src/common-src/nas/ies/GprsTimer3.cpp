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

#include "GprsTimer3.hpp"

using namespace oai::nas;

//------------------------------------------------------------------------------
GprsTimer3::GprsTimer3(uint8_t iei) : Type4NasIe(iei), unit_(), value_() {
  SetLengthIndicator(kGprsTimer3ContentLength);
}

//------------------------------------------------------------------------------
GprsTimer3::GprsTimer3(uint8_t iei, uint8_t unit, uint8_t value)
    : Type4NasIe(iei) {
  unit_  = unit;
  value_ = value;
  SetLengthIndicator(kGprsTimer3ContentLength);
}

//------------------------------------------------------------------------------
GprsTimer3::~GprsTimer3() {}

//------------------------------------------------------------------------------
void GprsTimer3::SetValue(uint8_t unit, uint8_t value) {
  unit_  = unit;
  value_ = value;
}

//------------------------------------------------------------------------------
uint8_t GprsTimer3::getUnit() const {
  return unit_;
}

//------------------------------------------------------------------------------
uint8_t GprsTimer3::GetValue() const {
  return value_;
}

//------------------------------------------------------------------------------
int GprsTimer3::Encode(uint8_t* buf, int len) const {
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Encoding %s", GetIeName().c_str());

  int encoded_size = 0;
  // Validate the buffer's length and Encode IEI/Length
  int encoded_header_size = Type4NasIe::Encode(buf + encoded_size, len);
  if (encoded_header_size == KEncodeDecodeError) return KEncodeDecodeError;
  encoded_size += encoded_header_size;

  // Octet 3
  uint8_t octet = (unit_ << 5) | (value_ & 0x1f);
  ENCODE_U8(buf + encoded_size, octet, encoded_size);

  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Encoded %s, len (%d)", GetIeName().c_str(), encoded_size);
  return encoded_size;
}

//------------------------------------------------------------------------------
int GprsTimer3::Decode(const uint8_t* const buf, int len, bool is_iei) {
  if (len < kGprsTimer3Length) {
    oai::logger::logger_registry::get_logger(LOGGER_COMMON)
        .error(
            "Buffer length is less than the minimum length of this IE (%d "
            "octet)",
            kGprsTimer3Length);
    return KEncodeDecodeError;
  }

  uint8_t decoded_size = 0;
  uint8_t octet        = 0;
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Decoding %s", GetIeName().c_str());

  // IEI and Length
  int decoded_header_size = Type4NasIe::Decode(buf + decoded_size, len, is_iei);
  if (decoded_header_size == KEncodeDecodeError) return KEncodeDecodeError;
  decoded_size += decoded_header_size;

  DECODE_U8(buf + decoded_size, octet, decoded_size);
  unit_  = (octet & 0xe0) >> 5;
  value_ = octet & 0x1f;

  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug(
          "Decoded %s, Unit 0x%x, Value 0x%x", GetIeName().c_str(), unit_,
          value_);
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Decoded %s, len (%d)", GetIeName().c_str(), decoded_size);
  return decoded_size;
}
