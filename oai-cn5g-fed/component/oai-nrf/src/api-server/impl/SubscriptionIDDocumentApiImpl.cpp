/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SubscriptionIDDocumentApiImpl.h"
#include "3gpp_29.500.h"

namespace oai {
namespace nrf {
namespace api {

using namespace oai::model::nrf;
using namespace oai::model::common;
using namespace oai::nrf::app;

SubscriptionIDDocumentApiImpl::SubscriptionIDDocumentApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr, nrf_app* nrf_app_inst,
    std::string address)
    : SubscriptionIDDocumentApi(rtr),
      m_nrf_app(nrf_app_inst),
      m_address(address) {}

void SubscriptionIDDocumentApiImpl::remove_subscription(
    const std::string& subscriptionID,
    Pistache::Http::ResponseWriter& response) {
  Logger::nrf_sbi().info(
      "Got a request to remove an existing subscription, subscription ID %s",
      subscriptionID.c_str());

  int http_code                  = 0;
  ProblemDetails problem_details = {};
  m_nrf_app->handle_remove_subscription(
      subscriptionID, http_code, 1, problem_details);

  nlohmann::json json_data = {};
  std::string content_type = "application/json";

  if (http_code != oai::common::sbi::http_status_code::NO_CONTENT) {
    to_json(json_data, problem_details);
    content_type = "application/problem+json";
    // content type
    response.headers().add<Pistache::Http::Header::ContentType>(
        Pistache::Http::Mime::MediaType(content_type));
    response.send(Pistache::Http::Code(http_code), json_data.dump().c_str());
  } else {
    // content type
    response.headers().add<Pistache::Http::Header::ContentType>(
        Pistache::Http::Mime::MediaType(content_type));
    response.send(Pistache::Http::Code(http_code));
  }
}
void SubscriptionIDDocumentApiImpl::update_subscription(
    const std::string& subscriptionID, const std::vector<PatchItem>& patchItem,
    Pistache::Http::ResponseWriter& response) {
  Logger::nrf_sbi().info(
      "Got a request to update of subscription to NF instances, subscription "
      "ID %s",
      subscriptionID.c_str());

  int http_code                  = 0;
  ProblemDetails problem_details = {};
  m_nrf_app->handle_update_subscription(
      subscriptionID, patchItem, http_code, 1, problem_details);

  // TODO: (section 5.2.2.5.6, Update of Subscription to NF Instances,
  // 3GPP TS 29.510 V16.0.0 (2019-06)) if the NRF accepts the extension
  // of the lifetime of the subscription, but it assigns a validity time
  // different than the value suggested by the NF Service Consumer, a
  // "200 OK" response code shall be returned

  nlohmann::json json_data = {};
  std::string content_type = "application/json";

  if (http_code != oai::common::sbi::http_status_code::NO_CONTENT) {
    to_json(json_data, problem_details);
    content_type = "application/problem+json";
    // content type
    response.headers().add<Pistache::Http::Header::ContentType>(
        Pistache::Http::Mime::MediaType(content_type));
    response.send(Pistache::Http::Code(http_code), json_data.dump().c_str());
  } else {
    // content type
    response.headers().add<Pistache::Http::Header::ContentType>(
        Pistache::Http::Mime::MediaType(content_type));
    response.send(Pistache::Http::Code(http_code));
  }
}
}  // namespace api
}  // namespace nrf
}  // namespace oai
