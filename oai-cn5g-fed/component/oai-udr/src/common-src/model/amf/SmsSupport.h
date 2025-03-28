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
 * SmsSupport.h
 *
 *
 */

#ifndef SmsSupport_H_
#define SmsSupport_H_

#include <nlohmann/json.hpp>

namespace oai::model::amf {

/// <summary>
///
/// </summary>
class SmsSupport {
 public:
  SmsSupport();
  virtual ~SmsSupport();

  void validate();

  /////////////////////////////////////////////
  /// SmsSupport members

  friend void to_json(nlohmann::json& j, const SmsSupport& o);
  friend void from_json(const nlohmann::json& j, SmsSupport& o);

 protected:
};

}  // namespace oai::model::amf

#endif /* SmsSupport_H_ */
