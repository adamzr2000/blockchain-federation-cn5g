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

#include "UeReachability.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::amf {

UeReachability::UeReachability() {}

void UeReachability::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool UeReachability::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool UeReachability::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "UeReachability" : pathPrefix;

  return success;
}

bool UeReachability::operator==(const UeReachability& rhs) const {
  return true;  // TODO

  ;
}

bool UeReachability::operator!=(const UeReachability& rhs) const {
  return !(*this == rhs);
}

void UeReachability::set_value(std::string value) {
  this->value = value;
}
void UeReachability::get_value(std::string& value) const {
  value = this->value;
}
std::string UeReachability::get_value() const {
  return value;
}

void to_json(nlohmann::json& j, const UeReachability& o) {
  j = o.get_value();
}

void from_json(const nlohmann::json& j, UeReachability& o) {
  o.set_value(j.get<std::string>());
}

}  // namespace oai::model::amf
