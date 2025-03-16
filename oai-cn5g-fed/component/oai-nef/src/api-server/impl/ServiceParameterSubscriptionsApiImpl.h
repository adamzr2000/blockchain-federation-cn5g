/**
 * 3gpp-service-parameter
 * API for AF service paramter © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * ServiceParameterSubscriptionsApiImpl.h
 *
 *
 */

#ifndef SERVICE_PARAMETER_SUBSCRIPTIONS_API_IMPL_H_
#define SERVICE_PARAMETER_SUBSCRIPTIONS_API_IMPL_H_

#include <ServiceParameterSubscriptionsApi.h>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <memory>
#include <optional>
#include <string>

#include "ProblemDetails.h"
#include "ServiceParameterData.h"

namespace oai::nef::api {

using namespace oai::nef::model;

class ServiceParameterSubscriptionsApiImpl
    : public oai::nef::api::ServiceParameterSubscriptionsApi {
 public:
  explicit ServiceParameterSubscriptionsApiImpl(
      const std::shared_ptr<Pistache::Rest::Router>& rtr);
  ~ServiceParameterSubscriptionsApiImpl() override = default;

  void af_id_subscriptions_get(
      const std::string& afId, Pistache::Http::ResponseWriter& response);
  void af_id_subscriptions_post(
      const std::string& afId, const ServiceParameterData& serviceParameterData,
      Pistache::Http::ResponseWriter& response);
};

}  // namespace oai::nef::api

#endif
