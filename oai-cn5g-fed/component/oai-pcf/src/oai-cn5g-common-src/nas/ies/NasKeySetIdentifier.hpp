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

#ifndef _NAS_KEY_SET_IDENTIFIER_H
#define _NAS_KEY_SET_IDENTIFIER_H

#include "Type1NasIe.hpp"

constexpr auto kNasKeySetIdentifierName = "NAS Key Set Identifier";

namespace oai::nas {

class NasKeySetIdentifier : public Type1NasIe {
 public:
  NasKeySetIdentifier();
  NasKeySetIdentifier(uint8_t iei, bool tsc, uint8_t key_id);
  NasKeySetIdentifier(bool tsc,
                      uint8_t key_id);  // Default: low position
  ~NasKeySetIdentifier();

  static std::string GetIeName() { return kNasKeySetIdentifierName; }

  void Set(bool high_pos);
  // void Set(bool tsc, uint8_t key_id);
  // void Set(bool tsc, uint8_t key_id, uint8_t iei);
  void Get(bool& tsc, uint8_t& key_id);

  void SetTypeOfSecurityContext(bool type);
  bool GetTypeOfSecurityContext() const;

  void SetNasKeyIdentifier(uint8_t id);
  uint8_t GetNasKeyIdentifier() const;

 private:
  void SetValue() override;
  void GetValue() override;

  bool tsc_;
  uint8_t key_id_;
};

}  // namespace oai::nas

#endif
