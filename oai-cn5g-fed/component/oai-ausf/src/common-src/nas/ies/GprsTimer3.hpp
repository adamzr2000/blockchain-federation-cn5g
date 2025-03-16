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

#ifndef _GPRS_TIMER_3_H_
#define _GPRS_TIMER_3_H_

#include "Type4NasIe.hpp"

constexpr uint8_t kGprsTimer3Length = 3;
constexpr uint8_t kGprsTimer3ContentLength =
    kGprsTimer3Length - 2;  // Length - 2 octets for IEI/Length
constexpr auto kGprsTimer3IeName = "GPRS Timer 3";

namespace oai::nas {

class GprsTimer3 : public Type4NasIe {
 public:
  GprsTimer3(uint8_t iei);
  GprsTimer3(uint8_t iei, uint8_t unit, uint8_t value);
  ~GprsTimer3();

  int Encode(uint8_t* buf, int len) const override;
  int Decode(const uint8_t* const buf, int len, bool is_iei = false) override;

  static std::string GetIeName() { return kGprsTimer3IeName; }

  void SetValue(uint8_t unit, uint8_t value);
  uint8_t GetValue() const;

  uint8_t getUnit() const;

 private:
  uint8_t unit_;
  uint8_t value_;
};
}  // namespace oai::nas

#endif
