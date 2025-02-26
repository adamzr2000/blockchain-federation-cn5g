/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#ifndef _NR_PRS_Beam_InformationItem_H_
#define _NR_PRS_Beam_InformationItem_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PRSAngleItem;

/* NR-PRS-Beam-InformationItem */
typedef struct NR_PRS_Beam_InformationItem {
  long pRSresourceSetID;
  struct NR_PRS_Beam_InformationItem__pRSAngleItem {
    A_SEQUENCE_OF(struct PRSAngleItem) list;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } pRSAngleItem;
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} NR_PRS_Beam_InformationItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_PRS_Beam_InformationItem;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PRS_Beam_InformationItem_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PRS_Beam_InformationItem_1[2];

#ifdef __cplusplus
}
#endif

#endif /* _NR_PRS_Beam_InformationItem_H_ */
#include <asn_internal.h>
