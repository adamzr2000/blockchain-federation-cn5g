/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _GNSS_Almanac_H_
#define _GNSS_Almanac_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include "GNSS-AlmanacList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GNSS-Almanac */
typedef struct GNSS_Almanac {
  long* weekNumber; /* OPTIONAL */
  long* toa;        /* OPTIONAL */
  long* ioda;       /* OPTIONAL */
  BOOLEAN_t completeAlmanacProvided;
  GNSS_AlmanacList_t gnss_AlmanacList;
  /*
   * This type is extensible,
   * possible extensions are below.
   */
  struct GNSS_Almanac__ext1 {
    long* toa_ext_v1240;  /* OPTIONAL */
    long* ioda_ext_v1240; /* OPTIONAL */

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } * ext1;
  struct GNSS_Almanac__ext2 {
    long* weekNumber_ext_r16; /* OPTIONAL */
    long* toa_ext2_r16;       /* OPTIONAL */

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } * ext2;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} GNSS_Almanac_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_Almanac;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSS_Almanac_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_Almanac_1[7];

#ifdef __cplusplus
}
#endif

#endif /* _GNSS_Almanac_H_ */
#include <asn_internal.h>
