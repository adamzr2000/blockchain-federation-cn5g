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
/*
 * AmfEventType_anyOf.h
 *
 *
 */

#ifndef AmfEventType_anyOf_H_
#define AmfEventType_anyOf_H_

#include <nlohmann/json.hpp>

namespace oai::model::amf {

/// <summary>
///
/// </summary>
class AmfEventType_anyOf {
 public:
  AmfEventType_anyOf();
  virtual ~AmfEventType_anyOf() = default;

  enum class eAmfEventType_anyOf {
    // To have a valid default value.
    // Avoiding nameclashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    LOCATION_REPORT,
    PRESENCE_IN_AOI_REPORT,
    TIMEZONE_REPORT,
    ACCESS_TYPE_REPORT,
    REGISTRATION_STATE_REPORT,
    CONNECTIVITY_STATE_REPORT,
    REACHABILITY_REPORT,
    COMMUNICATION_FAILURE_REPORT,
    UES_IN_AREA_REPORT,
    SUBSCRIPTION_ID_CHANGE,
    SUBSCRIPTION_ID_ADDITION,
    LOSS_OF_CONNECTIVITY,
    _5GS_USER_STATE_REPORT
  };

  /// <summary>
  /// Validate the current data in the model. Throws a ValidationException on
  /// failure.
  /// </summary>
  void validate() const;

  /// <summary>
  /// Validate the current data in the model. Returns false on error and writes
  /// an error message into the given stringstream.
  /// </summary>
  bool validate(std::stringstream& msg) const;

  bool operator==(const AmfEventType_anyOf& rhs) const;
  bool operator!=(const AmfEventType_anyOf& rhs) const;

  /////////////////////////////////////////////
  /// AmfEventType_anyOf members

  AmfEventType_anyOf::eAmfEventType_anyOf getValue() const;
  void setValue(AmfEventType_anyOf::eAmfEventType_anyOf value);

  friend void to_json(nlohmann::json& j, const AmfEventType_anyOf& o);
  friend void from_json(const nlohmann::json& j, AmfEventType_anyOf& o);

 protected:
  AmfEventType_anyOf::eAmfEventType_anyOf m_value =
      AmfEventType_anyOf::eAmfEventType_anyOf::INVALID_VALUE_OPENAPI_GENERATED;

  // Helper overload for validate. Used when one model stores another model and
  // calls it's validate.
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;
};

}  // namespace oai::model::amf

#endif /* AmfEventType_anyOf_H_ */
