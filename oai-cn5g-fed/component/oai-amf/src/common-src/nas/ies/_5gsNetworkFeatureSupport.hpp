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

#ifndef _5GS_NETWORK_FEATURE_SUPPORT_H
#define _5GS_NETWORK_FEATURE_SUPPORT_H

#include "Type4NasIe.hpp"

constexpr uint8_t k5gsNetworkFeatureSupportMinimumLength = 3;
constexpr uint8_t k5gsNetworkFeatureSupportContentMinimumLength =
    k5gsNetworkFeatureSupportMinimumLength -
    2;  // Minimum length - 2 octets for IEI/Length
constexpr uint8_t k5gsNetworkFeatureSupportMaximumLength = 5;
constexpr auto k5gsNetworkFeatureSupportIeName = "5GS Network Feature Support";

namespace oai::nas {

class _5gsNetworkFeatureSupport : public Type4NasIe {
 public:
  _5gsNetworkFeatureSupport();
  _5gsNetworkFeatureSupport(uint8_t value);
  _5gsNetworkFeatureSupport(uint8_t value, uint8_t value2);
  ~_5gsNetworkFeatureSupport();

  int Encode(uint8_t* buf, int len) const override;
  int Decode(const uint8_t* const buf, int len, bool is_iei = false) override;

  static std::string GetIeName() { return k5gsNetworkFeatureSupportIeName; }

  void SetValue(uint8_t value, uint8_t value2);
  // uint8_t GetValue() const;

 private:
  uint8_t value_;
  uint8_t value2_;
  // Spare
};

}  // namespace oai::nas

#endif
