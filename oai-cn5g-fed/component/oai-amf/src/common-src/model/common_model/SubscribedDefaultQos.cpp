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

#include "SubscribedDefaultQos.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

SubscribedDefaultQos::SubscribedDefaultQos() {
  m_r_5qi              = 0;
  m_PriorityLevel      = 0;
  m_PriorityLevelIsSet = false;
}

void SubscribedDefaultQos::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool SubscribedDefaultQos::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool SubscribedDefaultQos::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "SubscribedDefaultQos" : pathPrefix;

  /* r_5qi */ {
    const int32_t& value               = m_r_5qi;
    const std::string currentValuePath = _pathPrefix + ".r5qi";

    if (value < 0) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
    if (value > 255) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 255;";
    }
  }

  if (priorityLevelIsSet()) {
    const int32_t& value               = m_PriorityLevel;
    const std::string currentValuePath = _pathPrefix + ".priorityLevel";

    if (value < 1) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 1;";
    }
    if (value > 127) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 127;";
    }
  }

  return success;
}

bool SubscribedDefaultQos::operator==(const SubscribedDefaultQos& rhs) const {
  return

      (getR5qi() == rhs.getR5qi()) &&

      (getArp() == rhs.getArp()) &&

      ((!priorityLevelIsSet() && !rhs.priorityLevelIsSet()) ||
       (priorityLevelIsSet() && rhs.priorityLevelIsSet() &&
        getPriorityLevel() == rhs.getPriorityLevel()))

          ;
}

bool SubscribedDefaultQos::operator!=(const SubscribedDefaultQos& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const SubscribedDefaultQos& o) {
  j        = nlohmann::json();
  j["5qi"] = o.m_r_5qi;
  j["arp"] = o.m_Arp;
  if (o.priorityLevelIsSet()) j["priorityLevel"] = o.m_PriorityLevel;
}

void from_json(const nlohmann::json& j, SubscribedDefaultQos& o) {
  j.at("5qi").get_to(o.m_r_5qi);
  j.at("arp").get_to(o.m_Arp);
  if (j.find("priorityLevel") != j.end()) {
    j.at("priorityLevel").get_to(o.m_PriorityLevel);
    o.m_PriorityLevelIsSet = true;
  }
}

int32_t SubscribedDefaultQos::getR5qi() const {
  return m_r_5qi;
}
void SubscribedDefaultQos::setR5qi(int32_t const value) {
  m_r_5qi = value;
}
oai::model::common::Arp SubscribedDefaultQos::getArp() const {
  return m_Arp;
}
void SubscribedDefaultQos::setArp(oai::model::common::Arp const& value) {
  m_Arp = value;
}
int32_t SubscribedDefaultQos::getPriorityLevel() const {
  return m_PriorityLevel;
}
void SubscribedDefaultQos::setPriorityLevel(int32_t const value) {
  m_PriorityLevel      = value;
  m_PriorityLevelIsSet = true;
}
bool SubscribedDefaultQos::priorityLevelIsSet() const {
  return m_PriorityLevelIsSet;
}
void SubscribedDefaultQos::unsetPriorityLevel() {
  m_PriorityLevelIsSet = false;
}

}  // namespace oai::model::common
