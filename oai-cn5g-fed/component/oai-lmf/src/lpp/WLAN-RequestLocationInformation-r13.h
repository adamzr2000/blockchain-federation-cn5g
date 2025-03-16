/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _WLAN_RequestLocationInformation_r13_H_
#define _WLAN_RequestLocationInformation_r13_H_

#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum WLAN_RequestLocationInformation_r13__requestedMeasurements_r13 {
  WLAN_RequestLocationInformation_r13__requestedMeasurements_r13_rssi = 0,
  WLAN_RequestLocationInformation_r13__requestedMeasurements_r13_rtt  = 1
} e_WLAN_RequestLocationInformation_r13__requestedMeasurements_r13;

/* WLAN-RequestLocationInformation-r13 */
typedef struct WLAN_RequestLocationInformation_r13 {
  BIT_STRING_t requestedMeasurements_r13;
  /*
   * This type is extensible,
   * possible extensions are below.
   */
  struct WLAN_RequestLocationInformation_r13__ext1 {
    BOOLEAN_t* assistanceAvailability_r14; /* OPTIONAL */

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } * ext1;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} WLAN_RequestLocationInformation_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WLAN_RequestLocationInformation_r13;
extern asn_SEQUENCE_specifics_t
    asn_SPC_WLAN_RequestLocationInformation_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_WLAN_RequestLocationInformation_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif /* _WLAN_RequestLocationInformation_r13_H_ */
#include <asn_internal.h>
