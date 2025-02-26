/**
 * LMF Location
 * LMF Location Service. © 2022, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.5
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AccuracyFulfilmentIndicator_anyOf.h
 *
 *
 */

#ifndef AccuracyFulfilmentIndicator_anyOf_H_
#define AccuracyFulfilmentIndicator_anyOf_H_

#include <nlohmann/json.hpp>

namespace oai::model::lmf {

/// <summary>
///
/// </summary>
class AccuracyFulfilmentIndicator_anyOf {
 public:
  AccuracyFulfilmentIndicator_anyOf();
  virtual ~AccuracyFulfilmentIndicator_anyOf() = default;

  enum class eAccuracyFulfilmentIndicator_anyOf {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    FULFILLED,
    NOT_FULFILLED
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

  /// <summary>
  /// Helper overload for validate. Used when one model stores another model and
  /// calls it's validate. Not meant to be called outside that case.
  /// </summary>
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

  bool operator==(const AccuracyFulfilmentIndicator_anyOf& rhs) const;
  bool operator!=(const AccuracyFulfilmentIndicator_anyOf& rhs) const;

  /////////////////////////////////////////////
  /// AccuracyFulfilmentIndicator_anyOf members

  AccuracyFulfilmentIndicator_anyOf::eAccuracyFulfilmentIndicator_anyOf
  getValue() const;
  void setValue(
      AccuracyFulfilmentIndicator_anyOf::eAccuracyFulfilmentIndicator_anyOf
          value);

  friend void to_json(
      nlohmann::json& j, const AccuracyFulfilmentIndicator_anyOf& o);
  friend void from_json(
      const nlohmann::json& j, AccuracyFulfilmentIndicator_anyOf& o);

 protected:
  AccuracyFulfilmentIndicator_anyOf::eAccuracyFulfilmentIndicator_anyOf
      m_value = AccuracyFulfilmentIndicator_anyOf::
          eAccuracyFulfilmentIndicator_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
};

}  // namespace oai::model::lmf

#endif /* AccuracyFulfilmentIndicator_anyOf_H_ */
