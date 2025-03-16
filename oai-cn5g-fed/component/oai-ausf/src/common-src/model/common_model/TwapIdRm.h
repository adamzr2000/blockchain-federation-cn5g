/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2022, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.7
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * TwapIdRm.h
 *
 *
 */

#ifndef TwapIdRm_H_
#define TwapIdRm_H_

#include <string>
#include "TwapId.h"
#include "NullValue.h"
#include <nlohmann/json.hpp>

namespace oai::model::common {

/// <summary>
///
/// </summary>
class TwapIdRm {
 public:
  TwapIdRm();
  virtual ~TwapIdRm() = default;

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

  bool operator==(const TwapIdRm& rhs) const;
  bool operator!=(const TwapIdRm& rhs) const;

  /////////////////////////////////////////////
  /// TwapIdRm members

  /// <summary>
  ///
  /// </summary>
  std::string getSsId() const;
  void setSsId(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getBssId() const;
  void setBssId(std::string const& value);
  bool bssIdIsSet() const;
  void unsetBssId();
  /// <summary>
  ///
  /// </summary>
  std::string getCivicAddress() const;
  void setCivicAddress(std::string const& value);
  bool civicAddressIsSet() const;
  void unsetCivicAddress();

  friend void to_json(nlohmann::json& j, const TwapIdRm& o);
  friend void from_json(const nlohmann::json& j, TwapIdRm& o);

 protected:
  std::string m_SsId;

  std::string m_BssId;
  bool m_BssIdIsSet;
  std::string m_CivicAddress;
  bool m_CivicAddressIsSet;
};

}  // namespace oai::model::common

#endif /* TwapIdRm_H_ */
