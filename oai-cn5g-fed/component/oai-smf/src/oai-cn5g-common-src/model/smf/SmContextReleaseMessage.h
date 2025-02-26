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
 * Inline_object.h
 *
 *
 */

#ifndef Sm_Context_Release_Message_H_
#define Sm_Context_Release_Message_H_

#include "SmContextReleaseData.h"
#include <string>
#include <nlohmann/json.hpp>

namespace oai::model::smf {

/// <summary>
///
/// </summary>
class SmContextReleaseMessage {
 public:
  SmContextReleaseMessage();
  virtual ~SmContextReleaseMessage();

  void validate();

  /////////////////////////////////////////////
  /// Inline_object members

  /// <summary>
  ///
  /// </summary>
  SmContextReleaseData getJsonData() const;
  void setJsonData(SmContextReleaseData const& value);
  bool jsonDataIsSet() const;
  void unsetJsonData();

  /// </summary>
  std::string getBinaryDataN2SmInformation() const;
  void setBinaryDataN2SmInformation(std::string const& value);
  bool binaryDataN2SmInformationIsSet() const;
  void unsetBinaryDataN2SmInformation();

  friend void to_json(nlohmann::json& j, const SmContextReleaseMessage& o);
  friend void from_json(const nlohmann::json& j, SmContextReleaseMessage& o);

 protected:
  SmContextReleaseData m_JsonData;
  bool m_JsonDataIsSet;
  std::string m_BinaryDataN2SmInformation;
  bool m_BinaryDataN2SmInformationIsSet;
};

}  // namespace oai::model::smf

#endif /* Sm_Context_Release_Message_H_ */
