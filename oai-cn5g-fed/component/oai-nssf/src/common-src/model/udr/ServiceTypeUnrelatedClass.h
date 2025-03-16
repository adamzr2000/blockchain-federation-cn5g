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
 * ServiceTypeUnrelatedClass.h
 *
 *
 */

#ifndef ServiceTypeUnrelatedClass_H_
#define ServiceTypeUnrelatedClass_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "CodeWordInd.h"
#include "GeographicArea.h"
#include "PrivacyCheckRelatedAction.h"
#include "ValidTimePeriod.h"

namespace oai::udr::model {

/// <summary>
///
/// </summary>
class ServiceTypeUnrelatedClass {
 public:
  ServiceTypeUnrelatedClass();
  virtual ~ServiceTypeUnrelatedClass();

  void validate();

  /////////////////////////////////////////////
  /// ServiceTypeUnrelatedClass members

  /// <summary>
  ///
  /// </summary>
  int32_t getServiceType() const;
  void setServiceType(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  std::vector<GeographicArea>& getAllowedGeographicArea();
  void setAllowedGeographicArea(std::vector<GeographicArea> const& value);
  bool allowedGeographicAreaIsSet() const;
  void unsetAllowedGeographicArea();
  /// <summary>
  ///
  /// </summary>
  PrivacyCheckRelatedAction getPrivacyCheckRelatedAction() const;
  void setPrivacyCheckRelatedAction(PrivacyCheckRelatedAction const& value);
  bool privacyCheckRelatedActionIsSet() const;
  void unsetPrivacyCheckRelatedAction();
  /// <summary>
  ///
  /// </summary>
  CodeWordInd getCodeWordInd() const;
  void setCodeWordInd(CodeWordInd const& value);
  bool codeWordIndIsSet() const;
  void unsetCodeWordInd();
  /// <summary>
  ///
  /// </summary>
  ValidTimePeriod getValidTimePeriod() const;
  void setValidTimePeriod(ValidTimePeriod const& value);
  bool validTimePeriodIsSet() const;
  void unsetValidTimePeriod();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string>& getCodeWordList();
  void setCodeWordList(std::vector<std::string> const& value);
  bool codeWordListIsSet() const;
  void unsetCodeWordList();

  friend void to_json(nlohmann::json& j, const ServiceTypeUnrelatedClass& o);
  friend void from_json(const nlohmann::json& j, ServiceTypeUnrelatedClass& o);

 protected:
  int32_t m_ServiceType;

  std::vector<GeographicArea> m_AllowedGeographicArea;
  bool m_AllowedGeographicAreaIsSet;
  PrivacyCheckRelatedAction m_PrivacyCheckRelatedAction;
  bool m_PrivacyCheckRelatedActionIsSet;
  CodeWordInd m_CodeWordInd;
  bool m_CodeWordIndIsSet;
  ValidTimePeriod m_ValidTimePeriod;
  bool m_ValidTimePeriodIsSet;
  std::vector<std::string> m_CodeWordList;
  bool m_CodeWordListIsSet;
};

}  // namespace oai::udr::model

#endif /* ServiceTypeUnrelatedClass_H_ */
