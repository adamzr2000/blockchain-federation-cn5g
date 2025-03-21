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
 * DetermineLocationApiImpl.h
 *
 *
 */

#ifndef DETERMINE_LOCATION_API_IMPL_H_
#define DETERMINE_LOCATION_API_IMPL_H_

#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>
#include <optional>

#include <DetermineLocationApi.h>

#include "DetermineLocation_request.h"
#include "InputData.h"
#include "LocationData.h"
#include "ProblemDetails.h"
#include "RedirectResponse.h"
#include <string>

#include "lmf_app.hpp"

namespace oai::lmf::api {

using namespace oai::model::lmf;

class DetermineLocationApiImpl : public oai::lmf::api::DetermineLocationApi {
 public:
  explicit DetermineLocationApiImpl(
      const std::shared_ptr<Pistache::Rest::Router>& rtr,
      oai::lmf::app::lmf_app* lmf_app_inst);
  ~DetermineLocationApiImpl() override = default;

  void determine_location(
      const InputData& inputData, Pistache::Http::ResponseWriter& response);

 private:
  oai::lmf::app::lmf_app* m_lmf_app;
};

}  // namespace oai::lmf::api

#endif
