/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _PositioningModes_H_
#define _PositioningModes_H_

#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PositioningModes__posModes {
  PositioningModes__posModes_standalone  = 0,
  PositioningModes__posModes_ue_based    = 1,
  PositioningModes__posModes_ue_assisted = 2
} e_PositioningModes__posModes;

/* PositioningModes */
typedef struct PositioningModes {
  BIT_STRING_t posModes;
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} PositioningModes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PositioningModes;
extern asn_SEQUENCE_specifics_t asn_SPC_PositioningModes_specs_1;
extern asn_TYPE_member_t asn_MBR_PositioningModes_1[1];

#ifdef __cplusplus
}
#endif

#endif /* _PositioningModes_H_ */
#include <asn_internal.h>
