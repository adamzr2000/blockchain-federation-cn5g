/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "VsmfUpdatedData.h"

namespace oai::model::smf {

using namespace oai::model::common;

VsmfUpdatedData::VsmfUpdatedData() {
  m_QosFlowsAddModListIsSet         = false;
  m_QosFlowsRelListIsSet            = false;
  m_QosFlowsFailedtoAddModListIsSet = false;
  m_QosFlowsFailedtoRelListIsSet    = false;
  m_N1SmInfoFromUeIsSet             = false;
  m_UnknownN1SmInfoIsSet            = false;
  m_UeLocationIsSet                 = false;
  m_UeTimeZone                      = "";
  m_UeTimeZoneIsSet                 = false;
  m_AddUeLocationIsSet              = false;
  m_AssignedEbiListIsSet            = false;
  m_FailedToAssignEbiListIsSet      = false;
  m_ReleasedEbiListIsSet            = false;
  m_SecondaryRatUsageReportIsSet    = false;
  m_SecondaryRatUsageInfoIsSet      = false;
}

VsmfUpdatedData::~VsmfUpdatedData() {}

void VsmfUpdatedData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const VsmfUpdatedData& o) {
  j = nlohmann::json();
  if (o.qosFlowsAddModListIsSet())
    j["qosFlowsAddModList"] = o.m_QosFlowsAddModList;
  if (o.qosFlowsRelListIsSet()) j["qosFlowsRelList"] = o.m_QosFlowsRelList;
  if (o.qosFlowsFailedtoAddModListIsSet())
    j["qosFlowsFailedtoAddModList"] = o.m_QosFlowsFailedtoAddModList;
  if (o.qosFlowsFailedtoRelListIsSet())
    j["qosFlowsFailedtoRelList"] = o.m_QosFlowsFailedtoRelList;
  if (o.n1SmInfoFromUeIsSet()) j["n1SmInfoFromUe"] = o.m_N1SmInfoFromUe;
  if (o.unknownN1SmInfoIsSet()) j["unknownN1SmInfo"] = o.m_UnknownN1SmInfo;
  if (o.ueLocationIsSet()) j["ueLocation"] = o.m_UeLocation;
  if (o.ueTimeZoneIsSet()) j["ueTimeZone"] = o.m_UeTimeZone;
  if (o.addUeLocationIsSet()) j["addUeLocation"] = o.m_AddUeLocation;
  if (o.assignedEbiListIsSet()) j["assignedEbiList"] = o.m_AssignedEbiList;
  if (o.failedToAssignEbiListIsSet())
    j["failedToAssignEbiList"] = o.m_FailedToAssignEbiList;
  if (o.releasedEbiListIsSet()) j["releasedEbiList"] = o.m_ReleasedEbiList;
  if (o.secondaryRatUsageReportIsSet())
    j["secondaryRatUsageReport"] = o.m_SecondaryRatUsageReport;
  if (o.secondaryRatUsageInfoIsSet())
    j["secondaryRatUsageInfo"] = o.m_SecondaryRatUsageInfo;
}

void from_json(const nlohmann::json& j, VsmfUpdatedData& o) {
  if (j.find("qosFlowsAddModList") != j.end()) {
    j.at("qosFlowsAddModList").get_to(o.m_QosFlowsAddModList);
    o.m_QosFlowsAddModListIsSet = true;
  }
  if (j.find("qosFlowsRelList") != j.end()) {
    j.at("qosFlowsRelList").get_to(o.m_QosFlowsRelList);
    o.m_QosFlowsRelListIsSet = true;
  }
  if (j.find("qosFlowsFailedtoAddModList") != j.end()) {
    j.at("qosFlowsFailedtoAddModList").get_to(o.m_QosFlowsFailedtoAddModList);
    o.m_QosFlowsFailedtoAddModListIsSet = true;
  }
  if (j.find("qosFlowsFailedtoRelList") != j.end()) {
    j.at("qosFlowsFailedtoRelList").get_to(o.m_QosFlowsFailedtoRelList);
    o.m_QosFlowsFailedtoRelListIsSet = true;
  }
  if (j.find("n1SmInfoFromUe") != j.end()) {
    j.at("n1SmInfoFromUe").get_to(o.m_N1SmInfoFromUe);
    o.m_N1SmInfoFromUeIsSet = true;
  }
  if (j.find("unknownN1SmInfo") != j.end()) {
    j.at("unknownN1SmInfo").get_to(o.m_UnknownN1SmInfo);
    o.m_UnknownN1SmInfoIsSet = true;
  }
  if (j.find("ueLocation") != j.end()) {
    j.at("ueLocation").get_to(o.m_UeLocation);
    o.m_UeLocationIsSet = true;
  }
  if (j.find("ueTimeZone") != j.end()) {
    j.at("ueTimeZone").get_to(o.m_UeTimeZone);
    o.m_UeTimeZoneIsSet = true;
  }
  if (j.find("addUeLocation") != j.end()) {
    j.at("addUeLocation").get_to(o.m_AddUeLocation);
    o.m_AddUeLocationIsSet = true;
  }
  if (j.find("assignedEbiList") != j.end()) {
    j.at("assignedEbiList").get_to(o.m_AssignedEbiList);
    o.m_AssignedEbiListIsSet = true;
  }
  if (j.find("failedToAssignEbiList") != j.end()) {
    j.at("failedToAssignEbiList").get_to(o.m_FailedToAssignEbiList);
    o.m_FailedToAssignEbiListIsSet = true;
  }
  if (j.find("releasedEbiList") != j.end()) {
    j.at("releasedEbiList").get_to(o.m_ReleasedEbiList);
    o.m_ReleasedEbiListIsSet = true;
  }
  if (j.find("secondaryRatUsageReport") != j.end()) {
    j.at("secondaryRatUsageReport").get_to(o.m_SecondaryRatUsageReport);
    o.m_SecondaryRatUsageReportIsSet = true;
  }
  if (j.find("secondaryRatUsageInfo") != j.end()) {
    j.at("secondaryRatUsageInfo").get_to(o.m_SecondaryRatUsageInfo);
    o.m_SecondaryRatUsageInfoIsSet = true;
  }
}

std::vector<QosFlowItem>& VsmfUpdatedData::getQosFlowsAddModList() {
  return m_QosFlowsAddModList;
}
bool VsmfUpdatedData::qosFlowsAddModListIsSet() const {
  return m_QosFlowsAddModListIsSet;
}
void VsmfUpdatedData::unsetQosFlowsAddModList() {
  m_QosFlowsAddModListIsSet = false;
}
std::vector<QosFlowItem>& VsmfUpdatedData::getQosFlowsRelList() {
  return m_QosFlowsRelList;
}
bool VsmfUpdatedData::qosFlowsRelListIsSet() const {
  return m_QosFlowsRelListIsSet;
}
void VsmfUpdatedData::unsetQosFlowsRelList() {
  m_QosFlowsRelListIsSet = false;
}
std::vector<QosFlowItem>& VsmfUpdatedData::getQosFlowsFailedtoAddModList() {
  return m_QosFlowsFailedtoAddModList;
}
bool VsmfUpdatedData::qosFlowsFailedtoAddModListIsSet() const {
  return m_QosFlowsFailedtoAddModListIsSet;
}
void VsmfUpdatedData::unsetQosFlowsFailedtoAddModList() {
  m_QosFlowsFailedtoAddModListIsSet = false;
}
std::vector<QosFlowItem>& VsmfUpdatedData::getQosFlowsFailedtoRelList() {
  return m_QosFlowsFailedtoRelList;
}
bool VsmfUpdatedData::qosFlowsFailedtoRelListIsSet() const {
  return m_QosFlowsFailedtoRelListIsSet;
}
void VsmfUpdatedData::unsetQosFlowsFailedtoRelList() {
  m_QosFlowsFailedtoRelListIsSet = false;
}
RefToBinaryData VsmfUpdatedData::getN1SmInfoFromUe() const {
  return m_N1SmInfoFromUe;
}
void VsmfUpdatedData::setN1SmInfoFromUe(RefToBinaryData const& value) {
  m_N1SmInfoFromUe      = value;
  m_N1SmInfoFromUeIsSet = true;
}
bool VsmfUpdatedData::n1SmInfoFromUeIsSet() const {
  return m_N1SmInfoFromUeIsSet;
}
void VsmfUpdatedData::unsetN1SmInfoFromUe() {
  m_N1SmInfoFromUeIsSet = false;
}
RefToBinaryData VsmfUpdatedData::getUnknownN1SmInfo() const {
  return m_UnknownN1SmInfo;
}
void VsmfUpdatedData::setUnknownN1SmInfo(RefToBinaryData const& value) {
  m_UnknownN1SmInfo      = value;
  m_UnknownN1SmInfoIsSet = true;
}
bool VsmfUpdatedData::unknownN1SmInfoIsSet() const {
  return m_UnknownN1SmInfoIsSet;
}
void VsmfUpdatedData::unsetUnknownN1SmInfo() {
  m_UnknownN1SmInfoIsSet = false;
}
UserLocation VsmfUpdatedData::getUeLocation() const {
  return m_UeLocation;
}
void VsmfUpdatedData::setUeLocation(UserLocation const& value) {
  m_UeLocation      = value;
  m_UeLocationIsSet = true;
}
bool VsmfUpdatedData::ueLocationIsSet() const {
  return m_UeLocationIsSet;
}
void VsmfUpdatedData::unsetUeLocation() {
  m_UeLocationIsSet = false;
}
std::string VsmfUpdatedData::getUeTimeZone() const {
  return m_UeTimeZone;
}
void VsmfUpdatedData::setUeTimeZone(std::string const& value) {
  m_UeTimeZone      = value;
  m_UeTimeZoneIsSet = true;
}
bool VsmfUpdatedData::ueTimeZoneIsSet() const {
  return m_UeTimeZoneIsSet;
}
void VsmfUpdatedData::unsetUeTimeZone() {
  m_UeTimeZoneIsSet = false;
}
UserLocation VsmfUpdatedData::getAddUeLocation() const {
  return m_AddUeLocation;
}
void VsmfUpdatedData::setAddUeLocation(UserLocation const& value) {
  m_AddUeLocation      = value;
  m_AddUeLocationIsSet = true;
}
bool VsmfUpdatedData::addUeLocationIsSet() const {
  return m_AddUeLocationIsSet;
}
void VsmfUpdatedData::unsetAddUeLocation() {
  m_AddUeLocationIsSet = false;
}
std::vector<EbiArpMapping>& VsmfUpdatedData::getAssignedEbiList() {
  return m_AssignedEbiList;
}
bool VsmfUpdatedData::assignedEbiListIsSet() const {
  return m_AssignedEbiListIsSet;
}
void VsmfUpdatedData::unsetAssignedEbiList() {
  m_AssignedEbiListIsSet = false;
}
std::vector<int32_t>& VsmfUpdatedData::getFailedToAssignEbiList() {
  return m_FailedToAssignEbiList;
}
bool VsmfUpdatedData::failedToAssignEbiListIsSet() const {
  return m_FailedToAssignEbiListIsSet;
}
void VsmfUpdatedData::unsetFailedToAssignEbiList() {
  m_FailedToAssignEbiListIsSet = false;
}
std::vector<int32_t>& VsmfUpdatedData::getReleasedEbiList() {
  return m_ReleasedEbiList;
}
bool VsmfUpdatedData::releasedEbiListIsSet() const {
  return m_ReleasedEbiListIsSet;
}
void VsmfUpdatedData::unsetReleasedEbiList() {
  m_ReleasedEbiListIsSet = false;
}
std::vector<SecondaryRatUsageReport>&
VsmfUpdatedData::getSecondaryRatUsageReport() {
  return m_SecondaryRatUsageReport;
}
bool VsmfUpdatedData::secondaryRatUsageReportIsSet() const {
  return m_SecondaryRatUsageReportIsSet;
}
void VsmfUpdatedData::unsetSecondaryRatUsageReport() {
  m_SecondaryRatUsageReportIsSet = false;
}
std::vector<SecondaryRatUsageInfo>&
VsmfUpdatedData::getSecondaryRatUsageInfo() {
  return m_SecondaryRatUsageInfo;
}
bool VsmfUpdatedData::secondaryRatUsageInfoIsSet() const {
  return m_SecondaryRatUsageInfoIsSet;
}
void VsmfUpdatedData::unsetSecondaryRatUsageInfo() {
  m_SecondaryRatUsageInfoIsSet = false;
}

}  // namespace oai::model::smf
