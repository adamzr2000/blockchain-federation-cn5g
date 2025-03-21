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

#include "SubscriptionsCollectionDocumentApiImplEventExposure.h"
#include "amf_msg.hpp"
#include "amf_config.hpp"
#include "3gpp_conversions.hpp"

extern amf_config amf_cfg;

namespace oai {
namespace amf {
namespace api {

using namespace oai::model::amf;
using namespace amf_application;
using namespace config;

SubscriptionsCollectionDocumentApiImplEventExposure::
    SubscriptionsCollectionDocumentApiImplEventExposure(
        const std::shared_ptr<Pistache::Rest::Router>& rtr,
        amf_application::amf_app* amf_app_inst)
    : SubscriptionsCollectionDocumentApiEventExposure(rtr),
      m_amf_app(amf_app_inst) {}

void SubscriptionsCollectionDocumentApiImplEventExposure::create_subscription(
    const AmfCreateEventSubscription& amfCreateEventSubscription,
    Pistache::Http::ResponseWriter& response) {
  Logger::amf_server().info(
      "SubscriptionsCollectionDocumentApiImplEventExposure::create_individual_"
      "subcription...");

  // Create a  message and store the necessary information
  Logger::amf_server().debug(
      "Create an Event Exposure message and store the necessary information");

  event_exposure_msg event_exposure = {};

  // Convert from AmfCreateEventSubscription to event_exposure_msg
  xgpp_conv::amf_event_subscription_from_openapi(
      amfCreateEventSubscription, event_exposure);

  // Handle the message in amf_app
  std::shared_ptr<itti_sbi_event_exposure_request> itti_msg =
      std::make_shared<itti_sbi_event_exposure_request>(
          TASK_AMF_SBI, TASK_AMF_APP);
  itti_msg->event_exposure = event_exposure;
  itti_msg->http_version   = 1;

  evsub_id_t sub_id = m_amf_app->handle_event_exposure_subscription(itti_msg);

  // Send response
  nlohmann::json json_data = {};
  to_json(
      json_data["subscription"], amfCreateEventSubscription.getSubscription());

  if (sub_id != -1) {
    std::string location =
        std::string(inet_ntoa(*((struct in_addr*) &amf_cfg.sbi.addr4))) + ":" +
        std::to_string(amf_cfg.sbi.port) + base +
        amf_cfg.sbi.api_version.value_or(DEFAULT_SBI_API_VERSION) +
        "/namf-evts/" + std::to_string(sub_id);

    json_data["subscriptionId"] = location;
    response.headers().add<Pistache::Http::Header::Location>(
        location);  // Location header
  }

  response.headers().add<Pistache::Http::Header::ContentType>(
      Pistache::Http::Mime::MediaType("application/json"));
  response.send(Pistache::Http::Code::Created, json_data.dump().c_str());
}

}  // namespace api
}  // namespace amf
}  // namespace oai
