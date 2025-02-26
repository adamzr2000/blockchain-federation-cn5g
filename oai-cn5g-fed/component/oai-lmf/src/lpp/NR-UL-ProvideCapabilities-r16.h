/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _NR_UL_ProvideCapabilities_r16_H_
#define _NR_UL_ProvideCapabilities_r16_H_

#include <asn_application.h>

/* Including external dependencies */
#include "NR-UL-SRS-Capability-r16.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR-UL-ProvideCapabilities-r16 */
typedef struct NR_UL_ProvideCapabilities_r16 {
  NR_UL_SRS_Capability_r16_t nr_UL_SRS_Capability_r16;
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} NR_UL_ProvideCapabilities_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_UL_ProvideCapabilities_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_UL_ProvideCapabilities_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_UL_ProvideCapabilities_r16_1[1];

#ifdef __cplusplus
}
#endif

#endif /* _NR_UL_ProvideCapabilities_r16_H_ */
#include <asn_internal.h>
