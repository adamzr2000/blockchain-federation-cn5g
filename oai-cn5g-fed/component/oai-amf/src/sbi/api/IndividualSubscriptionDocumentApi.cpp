/**
 * Namf_Communication
 * AMF Communication Service © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "IndividualSubscriptionDocumentApi.h"

#include "Helpers.h"
#include "amf_config.hpp"

extern oai::config::amf_config amf_cfg;

namespace oai {
namespace amf {
namespace api {

using namespace oai::model::common::helpers;
using namespace oai::model::amf;

IndividualSubscriptionDocumentApi::IndividualSubscriptionDocumentApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void IndividualSubscriptionDocumentApi::init() {
  setupRoutes();
}

void IndividualSubscriptionDocumentApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Put(
      *router, base + amf_sbi_helper::AmfCommPathSubscriptionsSubscriptionId,
      Routes::bind(
          &IndividualSubscriptionDocumentApi::
              a_mf_status_change_subscribe_modfy_handler,
          this));
  Routes::Delete(
      *router, base + amf_sbi_helper::AmfCommPathSubscriptionsSubscriptionId,
      Routes::bind(
          &IndividualSubscriptionDocumentApi::
              a_mf_status_change_un_subscribe_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &IndividualSubscriptionDocumentApi::
          individual_subscription_document_api_default_handler,
      this));
}

void IndividualSubscriptionDocumentApi::
    a_mf_status_change_subscribe_modfy_handler(
        const Pistache::Rest::Request& request,
        Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto subscriptionId = request.param(":subscriptionId").as<std::string>();

  // Getting the body param

  SubscriptionData subscriptionData;

  try {
    nlohmann::json::parse(request.body()).get_to(subscriptionData);
    this->a_mf_status_change_subscribe_modfy(
        subscriptionId, subscriptionData, response);
  } catch (nlohmann::detail::exception& e) {
    // send a 400 error
    response.send(Pistache::Http::Code::Bad_Request, e.what());
    return;
  } catch (std::exception& e) {
    // send a 500 error
    response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    return;
  }
}
void IndividualSubscriptionDocumentApi::a_mf_status_change_un_subscribe_handler(
    const Pistache::Rest::Request& request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto subscriptionId = request.param(":subscriptionId").as<std::string>();

  try {
    this->a_mf_status_change_un_subscribe(subscriptionId, response);
  } catch (nlohmann::detail::exception& e) {
    // send a 400 error
    response.send(Pistache::Http::Code::Bad_Request, e.what());
    return;
  } catch (std::exception& e) {
    // send a 500 error
    response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    return;
  }
}

void IndividualSubscriptionDocumentApi::
    individual_subscription_document_api_default_handler(
        const Pistache::Rest::Request&,
        Pistache::Http::ResponseWriter response) {
  response.send(
      Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}  // namespace api
}  // namespace amf
}  // namespace oai
