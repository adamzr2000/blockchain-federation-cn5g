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
 * CmState_anyOf.h
 *
 *
 */

#ifndef CmState_anyOf_H_
#define CmState_anyOf_H_

#include <nlohmann/json.hpp>

namespace oai::model::amf {

/// <summary>
///
/// </summary>
class CmState_anyOf {
 public:
  CmState_anyOf();
  virtual ~CmState_anyOf() = default;

  enum class eCmState_anyOf {
    // To have a valid default value.
    // Avoiding nameclashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    IDLE,
    CONNECTED
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

  bool operator==(const CmState_anyOf& rhs) const;
  bool operator!=(const CmState_anyOf& rhs) const;

  /////////////////////////////////////////////
  /// CmState_anyOf members

  CmState_anyOf::eCmState_anyOf getValue() const;
  void setValue(CmState_anyOf::eCmState_anyOf value);

  friend void to_json(nlohmann::json& j, const CmState_anyOf& o);
  friend void from_json(const nlohmann::json& j, CmState_anyOf& o);

 protected:
  CmState_anyOf::eCmState_anyOf m_value =
      CmState_anyOf::eCmState_anyOf::INVALID_VALUE_OPENAPI_GENERATED;

  // Helper overload for validate. Used when one model stores another model and
  // calls it's validate.
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;
};

}  // namespace oai::model::amf

#endif /* CmState_anyOf_H_ */
