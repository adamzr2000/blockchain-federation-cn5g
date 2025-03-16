/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _OTDOA_TargetDeviceErrorCauses_H_
#define _OTDOA_TargetDeviceErrorCauses_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum OTDOA_TargetDeviceErrorCauses__cause {
  OTDOA_TargetDeviceErrorCauses__cause_undefined                       = 0,
  OTDOA_TargetDeviceErrorCauses__cause_assistance_data_missing         = 1,
  OTDOA_TargetDeviceErrorCauses__cause_unableToMeasureReferenceCell    = 2,
  OTDOA_TargetDeviceErrorCauses__cause_unableToMeasureAnyNeighbourCell = 3,
  OTDOA_TargetDeviceErrorCauses__cause_attemptedButUnableToMeasureSomeNeighbourCells =
      4
  /*
   * Enumeration is extensible
   */
} e_OTDOA_TargetDeviceErrorCauses__cause;

/* OTDOA-TargetDeviceErrorCauses */
typedef struct OTDOA_TargetDeviceErrorCauses {
  long cause;
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} OTDOA_TargetDeviceErrorCauses_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cause_2;	// (Use
 * -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_OTDOA_TargetDeviceErrorCauses;
extern asn_SEQUENCE_specifics_t asn_SPC_OTDOA_TargetDeviceErrorCauses_specs_1;
extern asn_TYPE_member_t asn_MBR_OTDOA_TargetDeviceErrorCauses_1[1];

#ifdef __cplusplus
}
#endif

#endif /* _OTDOA_TargetDeviceErrorCauses_H_ */
#include <asn_internal.h>
