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
/*
 * N1N2MessageTransferReqData.h
 *
 *
 */

#ifndef N1N2MessageTransferReqData_H_
#define N1N2MessageTransferReqData_H_

#include "N1MessageContainer.h"
#include "RefToBinaryData.h"
#include <string>
#include "N2InfoContainer.h"
#include "AccessType.h"
#include "Arp.h"
#include "AreaOfValidity.h"
#include "Guami.h"
#include <nlohmann/json.hpp>

namespace oai::model::lmf {

/// <summary>
///
/// </summary>
class N1N2MessageTransferReqData {
 public:
  N1N2MessageTransferReqData();
  virtual ~N1N2MessageTransferReqData() = default;

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

  bool operator==(const N1N2MessageTransferReqData& rhs) const;
  bool operator!=(const N1N2MessageTransferReqData& rhs) const;

  /////////////////////////////////////////////
  /// N1N2MessageTransferReqData members

  /// <summary>
  ///
  /// </summary>
  oai::model::lmf::N1MessageContainer getN1MessageContainer() const;
  void setN1MessageContainer(oai::model::lmf::N1MessageContainer const& value);
  bool n1MessageContainerIsSet() const;
  void unsetN1MessageContainer();
  /// <summary>
  ///
  /// </summary>
  oai::model::lmf::N2InfoContainer getN2InfoContainer() const;
  void setN2InfoContainer(oai::model::lmf::N2InfoContainer const& value);
  bool n2InfoContainerIsSet() const;
  void unsetN2InfoContainer();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::RefToBinaryData getMtData() const;
  void setMtData(oai::model::common::RefToBinaryData const& value);
  bool mtDataIsSet() const;
  void unsetMtData();
  /// <summary>
  ///
  /// </summary>
  bool isSkipInd() const;
  void setSkipInd(bool const value);
  bool skipIndIsSet() const;
  void unsetSkipInd();
  /// <summary>
  ///
  /// </summary>
  bool isLastMsgIndication() const;
  void setLastMsgIndication(bool const value);
  bool lastMsgIndicationIsSet() const;
  void unsetLastMsgIndication();
  /// <summary>
  ///
  /// </summary>
  int32_t getPduSessionId() const;
  void setPduSessionId(int32_t const value);
  bool pduSessionIdIsSet() const;
  void unsetPduSessionId();
  /// <summary>
  ///
  /// </summary>
  std::string getLcsCorrelationId() const;
  void setLcsCorrelationId(std::string const& value);
  bool lcsCorrelationIdIsSet() const;
  void unsetLcsCorrelationId();
  /// <summary>
  ///
  /// </summary>
  int32_t getPpi() const;
  void setPpi(int32_t const value);
  bool ppiIsSet() const;
  void unsetPpi();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::Arp getArp() const;
  void setArp(oai::model::common::Arp const& value);
  bool arpIsSet() const;
  void unsetArp();
  /// <summary>
  ///
  /// </summary>
  int32_t getR5qi() const;
  void setR5qi(int32_t const value);
  bool r5qiIsSet() const;
  void unsetr_5qi();
  /// <summary>
  ///
  /// </summary>
  std::string getN1n2FailureTxfNotifURI() const;
  void setN1n2FailureTxfNotifURI(std::string const& value);
  bool n1n2FailureTxfNotifURIIsSet() const;
  void unsetN1n2FailureTxfNotifURI();
  /// <summary>
  ///
  /// </summary>
  bool isSmfReallocationInd() const;
  void setSmfReallocationInd(bool const value);
  bool smfReallocationIndIsSet() const;
  void unsetSmfReallocationInd();
  /// <summary>
  ///
  /// </summary>
  oai::model::lmf::AreaOfValidity getAreaOfValidity() const;
  void setAreaOfValidity(oai::model::lmf::AreaOfValidity const& value);
  bool areaOfValidityIsSet() const;
  void unsetAreaOfValidity();
  /// <summary>
  ///
  /// </summary>
  std::string getSupportedFeatures() const;
  void setSupportedFeatures(std::string const& value);
  bool supportedFeaturesIsSet() const;
  void unsetSupportedFeatures();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::Guami getOldGuami() const;
  void setOldGuami(oai::model::common::Guami const& value);
  bool oldGuamiIsSet() const;
  void unsetOldGuami();
  /// <summary>
  ///
  /// </summary>
  bool isMaAcceptedInd() const;
  void setMaAcceptedInd(bool const value);
  bool maAcceptedIndIsSet() const;
  void unsetMaAcceptedInd();
  /// <summary>
  ///
  /// </summary>
  bool isExtBufSupport() const;
  void setExtBufSupport(bool const value);
  bool extBufSupportIsSet() const;
  void unsetExtBufSupport();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::AccessType getTargetAccess() const;
  void setTargetAccess(oai::model::common::AccessType const& value);
  bool targetAccessIsSet() const;
  void unsetTargetAccess();

  friend void to_json(nlohmann::json& j, const N1N2MessageTransferReqData& o);
  friend void from_json(const nlohmann::json& j, N1N2MessageTransferReqData& o);

 protected:
  oai::model::lmf::N1MessageContainer m_N1MessageContainer;
  bool m_N1MessageContainerIsSet;
  oai::model::lmf::N2InfoContainer m_N2InfoContainer;
  bool m_N2InfoContainerIsSet;
  oai::model::common::RefToBinaryData m_MtData;
  bool m_MtDataIsSet;
  bool m_SkipInd;
  bool m_SkipIndIsSet;
  bool m_LastMsgIndication;
  bool m_LastMsgIndicationIsSet;
  int32_t m_PduSessionId;
  bool m_PduSessionIdIsSet;
  std::string m_LcsCorrelationId;
  bool m_LcsCorrelationIdIsSet;
  int32_t m_Ppi;
  bool m_PpiIsSet;
  oai::model::common::Arp m_Arp;
  bool m_ArpIsSet;
  int32_t m_r_5qi;
  bool m_r_5qiIsSet;
  std::string m_N1n2FailureTxfNotifURI;
  bool m_N1n2FailureTxfNotifURIIsSet;
  bool m_SmfReallocationInd;
  bool m_SmfReallocationIndIsSet;
  oai::model::lmf::AreaOfValidity m_AreaOfValidity;
  bool m_AreaOfValidityIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
  oai::model::common::Guami m_OldGuami;
  bool m_OldGuamiIsSet;
  bool m_MaAcceptedInd;
  bool m_MaAcceptedIndIsSet;
  bool m_ExtBufSupport;
  bool m_ExtBufSupportIsSet;
  oai::model::common::AccessType m_TargetAccess;
  bool m_TargetAccessIsSet;
};

}  // namespace oai::model::lmf

#endif /* N1N2MessageTransferReqData_H_ */
