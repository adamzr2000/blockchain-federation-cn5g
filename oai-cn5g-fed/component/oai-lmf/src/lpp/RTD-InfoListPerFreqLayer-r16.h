/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _RTD_InfoListPerFreqLayer_r16_H_
#define _RTD_InfoListPerFreqLayer_r16_H_

#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RTD_InfoElement_r16;

/* RTD-InfoListPerFreqLayer-r16 */
typedef struct RTD_InfoListPerFreqLayer_r16 {
  A_SEQUENCE_OF(struct RTD_InfoElement_r16) list;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} RTD_InfoListPerFreqLayer_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RTD_InfoListPerFreqLayer_r16;
extern asn_SET_OF_specifics_t asn_SPC_RTD_InfoListPerFreqLayer_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_RTD_InfoListPerFreqLayer_r16_1[1];
extern asn_per_constraints_t asn_PER_type_RTD_InfoListPerFreqLayer_r16_constr_1;

#ifdef __cplusplus
}
#endif

#endif /* _RTD_InfoListPerFreqLayer_r16_H_ */
#include <asn_internal.h>
