/**
 * Namf_Communication
 * AMF Communication Service © 2019, 3GPP Organizational Partners (ARIB, ATIS,
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
 * NonUeN2InfoSubscriptionCreatedData.h
 *
 *
 */

#ifndef NonUeN2InfoSubscriptionCreatedData_H_
#define NonUeN2InfoSubscriptionCreatedData_H_

#include <string>
#include <nlohmann/json.hpp>

namespace oai::model::lmf {

/// <summary>
///
/// </summary>
class NonUeN2InfoSubscriptionCreatedData {
 public:
  NonUeN2InfoSubscriptionCreatedData();
  virtual ~NonUeN2InfoSubscriptionCreatedData();

  void validate();

  /////////////////////////////////////////////
  /// NonUeN2InfoSubscriptionCreatedData members

  /// <summary>
  ///
  /// </summary>
  std::string getN2NotifySubscriptionId() const;
  void setN2NotifySubscriptionId(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getSupportedFeatures() const;
  void setSupportedFeatures(std::string const& value);
  bool supportedFeaturesIsSet() const;
  void unsetSupportedFeatures();

  friend void to_json(
      nlohmann::json& j, const NonUeN2InfoSubscriptionCreatedData& o);
  friend void from_json(
      const nlohmann::json& j, NonUeN2InfoSubscriptionCreatedData& o);

 protected:
  std::string m_N2NotifySubscriptionId;

  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
};

}  // namespace oai::model::lmf

#endif /* NonUeN2InfoSubscriptionCreatedData_H_ */
