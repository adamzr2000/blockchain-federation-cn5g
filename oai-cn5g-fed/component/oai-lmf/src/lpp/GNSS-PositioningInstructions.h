/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _GNSS_PositioningInstructions_H_
#define _GNSS_PositioningInstructions_H_

#include <asn_application.h>

/* Including external dependencies */
#include "GNSS-ID-Bitmap.h"
#include <BOOLEAN.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GNSS_PositioningInstructions__ext1__ha_GNSS_Req_r15 {
  GNSS_PositioningInstructions__ext1__ha_GNSS_Req_r15_true = 0
} e_GNSS_PositioningInstructions__ext1__ha_GNSS_Req_r15;

/* GNSS-PositioningInstructions */
typedef struct GNSS_PositioningInstructions {
  GNSS_ID_Bitmap_t gnss_Methods;
  BOOLEAN_t fineTimeAssistanceMeasReq;
  BOOLEAN_t adrMeasReq;
  BOOLEAN_t multiFreqMeasReq;
  BOOLEAN_t assistanceAvailability;
  /*
   * This type is extensible,
   * possible extensions are below.
   */
  struct GNSS_PositioningInstructions__ext1 {
    long* ha_GNSS_Req_r15; /* OPTIONAL */

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } * ext1;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} GNSS_PositioningInstructions_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ha_GNSS_Req_r15_9;	// (Use
 * -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_PositioningInstructions;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSS_PositioningInstructions_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_PositioningInstructions_1[6];

#ifdef __cplusplus
}
#endif

#endif /* _GNSS_PositioningInstructions_H_ */
#include <asn_internal.h>
