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

#ifndef _REJECTED_NSSAI_H_
#define _REJECTED_NSSAI_H_

#include <RejectedSNssai.hpp>

#include "Type4NasIe.hpp"

constexpr uint8_t kRejectedNssaiMinimumLength = 4;
constexpr uint8_t kRejectedNssaiContentMinimumLength =
    kRejectedNssaiMinimumLength -
    2;  // Minimum length - 2 octets for IEI/Length
constexpr uint8_t kRejectedNssaiMaximumLength = 42;
constexpr auto kRejectedNssaiIeName           = "Rejected NSSAI";

namespace oai::nas {

class RejectedNssai : public Type4NasIe {
 public:
  RejectedNssai();
  RejectedNssai(uint8_t iei);
  ~RejectedNssai();

  int Encode(uint8_t* buf, int len) const override;
  int Decode(const uint8_t* const buf, int len, bool is_iei = false) override;

  static std::string GetIeName() { return kRejectedNssaiIeName; }

  void SetRejectedSNssais(const std::vector<RejectedSNssai>& nssais);
  void GetRejectedSNssais(std::vector<RejectedSNssai>& nssais) const;

 private:
  std::vector<RejectedSNssai> rejected_nssais_;
};

}  // namespace oai::nas

#endif
