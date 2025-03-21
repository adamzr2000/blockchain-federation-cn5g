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

#include "HorizontalVelocity.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::lmf {

HorizontalVelocity::HorizontalVelocity() {
  m_HSpeed  = 0.0f;
  m_Bearing = 0;
}

void HorizontalVelocity::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool HorizontalVelocity::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool HorizontalVelocity::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "HorizontalVelocity" : pathPrefix;

  /* HSpeed */ {
    const float& value                 = m_HSpeed;
    const std::string currentValuePath = _pathPrefix + ".hSpeed";

    if (value < static_cast<float>(0)) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
    if (value > static_cast<float>(2047)) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 2047;";
    }
  }

  /* Bearing */ {
    const int32_t& value               = m_Bearing;
    const std::string currentValuePath = _pathPrefix + ".bearing";

    if (value < 0) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
    if (value > 360) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 360;";
    }
  }

  return success;
}

bool HorizontalVelocity::operator==(const HorizontalVelocity& rhs) const {
  return

      (getHSpeed() == rhs.getHSpeed()) &&

      (getBearing() == rhs.getBearing())

          ;
}

bool HorizontalVelocity::operator!=(const HorizontalVelocity& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const HorizontalVelocity& o) {
  j            = nlohmann::json();
  j["hSpeed"]  = o.m_HSpeed;
  j["bearing"] = o.m_Bearing;
}

void from_json(const nlohmann::json& j, HorizontalVelocity& o) {
  j.at("hSpeed").get_to(o.m_HSpeed);
  j.at("bearing").get_to(o.m_Bearing);
}

float HorizontalVelocity::getHSpeed() const {
  return m_HSpeed;
}
void HorizontalVelocity::setHSpeed(float const value) {
  m_HSpeed = value;
}
int32_t HorizontalVelocity::getBearing() const {
  return m_Bearing;
}
void HorizontalVelocity::setBearing(int32_t const value) {
  m_Bearing = value;
}

}  // namespace oai::model::lmf
