/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _GNSS_SubNetworkID_r15_H_
#define _GNSS_SubNetworkID_r15_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GNSS-SubNetworkID-r15 */
typedef struct GNSS_SubNetworkID_r15 {
  long subNetworkID_r15;
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} GNSS_SubNetworkID_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_SubNetworkID_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSS_SubNetworkID_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_SubNetworkID_r15_1[1];

#ifdef __cplusplus
}
#endif

#endif /* _GNSS_SubNetworkID_r15_H_ */
#include <asn_internal.h>
