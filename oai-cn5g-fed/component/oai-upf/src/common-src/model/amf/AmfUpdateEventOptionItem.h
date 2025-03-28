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
 * AmfUpdateEventOptionItem.h
 *
 *
 */

#ifndef AmfUpdateEventOptionItem_H_
#define AmfUpdateEventOptionItem_H_

#include <string>
#include <nlohmann/json.hpp>

namespace oai::model::amf {

/// <summary>
///
/// </summary>
class AmfUpdateEventOptionItem {
 public:
  AmfUpdateEventOptionItem();
  virtual ~AmfUpdateEventOptionItem() = default;

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

  bool operator==(const AmfUpdateEventOptionItem& rhs) const;
  bool operator!=(const AmfUpdateEventOptionItem& rhs) const;

  /////////////////////////////////////////////
  /// AmfUpdateEventOptionItem members

  /// <summary>
  ///
  /// </summary>
  std::string getOp() const;
  void setOp(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getPath() const;
  void setPath(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getValue() const;
  void setValue(std::string const& value);

  friend void to_json(nlohmann::json& j, const AmfUpdateEventOptionItem& o);
  friend void from_json(const nlohmann::json& j, AmfUpdateEventOptionItem& o);

 protected:
  std::string m_Op;

  std::string m_Path;

  std::string m_Value;

  // Helper overload for validate. Used when one model stores another model and
  // calls it's validate.
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;
};

}  // namespace oai::model::amf

#endif /* AmfUpdateEventOptionItem_H_ */
