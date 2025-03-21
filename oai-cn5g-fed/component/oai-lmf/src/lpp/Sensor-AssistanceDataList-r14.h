/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _Sensor_AssistanceDataList_r14_H_
#define _Sensor_AssistanceDataList_r14_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "PressureValidityPeriod-v1520.h"
#include <constr_SEQUENCE.h>
#include "PressureValidityArea-v1520.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EllipsoidPointWithAltitudeAndUncertaintyEllipsoid;

/* Sensor-AssistanceDataList-r14 */
typedef struct Sensor_AssistanceDataList_r14 {
  long refPressure_r14;
  struct EllipsoidPointWithAltitudeAndUncertaintyEllipsoid*
      refPosition_r14;      /* OPTIONAL */
  long* refTemperature_r14; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */
  struct Sensor_AssistanceDataList_r14__ext1 {
    struct Sensor_AssistanceDataList_r14__ext1__period_v1520 {
      PressureValidityPeriod_v1520_t pressureValidityPeriod_v1520;
      long* referencePressureRate_v1520; /* OPTIONAL */
      /*
       * This type is extensible,
       * possible extensions are below.
       */

      /* Context for parsing across buffer boundaries */
      asn_struct_ctx_t _asn_ctx;
    } * period_v1520;
    struct Sensor_AssistanceDataList_r14__ext1__area_v1520 {
      PressureValidityArea_v1520_t pressureValidityArea_v1520;
      long* gN_pressure_v1520; /* OPTIONAL */
      long* gE_pressure_v1520; /* OPTIONAL */
      /*
       * This type is extensible,
       * possible extensions are below.
       */

      /* Context for parsing across buffer boundaries */
      asn_struct_ctx_t _asn_ctx;
    } * area_v1520;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } * ext1;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} Sensor_AssistanceDataList_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Sensor_AssistanceDataList_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_Sensor_AssistanceDataList_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_Sensor_AssistanceDataList_r14_1[4];

#ifdef __cplusplus
}
#endif

#endif /* _Sensor_AssistanceDataList_r14_H_ */
#include <asn_internal.h>
