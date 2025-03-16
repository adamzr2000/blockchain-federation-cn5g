/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _NR_PositionCalculationAssistance_r16_H_
#define _NR_PositionCalculationAssistance_r16_H_

#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_TRP_LocationInfo_r16;
struct NR_DL_PRS_BeamInfo_r16;
struct NR_RTD_Info_r16;

/* NR-PositionCalculationAssistance-r16 */
typedef struct NR_PositionCalculationAssistance_r16 {
  struct NR_TRP_LocationInfo_r16* nr_TRP_LocationInfo_r16; /* OPTIONAL */
  struct NR_DL_PRS_BeamInfo_r16* nr_DL_PRS_BeamInfo_r16;   /* OPTIONAL */
  struct NR_RTD_Info_r16* nr_RTD_Info_r16;                 /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} NR_PositionCalculationAssistance_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_PositionCalculationAssistance_r16;
extern asn_SEQUENCE_specifics_t
    asn_SPC_NR_PositionCalculationAssistance_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PositionCalculationAssistance_r16_1[3];

#ifdef __cplusplus
}
#endif

#endif /* _NR_PositionCalculationAssistance_r16_H_ */
#include <asn_internal.h>
