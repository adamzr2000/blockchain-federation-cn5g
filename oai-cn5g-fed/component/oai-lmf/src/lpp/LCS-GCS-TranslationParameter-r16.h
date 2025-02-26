/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _LCS_GCS_TranslationParameter_r16_H_
#define _LCS_GCS_TranslationParameter_r16_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LCS-GCS-TranslationParameter-r16 */
typedef struct LCS_GCS_TranslationParameter_r16 {
  long alpha_r16;
  long* alpha_fine_r16; /* OPTIONAL */
  long beta_r16;
  long* beta_fine_r16; /* OPTIONAL */
  long gamma_r16;
  long* gamma_fine_r16; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} LCS_GCS_TranslationParameter_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LCS_GCS_TranslationParameter_r16;
extern asn_SEQUENCE_specifics_t
    asn_SPC_LCS_GCS_TranslationParameter_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_LCS_GCS_TranslationParameter_r16_1[6];

#ifdef __cplusplus
}
#endif

#endif /* _LCS_GCS_TranslationParameter_r16_H_ */
#include <asn_internal.h>
