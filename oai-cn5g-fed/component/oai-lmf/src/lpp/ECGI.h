/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _ECGI_H_
#define _ECGI_H_

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

/* ECGI */
typedef struct ECGI {
  struct ECGI__mcc {
    A_SEQUENCE_OF(long) list;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } mcc;
  struct ECGI__mnc {
    A_SEQUENCE_OF(long) list;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } mnc;
  BIT_STRING_t cellidentity;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} ECGI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ECGI;
extern asn_SEQUENCE_specifics_t asn_SPC_ECGI_specs_1;
extern asn_TYPE_member_t asn_MBR_ECGI_1[3];

#ifdef __cplusplus
}
#endif

#endif /* _ECGI_H_ */
#include <asn_internal.h>
