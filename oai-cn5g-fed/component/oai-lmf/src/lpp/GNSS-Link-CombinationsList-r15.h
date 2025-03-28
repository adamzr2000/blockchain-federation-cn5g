/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _GNSS_Link_CombinationsList_r15_H_
#define _GNSS_Link_CombinationsList_r15_H_

#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GNSS_Link_Combinations_r15;

/* GNSS-Link-CombinationsList-r15 */
typedef struct GNSS_Link_CombinationsList_r15 {
  A_SEQUENCE_OF(struct GNSS_Link_Combinations_r15) list;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} GNSS_Link_CombinationsList_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_Link_CombinationsList_r15;
extern asn_SET_OF_specifics_t asn_SPC_GNSS_Link_CombinationsList_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_Link_CombinationsList_r15_1[1];
extern asn_per_constraints_t
    asn_PER_type_GNSS_Link_CombinationsList_r15_constr_1;

#ifdef __cplusplus
}
#endif

#endif /* _GNSS_Link_CombinationsList_r15_H_ */
#include <asn_internal.h>
