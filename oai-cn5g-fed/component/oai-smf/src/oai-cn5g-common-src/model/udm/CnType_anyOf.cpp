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
 * Nudm_EE
 * Nudm Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "CnType_anyOf.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace oai::model::udm {

CnType_anyOf::CnType_anyOf() {}

void CnType_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool CnType_anyOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool CnType_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "CnType_anyOf" : pathPrefix;

  if (m_value == CnType_anyOf::eCnType_anyOf::INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool CnType_anyOf::operator==(const CnType_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool CnType_anyOf::operator!=(const CnType_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CnType_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case CnType_anyOf::eCnType_anyOf::INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case CnType_anyOf::eCnType_anyOf::SINGLE_4G:
      j = "SINGLE_4G";
      break;
    case CnType_anyOf::eCnType_anyOf::SINGLE_5G:
      j = "SINGLE_5G";
      break;
    case CnType_anyOf::eCnType_anyOf::DUAL_4G5G:
      j = "DUAL_4G5G";
      break;
  }
}

void from_json(const nlohmann::json& j, CnType_anyOf& o) {
  auto s = j.get<std::string>();
  if (s == "SINGLE_4G") {
    o.setValue(CnType_anyOf::eCnType_anyOf::SINGLE_4G);
  } else if (s == "SINGLE_5G") {
    o.setValue(CnType_anyOf::eCnType_anyOf::SINGLE_5G);
  } else if (s == "DUAL_4G5G") {
    o.setValue(CnType_anyOf::eCnType_anyOf::DUAL_4G5G);
  } else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " CnType_anyOf::eCnType_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

CnType_anyOf::eCnType_anyOf CnType_anyOf::getValue() const {
  return m_value;
}
void CnType_anyOf::setValue(CnType_anyOf::eCnType_anyOf value) {
  m_value = value;
}

}  // namespace oai::model::udm
