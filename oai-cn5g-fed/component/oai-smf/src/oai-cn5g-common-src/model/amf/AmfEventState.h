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
 * AmfEventState.h
 *
 *
 */

#ifndef AmfEventState_H_
#define AmfEventState_H_

#include <nlohmann/json.hpp>

namespace oai::model::amf {

/// <summary>
///
/// </summary>
class AmfEventState {
 public:
  AmfEventState();
  virtual ~AmfEventState() = default;

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

  bool operator==(const AmfEventState& rhs) const;
  bool operator!=(const AmfEventState& rhs) const;

  /////////////////////////////////////////////
  /// AmfEventState members

  /// <summary>
  ///
  /// </summary>
  bool isActive() const;
  void setActive(bool const value);
  /// <summary>
  ///
  /// </summary>
  int32_t getRemainReports() const;
  void setRemainReports(int32_t const value);
  bool remainReportsIsSet() const;
  void unsetRemainReports();
  /// <summary>
  ///
  /// </summary>
  int32_t getRemainDuration() const;
  void setRemainDuration(int32_t const value);
  bool remainDurationIsSet() const;
  void unsetRemainDuration();

  friend void to_json(nlohmann::json& j, const AmfEventState& o);
  friend void from_json(const nlohmann::json& j, AmfEventState& o);

 protected:
  bool m_Active;

  int32_t m_RemainReports;
  bool m_RemainReportsIsSet;
  int32_t m_RemainDuration;
  bool m_RemainDurationIsSet;

  // Helper overload for validate. Used when one model stores another model and
  // calls it's validate.
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;
};

}  // namespace oai::model::amf

#endif /* AmfEventState_H_ */
