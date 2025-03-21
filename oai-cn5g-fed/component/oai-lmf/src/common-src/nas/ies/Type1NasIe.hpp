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

#ifndef _TYPE1_NAS_IE_H_
#define _TYPE1_NAS_IE_H_

#include "NasIe.hpp"

constexpr uint8_t kType1NasIeLength = 1;
namespace oai::nas {

class Type1NasIe : public NasIe {
 public:
  Type1NasIe();
  Type1NasIe(bool high_pos, uint8_t value);
  Type1NasIe(bool high_pos);
  Type1NasIe(uint8_t iei, uint8_t value);
  Type1NasIe(uint8_t iei);
  virtual ~Type1NasIe();

  int Encode(uint8_t* buf, int len) const override;
  int Decode(const uint8_t* const buf, int len, bool is_iei = true) override;
  int Decode(const uint8_t* const buf, int len, bool high_pos, bool is_iei);

  uint32_t GetIeLength() const override;
  bool Validate(int len) const override;

  void Set(bool high_pos, uint8_t value);
  void Set(bool high_pos);

  void SetValue(uint8_t value);

 protected:
  virtual void SetValue() = 0;
  virtual void GetValue() = 0;

  std::optional<uint8_t>
      iei_;        // IEI present in Format TV (in bit position 8,7,6,5)
  bool high_pos_;  // choose bit position for Format V
  uint8_t value_;  // value (in bit positions 4,3,2,1 or 8,7,6,5)
};

}  // namespace oai::nas

#endif
