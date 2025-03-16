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
 * IptvConfigData.h
 *
 *
 */

#ifndef IptvConfigData_H_
#define IptvConfigData_H_

#include <map>
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "MulticastAccessControl.h"
#include "Snssai.h"

namespace oai::udr::model {

/// <summary>
///
/// </summary>
class IptvConfigData {
 public:
  IptvConfigData();
  virtual ~IptvConfigData();

  void validate();

  /////////////////////////////////////////////
  /// IptvConfigData members

  /// <summary>
  ///
  /// </summary>
  std::string getSupi() const;
  void setSupi(std::string const& value);
  bool supiIsSet() const;
  void unsetSupi();
  /// <summary>
  ///
  /// </summary>
  std::string getInterGroupId() const;
  void setInterGroupId(std::string const& value);
  bool interGroupIdIsSet() const;
  void unsetInterGroupId();
  /// <summary>
  ///
  /// </summary>
  std::string getDnn() const;
  void setDnn(std::string const& value);
  bool dnnIsSet() const;
  void unsetDnn();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::Snssai getSnssai() const;
  void setSnssai(oai::model::common::Snssai const& value);
  bool snssaiIsSet() const;
  void unsetSnssai();
  /// <summary>
  ///
  /// </summary>
  std::string getAfAppId() const;
  void setAfAppId(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::map<std::string, MulticastAccessControl>& getMultiAccCtrls();
  void setMultiAccCtrls(
      std::map<std::string, MulticastAccessControl> const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getSuppFeat() const;
  void setSuppFeat(std::string const& value);
  bool suppFeatIsSet() const;
  void unsetSuppFeat();
  /// <summary>
  ///
  /// </summary>
  std::string getResUri() const;
  void setResUri(std::string const& value);
  bool resUriIsSet() const;
  void unsetResUri();

  friend void to_json(nlohmann::json& j, const IptvConfigData& o);
  friend void from_json(const nlohmann::json& j, IptvConfigData& o);

 protected:
  std::string m_Supi;
  bool m_SupiIsSet;
  std::string m_InterGroupId;
  bool m_InterGroupIdIsSet;
  std::string m_Dnn;
  bool m_DnnIsSet;
  oai::model::common::Snssai m_Snssai;
  bool m_SnssaiIsSet;
  std::string m_AfAppId;

  std::map<std::string, MulticastAccessControl> m_MultiAccCtrls;

  std::string m_SuppFeat;
  bool m_SuppFeatIsSet;
  std::string m_ResUri;
  bool m_ResUriIsSet;
};

}  // namespace oai::udr::model

#endif /* IptvConfigData_H_ */
