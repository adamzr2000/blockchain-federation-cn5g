/**
 * Nudsf_DataRepository
 * Nudsf Data Repository Service.   © 2022, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC).   All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ClientId.h
 *
 * Defines the identity of the NF Consumer
 */

#ifndef ClientId_H_
#define ClientId_H_

#include <string>
#include <nlohmann/json.hpp>

namespace oai::model::udsf {

/// <summary>
/// Defines the identity of the NF Consumer
/// </summary>
class ClientId {
 public:
  ClientId();
  virtual ~ClientId() = default;

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

  bool operator==(const ClientId& rhs) const;
  bool operator!=(const ClientId& rhs) const;

  /////////////////////////////////////////////
  /// ClientId members

  /// <summary>
  /// String uniquely identifying a NF instance. The format of the NF Instance
  /// ID shall be a  Universally Unique Identifier (UUID) version 4, as
  /// described in IETF RFC 4122.
  /// </summary>
  std::string getNfId() const;
  void setNfId(std::string const& value);
  bool nfIdIsSet() const;
  void unsetNfId();
  /// <summary>
  /// NF Set Identifier (see clause 28.12 of 3GPP TS 23.003), formatted as the
  /// following string \&quot;set&lt;Set
  /// ID&gt;.&lt;nftype&gt;set.5gc.mnc&lt;MNC&gt;.mcc&lt;MCC&gt;\&quot;, or
  /// \&quot;set&lt;SetID&gt;.&lt;NFType&gt;set.5gc.nid&lt;NID&gt;.mnc&lt;MNC&gt;.mcc&lt;MCC&gt;\&quot;
  /// with  &lt;MCC&gt; encoded as defined in clause 5.4.2 (\&quot;Mcc\&quot;
  /// data type definition)  &lt;MNC&gt; encoding the Mobile Network Code part
  /// of the PLMN, comprising 3 digits.    If there are only 2 significant
  /// digits in the MNC, one \&quot;0\&quot; digit shall be inserted    at the
  /// left side to fill the 3 digits coding of MNC.  Pattern:
  /// &#39;^[0-9]{3}$&#39; &lt;NFType&gt; encoded as a value defined in
  /// Table 6.1.6.3.3-1 of 3GPP TS 29.510 but    with lower case characters
  /// &lt;Set ID&gt; encoded as a string of characters consisting of alphabetic
  /// characters (A-Z and a-z), digits (0-9) and/or the hyphen (-) and that
  /// shall end with either an alphabetic character or a digit.
  /// </summary>
  std::string getNfSetId() const;
  void setNfSetId(std::string const& value);
  bool nfSetIdIsSet() const;
  void unsetNfSetId();

  friend void to_json(nlohmann::json& j, const ClientId& o);
  friend void from_json(const nlohmann::json& j, ClientId& o);

 protected:
  std::string m_NfId;
  bool m_NfIdIsSet;
  std::string m_NfSetId;
  bool m_NfSetIdIsSet;
};

}  // namespace oai::model::udsf

#endif /* ClientId_H_ */
