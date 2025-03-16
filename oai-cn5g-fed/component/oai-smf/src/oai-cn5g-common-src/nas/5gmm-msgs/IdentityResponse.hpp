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

#ifndef _IDENTITY_RESPONSE_H_
#define _IDENTITY_RESPONSE_H_

#include "NasIeHeader.hpp"

namespace oai::nas {

class IdentityResponse : public Nas5gmmMessage {
 public:
  IdentityResponse();
  ~IdentityResponse();

  int Encode(uint8_t* buf, int len) override;
  int Decode(uint8_t* buf, int len) override;

  uint32_t GetLength() const override;

  void SetHeader(uint8_t security_header_type);

  void Get5gsMobileIdentity(_5gsMobileIdentity& mobile_identity) const;
  _5gsMobileIdentity Get5gsMobileIdentity() const;

  void SetSuciSupiFormatImsi(
      const std::string& mcc, const std::string& mnc,
      const std::string& routing_ind, uint8_t protection_sch_id,
      const std::string& msin);
  void SetSuciSupiFormatImsi(
      const std::string& mcc, const std::string& mnc,
      const std::string& routing_ind, uint8_t protection_sch_id, uint8_t hnpki,
      const std::string& msin);

  void Set5gGuti();
  void SetImeiImeisv();
  void Set5gSTmsi();

 private:
  NasMmPlainHeader ie_header_;             // Mandatory
  _5gsMobileIdentity ie_mobile_identity_;  // Mandatory
};

}  // namespace oai::nas

#endif
