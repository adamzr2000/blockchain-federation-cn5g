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
 * 5GsUserState.h
 *
 *
 */

#ifndef _5GsUserState_H_
#define _5GsUserState_H_

#include "_5GsUserState_anyOf.h"
#include <nlohmann/json.hpp>

namespace oai::model::amf {

/// <summary>
///
/// </summary>
class _5GsUserState {
 public:
  _5GsUserState();
  virtual ~_5GsUserState() = default;

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

  /// <summary>
  /// Helper overload for validate. Used when one model stores another model and
  /// calls it's validate. Not meant to be called outside that case.
  /// </summary>
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

  bool operator==(const _5GsUserState& rhs) const;
  bool operator!=(const _5GsUserState& rhs) const;

  /////////////////////////////////////////////
  /// 5GsUserState members

  _5GsUserState_anyOf getValue() const;
  void setValue(_5GsUserState_anyOf value);
  _5GsUserState_anyOf::e_5GsUserState_anyOf getEnumValue() const;
  void setEnumValue(_5GsUserState_anyOf::e_5GsUserState_anyOf value);
  friend void to_json(nlohmann::json& j, const _5GsUserState& o);
  friend void from_json(const nlohmann::json& j, _5GsUserState& o);
  friend void to_json(nlohmann::json& j, const _5GsUserState_anyOf& o);
  friend void from_json(const nlohmann::json& j, _5GsUserState_anyOf& o);

 protected:
  _5GsUserState_anyOf m_value;
};

}  // namespace oai::model::amf

#endif /* 5GsUserState_H_ */
