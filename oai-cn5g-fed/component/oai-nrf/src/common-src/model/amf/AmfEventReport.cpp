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

#include "AmfEventReport.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::amf {

AmfEventReport::AmfEventReport() {
  m_TimeStamp                = 0;
  m_SubscriptionId           = "";
  m_SubscriptionIdIsSet      = false;
  m_AnyUe                    = false;
  m_AmfUeNgapId              = 0;
  m_AnyUeIsSet               = false;
  m_Supi                     = "";
  m_SupiIsSet                = false;
  m_AreaListIsSet            = false;
  m_RefId                    = 0;
  m_RefIdIsSet               = false;
  m_Gpsi                     = "";
  m_GpsiIsSet                = false;
  m_Pei                      = "";
  m_PeiIsSet                 = false;
  m_LocationIsSet            = false;
  m_Timezone                 = "";
  m_TimezoneIsSet            = false;
  m_AccessTypeListIsSet      = false;
  m_RmInfoListIsSet          = false;
  m_CmInfoListIsSet          = false;
  m_ReachabilityIsSet        = false;
  m_CommFailureIsSet         = false;
  m_LossOfConnectReasonIsSet = false;
  m_RanUeNgapIdIsSet         = false;
  m_AmfUeNgapIdIsSet         = false;
  m_NumberOfUes              = 0;
  m_NumberOfUesIsSet         = false;
  m_r_5gsUserStateListIsSet  = false;
}

void AmfEventReport::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool AmfEventReport::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool AmfEventReport::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "AmfEventReport" : pathPrefix;

  if (supiIsSet()) {
    const std::string& value           = m_Supi;
    const std::string currentValuePath = _pathPrefix + ".supi";
  }

  if (areaListIsSet()) {
    const std::vector<AmfEventArea>& value = m_AreaList;
    const std::string currentValuePath     = _pathPrefix + ".areaList";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const AmfEventArea& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success =
            value.validate(msg, currentValuePath + ".areaList") && success;

        i++;
      }
    }
  }

  if (gpsiIsSet()) {
    const std::string& value           = m_Gpsi;
    const std::string currentValuePath = _pathPrefix + ".gpsi";
  }

  if (peiIsSet()) {
    const std::string& value           = m_Pei;
    const std::string currentValuePath = _pathPrefix + ".pei";
  }

  if (accessTypeListIsSet()) {
    const std::vector<oai::model::common::AccessType>& value = m_AccessTypeList;
    const std::string currentValuePath = _pathPrefix + ".accessTypeList";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::common::AccessType& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success = value.validate(msg, currentValuePath) && success;

        i++;
      }
    }
  }

  if (rmInfoListIsSet()) {
    const std::vector<RmInfo>& value   = m_RmInfoList;
    const std::string currentValuePath = _pathPrefix + ".rmInfoList";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const RmInfo& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success =
            value.validate(msg, currentValuePath + ".rmInfoList") && success;

        i++;
      }
    }
  }

  if (cmInfoListIsSet()) {
    const std::vector<CmInfo>& value   = m_CmInfoList;
    const std::string currentValuePath = _pathPrefix + ".cmInfoList";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const CmInfo& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success =
            value.validate(msg, currentValuePath + ".cmInfoList") && success;

        i++;
      }
    }
  }

  if (r5gsUserStateListIsSet()) {
    const std::vector<_5GsUserStateInfo>& value = m_r_5gsUserStateList;
    const std::string currentValuePath = _pathPrefix + ".r5gsUserStateList";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const _5GsUserStateInfo& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success =
            value.validate(msg, currentValuePath + ".r5gsUserStateList") &&
            success;

        i++;
      }
    }
  }

  return success;
}

bool AmfEventReport::operator==(const AmfEventReport& rhs) const {
  return

      (getType() == rhs.getType()) &&

      (getState() == rhs.getState()) &&

      (getTimeStamp() == rhs.getTimeStamp()) &&

      ((!subscriptionIdIsSet() && !rhs.subscriptionIdIsSet()) ||
       (subscriptionIdIsSet() && rhs.subscriptionIdIsSet() &&
        getSubscriptionId() == rhs.getSubscriptionId())) &&

      ((!anyUeIsSet() && !rhs.anyUeIsSet()) ||
       (anyUeIsSet() && rhs.anyUeIsSet() && isAnyUe() == rhs.isAnyUe())) &&

      ((!supiIsSet() && !rhs.supiIsSet()) ||
       (supiIsSet() && rhs.supiIsSet() && getSupi() == rhs.getSupi())) &&

      ((!areaListIsSet() && !rhs.areaListIsSet()) ||
       (areaListIsSet() && rhs.areaListIsSet() &&
        getAreaList() == rhs.getAreaList())) &&

      ((!refIdIsSet() && !rhs.refIdIsSet()) ||
       (refIdIsSet() && rhs.refIdIsSet() && getRefId() == rhs.getRefId())) &&

      ((!gpsiIsSet() && !rhs.gpsiIsSet()) ||
       (gpsiIsSet() && rhs.gpsiIsSet() && getGpsi() == rhs.getGpsi())) &&

      ((!peiIsSet() && !rhs.peiIsSet()) ||
       (peiIsSet() && rhs.peiIsSet() && getPei() == rhs.getPei())) &&

      ((!locationIsSet() && !rhs.locationIsSet()) ||
       (locationIsSet() && rhs.locationIsSet() &&
        getLocation() == rhs.getLocation())) &&

      ((!timezoneIsSet() && !rhs.timezoneIsSet()) ||
       (timezoneIsSet() && rhs.timezoneIsSet() &&
        getTimezone() == rhs.getTimezone())) &&

      ((!accessTypeListIsSet() && !rhs.accessTypeListIsSet()) ||
       (accessTypeListIsSet() && rhs.accessTypeListIsSet() &&
        getAccessTypeList() == rhs.getAccessTypeList())) &&

      ((!rmInfoListIsSet() && !rhs.rmInfoListIsSet()) ||
       (rmInfoListIsSet() && rhs.rmInfoListIsSet() &&
        getRmInfoList() == rhs.getRmInfoList())) &&

      ((!cmInfoListIsSet() && !rhs.cmInfoListIsSet()) ||
       (cmInfoListIsSet() && rhs.cmInfoListIsSet() &&
        getCmInfoList() == rhs.getCmInfoList())) &&

      ((!reachabilityIsSet() && !rhs.reachabilityIsSet()) ||
       (reachabilityIsSet() && rhs.reachabilityIsSet() &&
        getReachability() == rhs.getReachability())) &&

      ((!commFailureIsSet() && !rhs.commFailureIsSet()) ||
       (commFailureIsSet() && rhs.commFailureIsSet() &&
        getCommFailure() == rhs.getCommFailure())) &&

      ((!lossOfConnectReasonIsSet() && !rhs.lossOfConnectReasonIsSet()) ||
       (lossOfConnectReasonIsSet() && rhs.lossOfConnectReasonIsSet() &&
        getLossOfConnectReason() == rhs.getLossOfConnectReason())) &&

      ((!ranUeNgapIdIsSet() && !rhs.ranUeNgapIdIsSet()) ||
       (ranUeNgapIdIsSet() && rhs.ranUeNgapIdIsSet() &&
        getRanUeNgapId() == rhs.getRanUeNgapId())) &&

      ((!amfUeNgapIdIsSet() && !rhs.amfUeNgapIdIsSet()) ||
       (amfUeNgapIdIsSet() && rhs.amfUeNgapIdIsSet() &&
        getAmfUeNgapId() == rhs.getAmfUeNgapId())) &&

      ((!numberOfUesIsSet() && !rhs.numberOfUesIsSet()) ||
       (numberOfUesIsSet() && rhs.numberOfUesIsSet() &&
        getNumberOfUes() == rhs.getNumberOfUes())) &&

      ((!r5gsUserStateListIsSet() && !rhs.r5gsUserStateListIsSet()) ||
       (r5gsUserStateListIsSet() && rhs.r5gsUserStateListIsSet() &&
        getR5gsUserStateList() == rhs.getR5gsUserStateList()))

          ;
}

bool AmfEventReport::operator!=(const AmfEventReport& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AmfEventReport& o) {
  j              = nlohmann::json();
  j["type"]      = o.m_Type;
  j["state"]     = o.m_State;
  j["timeStamp"] = o.m_TimeStamp;
  if (o.subscriptionIdIsSet()) j["subscriptionId"] = o.m_SubscriptionId;
  if (o.anyUeIsSet()) j["anyUe"] = o.m_AnyUe;
  if (o.supiIsSet()) j["supi"] = o.m_Supi;
  if (o.areaListIsSet() || !o.m_AreaList.empty()) j["areaList"] = o.m_AreaList;
  if (o.refIdIsSet()) j["refId"] = o.m_RefId;
  if (o.gpsiIsSet()) j["gpsi"] = o.m_Gpsi;
  if (o.peiIsSet()) j["pei"] = o.m_Pei;
  if (o.locationIsSet()) j["location"] = o.m_Location;
  if (o.timezoneIsSet()) j["timezone"] = o.m_Timezone;
  if (o.accessTypeListIsSet() || !o.m_AccessTypeList.empty())
    j["accessTypeList"] = o.m_AccessTypeList;
  if (o.rmInfoListIsSet() || !o.m_RmInfoList.empty())
    j["rmInfoList"] = o.m_RmInfoList;
  if (o.cmInfoListIsSet() || !o.m_CmInfoList.empty())
    j["cmInfoList"] = o.m_CmInfoList;
  if (o.reachabilityIsSet()) j["reachability"] = o.m_Reachability;
  if (o.commFailureIsSet()) j["commFailure"] = o.m_CommFailure;
  if (o.lossOfConnectReasonIsSet())
    j["lossOfConnectReason"] = o.m_LossOfConnectReason;
  if (o.ranUeNgapIdIsSet()) j["ranUeNgapId"] = o.m_RanUeNgapId;
  if (o.amfUeNgapIdIsSet()) j["amfUeNgapId"] = o.m_AmfUeNgapId;
  if (o.numberOfUesIsSet()) j["numberOfUes"] = o.m_NumberOfUes;
  if (o.r5gsUserStateListIsSet() || !o.m_r_5gsUserStateList.empty())
    j["5gsUserStateList"] = o.m_r_5gsUserStateList;
}

void from_json(const nlohmann::json& j, AmfEventReport& o) {
  j.at("type").get_to(o.m_Type);
  j.at("state").get_to(o.m_State);
  j.at("timeStamp").get_to(o.m_TimeStamp);
  if (j.find("subscriptionId") != j.end()) {
    j.at("subscriptionId").get_to(o.m_SubscriptionId);
    o.m_SubscriptionIdIsSet = true;
  }
  if (j.find("anyUe") != j.end()) {
    j.at("anyUe").get_to(o.m_AnyUe);
    o.m_AnyUeIsSet = true;
  }
  if (j.find("supi") != j.end()) {
    j.at("supi").get_to(o.m_Supi);
    o.m_SupiIsSet = true;
  }
  if (j.find("areaList") != j.end()) {
    j.at("areaList").get_to(o.m_AreaList);
    o.m_AreaListIsSet = true;
  }
  if (j.find("refId") != j.end()) {
    j.at("refId").get_to(o.m_RefId);
    o.m_RefIdIsSet = true;
  }
  if (j.find("gpsi") != j.end()) {
    j.at("gpsi").get_to(o.m_Gpsi);
    o.m_GpsiIsSet = true;
  }
  if (j.find("pei") != j.end()) {
    j.at("pei").get_to(o.m_Pei);
    o.m_PeiIsSet = true;
  }
  if (j.find("location") != j.end()) {
    j.at("location").get_to(o.m_Location);
    o.m_LocationIsSet = true;
  }
  if (j.find("timezone") != j.end()) {
    j.at("timezone").get_to(o.m_Timezone);
    o.m_TimezoneIsSet = true;
  }
  if (j.find("accessTypeList") != j.end()) {
    j.at("accessTypeList").get_to(o.m_AccessTypeList);
    o.m_AccessTypeListIsSet = true;
  }
  if (j.find("rmInfoList") != j.end()) {
    j.at("rmInfoList").get_to(o.m_RmInfoList);
    o.m_RmInfoListIsSet = true;
  }
  if (j.find("cmInfoList") != j.end()) {
    j.at("cmInfoList").get_to(o.m_CmInfoList);
    o.m_CmInfoListIsSet = true;
  }
  if (j.find("reachability") != j.end()) {
    j.at("reachability").get_to(o.m_Reachability);
    o.m_ReachabilityIsSet = true;
  }
  if (j.find("commFailure") != j.end()) {
    j.at("commFailure").get_to(o.m_CommFailure);
    o.m_CommFailureIsSet = true;
  }
  if (j.find("lossOfConnectReason") != j.end()) {
    j.at("lossOfConnectReason").get_to(o.m_LossOfConnectReason);
    o.m_LossOfConnectReasonIsSet = true;
  }
  if (j.find("ranUeNgapId") != j.end()) {
    j.at("ranUeNgapId").get_to(o.m_RanUeNgapId);
    o.m_RanUeNgapIdIsSet = true;
  }
  if (j.find("amfUeNgapId") != j.end()) {
    j.at("amfUeNgapId").get_to(o.m_AmfUeNgapId);
    o.m_AmfUeNgapIdIsSet = true;
  }
  if (j.find("numberOfUes") != j.end()) {
    j.at("numberOfUes").get_to(o.m_NumberOfUes);
    o.m_NumberOfUesIsSet = true;
  }
  if (j.find("5gsUserStateList") != j.end()) {
    j.at("5gsUserStateList").get_to(o.m_r_5gsUserStateList);
    o.m_r_5gsUserStateListIsSet = true;
  }
}

AmfEventType AmfEventReport::getType() const {
  return m_Type;
}
void AmfEventReport::setType(AmfEventType const& value) {
  m_Type = value;
}
AmfEventState AmfEventReport::getState() const {
  return m_State;
}
void AmfEventReport::setState(AmfEventState const& value) {
  m_State = value;
}
uint64_t AmfEventReport::getTimeStamp() const {
  return m_TimeStamp;
}
void AmfEventReport::setTimeStamp(uint64_t const& value) {
  m_TimeStamp = value;
}
std::string AmfEventReport::getSubscriptionId() const {
  return m_SubscriptionId;
}
void AmfEventReport::setSubscriptionId(std::string const& value) {
  m_SubscriptionId      = value;
  m_SubscriptionIdIsSet = true;
}
bool AmfEventReport::subscriptionIdIsSet() const {
  return m_SubscriptionIdIsSet;
}
void AmfEventReport::unsetSubscriptionId() {
  m_SubscriptionIdIsSet = false;
}
bool AmfEventReport::isAnyUe() const {
  return m_AnyUe;
}
void AmfEventReport::setAnyUe(bool const value) {
  m_AnyUe      = value;
  m_AnyUeIsSet = true;
}
bool AmfEventReport::anyUeIsSet() const {
  return m_AnyUeIsSet;
}
void AmfEventReport::unsetAnyUe() {
  m_AnyUeIsSet = false;
}
std::string AmfEventReport::getSupi() const {
  return m_Supi;
}
void AmfEventReport::setSupi(std::string const& value) {
  m_Supi      = value;
  m_SupiIsSet = true;
}
bool AmfEventReport::supiIsSet() const {
  return m_SupiIsSet;
}
void AmfEventReport::unsetSupi() {
  m_SupiIsSet = false;
}
std::vector<AmfEventArea> AmfEventReport::getAreaList() const {
  return m_AreaList;
}
void AmfEventReport::setAreaList(std::vector<AmfEventArea> const& value) {
  m_AreaList      = value;
  m_AreaListIsSet = true;
}
bool AmfEventReport::areaListIsSet() const {
  return m_AreaListIsSet;
}
void AmfEventReport::unsetAreaList() {
  m_AreaListIsSet = false;
}
int32_t AmfEventReport::getRefId() const {
  return m_RefId;
}
void AmfEventReport::setRefId(int32_t const value) {
  m_RefId      = value;
  m_RefIdIsSet = true;
}
bool AmfEventReport::refIdIsSet() const {
  return m_RefIdIsSet;
}
void AmfEventReport::unsetRefId() {
  m_RefIdIsSet = false;
}
std::string AmfEventReport::getGpsi() const {
  return m_Gpsi;
}
void AmfEventReport::setGpsi(std::string const& value) {
  m_Gpsi      = value;
  m_GpsiIsSet = true;
}
bool AmfEventReport::gpsiIsSet() const {
  return m_GpsiIsSet;
}
void AmfEventReport::unsetGpsi() {
  m_GpsiIsSet = false;
}
std::string AmfEventReport::getPei() const {
  return m_Pei;
}
void AmfEventReport::setPei(std::string const& value) {
  m_Pei      = value;
  m_PeiIsSet = true;
}
bool AmfEventReport::peiIsSet() const {
  return m_PeiIsSet;
}
void AmfEventReport::unsetPei() {
  m_PeiIsSet = false;
}
oai::model::common::UserLocation AmfEventReport::getLocation() const {
  return m_Location;
}
void AmfEventReport::setLocation(
    oai::model::common::UserLocation const& value) {
  m_Location      = value;
  m_LocationIsSet = true;
}
bool AmfEventReport::locationIsSet() const {
  return m_LocationIsSet;
}
void AmfEventReport::unsetLocation() {
  m_LocationIsSet = false;
}
std::string AmfEventReport::getTimezone() const {
  return m_Timezone;
}
void AmfEventReport::setTimezone(std::string const& value) {
  m_Timezone      = value;
  m_TimezoneIsSet = true;
}
bool AmfEventReport::timezoneIsSet() const {
  return m_TimezoneIsSet;
}
void AmfEventReport::unsetTimezone() {
  m_TimezoneIsSet = false;
}
std::vector<oai::model::common::AccessType> AmfEventReport::getAccessTypeList()
    const {
  return m_AccessTypeList;
}
void AmfEventReport::setAccessTypeList(
    std::vector<oai::model::common::AccessType> const& value) {
  m_AccessTypeList      = value;
  m_AccessTypeListIsSet = true;
}
bool AmfEventReport::accessTypeListIsSet() const {
  return m_AccessTypeListIsSet;
}
void AmfEventReport::unsetAccessTypeList() {
  m_AccessTypeListIsSet = false;
}
std::vector<RmInfo> AmfEventReport::getRmInfoList() const {
  return m_RmInfoList;
}
void AmfEventReport::setRmInfoList(std::vector<RmInfo> const& value) {
  m_RmInfoList      = value;
  m_RmInfoListIsSet = true;
}
bool AmfEventReport::rmInfoListIsSet() const {
  return m_RmInfoListIsSet;
}
void AmfEventReport::unsetRmInfoList() {
  m_RmInfoListIsSet = false;
}
std::vector<CmInfo> AmfEventReport::getCmInfoList() const {
  return m_CmInfoList;
}
void AmfEventReport::setCmInfoList(std::vector<CmInfo> const& value) {
  m_CmInfoList      = value;
  m_CmInfoListIsSet = true;
}
bool AmfEventReport::cmInfoListIsSet() const {
  return m_CmInfoListIsSet;
}
void AmfEventReport::unsetCmInfoList() {
  m_CmInfoListIsSet = false;
}
UeReachability AmfEventReport::getReachability() const {
  return m_Reachability;
}
void AmfEventReport::setReachability(UeReachability const& value) {
  m_Reachability      = value;
  m_ReachabilityIsSet = true;
}
bool AmfEventReport::reachabilityIsSet() const {
  return m_ReachabilityIsSet;
}
void AmfEventReport::unsetReachability() {
  m_ReachabilityIsSet = false;
}
CommunicationFailure AmfEventReport::getCommFailure() const {
  return m_CommFailure;
}
void AmfEventReport::setCommFailure(CommunicationFailure const& value) {
  m_CommFailure      = value;
  m_CommFailureIsSet = true;
}
bool AmfEventReport::commFailureIsSet() const {
  return m_CommFailureIsSet;
}
void AmfEventReport::unsetCommFailure() {
  m_CommFailureIsSet = false;
}
LossOfConnectivityReason AmfEventReport::getLossOfConnectReason() const {
  return m_LossOfConnectReason;
}
void AmfEventReport::setLossOfConnectReason(
    LossOfConnectivityReason const& value) {
  m_LossOfConnectReason      = value;
  m_LossOfConnectReasonIsSet = true;
}
bool AmfEventReport::lossOfConnectReasonIsSet() const {
  return m_LossOfConnectReasonIsSet;
}
void AmfEventReport::unsetLossOfConnectReason() {
  m_LossOfConnectReasonIsSet = false;
}
uint32_t AmfEventReport::getRanUeNgapId() const {
  return m_RanUeNgapId;
}
void AmfEventReport::setRanUeNgapId(uint32_t const value) {
  m_RanUeNgapId      = value;
  m_RanUeNgapIdIsSet = true;
}
bool AmfEventReport::ranUeNgapIdIsSet() const {
  return m_RanUeNgapIdIsSet;
}
void AmfEventReport::unsetRanUeNgapId() {
  m_RanUeNgapIdIsSet = false;
}
long AmfEventReport::getAmfUeNgapId() const {
  return m_AmfUeNgapId;
}
void AmfEventReport::setAmfUeNgapId(long const value) {
  m_AmfUeNgapId      = value;
  m_AmfUeNgapIdIsSet = true;
}
bool AmfEventReport::amfUeNgapIdIsSet() const {
  return m_AmfUeNgapIdIsSet;
}
void AmfEventReport::unsetAmfUeNgapId() {
  m_AmfUeNgapIdIsSet = false;
}
int32_t AmfEventReport::getNumberOfUes() const {
  return m_NumberOfUes;
}
void AmfEventReport::setNumberOfUes(int32_t const value) {
  m_NumberOfUes      = value;
  m_NumberOfUesIsSet = true;
}
bool AmfEventReport::numberOfUesIsSet() const {
  return m_NumberOfUesIsSet;
}
void AmfEventReport::unsetNumberOfUes() {
  m_NumberOfUesIsSet = false;
}
std::vector<_5GsUserStateInfo> AmfEventReport::getR5gsUserStateList() const {
  return m_r_5gsUserStateList;
}
void AmfEventReport::setR5gsUserStateList(
    std::vector<_5GsUserStateInfo> const& value) {
  m_r_5gsUserStateList      = value;
  m_r_5gsUserStateListIsSet = true;
}
bool AmfEventReport::r5gsUserStateListIsSet() const {
  return m_r_5gsUserStateListIsSet;
}
void AmfEventReport::unsetr_5gsUserStateList() {
  m_r_5gsUserStateListIsSet = false;
}

}  // namespace oai::model::amf
