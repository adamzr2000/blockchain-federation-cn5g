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
 * IPTVConfigurationDataStoreApi.h
 *
 *
 */

#ifndef IPTVConfigurationDataStoreApi_H_
#define IPTVConfigurationDataStoreApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include <string>

#include "IptvConfigData.h"
#include "ProblemDetails.h"
#include "Snssai.h"

namespace oai::udr::api {

class IPTVConfigurationDataStoreApi {
 public:
  IPTVConfigurationDataStoreApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~IPTVConfigurationDataStoreApi() {}
  void init();

 private:
  void setupRoutes();

  void read_iptv_congifuration_data_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void iptv_configuration_data_store_api_default_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Retrieve IPTV configuration Data
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="configIds">Each element identifies a configuration.
  /// (optional, default to std::vector&lt;std::string&gt;())</param> <param
  /// name="dnns">Each element identifies a DNN. (optional, default to
  /// std::vector&lt;std::string&gt;())</param> <param name="snssais">Each
  /// element identifies a slice. (optional, default to
  /// std::vector&lt;Snssai&gt;())</param> <param name="supis">Each element
  /// identifies the user. (optional, default to
  /// std::vector&lt;std::string&gt;())</param> <param name="interGroupIds">Each
  /// element identifies a group of users. (optional, default to
  /// std::vector&lt;std::string&gt;())</param>
  virtual void read_iptv_congifuration_data(
      const Pistache::Optional<std::vector<std::string>>& configIds,
      const Pistache::Optional<std::vector<std::string>>& dnns,
      const Pistache::Optional<std::vector<oai::model::common::Snssai>>&
          snssais,
      const Pistache::Optional<std::vector<std::string>>& supis,
      const Pistache::Optional<std::vector<std::string>>& interGroupIds,
      Pistache::Http::ResponseWriter& response) = 0;
};

}  // namespace oai::udr::api

#endif /* IPTVConfigurationDataStoreApi_H_ */
