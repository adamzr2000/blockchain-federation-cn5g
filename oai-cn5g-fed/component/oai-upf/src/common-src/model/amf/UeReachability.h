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
 * UeReachability.h
 *
 *
 */

#ifndef UeReachability_H_
#define UeReachability_H_

#include "UeReachability_anyOf.h"
#include <nlohmann/json.hpp>

namespace oai::model::amf {

/// <summary>
///
/// </summary>
class UeReachability {
 public:
  UeReachability();
  virtual ~UeReachability() = default;

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

  bool operator==(const UeReachability& rhs) const;
  bool operator!=(const UeReachability& rhs) const;

  /////////////////////////////////////////////
  /// UeReachability members

  void set_value(std::string value);
  void get_value(std::string& value) const;
  std::string get_value() const;

  friend void to_json(nlohmann::json& j, const UeReachability& o);
  friend void from_json(const nlohmann::json& j, UeReachability& o);

 protected:
  std::string value;
  // Helper overload for validate. Used when one model stores another model and
  // calls it's validate.
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;
};

}  // namespace oai::model::amf

#endif /* UeReachability_H_ */
