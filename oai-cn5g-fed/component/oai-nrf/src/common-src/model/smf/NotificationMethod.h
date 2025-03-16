/**
 * Nsmf_EventExposure
 * Session Management Event Exposure Service. © 2019, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * NotificationMethod.h
 *
 * Possible values are - PERIODIC - ONE_TIME - ON_EVENT_DETECTION
 */

#ifndef NotificationMethod_H_
#define NotificationMethod_H_

#include <nlohmann/json.hpp>

namespace oai::model::smf {

/// <summary>
/// Possible values are - PERIODIC - ONE_TIME - ON_EVENT_DETECTION
/// </summary>
class NotificationMethod {
 public:
  NotificationMethod();
  virtual ~NotificationMethod();

  void validate();

  /////////////////////////////////////////////
  /// NotificationMethod members

  friend void to_json(nlohmann::json& j, const NotificationMethod& o);
  friend void from_json(const nlohmann::json& j, NotificationMethod& o);

 protected:
};

}  // namespace oai::model::smf

#endif /* NotificationMethod_H_ */
