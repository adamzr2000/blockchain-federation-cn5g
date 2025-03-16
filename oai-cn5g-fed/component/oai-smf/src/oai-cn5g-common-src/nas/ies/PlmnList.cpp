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

#include "PlmnList.hpp"

#include "3gpp_24.501.hpp"
#include "common_defs.h"
#include "logger_base.hpp"
#include "nas_utils.hpp"

using namespace oai::nas;

//------------------------------------------------------------------------------
PlmnList::PlmnList(uint8_t iei) : Type4NasIe(iei) {
  SetLengthIndicator(kPlmnListContentMinimumLength);
}

//------------------------------------------------------------------------------
PlmnList::PlmnList() : Type4NasIe() {
  SetLengthIndicator(kPlmnListContentMinimumLength);
}

//------------------------------------------------------------------------------
PlmnList::~PlmnList() {}

//------------------------------------------------------------------------------
void PlmnList::Set(uint8_t iei, const std::vector<nas_plmn_t>& list) {
  plmn_list_ = list;
  int length = 0;
  if (list.size() > 0)
    length =
        kPlmnListMinimumLength +
        (list.size() - 1) *
            3;  // 3 - size of each PLMN
                // size of the first PLMN is included in kPlmnListMinimumLength

  SetLengthIndicator(
      (length > kPlmnListContentMinimumLength) ? length :
                                                 kPlmnListContentMinimumLength);
}

//------------------------------------------------------------------------------
void PlmnList::Get(std::vector<nas_plmn_t>& list) const {
  list = plmn_list_;
}

//------------------------------------------------------------------------------
int PlmnList::Encode(uint8_t* buf, int len) const {
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Encoding %s", GetIeName().c_str());

  int encoded_size = 0;
  // Validate the buffer's length and Encode IEI/Length
  int encoded_header_size = Type4NasIe::Encode(buf + encoded_size, len);
  if (encoded_header_size == KEncodeDecodeError) return KEncodeDecodeError;
  encoded_size += encoded_header_size;

  for (auto it : plmn_list_)
    encoded_size += nas_utils::encodeMccMnc2Buffer(
        it.mcc, it.mnc, buf + encoded_size, len - encoded_size);

  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Encoded %s, len (%d)", GetIeName().c_str(), encoded_size);
  return encoded_size;
}

//------------------------------------------------------------------------------
int PlmnList::Decode(const uint8_t* const buf, int len, bool is_iei) {
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Decoding %s", GetIeName().c_str());

  if (len < kPlmnListMinimumLength) {
    oai::logger::logger_registry::get_logger(LOGGER_COMMON)
        .error(
            "Buffer length is less than the minimum length of this IE (%d "
            "octet)",
            kPlmnListMinimumLength);
    return KEncodeDecodeError;
  }

  int decoded_size = 0;

  // IEI and Length
  int decoded_header_size = Type4NasIe::Decode(buf + decoded_size, len, true);
  if (decoded_header_size == KEncodeDecodeError) return KEncodeDecodeError;
  decoded_size += decoded_header_size;

  uint8_t len_ie = GetLengthIndicator();
  while (len_ie > 0) {
    nas_plmn_t nas_plmn = {};
    uint8_t size        = nas_utils::decodeMccMncFromBuffer(
        nas_plmn.mcc, nas_plmn.mnc, buf + decoded_size, len - decoded_size);
    if (size > 0) {
      len_ie -= size;
      plmn_list_.push_back(nas_plmn);
    } else {
      break;
    }
  }
  oai::logger::logger_registry::get_logger(LOGGER_COMMON)
      .debug("Decoded %s, len (%d)", GetIeName().c_str(), decoded_size);
  return decoded_size;
}
