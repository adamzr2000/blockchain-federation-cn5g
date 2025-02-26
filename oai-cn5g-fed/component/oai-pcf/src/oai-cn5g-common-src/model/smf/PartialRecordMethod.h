/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
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
 * PartialRecordMethod.h
 *
 *
 */

#ifndef PartialRecordMethod_H_
#define PartialRecordMethod_H_

#include <nlohmann/json.hpp>

namespace oai::model::smf {

/// <summary>
///
/// </summary>
class PartialRecordMethod {
 public:
  PartialRecordMethod();
  virtual ~PartialRecordMethod();

  void validate();

  /////////////////////////////////////////////
  /// PartialRecordMethod members

  friend void to_json(nlohmann::json& j, const PartialRecordMethod& o);
  friend void from_json(const nlohmann::json& j, PartialRecordMethod& o);

 protected:
};

}  // namespace oai::model::smf

#endif /* PartialRecordMethod_H_ */
