/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _CellGlobalIdGERAN_H_
#define _CellGlobalIdGERAN_H_

#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellGlobalIdGERAN */
typedef struct CellGlobalIdGERAN {
  struct CellGlobalIdGERAN__plmn_Identity {
    struct CellGlobalIdGERAN__plmn_Identity__mcc {
      A_SEQUENCE_OF(long) list;

      /* Context for parsing across buffer boundaries */
      asn_struct_ctx_t _asn_ctx;
    } mcc;
    struct CellGlobalIdGERAN__plmn_Identity__mnc {
      A_SEQUENCE_OF(long) list;

      /* Context for parsing across buffer boundaries */
      asn_struct_ctx_t _asn_ctx;
    } mnc;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } plmn_Identity;
  BIT_STRING_t locationAreaCode;
  BIT_STRING_t cellIdentity;
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} CellGlobalIdGERAN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellGlobalIdGERAN;
extern asn_SEQUENCE_specifics_t asn_SPC_CellGlobalIdGERAN_specs_1;
extern asn_TYPE_member_t asn_MBR_CellGlobalIdGERAN_1[3];

#ifdef __cplusplus
}
#endif

#endif /* _CellGlobalIdGERAN_H_ */
#include <asn_internal.h>
