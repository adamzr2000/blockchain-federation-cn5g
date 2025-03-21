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

#include "N1N2IndividualSubscriptionDocumentApiImpl.h"

#include "3gpp_29.500.h"
#include "utils.hpp"

extern itti_mw* itti_inst;
namespace oai {
namespace amf {
namespace api {

N1N2IndividualSubscriptionDocumentApiImpl::
    N1N2IndividualSubscriptionDocumentApiImpl(
        std::shared_ptr<Pistache::Rest::Router> rtr,
        amf_application::amf_app* amf_app_inst)
    : N1N2IndividualSubscriptionDocumentApi(rtr), m_amf_app(amf_app_inst) {}

void N1N2IndividualSubscriptionDocumentApiImpl::n1_n2_message_un_subscribe(
    const std::string& ueContextId, const std::string& subscriptionId,
    Pistache::Http::ResponseWriter& response) {
  Logger::amf_server().debug("Receive N1N2MessageUnsubscribe, handling...");
  Logger::amf_server().debug(
      "UE Context ID %s, Subscription ID %s", ueContextId.c_str(),
      subscriptionId.c_str());

  // Generate a promise and associate this promise to the ITTI message
  uint32_t promise_id = m_amf_app->generate_promise_id();
  Logger::amf_n1().debug("Promise ID generated %d", promise_id);

  boost::shared_ptr<boost::promise<nlohmann::json>> p =
      boost::make_shared<boost::promise<nlohmann::json>>();
  boost::shared_future<nlohmann::json> f = p->get_future();
  m_amf_app->add_promise(promise_id, p);

  // Handle the N1N2UnsubscribeMessage in amf_app
  std::shared_ptr<itti_sbi_n1n2_message_unsubscribe> itti_msg =
      std::make_shared<itti_sbi_n1n2_message_unsubscribe>(
          TASK_AMF_SBI, TASK_AMF_APP, promise_id);

  itti_msg->ue_cxt_id       = ueContextId;
  itti_msg->subscription_id = subscriptionId;
  itti_msg->http_version    = 1;
  itti_msg->promise_id      = promise_id;

  int ret = itti_inst->send_msg(itti_msg);
  if (0 != ret) {
    Logger::amf_server().error(
        "Could not send ITTI message %s to task TASK_AMF_APP",
        itti_msg->get_msg_name());
  }

  // Wait for the result available and process accordingly
  std::optional<nlohmann::json> result_opt = std::nullopt;
  oai::utils::utils::wait_for_result(f, result_opt);

  if (result_opt.has_value()) {
    Logger::amf_server().debug("Got result for promise ID %d", promise_id);
    nlohmann::json result = result_opt.value();
    // process data
    uint32_t http_response_code = 0;
    if (result.find("httpResponseCode") != result.end()) {
      http_response_code = result["httpResponseCode"].get<int>();
    }

    if (http_response_code == oai::common::sbi::http_status_code::NO_CONTENT) {
      response.send(Pistache::Http::Code::No_Content);
    } else {
      // Problem//details
      nlohmann::json json_data = {};
      if (result.find("ProblemDetails") != result.end()) {
        json_data = result["ProblemDetails"];
      }

      response.headers().add<Pistache::Http::Header::ContentType>(
          Pistache::Http::Mime::MediaType("application/problem+json"));
      response.send(
          Pistache::Http::Code(http_response_code), json_data.dump().c_str());
    }
  } else {
    // TODO:
    response.send(Pistache::Http::Code::Gateway_Timeout);
  }
}

}  // namespace api
}  // namespace amf
}  // namespace oai
