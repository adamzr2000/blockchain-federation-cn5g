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

#include "LadnIndication.hpp"

#include "3gpp_24.501.hpp"
#include "IeConst.hpp"
#include "common_defs.h"
#include "logger_base.hpp"

using namespace oai::nas;

//------------------------------------------------------------------------------
LadnIndication::LadnIndication() : Type6NasIe(kIeiLadnIndication) {
  ladn_ = {};
  SetLengthIndicator(kLadnIndicationContentMinimumLength);
}

//------------------------------------------------------------------------------
LadnIndication::LadnIndication(const std::vector<bstring>& ladn)
    : Type6NasIe(kIeiLadnIndication) {
  int length   = 0;
  uint8_t size = (ladn.size() > kLadnIndicationMaximumSupportedLadns) ?
                     kLadnIndicationMaximumSupportedLadns :
                     ladn.size();
  for (int i = 0; i < size; i++) {
    bstring ladnItem = bstrcpy(ladn.at(i));
    ladn_.push_back(ladnItem);
    length += blength(ladn.at(i));
  }
  SetLengthIndicator(length);
}

//------------------------------------------------------------------------------
LadnIndication::~LadnIndication() {}

//------------------------------------------------------------------------------
void LadnIndication::GetValue(std::vector<bstring>& ladn) const {
  ladn.assign(ladn_.begin(), ladn_.end());
}

//------------------------------------------------------------------------------
int LadnIndication::Encode(uint8_t* buf, int len) const {
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Encoding %s", GetIeName().c_str());

  int encoded_size = 0;

  // Validate the buffer's length and Encode IEI/Length (later)
  int len_pos = 0;
  int encoded_header_size =
      Type6NasIe::Encode(buf + encoded_size, len, len_pos);
  if (encoded_header_size == KEncodeDecodeError) return KEncodeDecodeError;
  encoded_size += encoded_header_size;

  for (int i = 0; i < ladn_.size(); i++) {
    ENCODE_U8(buf + encoded_size, blength(ladn_.at(i)), encoded_size);
    encoded_size +=
        encode_bstring(ladn_.at(i), (buf + encoded_size), len - encoded_size);
  }

  // Encode length
  int encoded_len_ie = 0;
  ENCODE_U16(buf + len_pos, encoded_size - GetHeaderLength(), encoded_len_ie);

  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Encoded %s, len (%d)", GetIeName().c_str(), encoded_size);
  return encoded_size;
}

//------------------------------------------------------------------------------
int LadnIndication::Decode(const uint8_t* const buf, int len, bool is_iei) {
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Decoding %s", GetIeName().c_str());
  int decoded_size = 0;

  // IEI and Length
  uint16_t ie_len         = 0;
  int decoded_header_size = Type6NasIe::Decode(buf + decoded_size, len, is_iei);
  if (decoded_header_size == KEncodeDecodeError) return KEncodeDecodeError;
  decoded_size += decoded_header_size;
  ie_len = GetLengthIndicator();

  uint8_t dnn_len = 0;
  bstring dnn     = {};
  while (ie_len) {
    DECODE_U8(buf + decoded_size, dnn_len, decoded_size);
    ie_len--;
    decode_bstring(&dnn, dnn_len, (buf + decoded_size), len - decoded_size);
    decoded_size += dnn_len;
    ie_len -= dnn_len;
    ladn_.insert(ladn_.end(), dnn);
  }

  for (int i = 0; i < ladn_.size(); i++) {
    for (int j = 0; j < blength(ladn_.at(i)); j++) {
      oai::logger::logger_registry::get_logger(LOGGER_COMMON)
          .debug(
              "Decoded LadnIndication value (0x%x)",
              (uint8_t) ladn_.at(i)->data[j]);
    }
  }
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Decoded %s (len %d)", GetIeName().c_str(), decoded_size);
  return decoded_size;
}
