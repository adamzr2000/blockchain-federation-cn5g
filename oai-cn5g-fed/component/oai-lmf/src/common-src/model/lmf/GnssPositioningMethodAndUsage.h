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
 * GnssPositioningMethodAndUsage.h
 *
 *
 */

#ifndef GnssPositioningMethodAndUsage_H_
#define GnssPositioningMethodAndUsage_H_

#include "Usage.h"
#include "GnssId.h"
#include "PositioningMode.h"
#include <nlohmann/json.hpp>

namespace oai::model::lmf {

/// <summary>
///
/// </summary>
class GnssPositioningMethodAndUsage {
 public:
  GnssPositioningMethodAndUsage();
  virtual ~GnssPositioningMethodAndUsage() = default;

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

  bool operator==(const GnssPositioningMethodAndUsage& rhs) const;
  bool operator!=(const GnssPositioningMethodAndUsage& rhs) const;

  /////////////////////////////////////////////
  /// GnssPositioningMethodAndUsage members

  /// <summary>
  ///
  /// </summary>
  oai::model::lmf::PositioningMode getMode() const;
  void setMode(oai::model::lmf::PositioningMode const& value);
  /// <summary>
  ///
  /// </summary>
  oai::model::lmf::GnssId getGnss() const;
  void setGnss(oai::model::lmf::GnssId const& value);
  /// <summary>
  ///
  /// </summary>
  oai::model::lmf::Usage getUsage() const;
  void setUsage(oai::model::lmf::Usage const& value);

  friend void to_json(
      nlohmann::json& j, const GnssPositioningMethodAndUsage& o);
  friend void from_json(
      const nlohmann::json& j, GnssPositioningMethodAndUsage& o);

 protected:
  oai::model::lmf::PositioningMode m_Mode;

  oai::model::lmf::GnssId m_Gnss;

  oai::model::lmf::Usage m_Usage;
};

}  // namespace oai::model::lmf

#endif /* GnssPositioningMethodAndUsage_H_ */
