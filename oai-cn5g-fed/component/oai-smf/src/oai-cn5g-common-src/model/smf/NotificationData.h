/**
 * NRF NFManagement Service
 * NRF NFManagement Service.   © 2022, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC).   All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.8
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * NotificationData.h
 *
 * Data sent in notifications from NRF to subscribed NF Instances
 */

#ifndef NotificationData_H_
#define NotificationData_H_

#include "NFProfile.h"
#include "ChangeItem.h"
#include "ConditionEventType.h"
#include <string>
#include "NotificationEventType.h"
#include <vector>
#include <nlohmann/json.hpp>

// TODO move to common-src (NRF model)
namespace oai::model::smf {

/// <summary>
/// Data sent in notifications from NRF to subscribed NF Instances
/// </summary>
class NotificationData {
 public:
  NotificationData();
  virtual ~NotificationData() = default;

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

  bool operator==(const NotificationData& rhs) const;
  bool operator!=(const NotificationData& rhs) const;

  /////////////////////////////////////////////
  /// NotificationData members

  /// <summary>
  ///
  /// </summary>
  oai::model::smf::NotificationEventType getEvent() const;
  void setEvent(oai::model::smf::NotificationEventType const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getNfInstanceUri() const;
  void setNfInstanceUri(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  oai::model::smf::NFProfile getNfProfile() const;
  void setNfProfile(oai::model::smf::NFProfile const& value);
  bool nfProfileIsSet() const;
  void unsetNfProfile();
  /// <summary>
  ///
  /// </summary>
  std::vector<oai::model::common::ChangeItem> getProfileChanges() const;
  void setProfileChanges(
      std::vector<oai::model::common::ChangeItem> const& value);
  bool profileChangesIsSet() const;
  void unsetProfileChanges();
  /// <summary>
  ///
  /// </summary>
  oai::model::smf::ConditionEventType getConditionEvent() const;
  void setConditionEvent(oai::model::smf::ConditionEventType const& value);
  bool conditionEventIsSet() const;
  void unsetConditionEvent();

  friend void to_json(nlohmann::json& j, const NotificationData& o);
  friend void from_json(const nlohmann::json& j, NotificationData& o);

 protected:
  oai::model::smf::NotificationEventType m_Event;

  std::string m_NfInstanceUri;

  oai::model::smf::NFProfile m_NfProfile;
  bool m_NfProfileIsSet;
  std::vector<oai::model::common::ChangeItem> m_ProfileChanges;
  bool m_ProfileChangesIsSet;
  oai::model::smf::ConditionEventType m_ConditionEvent;
  bool m_ConditionEventIsSet;
};

}  // namespace oai::model::smf

#endif /* NotificationData_H_ */
