/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _BT_MeasurementList_r13_H_
#define _BT_MeasurementList_r13_H_

#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BT_MeasurementElement_r13;

/* BT-MeasurementList-r13 */
typedef struct BT_MeasurementList_r13 {
  A_SEQUENCE_OF(struct BT_MeasurementElement_r13) list;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} BT_MeasurementList_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BT_MeasurementList_r13;
extern asn_SET_OF_specifics_t asn_SPC_BT_MeasurementList_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_BT_MeasurementList_r13_1[1];
extern asn_per_constraints_t asn_PER_type_BT_MeasurementList_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif /* _BT_MeasurementList_r13_H_ */
#include <asn_internal.h>
