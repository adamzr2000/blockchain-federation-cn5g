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

#include "RouteInformation.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

RouteInformation::RouteInformation() {
  m_Ipv4Addr      = "";
  m_Ipv4AddrIsSet = false;
  m_Ipv6AddrIsSet = false;
  m_PortNumber    = 0;
}

void RouteInformation::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool RouteInformation::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool RouteInformation::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "RouteInformation" : pathPrefix;
  /*
  if (ipv4AddrIsSet()) {
    const std::string& value           = m_Ipv4Addr;
    const std::string currentValuePath = _pathPrefix + ".ipv4Addr";
  }
  */
  /* PortNumber */ {
    const int32_t& value               = m_PortNumber;
    const std::string currentValuePath = _pathPrefix + ".portNumber";

    if (value < 0) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
  }

  return success;
}

bool RouteInformation::operator==(const RouteInformation& rhs) const {
  return

      ((!ipv4AddrIsSet() && !rhs.ipv4AddrIsSet()) ||
       (ipv4AddrIsSet() && rhs.ipv4AddrIsSet() &&
        getIpv4Addr() == rhs.getIpv4Addr())) &&

      ((!ipv6AddrIsSet() && !rhs.ipv6AddrIsSet()) ||
       (ipv6AddrIsSet() && rhs.ipv6AddrIsSet() &&
        getIpv6Addr() == rhs.getIpv6Addr())) &&

      (getPortNumber() == rhs.getPortNumber())

          ;
}

bool RouteInformation::operator!=(const RouteInformation& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const RouteInformation& o) {
  j = nlohmann::json();
  if (o.ipv4AddrIsSet()) j["ipv4Addr"] = o.m_Ipv4Addr;
  if (o.ipv6AddrIsSet()) j["ipv6Addr"] = o.m_Ipv6Addr;
  j["portNumber"] = o.m_PortNumber;
}

void from_json(const nlohmann::json& j, RouteInformation& o) {
  if (j.find("ipv4Addr") != j.end()) {
    j.at("ipv4Addr").get_to(o.m_Ipv4Addr);
    o.m_Ipv4AddrIsSet = true;
  }
  if (j.find("ipv6Addr") != j.end()) {
    j.at("ipv6Addr").get_to(o.m_Ipv6Addr);
    o.m_Ipv6AddrIsSet = true;
  }
  j.at("portNumber").get_to(o.m_PortNumber);
}

std::string RouteInformation::getIpv4Addr() const {
  return m_Ipv4Addr;
}
void RouteInformation::setIpv4Addr(std::string const& value) {
  m_Ipv4Addr      = value;
  m_Ipv4AddrIsSet = true;
}
bool RouteInformation::ipv4AddrIsSet() const {
  return m_Ipv4AddrIsSet;
}
void RouteInformation::unsetIpv4Addr() {
  m_Ipv4AddrIsSet = false;
}
oai::model::common::Ipv6Addr RouteInformation::getIpv6Addr() const {
  return m_Ipv6Addr;
}
void RouteInformation::setIpv6Addr(oai::model::common::Ipv6Addr const& value) {
  m_Ipv6Addr      = value;
  m_Ipv6AddrIsSet = true;
}
bool RouteInformation::ipv6AddrIsSet() const {
  return m_Ipv6AddrIsSet;
}
void RouteInformation::unsetIpv6Addr() {
  m_Ipv6AddrIsSet = false;
}
int32_t RouteInformation::getPortNumber() const {
  return m_PortNumber;
}
void RouteInformation::setPortNumber(int32_t const value) {
  m_PortNumber = value;
}

}  // namespace oai::model::common
