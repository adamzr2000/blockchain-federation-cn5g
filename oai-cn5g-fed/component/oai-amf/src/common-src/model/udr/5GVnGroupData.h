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
 * Nudr_DataRepository API OpenAPI file
 * Unified Data Repository Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * 5GVnGroupData.h
 *
 *
 */

#ifndef _5GVnGroupData_H_
#define _5GVnGroupData_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "AppDescriptor.h"
#include "IpAddress.h"
#include "PduSessionType.h"
#include "Snssai.h"

namespace oai::udr::model {

/// <summary>
///
/// </summary>
class _5GVnGroupData {
 public:
  _5GVnGroupData();
  virtual ~_5GVnGroupData();

  void validate();

  /////////////////////////////////////////////
  /// 5GVnGroupData members

  /// <summary>
  ///
  /// </summary>
  std::string getDnn() const;
  void setDnn(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  oai::model::common::Snssai getSNssai() const;
  void setSNssai(oai::model::common::Snssai const& value);
  /// <summary>
  ///
  /// </summary>
  std::vector<oai::model::common::PduSessionType>& getPduSessionTypes();
  void setPduSessionTypes(
      std::vector<oai::model::common::PduSessionType> const& value);
  bool pduSessionTypesIsSet() const;
  void unsetPduSessionTypes();
  /// <summary>
  ///
  /// </summary>
  std::vector<AppDescriptor>& getAppDescriptors();
  void setAppDescriptors(std::vector<AppDescriptor> const& value);
  bool appDescriptorsIsSet() const;
  void unsetAppDescriptors();
  /// <summary>
  ///
  /// </summary>
  bool isSecondaryAuth() const;
  void setSecondaryAuth(bool const value);
  bool secondaryAuthIsSet() const;
  void unsetSecondaryAuth();
  /// <summary>
  ///
  /// </summary>
  IpAddress getDnAaaAddress() const;
  void setDnAaaAddress(IpAddress const& value);
  bool dnAaaAddressIsSet() const;
  void unsetDnAaaAddress();

  friend void to_json(nlohmann::json& j, const _5GVnGroupData& o);
  friend void from_json(const nlohmann::json& j, _5GVnGroupData& o);

 protected:
  std::string m_Dnn;

  oai::model::common::Snssai m_SNssai;

  std::vector<oai::model::common::PduSessionType> m_PduSessionTypes;
  bool m_PduSessionTypesIsSet;
  std::vector<AppDescriptor> m_AppDescriptors;
  bool m_AppDescriptorsIsSet;
  bool m_SecondaryAuth;
  bool m_SecondaryAuthIsSet;
  IpAddress m_DnAaaAddress;
  bool m_DnAaaAddressIsSet;
};

}  // namespace oai::udr::model

#endif /* 5GVnGroupData_H_ */
