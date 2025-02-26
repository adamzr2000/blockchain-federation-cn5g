/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _GNSS_NavModelSatelliteElement_H_
#define _GNSS_NavModelSatelliteElement_H_

#include <asn_application.h>

/* Including external dependencies */
#include "SV-ID.h"
#include <BIT_STRING.h>
#include "GNSS-ClockModel.h"
#include "GNSS-OrbitModel.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GNSS-NavModelSatelliteElement */
typedef struct GNSS_NavModelSatelliteElement {
  SV_ID_t svID;
  BIT_STRING_t svHealth;
  BIT_STRING_t iod;
  GNSS_ClockModel_t gnss_ClockModel;
  GNSS_OrbitModel_t gnss_OrbitModel;
  /*
   * This type is extensible,
   * possible extensions are below.
   */
  struct GNSS_NavModelSatelliteElement__ext1 {
    BIT_STRING_t* svHealthExt_v1240; /* OPTIONAL */

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } * ext1;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} GNSS_NavModelSatelliteElement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_NavModelSatelliteElement;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSS_NavModelSatelliteElement_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_NavModelSatelliteElement_1[6];

#ifdef __cplusplus
}
#endif

#endif /* _GNSS_NavModelSatelliteElement_H_ */
#include <asn_internal.h>
