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
/*
 * DetermineLocationApi.h
 *
 *
 */

#ifndef DetermineLocationApi_H_
#define DetermineLocationApi_H_

#include "lmf.h"

#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>

#include <optional>
#include <utility>

#include "DetermineLocation_request.h"
#include "InputData.h"
#include "LocationData.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include <string>

namespace oai::lmf::api {

class DetermineLocationApi {
 public:
  explicit DetermineLocationApi(
      const std::shared_ptr<Pistache::Rest::Router>& rtr);
  virtual ~DetermineLocationApi() = default;
  void init();

 private:
  void setupRoutes();

  void determine_location_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void determine_location_api_default_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);

  const std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Helper function to handle unexpected Exceptions during Parameter parsing
  /// and validation. May be overridden to return custom error formats. This is
  /// called inside a catch block. Important: When overriding, do not call
  /// `throw ex;`, but instead use `throw;`.
  /// </summary>
  virtual std::pair<Pistache::Http::Code, std::string> handleParsingException(
      const std::exception& ex) const noexcept;

  /// <summary>
  /// Helper function to handle unexpected Exceptions during processing of the
  /// request in handler functions. May be overridden to return custom error
  /// formats. This is called inside a catch block. Important: When overriding,
  /// do not call `throw ex;`, but instead use `throw;`.
  /// </summary>
  virtual std::pair<Pistache::Http::Code, std::string> handleOperationException(
      const std::exception& ex) const noexcept;

  /// <summary>
  /// Determine Location of an UE
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="inputData"></param>
  virtual void determine_location(
      const oai::model::lmf::InputData& inputData,
      Pistache::Http::ResponseWriter& response) = 0;
};

}  // namespace oai::lmf::api

#endif /* DetermineLocationApi_H_ */
