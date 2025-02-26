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
 * SliceSelectionSubscriptionDataRetrievalApiImpl.h
 *
 *
 */

#ifndef SLICE_SELECTION_SUBSCRIPTION_DATA_RETRIEVAL_API_IMPL_H_
#define SLICE_SELECTION_SUBSCRIPTION_DATA_RETRIEVAL_API_IMPL_H_

#include <SliceSelectionSubscriptionDataRetrievalApi.h>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "Nssai.h"
#include "PlmnId.h"
#include "udm_app.hpp"

namespace oai {
namespace udm {
namespace api {

using namespace oai::udm::app;

class SliceSelectionSubscriptionDataRetrievalApiImpl
    : public oai::udm::api::SliceSelectionSubscriptionDataRetrievalApi {
 public:
  SliceSelectionSubscriptionDataRetrievalApiImpl(
      std::shared_ptr<Pistache::Rest::Router>, udm_app* udm_app_inst,
      std::string address);
  ~SliceSelectionSubscriptionDataRetrievalApiImpl() {}

  void get_nssai(
      const std::string& supi,
      const Pistache::Optional<std::string>& supportedFeatures,
      const Pistache::Optional<oai::model::common::PlmnId>& plmnId,
      const Pistache::Optional<Pistache::Http::Header::Raw>& ifNoneMatch,
      const Pistache::Optional<Pistache::Http::Header::Raw>& ifModifiedSince,
      Pistache::Http::ResponseWriter& response);

 private:
  udm_app* m_udm_app;
  std::string m_address;
};

}  // namespace api
}  // namespace udm
}  // namespace oai

#endif
