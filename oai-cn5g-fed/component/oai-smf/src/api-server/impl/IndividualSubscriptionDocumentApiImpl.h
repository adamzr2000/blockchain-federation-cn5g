/**
 * Nsmf_EventExposure
 * Session Management Event Exposure Service. © 2019, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

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

/*
 * IndividualSubscriptionDocumentApiImpl.h
 *
 *
 */

#ifndef INDIVIDUAL_SUBSCRIPTION_DOCUMENT_API_IMPL_H_
#define INDIVIDUAL_SUBSCRIPTION_DOCUMENT_API_IMPL_H_

#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <IndividualSubscriptionDocumentApi.h>

#include <pistache/optional.h>

#include "NsmfEventExposure.h"
#include "ProblemDetails.h"
#include "smf_app.hpp"
#include <string>

namespace oai {
namespace smf_server {
namespace api {

using namespace oai::model::smf;

class IndividualSubscriptionDocumentApiImpl
    : public oai::smf_server::api::IndividualSubscriptionDocumentApi {
 public:
  IndividualSubscriptionDocumentApiImpl(
      std::shared_ptr<Pistache::Rest::Router>, smf::smf_app* smf_app_inst,
      std::string address);
  ~IndividualSubscriptionDocumentApiImpl() {}

  void delete_individual_subcription(
      const std::string& subId, Pistache::Http::ResponseWriter& response);
  void get_individual_subcription(
      const std::string& subId, Pistache::Http::ResponseWriter& response);
  void replace_individual_subcription(
      const std::string& subId, const NsmfEventExposure& nsmfEventExposure,
      Pistache::Http::ResponseWriter& response);

 private:
  smf::smf_app* m_smf_app;
  std::string m_address;
};

}  // namespace api
}  // namespace smf_server
}  // namespace oai

#endif
