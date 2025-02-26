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
 * SMFSelectionSubscriptionDataDocumentApi.h
 *
 *
 */

#ifndef SMFSelectionSubscriptionDataDocumentApi_H_
#define SMFSelectionSubscriptionDataDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include <string>

#include "SmfSelectionSubscriptionData.h"

namespace oai::udr::api {

using namespace oai::udr::model;

class SMFSelectionSubscriptionDataDocumentApi {
 public:
  SMFSelectionSubscriptionDataDocumentApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~SMFSelectionSubscriptionDataDocumentApi() {}
  void init();

 private:
  void setupRoutes();

  void query_smf_select_data_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void smf_selection_subscription_data_document_api_default_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Retrieves the SMF selection subscription data of a UE
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId">UE id</param>
  /// <param name="servingPlmnId">PLMN ID</param>
  /// <param name="fields">attributes to be retrieved (optional, default to
  /// std::vector&lt;std::string&gt;())</param> <param
  /// name="supportedFeatures">Supported Features (optional, default to
  /// &quot;&quot;)</param> <param name="ifNoneMatch">Validator for conditional
  /// requests, as described in RFC 7232, 3.2 (optional, default to
  /// &quot;&quot;)</param> <param name="ifModifiedSince">Validator for
  /// conditional requests, as described in RFC 7232, 3.3 (optional, default to
  /// &quot;&quot;)</param>
  virtual void query_smf_select_data(
      const std::string& ueId, const std::string& servingPlmnId,
      const Pistache::Optional<std::vector<std::string>>& fields,
      const Pistache::Optional<std::string>& supportedFeatures,
      const Pistache::Optional<Pistache::Http::Header::Raw>& ifNoneMatch,
      const Pistache::Optional<Pistache::Http::Header::Raw>& ifModifiedSince,
      Pistache::Http::ResponseWriter& response) = 0;
};

}  // namespace oai::udr::api

#endif /* SMFSelectionSubscriptionDataDocumentApi_H_ */
