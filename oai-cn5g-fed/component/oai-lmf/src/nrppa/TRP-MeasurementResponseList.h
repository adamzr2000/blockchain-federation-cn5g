/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#ifndef _TRP_MeasurementResponseList_H_
#define _TRP_MeasurementResponseList_H_

#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TRP_MeasurementResponseItem;

/* TRP-MeasurementResponseList */
typedef struct TRP_MeasurementResponseList {
  A_SEQUENCE_OF(struct TRP_MeasurementResponseItem) list;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} TRP_MeasurementResponseList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TRP_MeasurementResponseList;
extern asn_SET_OF_specifics_t asn_SPC_TRP_MeasurementResponseList_specs_1;
extern asn_TYPE_member_t asn_MBR_TRP_MeasurementResponseList_1[1];
extern asn_per_constraints_t asn_PER_type_TRP_MeasurementResponseList_constr_1;

#ifdef __cplusplus
}
#endif

#endif /* _TRP_MeasurementResponseList_H_ */
#include <asn_internal.h>
