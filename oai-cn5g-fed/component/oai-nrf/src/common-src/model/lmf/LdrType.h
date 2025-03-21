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
 * LdrType.h
 *
 *
 */

#ifndef LdrType_H_
#define LdrType_H_

#include "LdrType_anyOf.h"
#include <nlohmann/json.hpp>

namespace oai::model::lmf {

/// <summary>
///
/// </summary>
class LdrType {
 public:
  LdrType();
  virtual ~LdrType() = default;

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

  bool operator==(const LdrType& rhs) const;
  bool operator!=(const LdrType& rhs) const;

  /////////////////////////////////////////////
  /// LdrType members

  LdrType_anyOf getValue() const;
  void setValue(LdrType_anyOf value);
  LdrType_anyOf::eLdrType_anyOf getEnumValue() const;
  void setEnumValue(LdrType_anyOf::eLdrType_anyOf value);
  friend void to_json(nlohmann::json& j, const LdrType& o);
  friend void from_json(const nlohmann::json& j, LdrType& o);
  friend void to_json(nlohmann::json& j, const LdrType_anyOf& o);
  friend void from_json(const nlohmann::json& j, LdrType_anyOf& o);

 protected:
  LdrType_anyOf m_value;
};

}  // namespace oai::model::lmf

#endif /* LdrType_H_ */
