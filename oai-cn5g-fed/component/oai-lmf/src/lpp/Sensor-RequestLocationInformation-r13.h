/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _Sensor_RequestLocationInformation_r13_H_
#define _Sensor_RequestLocationInformation_r13_H_

#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Sensor-RequestLocationInformation-r13 */
typedef struct Sensor_RequestLocationInformation_r13 {
  BOOLEAN_t uncompensatedBarometricPressureReq_r13;
  /*
   * This type is extensible,
   * possible extensions are below.
   */
  struct Sensor_RequestLocationInformation_r13__ext1 {
    BOOLEAN_t* assistanceAvailability_r14; /* OPTIONAL */

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } * ext1;
  struct Sensor_RequestLocationInformation_r13__ext2 {
    BOOLEAN_t* sensor_MotionInformationReq_r15; /* OPTIONAL */

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } * ext2;
  struct Sensor_RequestLocationInformation_r13__ext3 {
    BOOLEAN_t* adjustmentReq_r16; /* OPTIONAL */

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } * ext3;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} Sensor_RequestLocationInformation_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Sensor_RequestLocationInformation_r13;
extern asn_SEQUENCE_specifics_t
    asn_SPC_Sensor_RequestLocationInformation_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_Sensor_RequestLocationInformation_r13_1[4];

#ifdef __cplusplus
}
#endif

#endif /* _Sensor_RequestLocationInformation_r13_H_ */
#include <asn_internal.h>
