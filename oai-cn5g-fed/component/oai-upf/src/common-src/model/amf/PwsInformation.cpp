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

#include "PwsInformation.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::amf {

PwsInformation::PwsInformation() {
  m_MessageIdentifier    = 0;
  m_SerialNumber         = 0;
  m_BcEmptyAreaListIsSet = false;
  m_SendRanResponse      = false;
  m_SendRanResponseIsSet = false;
  m_OmcId                = "";
  m_OmcIdIsSet           = false;
}

void PwsInformation::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool PwsInformation::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool PwsInformation::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "PwsInformation" : pathPrefix;

  /* MessageIdentifier */ {
    const int32_t& value               = m_MessageIdentifier;
    const std::string currentValuePath = _pathPrefix + ".messageIdentifier";

    if (value < 0) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
    if (value > 65535) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 65535;";
    }
  }

  /* SerialNumber */ {
    const int32_t& value               = m_SerialNumber;
    const std::string currentValuePath = _pathPrefix + ".serialNumber";

    if (value < 0) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
    if (value > 65535) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 65535;";
    }
  }

  if (bcEmptyAreaListIsSet()) {
    const std::vector<oai::model::common::GlobalRanNodeId>& value =
        m_BcEmptyAreaList;
    const std::string currentValuePath = _pathPrefix + ".bcEmptyAreaList";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::common::GlobalRanNodeId& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success = value.validate(msg, currentValuePath + ".bcEmptyAreaList") &&
                  success;

        i++;
      }
    }
  }

  return success;
}

bool PwsInformation::operator==(const PwsInformation& rhs) const {
  return

      (getMessageIdentifier() == rhs.getMessageIdentifier()) &&

      (getSerialNumber() == rhs.getSerialNumber()) &&

      (getPwsContainer() == rhs.getPwsContainer()) &&

      ((!bcEmptyAreaListIsSet() && !rhs.bcEmptyAreaListIsSet()) ||
       (bcEmptyAreaListIsSet() && rhs.bcEmptyAreaListIsSet() &&
        getBcEmptyAreaList() == rhs.getBcEmptyAreaList())) &&

      ((!sendRanResponseIsSet() && !rhs.sendRanResponseIsSet()) ||
       (sendRanResponseIsSet() && rhs.sendRanResponseIsSet() &&
        isSendRanResponse() == rhs.isSendRanResponse())) &&

      ((!omcIdIsSet() && !rhs.omcIdIsSet()) ||
       (omcIdIsSet() && rhs.omcIdIsSet() && getOmcId() == rhs.getOmcId()))

          ;
}

bool PwsInformation::operator!=(const PwsInformation& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const PwsInformation& o) {
  j                      = nlohmann::json();
  j["messageIdentifier"] = o.m_MessageIdentifier;
  j["serialNumber"]      = o.m_SerialNumber;
  j["pwsContainer"]      = o.m_PwsContainer;
  if (o.bcEmptyAreaListIsSet() || !o.m_BcEmptyAreaList.empty())
    j["bcEmptyAreaList"] = o.m_BcEmptyAreaList;
  if (o.sendRanResponseIsSet()) j["sendRanResponse"] = o.m_SendRanResponse;
  if (o.omcIdIsSet()) j["omcId"] = o.m_OmcId;
}

void from_json(const nlohmann::json& j, PwsInformation& o) {
  j.at("messageIdentifier").get_to(o.m_MessageIdentifier);
  j.at("serialNumber").get_to(o.m_SerialNumber);
  j.at("pwsContainer").get_to(o.m_PwsContainer);
  if (j.find("bcEmptyAreaList") != j.end()) {
    j.at("bcEmptyAreaList").get_to(o.m_BcEmptyAreaList);
    o.m_BcEmptyAreaListIsSet = true;
  }
  if (j.find("sendRanResponse") != j.end()) {
    j.at("sendRanResponse").get_to(o.m_SendRanResponse);
    o.m_SendRanResponseIsSet = true;
  }
  if (j.find("omcId") != j.end()) {
    j.at("omcId").get_to(o.m_OmcId);
    o.m_OmcIdIsSet = true;
  }
}

int32_t PwsInformation::getMessageIdentifier() const {
  return m_MessageIdentifier;
}
void PwsInformation::setMessageIdentifier(int32_t const value) {
  m_MessageIdentifier = value;
}
int32_t PwsInformation::getSerialNumber() const {
  return m_SerialNumber;
}
void PwsInformation::setSerialNumber(int32_t const value) {
  m_SerialNumber = value;
}
oai::model::amf::N2InfoContent PwsInformation::getPwsContainer() const {
  return m_PwsContainer;
}
void PwsInformation::setPwsContainer(
    oai::model::amf::N2InfoContent const& value) {
  m_PwsContainer = value;
}
std::vector<oai::model::common::GlobalRanNodeId>
PwsInformation::getBcEmptyAreaList() const {
  return m_BcEmptyAreaList;
}
void PwsInformation::setBcEmptyAreaList(
    std::vector<oai::model::common::GlobalRanNodeId> const& value) {
  m_BcEmptyAreaList      = value;
  m_BcEmptyAreaListIsSet = true;
}
bool PwsInformation::bcEmptyAreaListIsSet() const {
  return m_BcEmptyAreaListIsSet;
}
void PwsInformation::unsetBcEmptyAreaList() {
  m_BcEmptyAreaListIsSet = false;
}
bool PwsInformation::isSendRanResponse() const {
  return m_SendRanResponse;
}
void PwsInformation::setSendRanResponse(bool const value) {
  m_SendRanResponse      = value;
  m_SendRanResponseIsSet = true;
}
bool PwsInformation::sendRanResponseIsSet() const {
  return m_SendRanResponseIsSet;
}
void PwsInformation::unsetSendRanResponse() {
  m_SendRanResponseIsSet = false;
}
std::string PwsInformation::getOmcId() const {
  return m_OmcId;
}
void PwsInformation::setOmcId(std::string const& value) {
  m_OmcId      = value;
  m_OmcIdIsSet = true;
}
bool PwsInformation::omcIdIsSet() const {
  return m_OmcIdIsSet;
}
void PwsInformation::unsetOmcId() {
  m_OmcIdIsSet = false;
}

}  // namespace oai::model::amf
