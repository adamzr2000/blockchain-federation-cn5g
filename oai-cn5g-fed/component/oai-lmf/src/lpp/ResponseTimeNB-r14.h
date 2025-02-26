/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _ResponseTimeNB_r14_H_
#define _ResponseTimeNB_r14_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ResponseTimeNB_r14__ext1__unitNB_r15 {
  ResponseTimeNB_r14__ext1__unitNB_r15_ten_seconds = 0
  /*
   * Enumeration is extensible
   */
} e_ResponseTimeNB_r14__ext1__unitNB_r15;

/* ResponseTimeNB-r14 */
typedef struct ResponseTimeNB_r14 {
  long timeNB_r14;
  long* responseTimeEarlyFixNB_r14; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */
  struct ResponseTimeNB_r14__ext1 {
    long* unitNB_r15; /* OPTIONAL */

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } * ext1;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} ResponseTimeNB_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_unitNB_r15_6;	// (Use
 * -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ResponseTimeNB_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_ResponseTimeNB_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_ResponseTimeNB_r14_1[3];

#ifdef __cplusplus
}
#endif

#endif /* _ResponseTimeNB_r14_H_ */
#include <asn_internal.h>
