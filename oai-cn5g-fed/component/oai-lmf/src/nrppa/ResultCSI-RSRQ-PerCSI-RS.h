/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#ifndef _ResultCSI_RSRQ_PerCSI_RS_H_
#define _ResultCSI_RSRQ_PerCSI_RS_H_

#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ResultCSI_RSRQ_PerCSI_RS_Item;

/* ResultCSI-RSRQ-PerCSI-RS */
typedef struct ResultCSI_RSRQ_PerCSI_RS {
  A_SEQUENCE_OF(struct ResultCSI_RSRQ_PerCSI_RS_Item) list;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} ResultCSI_RSRQ_PerCSI_RS_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ResultCSI_RSRQ_PerCSI_RS;
extern asn_SET_OF_specifics_t asn_SPC_ResultCSI_RSRQ_PerCSI_RS_specs_1;
extern asn_TYPE_member_t asn_MBR_ResultCSI_RSRQ_PerCSI_RS_1[1];
extern asn_per_constraints_t asn_PER_type_ResultCSI_RSRQ_PerCSI_RS_constr_1;

#ifdef __cplusplus
}
#endif

#endif /* _ResultCSI_RSRQ_PerCSI_RS_H_ */
#include <asn_internal.h>
