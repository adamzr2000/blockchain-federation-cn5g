/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */
/**
 * Nudr_DataRepository API OpenAPI file
 * Unified Data Repository Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * PolicyDataChangeNotification.h
 *
 * Contains changed policy data for which notification was requested.
 */

#ifndef PolicyDataChangeNotification_H_
#define PolicyDataChangeNotification_H_

#include <map>
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "AmPolicyData.h"
#include "BdtData.h"
#include "NotificationItem.h"
#include "OperatorSpecificDataContainer.h"
#include "PlmnId.h"
#include "SmPolicyData.h"
#include "SponsorConnectivityData.h"
#include "UePolicySet.h"
#include "UsageMonData.h"

namespace oai::udr::model {

/// <summary>
/// Contains changed policy data for which notification was requested.
/// </summary>
class PolicyDataChangeNotification {
 public:
  PolicyDataChangeNotification();
  virtual ~PolicyDataChangeNotification();

  void validate();

  /////////////////////////////////////////////
  /// PolicyDataChangeNotification members

  /// <summary>
  ///
  /// </summary>
  AmPolicyData getAmPolicyData() const;
  void setAmPolicyData(AmPolicyData const& value);
  bool amPolicyDataIsSet() const;
  void unsetAmPolicyData();
  /// <summary>
  ///
  /// </summary>
  UePolicySet getUePolicySet() const;
  void setUePolicySet(UePolicySet const& value);
  bool uePolicySetIsSet() const;
  void unsetUePolicySet();
  /// <summary>
  ///
  /// </summary>
  UePolicySet getPlmnUePolicySet() const;
  void setPlmnUePolicySet(UePolicySet const& value);
  bool plmnUePolicySetIsSet() const;
  void unsetPlmnUePolicySet();
  /// <summary>
  ///
  /// </summary>
  SmPolicyData getSmPolicyData() const;
  void setSmPolicyData(SmPolicyData const& value);
  bool smPolicyDataIsSet() const;
  void unsetSmPolicyData();
  /// <summary>
  ///
  /// </summary>
  UsageMonData getUsageMonData() const;
  void setUsageMonData(UsageMonData const& value);
  bool usageMonDataIsSet() const;
  void unsetUsageMonData();
  /// <summary>
  ///
  /// </summary>
  SponsorConnectivityData getSponsorConnectivityData() const;
  void setSponsorConnectivityData(SponsorConnectivityData const& value);
  bool sponsorConnectivityDataIsSet() const;
  void unsetSponsorConnectivityData();
  /// <summary>
  ///
  /// </summary>
  BdtData getBdtData() const;
  void setBdtData(BdtData const& value);
  bool bdtDataIsSet() const;
  void unsetBdtData();
  /// <summary>
  ///
  /// </summary>
  OperatorSpecificDataContainer getOpSpecData() const;
  void setOpSpecData(OperatorSpecificDataContainer const& value);
  bool opSpecDataIsSet() const;
  void unsetOpSpecData();
  /// <summary>
  ///
  /// </summary>
  std::map<std::string, OperatorSpecificDataContainer>& getOpSpecDataMap();
  void setOpSpecDataMap(
      std::map<std::string, OperatorSpecificDataContainer> const& value);
  bool opSpecDataMapIsSet() const;
  void unsetOpSpecDataMap();
  /// <summary>
  ///
  /// </summary>
  std::string getUeId() const;
  void setUeId(std::string const& value);
  bool ueIdIsSet() const;
  void unsetUeId();
  /// <summary>
  ///
  /// </summary>
  std::string getSponsorId() const;
  void setSponsorId(std::string const& value);
  bool sponsorIdIsSet() const;
  void unsetSponsorId();
  /// <summary>
  /// string identifying a BDT Reference ID as defined in subclause 5.3.3 of
  /// 3GPP TS 29.154.
  /// </summary>
  std::string getBdtRefId() const;
  void setBdtRefId(std::string const& value);
  bool bdtRefIdIsSet() const;
  void unsetBdtRefId();
  /// <summary>
  ///
  /// </summary>
  std::string getUsageMonId() const;
  void setUsageMonId(std::string const& value);
  bool usageMonIdIsSet() const;
  void unsetUsageMonId();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::PlmnId getPlmnId() const;
  void setPlmnId(oai::model::common::PlmnId const& value);
  bool plmnIdIsSet() const;
  void unsetPlmnId();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string>& getDelResources();
  void setDelResources(std::vector<std::string> const& value);
  bool delResourcesIsSet() const;
  void unsetDelResources();
  /// <summary>
  ///
  /// </summary>
  std::string getNotifId() const;
  void setNotifId(std::string const& value);
  bool notifIdIsSet() const;
  void unsetNotifId();
  /// <summary>
  ///
  /// </summary>
  std::vector<NotificationItem>& getReportedFragments();
  void setReportedFragments(std::vector<NotificationItem> const& value);
  bool reportedFragmentsIsSet() const;
  void unsetReportedFragments();

  friend void to_json(nlohmann::json& j, const PolicyDataChangeNotification& o);
  friend void from_json(
      const nlohmann::json& j, PolicyDataChangeNotification& o);

 protected:
  AmPolicyData m_AmPolicyData;
  bool m_AmPolicyDataIsSet;
  UePolicySet m_UePolicySet;
  bool m_UePolicySetIsSet;
  UePolicySet m_PlmnUePolicySet;
  bool m_PlmnUePolicySetIsSet;
  SmPolicyData m_SmPolicyData;
  bool m_SmPolicyDataIsSet;
  UsageMonData m_UsageMonData;
  bool m_UsageMonDataIsSet;
  SponsorConnectivityData m_SponsorConnectivityData;
  bool m_SponsorConnectivityDataIsSet;
  BdtData m_BdtData;
  bool m_BdtDataIsSet;
  OperatorSpecificDataContainer m_OpSpecData;
  bool m_OpSpecDataIsSet;
  std::map<std::string, OperatorSpecificDataContainer> m_OpSpecDataMap;
  bool m_OpSpecDataMapIsSet;
  std::string m_UeId;
  bool m_UeIdIsSet;
  std::string m_SponsorId;
  bool m_SponsorIdIsSet;
  std::string m_BdtRefId;
  bool m_BdtRefIdIsSet;
  std::string m_UsageMonId;
  bool m_UsageMonIdIsSet;
  oai::model::common::PlmnId m_PlmnId;
  bool m_PlmnIdIsSet;
  std::vector<std::string> m_DelResources;
  bool m_DelResourcesIsSet;
  std::string m_NotifId;
  bool m_NotifIdIsSet;
  std::vector<NotificationItem> m_ReportedFragments;
  bool m_ReportedFragmentsIsSet;
};

}  // namespace oai::udr::model

#endif /* PolicyDataChangeNotification_H_ */
