/**
 * Namf_Communication
 * AMF Communication Service © 2022, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.8
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "N2RanInformation.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::amf {

N2RanInformation::N2RanInformation() {}

void N2RanInformation::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool N2RanInformation::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool N2RanInformation::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "N2RanInformation" : pathPrefix;

  return success;
}

bool N2RanInformation::operator==(const N2RanInformation& rhs) const {
  return

      (getN2InfoContent() == rhs.getN2InfoContent())

          ;
}

bool N2RanInformation::operator!=(const N2RanInformation& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const N2RanInformation& o) {
  j                  = nlohmann::json();
  j["n2InfoContent"] = o.m_N2InfoContent;
}

void from_json(const nlohmann::json& j, N2RanInformation& o) {
  j.at("n2InfoContent").get_to(o.m_N2InfoContent);
}

oai::model::amf::N2InfoContent N2RanInformation::getN2InfoContent() const {
  return m_N2InfoContent;
}
void N2RanInformation::setN2InfoContent(
    oai::model::amf::N2InfoContent const& value) {
  m_N2InfoContent = value;
}

}  // namespace oai::model::amf
