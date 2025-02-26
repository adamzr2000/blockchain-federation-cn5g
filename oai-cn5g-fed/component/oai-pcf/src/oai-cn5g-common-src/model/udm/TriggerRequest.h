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
 * TriggerRequest.h
 *
 *
 */

#ifndef TriggerRequest_H_
#define TriggerRequest_H_

#include <nlohmann/json.hpp>
#include <string>

namespace oai::model::udm {

/// <summary>
///
/// </summary>
class TriggerRequest {
 public:
  TriggerRequest();
  virtual ~TriggerRequest();

  void validate();

  /////////////////////////////////////////////
  /// TriggerRequest members

  /// <summary>
  ///
  /// </summary>
  std::string getSupi() const;
  void setSupi(std::string const& value);

  friend void to_json(nlohmann::json& j, const TriggerRequest& o);
  friend void from_json(const nlohmann::json& j, TriggerRequest& o);

 protected:
  std::string m_Supi;
};

}  // namespace oai::model::udm

#endif /* TriggerRequest_H_ */
