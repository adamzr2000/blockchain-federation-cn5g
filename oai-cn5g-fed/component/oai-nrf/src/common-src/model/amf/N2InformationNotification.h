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
 * N2InformationNotification.h
 *
 *
 */

#ifndef N2InformationNotification_H_
#define N2InformationNotification_H_

#include "SmfChangeIndication.h"
#include "N2InfoNotifyReason.h"
#include <string>
#include "N2InfoContainer.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace oai::model::amf {

/// <summary>
///
/// </summary>
class N2InformationNotification {
 public:
  N2InformationNotification();
  virtual ~N2InformationNotification();

  void validate();

  /////////////////////////////////////////////
  /// N2InformationNotification members

  /// <summary>
  ///
  /// </summary>
  std::string getN2NotifySubscriptionId() const;
  void setN2NotifySubscriptionId(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  N2InfoContainer getN2InfoContainer() const;
  void setN2InfoContainer(N2InfoContainer const& value);
  bool n2InfoContainerIsSet() const;
  void unsetN2InfoContainer();
  /// <summary>
  ///
  /// </summary>
  std::vector<int32_t>& getToReleaseSessionList();
  bool toReleaseSessionListIsSet() const;
  void unsetToReleaseSessionList();
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
  N2InfoNotifyReason getNotifyReason() const;
  void setNotifyReason(N2InfoNotifyReason const& value);
  bool notifyReasonIsSet() const;
  void unsetNotifyReason();
  /// <summary>
  ///
  /// </summary>
  SmfChangeIndication getSmfChangeInd() const;
  void setSmfChangeInd(SmfChangeIndication const& value);
  bool smfChangeIndIsSet() const;
  void unsetSmfChangeInd();

  friend void to_json(nlohmann::json& j, const N2InformationNotification& o);
  friend void from_json(const nlohmann::json& j, N2InformationNotification& o);

 protected:
  std::string m_N2NotifySubscriptionId;

  N2InfoContainer m_N2InfoContainer;
  bool m_N2InfoContainerIsSet;
  std::vector<int32_t> m_ToReleaseSessionList;
  bool m_ToReleaseSessionListIsSet;
  std::string m_LcsCorrelationId;
  bool m_LcsCorrelationIdIsSet;
  N2InfoNotifyReason m_NotifyReason;
  bool m_NotifyReasonIsSet;
  SmfChangeIndication m_SmfChangeInd;
  bool m_SmfChangeIndIsSet;
};

}  // namespace oai::model::amf

#endif /* N2InformationNotification_H_ */
