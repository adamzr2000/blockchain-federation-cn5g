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
 * Point.h
 *
 *
 */

#ifndef Point_H_
#define Point_H_

#include "GeographicalCoordinates.h"
#include "GADShape.h"
#include "SupportedGADShapes.h"
#include <nlohmann/json.hpp>

namespace oai::model::lmf {

/// <summary>
///
/// </summary>
class Point {
 public:
  Point();
  virtual ~Point() = default;

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

  bool operator==(const Point& rhs) const;
  bool operator!=(const Point& rhs) const;

  /////////////////////////////////////////////
  /// Point members

  /// <summary>
  ///
  /// </summary>
  oai::model::lmf::SupportedGADShapes getShape() const;
  void setShape(oai::model::lmf::SupportedGADShapes const& value);
  /// <summary>
  ///
  /// </summary>
  oai::model::lmf::GeographicalCoordinates getPoint() const;
  void setPoint(oai::model::lmf::GeographicalCoordinates const& value);

  friend void to_json(nlohmann::json& j, const Point& o);
  friend void from_json(const nlohmann::json& j, Point& o);

 protected:
  oai::model::lmf::SupportedGADShapes m_Shape;

  oai::model::lmf::GeographicalCoordinates m_Point;
};

}  // namespace oai::model::lmf

#endif /* Point_H_ */
