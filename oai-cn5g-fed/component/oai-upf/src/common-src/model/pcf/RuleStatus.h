/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2023, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.9
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * RuleStatus.h
 *
 * Possible values are - ACTIVE: Indicates that the PCC rule(s) are successfully
 * installed (for those provisioned from PCF) or activated (for those
 * pre-defined in SMF), or the session rule(s) are successfully installed  -
 * INACTIVE: Indicates that the PCC rule(s) are removed (for those provisioned
 * from PCF) or inactive (for those pre-defined in SMF) or the session rule(s)
 * are removed.
 */

#ifndef RuleStatus_H_
#define RuleStatus_H_

#include "RuleStatus_anyOf.h"
#include <nlohmann/json.hpp>

namespace oai::model::pcf {

/// <summary>
/// Possible values are - ACTIVE: Indicates that the PCC rule(s) are
/// successfully installed (for those provisioned from PCF) or activated (for
/// those pre-defined in SMF), or the session rule(s) are successfully installed
/// - INACTIVE: Indicates that the PCC rule(s) are removed (for those
/// provisioned from PCF) or inactive (for those pre-defined in SMF) or the
/// session rule(s) are removed.
/// </summary>
class RuleStatus {
 public:
  RuleStatus();
  virtual ~RuleStatus() = default;

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

  bool operator==(const RuleStatus& rhs) const;
  bool operator!=(const RuleStatus& rhs) const;

  /////////////////////////////////////////////
  /// RuleStatus members

  RuleStatus_anyOf getValue() const;
  void setValue(RuleStatus_anyOf value);
  RuleStatus_anyOf::eRuleStatus_anyOf getEnumValue() const;
  void setEnumValue(RuleStatus_anyOf::eRuleStatus_anyOf value);
  friend void to_json(nlohmann::json& j, const RuleStatus& o);
  friend void from_json(const nlohmann::json& j, RuleStatus& o);
  friend void to_json(nlohmann::json& j, const RuleStatus_anyOf& o);
  friend void from_json(const nlohmann::json& j, RuleStatus_anyOf& o);

 protected:
  RuleStatus_anyOf m_value;
};

}  // namespace oai::model::pcf

#endif /* RuleStatus_H_ */
