/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#ifndef _SpatialRelationPos_H_
#define _SpatialRelationPos_H_

#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SpatialRelationPos_PR {
  SpatialRelationPos_PR_NOTHING, /* No components present */
  SpatialRelationPos_PR_sSBPos,
  SpatialRelationPos_PR_pRSInformationPos,
  SpatialRelationPos_PR_choice_extension
} SpatialRelationPos_PR;

/* Forward declarations */
struct SSBPos;
struct PRSInformationPos;
struct ProtocolIE_Single_Container;

/* SpatialRelationPos */
typedef struct SpatialRelationPos {
  SpatialRelationPos_PR present;
  union SpatialRelationPos_u {
    struct SSBPos* sSBPos;
    struct PRSInformationPos* pRSInformationPos;
    struct ProtocolIE_Single_Container* choice_extension;
  } choice;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} SpatialRelationPos_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SpatialRelationPos;
extern asn_CHOICE_specifics_t asn_SPC_SpatialRelationPos_specs_1;
extern asn_TYPE_member_t asn_MBR_SpatialRelationPos_1[3];
extern asn_per_constraints_t asn_PER_type_SpatialRelationPos_constr_1;

#ifdef __cplusplus
}
#endif

#endif /* _SpatialRelationPos_H_ */
#include <asn_internal.h>
