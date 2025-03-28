/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2023, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.9
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * FlowDirectionRm.h
 *
 *
 */

#ifndef FlowDirectionRm_H_
#define FlowDirectionRm_H_

#include "FlowDirection.h"
#include "NullValue.h"
#include <nlohmann/json.hpp>

namespace oai::model::pcf {

/// <summary>
///
/// </summary>
class FlowDirectionRm : public FlowDirection {
 public:
  FlowDirectionRm();
  virtual ~FlowDirectionRm() = default;

  friend void to_json(nlohmann::json& j, const FlowDirectionRm& o);
  friend void from_json(const nlohmann::json& j, FlowDirectionRm& o);
};

}  // namespace oai::model::pcf

#endif /* FlowDirectionRm_H_ */
