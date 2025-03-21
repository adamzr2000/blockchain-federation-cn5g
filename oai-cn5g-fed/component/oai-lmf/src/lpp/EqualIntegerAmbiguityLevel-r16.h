/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _EqualIntegerAmbiguityLevel_r16_H_
#define _EqualIntegerAmbiguityLevel_r16_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EqualIntegerAmbiguityLevel_r16_PR {
  EqualIntegerAmbiguityLevel_r16_PR_NOTHING, /* No components present */
  EqualIntegerAmbiguityLevel_r16_PR_allReferenceStations_r16,
  EqualIntegerAmbiguityLevel_r16_PR_referenceStationList_r16
} EqualIntegerAmbiguityLevel_r16_PR;

/* Forward declarations */
struct ReferenceStationList_r16;

/* EqualIntegerAmbiguityLevel-r16 */
typedef struct EqualIntegerAmbiguityLevel_r16 {
  EqualIntegerAmbiguityLevel_r16_PR present;
  union EqualIntegerAmbiguityLevel_r16_u {
    NULL_t allReferenceStations_r16;
    struct ReferenceStationList_r16* referenceStationList_r16;
  } choice;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} EqualIntegerAmbiguityLevel_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EqualIntegerAmbiguityLevel_r16;
extern asn_CHOICE_specifics_t asn_SPC_EqualIntegerAmbiguityLevel_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_EqualIntegerAmbiguityLevel_r16_1[2];
extern asn_per_constraints_t
    asn_PER_type_EqualIntegerAmbiguityLevel_r16_constr_1;

#ifdef __cplusplus
}
#endif

#endif /* _EqualIntegerAmbiguityLevel_r16_H_ */
#include <asn_internal.h>
