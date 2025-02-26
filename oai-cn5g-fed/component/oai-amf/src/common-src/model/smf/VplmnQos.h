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
 * VplmnQos.h
 *
 *
 */

#ifndef VplmnQos_H_
#define VplmnQos_H_

#include "Ambr.h"
#include <string>
#include "Arp.h"
#include <nlohmann/json.hpp>

namespace oai::model::smf {

/// <summary>
///
/// </summary>
class VplmnQos {
 public:
  VplmnQos();
  virtual ~VplmnQos() = default;

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

  bool operator==(const VplmnQos& rhs) const;
  bool operator!=(const VplmnQos& rhs) const;

  /////////////////////////////////////////////
  /// VplmnQos members

  /// <summary>
  ///
  /// </summary>
  int32_t getR5qi() const;
  void setR5qi(int32_t const value);
  bool r5qiIsSet() const;
  void unsetr_5qi();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::Arp getArp() const;
  void setArp(oai::model::common::Arp const& value);
  bool arpIsSet() const;
  void unsetArp();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::Ambr getSessionAmbr() const;
  void setSessionAmbr(oai::model::common::Ambr const& value);
  bool sessionAmbrIsSet() const;
  void unsetSessionAmbr();
  /// <summary>
  ///
  /// </summary>
  std::string getMaxFbrDl() const;
  void setMaxFbrDl(std::string const& value);
  bool maxFbrDlIsSet() const;
  void unsetMaxFbrDl();
  /// <summary>
  ///
  /// </summary>
  std::string getMaxFbrUl() const;
  void setMaxFbrUl(std::string const& value);
  bool maxFbrUlIsSet() const;
  void unsetMaxFbrUl();
  /// <summary>
  ///
  /// </summary>
  std::string getGuaFbrDl() const;
  void setGuaFbrDl(std::string const& value);
  bool guaFbrDlIsSet() const;
  void unsetGuaFbrDl();
  /// <summary>
  ///
  /// </summary>
  std::string getGuaFbrUl() const;
  void setGuaFbrUl(std::string const& value);
  bool guaFbrUlIsSet() const;
  void unsetGuaFbrUl();

  friend void to_json(nlohmann::json& j, const VplmnQos& o);
  friend void from_json(const nlohmann::json& j, VplmnQos& o);

 protected:
  int32_t m_r_5qi;
  bool m_r_5qiIsSet;
  oai::model::common::Arp m_Arp;
  bool m_ArpIsSet;
  oai::model::common::Ambr m_SessionAmbr;
  bool m_SessionAmbrIsSet;
  std::string m_MaxFbrDl;
  bool m_MaxFbrDlIsSet;
  std::string m_MaxFbrUl;
  bool m_MaxFbrUlIsSet;
  std::string m_GuaFbrDl;
  bool m_GuaFbrDlIsSet;
  std::string m_GuaFbrUl;
  bool m_GuaFbrUlIsSet;
};

}  // namespace oai::model::smf

#endif /* VplmnQos_H_ */
