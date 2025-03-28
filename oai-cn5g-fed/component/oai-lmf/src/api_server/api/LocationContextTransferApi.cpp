/**
 * LMF Location
 * LMF Location Service. © 2022, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.5
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "LocationContextTransferApi.h"

#include "Helpers.h"
#include "lmf_sbi_helper.hpp"

namespace oai::lmf::api {

using namespace oai::model::common::helpers;
using namespace oai::model::lmf;
using namespace oai::lmf::api;

LocationContextTransferApi::LocationContextTransferApi(
    const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : router(rtr) {}

void LocationContextTransferApi::init() {
  setupRoutes();
}

void LocationContextTransferApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Post(
      *router,
      lmf_sbi_helper::LmfLocationServiceBase +
          lmf_sbi_helper::LmfLocLocationContextTransfer,
      Routes::bind(
          &LocationContextTransferApi::location_context_transfer_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &LocationContextTransferApi::
          location_context_transfer_api_default_handler,
      this));
}

std::pair<Pistache::Http::Code, std::string>
LocationContextTransferApi::handleParsingException(
    const std::exception& ex) const noexcept {
  try {
    throw;
  } catch (nlohmann::detail::exception& e) {
    return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
  } catch (oai::model::common::helpers::ValidationException& e) {
    return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
  } catch (std::exception& e) {
    return std::make_pair(
        Pistache::Http::Code::Internal_Server_Error, e.what());
  }
}

std::pair<Pistache::Http::Code, std::string>
LocationContextTransferApi::handleOperationException(
    const std::exception& ex) const noexcept {
  return std::make_pair(Pistache::Http::Code::Internal_Server_Error, ex.what());
}

void LocationContextTransferApi::location_context_transfer_handler(
    const Pistache::Rest::Request& request,
    Pistache::Http::ResponseWriter response) {
  try {
    // Getting the body param

    LocContextData locContextData;

    try {
      nlohmann::json::parse(request.body()).get_to(locContextData);
      locContextData.validate();
    } catch (std::exception& e) {
      const std::pair<Pistache::Http::Code, std::string> errorInfo =
          this->handleParsingException(e);
      response.send(errorInfo.first, errorInfo.second);
      return;
    }

    try {
      this->location_context_transfer(locContextData, response);
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

void LocationContextTransferApi::location_context_transfer_api_default_handler(
    const Pistache::Rest::Request&, Pistache::Http::ResponseWriter response) {
  response.send(
      Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}  // namespace oai::lmf::api
