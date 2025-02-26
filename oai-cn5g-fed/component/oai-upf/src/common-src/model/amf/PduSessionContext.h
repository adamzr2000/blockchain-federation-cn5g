/**
 * Namf_Communication
 * AMF Communication Service © 2019, 3GPP Organizational Partners (ARIB, ATIS,
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
 * PduSessionContext.h
 *
 *
 */

#ifndef PduSessionContext_H_
#define PduSessionContext_H_

#include <string>
#include "EbiArpMapping_2.h"
#include "Snssai.h"
#include <vector>
#include "AccessType.h"
#include <nlohmann/json.hpp>

namespace oai::model::amf {

/// <summary>
///
/// </summary>
class PduSessionContext {
 public:
  PduSessionContext();
  virtual ~PduSessionContext();

  void validate();

  /////////////////////////////////////////////
  /// PduSessionContext members

  /// <summary>
  ///
  /// </summary>
  int32_t getPduSessionId() const;
  void setPduSessionId(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  std::string getSmContextRef() const;
  void setSmContextRef(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  oai::model::common::Snssai getSNssai() const;
  void setSNssai(oai::model::common::Snssai const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getDnn() const;
  void setDnn(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  oai::model::common::AccessType getAccessType() const;
  void setAccessType(oai::model::common::AccessType const& value);
  /// <summary>
  ///
  /// </summary>
  std::vector<EbiArpMapping_2>& getAllocatedEbiList();
  bool allocatedEbiListIsSet() const;
  void unsetAllocatedEbiList();
  /// <summary>
  ///
  /// </summary>
  std::string getHsmfId() const;
  void setHsmfId(std::string const& value);
  bool hsmfIdIsSet() const;
  void unsetHsmfId();
  /// <summary>
  ///
  /// </summary>
  std::string getVsmfId() const;
  void setVsmfId(std::string const& value);
  bool vsmfIdIsSet() const;
  void unsetVsmfId();
  /// <summary>
  ///
  /// </summary>
  std::string getNsInstance() const;
  void setNsInstance(std::string const& value);
  bool nsInstanceIsSet() const;
  void unsetNsInstance();
  /// <summary>
  ///
  /// </summary>
  std::string getSmfServiceInstanceId() const;
  void setSmfServiceInstanceId(std::string const& value);
  bool smfServiceInstanceIdIsSet() const;
  void unsetSmfServiceInstanceId();

  friend void to_json(nlohmann::json& j, const PduSessionContext& o);
  friend void from_json(const nlohmann::json& j, PduSessionContext& o);

 protected:
  int32_t m_PduSessionId;

  std::string m_SmContextRef;

  oai::model::common::Snssai m_SNssai;

  std::string m_Dnn;

  oai::model::common::AccessType m_AccessType;

  std::vector<EbiArpMapping_2> m_AllocatedEbiList;
  bool m_AllocatedEbiListIsSet;
  std::string m_HsmfId;
  bool m_HsmfIdIsSet;
  std::string m_VsmfId;
  bool m_VsmfIdIsSet;
  std::string m_NsInstance;
  bool m_NsInstanceIsSet;
  std::string m_SmfServiceInstanceId;
  bool m_SmfServiceInstanceIdIsSet;
};

}  // namespace oai::model::amf

#endif /* PduSessionContext_H_ */
