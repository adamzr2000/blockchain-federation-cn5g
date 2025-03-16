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

#include "AreaOfValidity.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::lmf {

AreaOfValidity::AreaOfValidity() {}

void AreaOfValidity::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool AreaOfValidity::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool AreaOfValidity::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "AreaOfValidity" : pathPrefix;

  /* TaiList */ {
    const std::vector<oai::model::common::Tai>& value = m_TaiList;
    const std::string currentValuePath = _pathPrefix + ".taiList";

    if (value.size() < 0) {
      success = false;
      msg << currentValuePath << ": must have at least 0 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::common::Tai& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success = value.validate(msg, currentValuePath + ".taiList") && success;

        i++;
      }
    }
  }

  return success;
}

bool AreaOfValidity::operator==(const AreaOfValidity& rhs) const {
  return

      (getTaiList() == rhs.getTaiList())

          ;
}

bool AreaOfValidity::operator!=(const AreaOfValidity& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AreaOfValidity& o) {
  j            = nlohmann::json();
  j["taiList"] = o.m_TaiList;
}

void from_json(const nlohmann::json& j, AreaOfValidity& o) {
  j.at("taiList").get_to(o.m_TaiList);
}

std::vector<oai::model::common::Tai> AreaOfValidity::getTaiList() const {
  return m_TaiList;
}
void AreaOfValidity::setTaiList(
    std::vector<oai::model::common::Tai> const& value) {
  m_TaiList = value;
}

}  // namespace oai::model::lmf
