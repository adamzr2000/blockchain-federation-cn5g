/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _BDS_ClockModel_r12_H_
#define _BDS_ClockModel_r12_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BDS-ClockModel-r12 */
typedef struct BDS_ClockModel_r12 {
  long bdsAODC_r12;
  long bdsToc_r12;
  long bdsA0_r12;
  long bdsA1_r12;
  long bdsA2_r12;
  long bdsTgd1_r12;
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} BDS_ClockModel_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BDS_ClockModel_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_BDS_ClockModel_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_BDS_ClockModel_r12_1[6];

#ifdef __cplusplus
}
#endif

#endif /* _BDS_ClockModel_r12_H_ */
#include <asn_internal.h>
