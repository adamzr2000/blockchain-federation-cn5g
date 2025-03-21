/**
 * Namf_EventExposure
 * AMF Event Exposure Service © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SubscriptionsCollectionDocumentApiEventExposure.h"

#include "Helpers.h"
#include "amf_config.hpp"

extern oai::config::amf_config amf_cfg;

namespace oai::amf::api {

using namespace oai::model::common::helpers;
using namespace oai::model::amf;

SubscriptionsCollectionDocumentApiEventExposure::
    SubscriptionsCollectionDocumentApiEventExposure(
        const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : router(rtr) {}

void SubscriptionsCollectionDocumentApiEventExposure::init() {
  setupRoutes();
}

void SubscriptionsCollectionDocumentApiEventExposure::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Post(
      *router, base + amf_sbi_helper::AmfEvtsPathSubscriptions,
      Routes::bind(
          &SubscriptionsCollectionDocumentApiEventExposure::
              create_subscription_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &SubscriptionsCollectionDocumentApiEventExposure::
          subscriptions_collection_document_api_default_handler,
      this));
}

std::pair<Pistache::Http::Code, std::string>
SubscriptionsCollectionDocumentApiEventExposure::handleParsingException(
    const std::exception& ex) const noexcept {
  try {
    throw ex;
  } catch (nlohmann::detail::exception& e) {
    return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
  } catch (ValidationException& e) {
    return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
  }
}

std::pair<Pistache::Http::Code, std::string>
SubscriptionsCollectionDocumentApiEventExposure::handleOperationException(
    const std::exception& ex) const noexcept {
  return std::make_pair(Pistache::Http::Code::Internal_Server_Error, ex.what());
}

void SubscriptionsCollectionDocumentApiEventExposure::
    create_subscription_handler(
        const Pistache::Rest::Request& request,
        Pistache::Http::ResponseWriter response) {
  try {
    // Getting the body param

    AmfCreateEventSubscription amfCreateEventSubscription;

    try {
      nlohmann::json::parse(request.body()).get_to(amfCreateEventSubscription);
      amfCreateEventSubscription.validate();
    } catch (std::exception& e) {
      const std::pair<Pistache::Http::Code, std::string> errorInfo =
          this->handleParsingException(e);
      response.send(errorInfo.first, errorInfo.second);
      return;
    }

    try {
      this->create_subscription(amfCreateEventSubscription, response);
    } catch (Pistache::Http::HttpError& e) {
      response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
      return;
    } catch (std::exception& e) {
      const std::pair<Pistache::Http::Code, std::string> errorInfo =
          this->handleOperationException(e);
      response.send(errorInfo.first, errorInfo.second);
      return;
    }

  } catch (std::exception& e) {
    response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
  }
}

void SubscriptionsCollectionDocumentApiEventExposure::
    subscriptions_collection_document_api_default_handler(
        const Pistache::Rest::Request&,
        Pistache::Http::ResponseWriter response) {
  response.send(
      Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}  // namespace oai::amf::api
