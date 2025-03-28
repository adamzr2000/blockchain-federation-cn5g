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
 * AMFNon3GPPAccessRegistrationDocumentApi.h
 *
 *
 */

#ifndef AMFNon3GPPAccessRegistrationDocumentApi_H_
#define AMFNon3GPPAccessRegistrationDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include <string>
#include <vector>

#include "Amf3GppAccessRegistration.h"
#include "AmfNon3GppAccessRegistration.h"
#include "PatchItem.h"
#include "PatchResult.h"
#include "ProblemDetails.h"

namespace oai::udr::api {

class AMFNon3GPPAccessRegistrationDocumentApi {
 public:
  AMFNon3GPPAccessRegistrationDocumentApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~AMFNon3GPPAccessRegistrationDocumentApi() {}
  void init();

 private:
  void setupRoutes();

  void amf_context_non3gpp_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void create_amf_context_non3gpp_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void query_amf_context_non3gpp_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void amf_non3_gpp_access_registration_document_api_default_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// To modify the AMF context data of a UE using non 3gpp access in the UDR
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId">UE id</param>
  /// <param name="patchItem"></param>
  /// <param name="supportedFeatures">Features required to be supported by the
  /// target NF (optional, default to &quot;&quot;)</param>
  virtual void amf_context_non3gpp(
      const std::string& ueId,
      const std::vector<oai::model::common::PatchItem>& patchItem,
      const Pistache::Optional<std::string>& supportedFeatures,
      Pistache::Http::ResponseWriter& response) = 0;

  /// <summary>
  /// To store the AMF context data of a UE using non-3gpp access in the UDR
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId">UE id</param>
  /// <param name="amfNon3GppAccessRegistration"> (optional)</param>
  virtual void create_amf_context_non3gpp(
      const std::string& ueId,
      const oai::udr::model::AmfNon3GppAccessRegistration&
          amfNon3GppAccessRegistration,
      Pistache::Http::ResponseWriter& response) = 0;

  /// <summary>
  /// Retrieves the AMF context data of a UE using non-3gpp access
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId">UE id</param>
  /// <param name="fields">attributes to be retrieved (optional, default to
  /// std::vector&lt;std::string&gt;())</param> <param
  /// name="supportedFeatures">Supported Features (optional, default to
  /// &quot;&quot;)</param>
  virtual void query_amf_context_non3gpp(
      const std::string& ueId,
      const Pistache::Optional<std::vector<std::string>>& fields,
      const Pistache::Optional<std::string>& supportedFeatures,
      Pistache::Http::ResponseWriter& response) = 0;
};

}  // namespace oai::udr::api

#endif /* AMFNon3GPPAccessRegistrationDocumentApi_H_ */
