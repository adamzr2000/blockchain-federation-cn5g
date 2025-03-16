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
/*
 * LocContextData.h
 *
 *
 */

#ifndef LocContextData_H_
#define LocContextData_H_

#include "AreaEventInfo.h"
#include "Ncgi.h"
#include <string>
#include "PeriodicEventInfo.h"
#include "EventReportMessage.h"
#include <vector>
#include "Ecgi.h"
#include "UELocationInfo.h"
#include "LdrType.h"
#include "EventReportingStatus.h"
#include "LocationQoS.h"
#include "MotionEventInfo.h"
#include "Guami.h"
#include "SupportedGADShapes.h"
#include <nlohmann/json.hpp>

namespace oai::model::lmf {

/// <summary>
///
/// </summary>
class LocContextData {
 public:
  LocContextData();
  virtual ~LocContextData() = default;

  /// <summary>
  /// Validate the current data in the model. Throws a ValidationException on
  /// failure.
  /// </summary>
  void validate() const;

  /// <summary>
  /// Validate the current data in the model. Returns false on error and writes
  /// an error message into the given stringstream.
  /// </summary>
  bool validate(std::stringstream& msg) const;

  /// <summary>
  /// Helper overload for validate. Used when one model stores another model and
  /// calls it's validate. Not meant to be called outside that case.
  /// </summary>
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

  bool operator==(const LocContextData& rhs) const;
  bool operator!=(const LocContextData& rhs) const;

  /////////////////////////////////////////////
  /// LocContextData members

  /// <summary>
  ///
  /// </summary>
  std::string getAmfId() const;
  void setAmfId(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  oai::model::lmf::LocationQoS getLocationQoS() const;
  void setLocationQoS(oai::model::lmf::LocationQoS const& value);
  bool locationQoSIsSet() const;
  void unsetLocationQoS();
  /// <summary>
  ///
  /// </summary>
  std::vector<oai::model::lmf::SupportedGADShapes> getSupportedGADShapes()
      const;
  void setSupportedGADShapes(
      std::vector<oai::model::lmf::SupportedGADShapes> const& value);
  bool supportedGADShapesIsSet() const;
  void unsetSupportedGADShapes();
  /// <summary>
  ///
  /// </summary>
  std::string getSupi() const;
  void setSupi(std::string const& value);
  bool supiIsSet() const;
  void unsetSupi();
  /// <summary>
  ///
  /// </summary>
  std::string getGpsi() const;
  void setGpsi(std::string const& value);
  bool gpsiIsSet() const;
  void unsetGpsi();
  /// <summary>
  ///
  /// </summary>
  oai::model::lmf::LdrType getLdrType() const;
  void setLdrType(oai::model::lmf::LdrType const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getHgmlcCallBackURI() const;
  void setHgmlcCallBackURI(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getLdrReference() const;
  void setLdrReference(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  oai::model::lmf::PeriodicEventInfo getPeriodicEventInfo() const;
  void setPeriodicEventInfo(oai::model::lmf::PeriodicEventInfo const& value);
  bool periodicEventInfoIsSet() const;
  void unsetPeriodicEventInfo();
  /// <summary>
  ///
  /// </summary>
  oai::model::lmf::AreaEventInfo getAreaEventInfo() const;
  void setAreaEventInfo(oai::model::lmf::AreaEventInfo const& value);
  bool areaEventInfoIsSet() const;
  void unsetAreaEventInfo();
  /// <summary>
  ///
  /// </summary>
  oai::model::lmf::MotionEventInfo getMotionEventInfo() const;
  void setMotionEventInfo(oai::model::lmf::MotionEventInfo const& value);
  bool motionEventInfoIsSet() const;
  void unsetMotionEventInfo();
  /// <summary>
  ///
  /// </summary>
  oai::model::lmf::EventReportMessage getEventReportMessage() const;
  void setEventReportMessage(oai::model::lmf::EventReportMessage const& value);
  /// <summary>
  ///
  /// </summary>
  oai::model::lmf::EventReportingStatus getEventReportingStatus() const;
  void setEventReportingStatus(
      oai::model::lmf::EventReportingStatus const& value);
  bool eventReportingStatusIsSet() const;
  void unsetEventReportingStatus();
  /// <summary>
  ///
  /// </summary>
  oai::model::lmf::UELocationInfo getUeLocationInfo() const;
  void setUeLocationInfo(oai::model::lmf::UELocationInfo const& value);
  bool ueLocationInfoIsSet() const;
  void unsetUeLocationInfo();
  /// <summary>
  ///
  /// </summary>
  bool isCIoT5GSOptimisation() const;
  void setCIoT5GSOptimisation(bool const value);
  bool cIoT5GSOptimisationIsSet() const;
  void unsetCIoT5GSOptimisation();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::Ecgi getEcgi() const;
  void setEcgi(oai::model::common::Ecgi const& value);
  bool ecgiIsSet() const;
  void unsetEcgi();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::Ncgi getNcgi() const;
  void setNcgi(oai::model::common::Ncgi const& value);
  bool ncgiIsSet() const;
  void unsetNcgi();
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
  std::string getSupportedFeatures() const;
  void setSupportedFeatures(std::string const& value);
  bool supportedFeaturesIsSet() const;
  void unsetSupportedFeatures();

  friend void to_json(nlohmann::json& j, const LocContextData& o);
  friend void from_json(const nlohmann::json& j, LocContextData& o);

 protected:
  std::string m_AmfId;

  oai::model::lmf::LocationQoS m_LocationQoS;
  bool m_LocationQoSIsSet;
  std::vector<oai::model::lmf::SupportedGADShapes> m_SupportedGADShapes;
  bool m_SupportedGADShapesIsSet;
  std::string m_Supi;
  bool m_SupiIsSet;
  std::string m_Gpsi;
  bool m_GpsiIsSet;
  oai::model::lmf::LdrType m_LdrType;

  std::string m_HgmlcCallBackURI;

  std::string m_LdrReference;

  oai::model::lmf::PeriodicEventInfo m_PeriodicEventInfo;
  bool m_PeriodicEventInfoIsSet;
  oai::model::lmf::AreaEventInfo m_AreaEventInfo;
  bool m_AreaEventInfoIsSet;
  oai::model::lmf::MotionEventInfo m_MotionEventInfo;
  bool m_MotionEventInfoIsSet;
  oai::model::lmf::EventReportMessage m_EventReportMessage;

  oai::model::lmf::EventReportingStatus m_EventReportingStatus;
  bool m_EventReportingStatusIsSet;
  oai::model::lmf::UELocationInfo m_UeLocationInfo;
  bool m_UeLocationInfoIsSet;
  bool m_CIoT5GSOptimisation;
  bool m_CIoT5GSOptimisationIsSet;
  oai::model::common::Ecgi m_Ecgi;
  bool m_EcgiIsSet;
  oai::model::common::Ncgi m_Ncgi;
  bool m_NcgiIsSet;
  oai::model::common::Guami m_Guami;
  bool m_GuamiIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
};

}  // namespace oai::model::lmf

#endif /* LocContextData_H_ */
