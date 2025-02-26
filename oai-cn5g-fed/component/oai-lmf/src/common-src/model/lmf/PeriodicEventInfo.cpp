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

#include "PeriodicEventInfo.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::lmf {

PeriodicEventInfo::PeriodicEventInfo() {
  m_ReportingAmount   = 0;
  m_ReportingInterval = 0;
}

void PeriodicEventInfo::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool PeriodicEventInfo::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool PeriodicEventInfo::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "PeriodicEventInfo" : pathPrefix;

  /* ReportingAmount */ {
    const int32_t& value               = m_ReportingAmount;
    const std::string currentValuePath = _pathPrefix + ".reportingAmount";

    if (value < 1) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 1;";
    }
    if (value > 8639999) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 8639999;";
    }
  }

  /* ReportingInterval */ {
    const int32_t& value               = m_ReportingInterval;
    const std::string currentValuePath = _pathPrefix + ".reportingInterval";

    if (value < 1) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 1;";
    }
    if (value > 8639999) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 8639999;";
    }
  }

  return success;
}

bool PeriodicEventInfo::operator==(const PeriodicEventInfo& rhs) const {
  return

      (getReportingAmount() == rhs.getReportingAmount()) &&

      (getReportingInterval() == rhs.getReportingInterval())

          ;
}

bool PeriodicEventInfo::operator!=(const PeriodicEventInfo& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const PeriodicEventInfo& o) {
  j                      = nlohmann::json();
  j["reportingAmount"]   = o.m_ReportingAmount;
  j["reportingInterval"] = o.m_ReportingInterval;
}

void from_json(const nlohmann::json& j, PeriodicEventInfo& o) {
  j.at("reportingAmount").get_to(o.m_ReportingAmount);
  j.at("reportingInterval").get_to(o.m_ReportingInterval);
}

int32_t PeriodicEventInfo::getReportingAmount() const {
  return m_ReportingAmount;
}
void PeriodicEventInfo::setReportingAmount(int32_t const value) {
  m_ReportingAmount = value;
}
int32_t PeriodicEventInfo::getReportingInterval() const {
  return m_ReportingInterval;
}
void PeriodicEventInfo::setReportingInterval(int32_t const value) {
  m_ReportingInterval = value;
}

}  // namespace oai::model::lmf
