/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#ifndef _ResultSS_RSRQ_PerSSB_H_
#define _ResultSS_RSRQ_PerSSB_H_

#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ResultSS_RSRQ_PerSSB_Item;

/* ResultSS-RSRQ-PerSSB */
typedef struct ResultSS_RSRQ_PerSSB {
  A_SEQUENCE_OF(struct ResultSS_RSRQ_PerSSB_Item) list;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} ResultSS_RSRQ_PerSSB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ResultSS_RSRQ_PerSSB;
extern asn_SET_OF_specifics_t asn_SPC_ResultSS_RSRQ_PerSSB_specs_1;
extern asn_TYPE_member_t asn_MBR_ResultSS_RSRQ_PerSSB_1[1];
extern asn_per_constraints_t asn_PER_type_ResultSS_RSRQ_PerSSB_constr_1;

#ifdef __cplusplus
}
#endif

#endif /* _ResultSS_RSRQ_PerSSB_H_ */
#include <asn_internal.h>
