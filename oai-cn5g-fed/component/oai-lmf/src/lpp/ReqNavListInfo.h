/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _ReqNavListInfo_H_
#define _ReqNavListInfo_H_

#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <BOOLEAN.h>
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ReqNavListInfo */
typedef struct ReqNavListInfo {
  BIT_STRING_t svReqList;
  struct ReqNavListInfo__clockModelID_PrefList {
    A_SEQUENCE_OF(long) list;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } * clockModelID_PrefList;
  struct ReqNavListInfo__orbitModelID_PrefList {
    A_SEQUENCE_OF(long) list;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } * orbitModelID_PrefList;
  BOOLEAN_t* addNavparamReq; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} ReqNavListInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReqNavListInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_ReqNavListInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_ReqNavListInfo_1[4];

#ifdef __cplusplus
}
#endif

#endif /* _ReqNavListInfo_H_ */
#include <asn_internal.h>
