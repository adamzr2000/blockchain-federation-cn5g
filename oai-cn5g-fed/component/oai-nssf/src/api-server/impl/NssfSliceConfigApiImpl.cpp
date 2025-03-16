/**
 * NSSF NSSAI Availability
 * NSSF NSSAI Availability Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NssfSliceConfigApiImpl.h"
#include "3gpp_29.500.h"
#include "logger.hpp"
#include "nssf_config.hpp"
#include <string>

// #include "Helpers.h"

namespace oai {
namespace nssf_server {
namespace api {

using namespace oai::nssf_server::model;
using namespace nssf;

extern config::nssf::nssf_config nssf_cfg;

NssfSliceConfigApiImpl::NssfSliceConfigApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr, nssf_app* nssf_app_inst,
    std::string address)
    : NssfSliceConfigApi(rtr), m_nssf_app(nssf_app_inst), m_address(address) {}
//---------------------------------------------------------------------
void NssfSliceConfigApiImpl::nssf_slice_config_get_apis(
    Pistache::Http::ResponseWriter& response) {
  int http_code            = 0;
  nlohmann::json json_data = {};
  std::string content_type = "application/json";
  nssf_cfg.get_api_list(json_data);
  http_code = oai::common::sbi::http_status_code::OK;
  response.headers().add<Pistache::Http::Header::ContentType>(
      Pistache::Http::Mime::MediaType(content_type));
  response.send(Pistache::Http::Code(http_code), json_data.dump(4).c_str());
}
//---------------------------------------------------------------------
void NssfSliceConfigApiImpl::nssf_slice_config_get(
    Pistache::Http::ResponseWriter& response) {
  Logger::nssf_sbi().info(
      "OAI-NSSF:: Default Slice Config is requested (HTTP Version 1)!!!");
  int http_code            = 0;
  nlohmann::json json_data = {};
  std::string content_type = "application/json";

  // if (nssf_cfg.get_slice_config(json_data)) {
  //   http_code = oai::common::sbi::http_status_code::OK;
  //   response.headers().add<Pistache::Http::Header::ContentType>(
  //       Pistache::Http::Mime::MediaType(content_type));
  //   response.send(Pistache::Http::Code(http_code),
  //   json_data.dump(4).c_str());
  // } else {
  http_code = oai::common::sbi::http_status_code::SERVICE_UNAVAILABLE;
  response.headers().add<Pistache::Http::Header::ContentType>(
      Pistache::Http::Mime::MediaType(content_type));
  response.send(Pistache::Http::Code(http_code));
  // }
}
//---------------------------------------------------------------------

}  // namespace api
}  // namespace nssf_server
}  // namespace oai
