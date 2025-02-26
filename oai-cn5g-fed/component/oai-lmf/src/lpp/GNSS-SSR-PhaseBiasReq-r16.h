/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _GNSS_SSR_PhaseBiasReq_r16_H_
#define _GNSS_SSR_PhaseBiasReq_r16_H_

#include <asn_application.h>

/* Including external dependencies */
#include "GNSS-SignalIDs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GNSS_NavListInfo_r15;

/* GNSS-SSR-PhaseBiasReq-r16 */
typedef struct GNSS_SSR_PhaseBiasReq_r16 {
  GNSS_SignalIDs_t signal_and_tracking_mode_ID_Map_r16;
  struct GNSS_NavListInfo_r15* storedNavList_r16; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} GNSS_SSR_PhaseBiasReq_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_SSR_PhaseBiasReq_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSS_SSR_PhaseBiasReq_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_SSR_PhaseBiasReq_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif /* _GNSS_SSR_PhaseBiasReq_r16_H_ */
#include <asn_internal.h>
