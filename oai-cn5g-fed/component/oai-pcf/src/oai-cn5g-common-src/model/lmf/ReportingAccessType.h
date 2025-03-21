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
 * ReportingAccessType.h
 *
 *
 */

#ifndef ReportingAccessType_H_
#define ReportingAccessType_H_

#include "ReportingAccessType_anyOf.h"
#include <nlohmann/json.hpp>

namespace oai::model::lmf {

/// <summary>
///
/// </summary>
class ReportingAccessType {
 public:
  ReportingAccessType();
  virtual ~ReportingAccessType() = default;

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

  bool operator==(const ReportingAccessType& rhs) const;
  bool operator!=(const ReportingAccessType& rhs) const;

  /////////////////////////////////////////////
  /// ReportingAccessType members

  ReportingAccessType_anyOf getValue() const;
  void setValue(ReportingAccessType_anyOf value);
  ReportingAccessType_anyOf::eReportingAccessType_anyOf getEnumValue() const;
  void setEnumValue(
      ReportingAccessType_anyOf::eReportingAccessType_anyOf value);
  friend void to_json(nlohmann::json& j, const ReportingAccessType& o);
  friend void from_json(const nlohmann::json& j, ReportingAccessType& o);
  friend void to_json(nlohmann::json& j, const ReportingAccessType_anyOf& o);
  friend void from_json(const nlohmann::json& j, ReportingAccessType_anyOf& o);

 protected:
  ReportingAccessType_anyOf m_value;
};

}  // namespace oai::model::lmf

#endif /* ReportingAccessType_H_ */
