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
 * UncertaintyEllipse.h
 *
 *
 */

#ifndef UncertaintyEllipse_H_
#define UncertaintyEllipse_H_

#include <nlohmann/json.hpp>

namespace oai::model::lmf {

/// <summary>
///
/// </summary>
class UncertaintyEllipse {
 public:
  UncertaintyEllipse();
  virtual ~UncertaintyEllipse() = default;

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

  bool operator==(const UncertaintyEllipse& rhs) const;
  bool operator!=(const UncertaintyEllipse& rhs) const;

  /////////////////////////////////////////////
  /// UncertaintyEllipse members

  /// <summary>
  ///
  /// </summary>
  float getSemiMajor() const;
  void setSemiMajor(float const value);
  /// <summary>
  ///
  /// </summary>
  float getSemiMinor() const;
  void setSemiMinor(float const value);
  /// <summary>
  ///
  /// </summary>
  int32_t getOrientationMajor() const;
  void setOrientationMajor(int32_t const value);

  friend void to_json(nlohmann::json& j, const UncertaintyEllipse& o);
  friend void from_json(const nlohmann::json& j, UncertaintyEllipse& o);

 protected:
  float m_SemiMajor;

  float m_SemiMinor;

  int32_t m_OrientationMajor;
};

}  // namespace oai::model::lmf

#endif /* UncertaintyEllipse_H_ */
