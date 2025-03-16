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
 * TriggerPCSCFRestorationApiImpl.h
 *
 *
 */

#ifndef TRIGGER_PCSCF_RESTORATION_API_IMPL_H_
#define TRIGGER_PCSCF_RESTORATION_API_IMPL_H_

#include <TriggerPCSCFRestorationApi.h>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "TriggerRequest.h"
#include "udm_app.hpp"

namespace oai {
namespace udm {
namespace api {

using namespace oai::model::udm;
using namespace oai::udm::app;

class TriggerPCSCFRestorationApiImpl
    : public oai::udm::api::TriggerPCSCFRestorationApi {
 public:
  TriggerPCSCFRestorationApiImpl(
      std::shared_ptr<Pistache::Rest::Router>, udm_app* udm_app_inst,
      std::string address);
  ~TriggerPCSCFRestorationApiImpl() {}

  void trigger_pcscf_restoration(
      const TriggerRequest& triggerRequest,
      Pistache::Http::ResponseWriter& response);

 private:
  udm_app* m_udm_app;
  std::string m_address;
};

}  // namespace api
}  // namespace udm
}  // namespace oai

#endif
