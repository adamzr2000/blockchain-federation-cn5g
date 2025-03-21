/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _RegionIgpElement_r16_H_
#define _RegionIgpElement_r16_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RegionIgpElement-r16 */
typedef struct RegionIgpElement_r16 {
  long regionID_r16;
  long givei1_r16;
  long givd1_r16;
  long givei2_r16;
  long givd2_r16;
  long givei3_r16;
  long givd3_r16;
  long givei4_r16;
  long givd4_r16;
  long givei5_r16;
  long givd5_r16;
  long givei6_r16;
  long givd6_r16;
  long givei7_r16;
  long givd7_r16;
  long givei8_r16;
  long givd8_r16;
  long givei9_r16;
  long givd9_r16;
  long givei10_r16;
  long givd10_r16;
  long givei11_r16;
  long givd11_r16;
  long givei12_r16;
  long givd12_r16;
  long givei13_r16;
  long givd13_r16;
  long givei14_r16;
  long givd14_r16;
  long givei15_r16;
  long givd15_r16;
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} RegionIgpElement_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RegionIgpElement_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_RegionIgpElement_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_RegionIgpElement_r16_1[31];

#ifdef __cplusplus
}
#endif

#endif /* _RegionIgpElement_r16_H_ */
#include <asn_internal.h>
