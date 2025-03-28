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

#include "CancelLocData.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::lmf {

CancelLocData::CancelLocData() {
  m_HgmlcCallBackURI       = "";
  m_LdrReference           = "";
  m_SupportedFeatures      = "";
  m_SupportedFeaturesIsSet = false;
}

void CancelLocData::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool CancelLocData::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool CancelLocData::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "CancelLocData" : pathPrefix;

  /* LdrReference */ {
    const std::string& value           = m_LdrReference;
    const std::string currentValuePath = _pathPrefix + ".ldrReference";

    if (value.length() < 2) {
      success = false;
      msg << currentValuePath << ": must be at least 2 characters long;";
    }
    if (value.length() > 510) {
      success = false;
      msg << currentValuePath << ": must be at most 510 characters long;";
    }
  }

  if (supportedFeaturesIsSet()) {
    const std::string& value           = m_SupportedFeatures;
    const std::string currentValuePath = _pathPrefix + ".supportedFeatures";
  }

  return success;
}

bool CancelLocData::operator==(const CancelLocData& rhs) const {
  return

      (getHgmlcCallBackURI() == rhs.getHgmlcCallBackURI()) &&

      (getLdrReference() == rhs.getLdrReference()) &&

      ((!supportedFeaturesIsSet() && !rhs.supportedFeaturesIsSet()) ||
       (supportedFeaturesIsSet() && rhs.supportedFeaturesIsSet() &&
        getSupportedFeatures() == rhs.getSupportedFeatures()))

          ;
}

bool CancelLocData::operator!=(const CancelLocData& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CancelLocData& o) {
  j                     = nlohmann::json();
  j["hgmlcCallBackURI"] = o.m_HgmlcCallBackURI;
  j["ldrReference"]     = o.m_LdrReference;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
}

void from_json(const nlohmann::json& j, CancelLocData& o) {
  j.at("hgmlcCallBackURI").get_to(o.m_HgmlcCallBackURI);
  j.at("ldrReference").get_to(o.m_LdrReference);
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
}

std::string CancelLocData::getHgmlcCallBackURI() const {
  return m_HgmlcCallBackURI;
}
void CancelLocData::setHgmlcCallBackURI(std::string const& value) {
  m_HgmlcCallBackURI = value;
}
std::string CancelLocData::getLdrReference() const {
  return m_LdrReference;
}
void CancelLocData::setLdrReference(std::string const& value) {
  m_LdrReference = value;
}
std::string CancelLocData::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void CancelLocData::setSupportedFeatures(std::string const& value) {
  m_SupportedFeatures      = value;
  m_SupportedFeaturesIsSet = true;
}
bool CancelLocData::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void CancelLocData::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}

}  // namespace oai::model::lmf
