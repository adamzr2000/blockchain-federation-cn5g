/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _GNSS_TargetDeviceErrorCauses_H_
#define _GNSS_TargetDeviceErrorCauses_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NULL.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GNSS_TargetDeviceErrorCauses__cause {
  GNSS_TargetDeviceErrorCauses__cause_undefined                            = 0,
  GNSS_TargetDeviceErrorCauses__cause_thereWereNotEnoughSatellitesReceived = 1,
  GNSS_TargetDeviceErrorCauses__cause_assistanceDataMissing                = 2,
  GNSS_TargetDeviceErrorCauses__cause_notAllRequestedMeasurementsPossible  = 3
  /*
   * Enumeration is extensible
   */
} e_GNSS_TargetDeviceErrorCauses__cause;

/* GNSS-TargetDeviceErrorCauses */
typedef struct GNSS_TargetDeviceErrorCauses {
  long cause;
  NULL_t* fineTimeAssistanceMeasurementsNotPossible; /* OPTIONAL */
  NULL_t* adrMeasurementsNotPossible;                /* OPTIONAL */
  NULL_t* multiFrequencyMeasurementsNotPossible;     /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} GNSS_TargetDeviceErrorCauses_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cause_2;	// (Use
 * -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_TargetDeviceErrorCauses;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSS_TargetDeviceErrorCauses_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_TargetDeviceErrorCauses_1[4];

#ifdef __cplusplus
}
#endif

#endif /* _GNSS_TargetDeviceErrorCauses_H_ */
#include <asn_internal.h>
