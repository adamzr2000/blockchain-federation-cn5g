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
/**
 * Nudm_UECM
 * Nudm Context Management Service. � 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * IpSmGwRegistration.h
 *
 *
 */

#ifndef IpSmGwRegistration_H_
#define IpSmGwRegistration_H_

#include <nlohmann/json.hpp>
#include <string>

#include "NetworkNodeDiameterAddress.h"

namespace oai::model::udm {

/// <summary>
///
/// </summary>
class IpSmGwRegistration {
 public:
  IpSmGwRegistration();
  virtual ~IpSmGwRegistration();

  void validate();

  /////////////////////////////////////////////
  /// IpSmGwRegistration members

  /// <summary>
  ///
  /// </summary>
  std::string getIpSmGwMapAddress() const;
  void setIpSmGwMapAddress(std::string const& value);
  bool ipSmGwMapAddressIsSet() const;
  void unsetIpSmGwMapAddress();
  /// <summary>
  ///
  /// </summary>
  NetworkNodeDiameterAddress getIpSmGwDiameterAddress() const;
  void setIpSmGwDiameterAddress(NetworkNodeDiameterAddress const& value);
  bool ipSmGwDiameterAddressIsSet() const;
  void unsetIpSmGwDiameterAddress();
  /// <summary>
  ///
  /// </summary>
  bool isUnriIndicator() const;
  void setUnriIndicator(bool const value);
  bool unriIndicatorIsSet() const;
  void unsetUnriIndicator();

  friend void to_json(nlohmann::json& j, const IpSmGwRegistration& o);
  friend void from_json(const nlohmann::json& j, IpSmGwRegistration& o);

 protected:
  std::string m_IpSmGwMapAddress;
  bool m_IpSmGwMapAddressIsSet;
  NetworkNodeDiameterAddress m_IpSmGwDiameterAddress;
  bool m_IpSmGwDiameterAddressIsSet;
  bool m_UnriIndicator;
  bool m_UnriIndicatorIsSet;
};

}  // namespace oai::model::udm

#endif /* IpSmGwRegistration_H_ */
