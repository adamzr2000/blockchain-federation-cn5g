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
/*
 * SmContextUpdateData.h
 *
 *
 */

#ifndef SmContextUpdateData_H_
#define SmContextUpdateData_H_

#include "MaReleaseIndication.h"
#include "ExemptionInd.h"
#include "NgRanTargetId.h"
#include "RatType.h"
#include "RefToBinaryData.h"
#include <string>
#include "BackupAmfInfo.h"
#include "UpCnxState.h"
#include "N2SmInfoType.h"
#include "PlmnId.h"
#include "Snssai.h"
#include "TraceData.h"
#include <vector>
#include "AccessType.h"
#include "NgApCause.h"
#include "EpsInterworkingIndication.h"
#include "Cause.h"
#include "UserLocation.h"
#include "HoState.h"
#include "PresenceState.h"
#include "Guami.h"
#include <nlohmann/json.hpp>

namespace oai::model::smf {

/// <summary>
///
/// </summary>
class SmContextUpdateData {
 public:
  SmContextUpdateData();
  virtual ~SmContextUpdateData();

  void validate();

  /////////////////////////////////////////////
  /// SmContextUpdateData members

  /// <summary>
  ///
  /// </summary>
  std::string getPei() const;
  void setPei(std::string const& value);
  bool peiIsSet() const;
  void unsetPei();
  /// <summary>
  ///
  /// </summary>
  std::string getServingNfId() const;
  void setServingNfId(std::string const& value);
  bool servingNfIdIsSet() const;
  void unsetServingNfId();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::Guami getGuami() const;
  void setGuami(oai::model::common::Guami const& value);
  bool guamiIsSet() const;
  void unsetGuami();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::PlmnId getServingNetwork() const;
  void setServingNetwork(oai::model::common::PlmnId const& value);
  bool servingNetworkIsSet() const;
  void unsetServingNetwork();
  /// <summary>
  ///
  /// </summary>
  std::vector<oai::model::common::BackupAmfInfo>& getBackupAmfInfo();
  bool backupAmfInfoIsSet() const;
  void unsetBackupAmfInfo();
  /// <summary>
  ///
  /// </summary>
  // AccessType getAnType() const;
  std::string getAnType() const;
  void setAnType(std::string const& value);
  bool anTypeIsSet() const;
  void unsetAnType();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::AccessType getSecondAnType() const;
  void setSecondAnType(oai::model::common::AccessType const& value);
  bool secondAnTypeIsSet() const;
  void unsetSecondAnType();
  /// <summary>
  ///
  /// </summary>
  // RatType getRatType() const;
  std::string getRatType() const;
  void setRatType(std::string const& value);
  bool ratTypeIsSet() const;
  void unsetRatType();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::PresenceState getPresenceInLadn() const;
  void setPresenceInLadn(oai::model::common::PresenceState const& value);
  bool presenceInLadnIsSet() const;
  void unsetPresenceInLadn();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::UserLocation getUeLocation() const;
  void setUeLocation(oai::model::common::UserLocation const& value);
  bool ueLocationIsSet() const;
  void unsetUeLocation();
  /// <summary>
  ///
  /// </summary>
  std::string getUeTimeZone() const;
  void setUeTimeZone(std::string const& value);
  bool ueTimeZoneIsSet() const;
  void unsetUeTimeZone();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::UserLocation getAddUeLocation() const;
  void setAddUeLocation(oai::model::common::UserLocation const& value);
  bool addUeLocationIsSet() const;
  void unsetAddUeLocation();
  /// <summary>
  ///
  /// </summary>
  // UpCnxState getUpCnxState() const;
  std::string getUpCnxState() const;
  void setUpCnxState(std::string const& value);
  bool upCnxStateIsSet() const;
  void unsetUpCnxState();
  /// <summary>
  ///
  /// </summary>
  HoState getHoState() const;
  void setHoState(HoState const& value);
  bool hoStateIsSet() const;
  void unsetHoState();
  /// <summary>
  ///
  /// </summary>
  bool isToBeSwitched() const;
  void setToBeSwitched(bool const value);
  bool toBeSwitchedIsSet() const;
  void unsetToBeSwitched();
  /// <summary>
  ///
  /// </summary>
  bool isFailedToBeSwitched() const;
  void setFailedToBeSwitched(bool const value);
  bool failedToBeSwitchedIsSet() const;
  void unsetFailedToBeSwitched();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::RefToBinaryData getN1SmMsg() const;
  void setN1SmMsg(oai::model::common::RefToBinaryData const& value);
  bool n1SmMsgIsSet() const;
  void unsetN1SmMsg();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::RefToBinaryData getN2SmInfo() const;
  void setN2SmInfo(oai::model::common::RefToBinaryData const& value);
  bool n2SmInfoIsSet() const;
  void unsetN2SmInfo();
  /// <summary>
  ///
  /// </summary>
  // N2SmInfoType getN2SmInfoType() const;
  // void setN2SmInfoType(N2SmInfoType const& value);
  std::string getN2SmInfoType() const;
  void setN2SmInfoType(std::string const& value);

  bool n2SmInfoTypeIsSet() const;
  void unsetN2SmInfoType();
  /// <summary>
  ///
  /// </summary>
  NgRanTargetId getTargetId() const;
  void setTargetId(NgRanTargetId const& value);
  bool targetIdIsSet() const;
  void unsetTargetId();
  /// <summary>
  ///
  /// </summary>
  std::string getTargetServingNfId() const;
  void setTargetServingNfId(std::string const& value);
  bool targetServingNfIdIsSet() const;
  void unsetTargetServingNfId();
  /// <summary>
  ///
  /// </summary>
  std::string getSmContextStatusUri() const;
  void setSmContextStatusUri(std::string const& value);
  bool smContextStatusUriIsSet() const;
  void unsetSmContextStatusUri();
  /// <summary>
  ///
  /// </summary>
  bool isDataForwarding() const;
  void setDataForwarding(bool const value);
  bool dataForwardingIsSet() const;
  void unsetDataForwarding();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string>& getEpsBearerSetup();
  bool epsBearerSetupIsSet() const;
  void unsetEpsBearerSetup();
  /// <summary>
  ///
  /// </summary>
  std::vector<int32_t>& getRevokeEbiList();
  bool revokeEbiListIsSet() const;
  void unsetRevokeEbiList();
  /// <summary>
  ///
  /// </summary>
  bool isRelease() const;
  void setRelease(bool const value);
  bool releaseIsSet() const;
  void unsetRelease();
  /// <summary>
  ///
  /// </summary>
  Cause getCause() const;
  void setCause(Cause const& value);
  bool causeIsSet() const;
  void unsetCause();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::NgApCause getNgApCause() const;
  void setNgApCause(oai::model::common::NgApCause const& value);
  bool ngApCauseIsSet() const;
  void unsetNgApCause();
  /// <summary>
  ///
  /// </summary>
  int32_t get5gMmCauseValue() const;
  void set5gMmCauseValue(int32_t const value);
  bool _5gMmCauseValueIsSet() const;
  void unset_5gMmCauseValue();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::Snssai getSNssai() const;
  void setSNssai(oai::model::common::Snssai const& value);
  bool sNssaiIsSet() const;
  void unsetSNssai();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::TraceData getTraceData() const;
  void setTraceData(oai::model::common::TraceData const& value);
  bool traceDataIsSet() const;
  void unsetTraceData();
  /// <summary>
  ///
  /// </summary>
  EpsInterworkingIndication getEpsInterworkingInd() const;
  void setEpsInterworkingInd(EpsInterworkingIndication const& value);
  bool epsInterworkingIndIsSet() const;
  void unsetEpsInterworkingInd();
  /// <summary>
  ///
  /// </summary>
  bool isAnTypeCanBeChanged() const;
  void setAnTypeCanBeChanged(bool const value);
  bool anTypeCanBeChangedIsSet() const;
  void unsetAnTypeCanBeChanged();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::RefToBinaryData getN2SmInfoExt1() const;
  void setN2SmInfoExt1(oai::model::common::RefToBinaryData const& value);
  bool n2SmInfoExt1IsSet() const;
  void unsetN2SmInfoExt1();
  /// <summary>
  ///
  /// </summary>
  N2SmInfoType getN2SmInfoTypeExt1() const;
  void setN2SmInfoTypeExt1(N2SmInfoType const& value);
  bool n2SmInfoTypeExt1IsSet() const;
  void unsetN2SmInfoTypeExt1();
  /// <summary>
  ///
  /// </summary>
  MaReleaseIndication getMaReleaseInd() const;
  void setMaReleaseInd(MaReleaseIndication const& value);
  bool maReleaseIndIsSet() const;
  void unsetMaReleaseInd();
  /// <summary>
  ///
  /// </summary>
  ExemptionInd getExemptionInd() const;
  void setExemptionInd(ExemptionInd const& value);
  bool exemptionIndIsSet() const;
  void unsetExemptionInd();

  friend void to_json(nlohmann::json& j, const SmContextUpdateData& o);
  friend void from_json(const nlohmann::json& j, SmContextUpdateData& o);

 protected:
  std::string m_Pei;
  bool m_PeiIsSet;
  std::string m_ServingNfId;
  bool m_ServingNfIdIsSet;
  oai::model::common::Guami m_Guami;
  bool m_GuamiIsSet;
  oai::model::common::PlmnId m_ServingNetwork;
  bool m_ServingNetworkIsSet;
  std::vector<oai::model::common::BackupAmfInfo> m_BackupAmfInfo;
  bool m_BackupAmfInfoIsSet;
  std::string m_AnType;
  bool m_AnTypeIsSet;
  oai::model::common::AccessType m_SecondAnType;
  bool m_SecondAnTypeIsSet;
  std::string m_RatType;
  bool m_RatTypeIsSet;
  oai::model::common::PresenceState m_PresenceInLadn;
  bool m_PresenceInLadnIsSet;
  oai::model::common::UserLocation m_UeLocation;
  bool m_UeLocationIsSet;
  std::string m_UeTimeZone;
  bool m_UeTimeZoneIsSet;
  oai::model::common::UserLocation m_AddUeLocation;
  bool m_AddUeLocationIsSet;
  // UpCnxState m_UpCnxState;
  std::string m_UpCnxState;
  bool m_UpCnxStateIsSet;
  HoState m_HoState;
  bool m_HoStateIsSet;
  bool m_ToBeSwitched;
  bool m_ToBeSwitchedIsSet;
  bool m_FailedToBeSwitched;
  bool m_FailedToBeSwitchedIsSet;
  oai::model::common::RefToBinaryData m_N1SmMsg;
  bool m_N1SmMsgIsSet;
  oai::model::common::RefToBinaryData m_N2SmInfo;
  bool m_N2SmInfoIsSet;
  // N2SmInfoType m_N2SmInfoType;
  std::string m_N2SmInfoType;
  bool m_N2SmInfoTypeIsSet;
  NgRanTargetId m_TargetId;
  bool m_TargetIdIsSet;
  std::string m_TargetServingNfId;
  bool m_TargetServingNfIdIsSet;
  std::string m_SmContextStatusUri;
  bool m_SmContextStatusUriIsSet;
  bool m_DataForwarding;
  bool m_DataForwardingIsSet;
  std::vector<std::string> m_EpsBearerSetup;
  bool m_EpsBearerSetupIsSet;
  std::vector<int32_t> m_RevokeEbiList;
  bool m_RevokeEbiListIsSet;
  bool m_Release;
  bool m_ReleaseIsSet;
  Cause m_Cause;
  bool m_CauseIsSet;
  oai::model::common::NgApCause m_NgApCause;
  bool m_NgApCauseIsSet;
  int32_t m__5gMmCauseValue;
  bool m__5gMmCauseValueIsSet;
  oai::model::common::Snssai m_SNssai;
  bool m_SNssaiIsSet;
  oai::model::common::TraceData m_TraceData;
  bool m_TraceDataIsSet;
  EpsInterworkingIndication m_EpsInterworkingInd;
  bool m_EpsInterworkingIndIsSet;
  bool m_AnTypeCanBeChanged;
  bool m_AnTypeCanBeChangedIsSet;
  oai::model::common::RefToBinaryData m_N2SmInfoExt1;
  bool m_N2SmInfoExt1IsSet;
  N2SmInfoType m_N2SmInfoTypeExt1;
  bool m_N2SmInfoTypeExt1IsSet;
  MaReleaseIndication m_MaReleaseInd;
  bool m_MaReleaseIndIsSet;
  ExemptionInd m_ExemptionInd;
  bool m_ExemptionIndIsSet;
};

}  // namespace oai::model::smf

#endif /* SmContextUpdateData_H_ */
