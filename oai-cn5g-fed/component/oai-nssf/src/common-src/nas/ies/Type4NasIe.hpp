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

#ifndef _TYPE4_NAS_IE_H_
#define _TYPE4_NAS_IE_H_

#include "NasIe.hpp"

namespace oai::nas {

class Type4NasIe : public NasIe {
 public:
  Type4NasIe();
  Type4NasIe(uint8_t iei);
  virtual ~Type4NasIe();

  int Encode(uint8_t* buf, int len) const override;
  int Encode(
      uint8_t* buf, int len,
      int& len_pos) const;  // Use this function to encode IE length later
  int Decode(const uint8_t* const buf, int len, bool is_iei = false) override;

  uint32_t GetIeLength() const override;
  bool Validate(int len) const override;
  bool ValidateHeader(int len) const;

  void SetIei(uint8_t iei);
  void GetIei(std::optional<uint8_t>& iei) const;

  void SetLengthIndicator(uint8_t li);
  void GetLengthIndicator(uint8_t& li) const;
  uint8_t GetLengthIndicator() const;

  uint8_t GetHeaderLength() const;

 protected:
  std::optional<uint8_t> iei_;  // IEI present in format TLV
  uint8_t li_;                  // length indicator, 1 byte
};

}  // namespace oai::nas

#endif
