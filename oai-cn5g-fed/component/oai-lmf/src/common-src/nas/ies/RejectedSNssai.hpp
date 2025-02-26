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

#ifndef _REJECTED_SNSSAI_H_
#define _REJECTED_SNSSAI_H_

#include <stdint.h>

#include <optional>

namespace oai::nas {

class RejectedSNssai {
 public:
  RejectedSNssai();
  RejectedSNssai(uint8_t cause, uint8_t sst, uint32_t sd);
  ~RejectedSNssai();

  int Encode(uint8_t* buf, int len) const;
  int Decode(const uint8_t* const buf, int len);

  uint8_t GetLength() const;

  void SetSST(uint8_t sst);
  uint8_t GetSST() const;
  void GetSST(uint8_t& sst) const;

  void SetSd(uint32_t sd);
  bool GetSd(uint32_t& sd) const;
  void GetSd(std::optional<uint32_t>& sd) const;

  void SetCause(uint8_t cause);
  uint8_t GetCause() const;
  void GetCause(uint8_t& cause) const;

 private:
  uint8_t length_;
  uint8_t cause_;
  uint8_t sst_;
  std::optional<uint32_t> sd_;
};

}  // namespace oai::nas

#endif
