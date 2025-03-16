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
 * Nudm_SDM
 * Nudm Subscriber Data Management Service. � 2019, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * TraceDataResponse.h
 *
 *
 */

#ifndef TraceDataResponse_H_
#define TraceDataResponse_H_

#include <nlohmann/json.hpp>
#include <string>

#include "TraceData.h"

namespace oai::model::udm {

/// <summary>
///
/// </summary>
class TraceDataResponse {
 public:
  TraceDataResponse();
  virtual ~TraceDataResponse();

  void validate();

  /////////////////////////////////////////////
  /// TraceDataResponse members

  /// <summary>
  ///
  /// </summary>
  oai::model::common::TraceData getTraceData() const;
  void setTraceData(oai::model::common::TraceData const& value);
  bool traceDataIsSet() const;
  void unsetTraceData();
  /// <summary>
  ///
  /// </summary>
  std::string getSharedTraceDataId() const;
  void setSharedTraceDataId(std::string const& value);
  bool sharedTraceDataIdIsSet() const;
  void unsetSharedTraceDataId();

  friend void to_json(nlohmann::json& j, const TraceDataResponse& o);
  friend void from_json(const nlohmann::json& j, TraceDataResponse& o);

 protected:
  oai::model::common::TraceData m_TraceData;
  bool m_TraceDataIsSet;
  std::string m_SharedTraceDataId;
  bool m_SharedTraceDataIdIsSet;
};

}  // namespace oai::model::udm

#endif /* TraceDataResponse_H_ */
