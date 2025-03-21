/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _GridIonList_r12_H_
#define _GridIonList_r12_H_

#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GridIonElement_r12;

/* GridIonList-r12 */
typedef struct GridIonList_r12 {
  A_SEQUENCE_OF(struct GridIonElement_r12) list;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} GridIonList_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GridIonList_r12;
extern asn_SET_OF_specifics_t asn_SPC_GridIonList_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_GridIonList_r12_1[1];
extern asn_per_constraints_t asn_PER_type_GridIonList_r12_constr_1;

#ifdef __cplusplus
}
#endif

#endif /* _GridIonList_r12_H_ */
#include <asn_internal.h>
