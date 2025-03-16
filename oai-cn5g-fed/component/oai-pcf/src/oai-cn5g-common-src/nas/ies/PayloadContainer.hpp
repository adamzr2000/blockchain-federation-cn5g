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

#ifndef _PAYLOAD_CONTAINER_H_
#define _PAYLOAD_CONTAINER_H_

#include "NasIeHeader.hpp"
#include "Type6NasIe.hpp"

constexpr uint8_t kPayloadContainerMinimumLength = 4;
constexpr uint8_t kPayloadContainerContentMinimumLength =
    kPayloadContainerMinimumLength -
    3;  // Minimum length - 3 octets for IEI/Length
constexpr uint32_t kPayloadContainerMaximumLength = 65538;
constexpr auto kPayloadContainerIeName            = "Payload Container";

namespace oai::nas {
class PayloadContainer : public Type6NasIe {
 public:
  PayloadContainer();
  PayloadContainer(uint8_t iei);
  PayloadContainer(const bstring& b);
  PayloadContainer(uint8_t iei, const bstring& b);
  PayloadContainer(const std::vector<PayloadContainerEntry>& content);
  PayloadContainer(
      uint8_t iei, const std::vector<PayloadContainerEntry>& content);
  ~PayloadContainer();

  int Encode(uint8_t* buf, int len, uint8_t type) const;
  int Decode(const uint8_t* const buf, int len, bool is_iei, uint8_t type);

  static std::string GetIeName() { return kPayloadContainerIeName; }

  void SetValue(const bstring& cnt);
  bool GetValue(bstring& cnt) const;

  void SetValue(const std::vector<PayloadContainerEntry>& content);
  bool GetValue(std::vector<PayloadContainerEntry>& content) const;

 private:
  std::optional<bstring> content_;
  std::optional<std::vector<PayloadContainerEntry>> contents_;
};

}  // namespace oai::nas

#endif
