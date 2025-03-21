/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _A_GNSS_ProvideCapabilities_H_
#define _A_GNSS_ProvideCapabilities_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum A_GNSS_ProvideCapabilities__ext1__idleStateForMeasurements_r14 {
  A_GNSS_ProvideCapabilities__ext1__idleStateForMeasurements_r14_required = 0
} e_A_GNSS_ProvideCapabilities__ext1__idleStateForMeasurements_r14;
typedef enum A_GNSS_ProvideCapabilities__ext2__periodicAssistanceData_r15 {
  A_GNSS_ProvideCapabilities__ext2__periodicAssistanceData_r15_solicited   = 0,
  A_GNSS_ProvideCapabilities__ext2__periodicAssistanceData_r15_unsolicited = 1
} e_A_GNSS_ProvideCapabilities__ext2__periodicAssistanceData_r15;

/* Forward declarations */
struct GNSS_SupportList;
struct AssistanceDataSupportList;
struct LocationCoordinateTypes;
struct VelocityTypes;
struct PositioningModes;

/* A-GNSS-ProvideCapabilities */
typedef struct A_GNSS_ProvideCapabilities {
  struct GNSS_SupportList* gnss_SupportList;                   /* OPTIONAL */
  struct AssistanceDataSupportList* assistanceDataSupportList; /* OPTIONAL */
  struct LocationCoordinateTypes* locationCoordinateTypes;     /* OPTIONAL */
  struct VelocityTypes* velocityTypes;                         /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */
  struct A_GNSS_ProvideCapabilities__ext1 {
    struct PositioningModes* periodicalReportingNotSupported_r14; /* OPTIONAL */
    long* idleStateForMeasurements_r14;                           /* OPTIONAL */

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } * ext1;
  struct A_GNSS_ProvideCapabilities__ext2 {
    BIT_STRING_t* periodicAssistanceData_r15; /* OPTIONAL */

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } * ext2;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} A_GNSS_ProvideCapabilities_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_idleStateForMeasurements_r14_9;	//
 * (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_A_GNSS_ProvideCapabilities;
extern asn_SEQUENCE_specifics_t asn_SPC_A_GNSS_ProvideCapabilities_specs_1;
extern asn_TYPE_member_t asn_MBR_A_GNSS_ProvideCapabilities_1[6];

#ifdef __cplusplus
}
#endif

#endif /* _A_GNSS_ProvideCapabilities_H_ */
#include <asn_internal.h>
