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
/*
 * N1N2MessageCollectionDocumentApi.h
 *
 *
 */

#ifndef N1N2MessageCollectionDocumentApi_H_
#define N1N2MessageCollectionDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "N1N2MessageTransferError.h"
#include "N1N2MessageTransferReqData.h"
#include "N1N2MessageTransferRspData.h"
#include "ProblemDetails.h"
#include "amf_sbi_helper.hpp"
#include "mime_parser.hpp"

namespace oai {
namespace amf {
namespace api {

using namespace oai::model::amf;

class N1N2MessageCollectionDocumentApi {
 public:
  N1N2MessageCollectionDocumentApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~N1N2MessageCollectionDocumentApi() {}
  void init();

  const std::string base = amf_sbi_helper::AmfCommunicationServiceBase;

 private:
  void setupRoutes();

  void n1_n2_message_transfer_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void n1_n2_message_collection_document_api_default_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Namf_Communication N1N2 Message Transfer (UE Specific) service Operation
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueContextId">UE Context Identifier</param>
  /// <param name="n1N2MessageTransferReqData"></param>
  virtual void n1_n2_message_transfer(
      const std::string& ueContextId,
      std::unordered_map<std::string, mime_part>& parts,
      Pistache::Http::ResponseWriter& response) = 0;
};

}  // namespace api
}  // namespace amf
}  // namespace oai

#endif /* N1N2MessageCollectionDocumentApi_H_ */
