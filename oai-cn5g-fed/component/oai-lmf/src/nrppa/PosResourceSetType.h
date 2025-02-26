/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#ifndef _PosResourceSetType_H_
#define _PosResourceSetType_H_

#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PosResourceSetType_PR {
  PosResourceSetType_PR_NOTHING, /* No components present */
  PosResourceSetType_PR_periodic,
  PosResourceSetType_PR_semi_persistent,
  PosResourceSetType_PR_aperiodic,
  PosResourceSetType_PR_choice_extension
} PosResourceSetType_PR;

/* Forward declarations */
struct PosResourceSetTypePeriodic;
struct PosResourceSetTypeSemi_persistent;
struct PosResourceSetTypeAperiodic;
struct ProtocolIE_Single_Container;

/* PosResourceSetType */
typedef struct PosResourceSetType {
  PosResourceSetType_PR present;
  union PosResourceSetType_u {
    struct PosResourceSetTypePeriodic* periodic;
    struct PosResourceSetTypeSemi_persistent* semi_persistent;
    struct PosResourceSetTypeAperiodic* aperiodic;
    struct ProtocolIE_Single_Container* choice_extension;
  } choice;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} PosResourceSetType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PosResourceSetType;
extern asn_CHOICE_specifics_t asn_SPC_PosResourceSetType_specs_1;
extern asn_TYPE_member_t asn_MBR_PosResourceSetType_1[4];
extern asn_per_constraints_t asn_PER_type_PosResourceSetType_constr_1;

#ifdef __cplusplus
}
#endif

#endif /* _PosResourceSetType_H_ */
#include <asn_internal.h>
