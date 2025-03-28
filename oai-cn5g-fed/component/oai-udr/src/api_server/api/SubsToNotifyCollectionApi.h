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
 * SubsToNotifyCollectionApi.h
 *
 *
 */

#ifndef SubsToNotifyCollectionApi_H_
#define SubsToNotifyCollectionApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include <string>

#include "SubscriptionDataSubscriptions.h"

namespace oai::udr::api {

using namespace oai::udr::model;

class SubsToNotifyCollectionApi {
 public:
  SubsToNotifyCollectionApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~SubsToNotifyCollectionApi() {}
  void init();

 private:
  void setupRoutes();

  void query_subs_to_notify_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void remove_multiple_subscription_data_subscriptions_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void subscription_data_subscriptions_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void subs_to_notify_collection_api_default_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Retrieves the list of subscriptions
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId">UE id</param>
  /// <param name="supportedFeatures">Supported Features (optional, default to
  /// &quot;&quot;)</param>
  virtual void query_subs_to_notify(
      const Pistache::Optional<std::string>& ueId,
      const Pistache::Optional<std::string>& supportedFeatures,
      Pistache::Http::ResponseWriter& response) = 0;

  /// <summary>
  /// Deletes subscriptions identified by a given ue-id parameter
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId">UE ID</param>
  /// <param name="nfInstanceId">NF Instance ID (optional, default to
  /// &quot;&quot;)</param> <param name="deleteAllNfs">Flag to delete
  /// subscriptions from all NFs (optional, default to false)</param> <param
  /// name="implicitUnsubscribeIndication">Implicit Unsubscribe Indication
  /// (optional, default to false)</param>
  virtual void remove_multiple_subscription_data_subscriptions(
      const Pistache::Optional<std::string>& ueId,
      const Pistache::Optional<std::string>& nfInstanceId,
      const Pistache::Optional<bool>& deleteAllNfs,
      const Pistache::Optional<bool>& implicitUnsubscribeIndication,
      Pistache::Http::ResponseWriter& response) = 0;

  /// <summary>
  /// Subscription data subscriptions
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="subscriptionDataSubscriptions"></param>
  virtual void subscription_data_subscriptions(
      const SubscriptionDataSubscriptions& subscriptionDataSubscriptions,
      Pistache::Http::ResponseWriter& response) = 0;
};

}  // namespace oai::udr::api

#endif /* SubsToNotifyCollectionApi_H_ */
