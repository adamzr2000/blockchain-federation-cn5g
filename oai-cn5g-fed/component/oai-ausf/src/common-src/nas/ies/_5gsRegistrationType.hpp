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

#ifndef _5GS_REGISTRATION_TYPE_H_
#define _5GS_REGISTRATION_TYPE_H_

#include "Type1NasIeFormatTv.hpp"

constexpr auto k5gsRegistrationTypeName = "5GS Registration Type";

namespace oai::nas {

class _5gsRegistrationType : public Type1NasIeFormatTv {
 public:
  _5gsRegistrationType();
  _5gsRegistrationType(bool follow_on_req, uint8_t type);
  _5gsRegistrationType(uint8_t iei, bool follow_on_req, uint8_t type);
  virtual ~_5gsRegistrationType();

  static std::string GetIeName() { return k5gsRegistrationTypeName; }

  void SetValue();
  void GetValue();

  bool ValidateValue(bool follow_on_req, uint8_t type);

  void Set(bool follow_on_req, uint8_t type, uint8_t iei);
  void Set(bool follow_on_req, uint8_t type);

  void SetFollowOnReq(bool is);
  bool IsFollowOnReq();

  void SetRegType(uint8_t type);
  uint8_t GetRegType();

 private:
  bool follow_on_req_;
  uint8_t reg_type_ : 3;
};

}  // namespace oai::nas

#endif
