/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _GNSS_ID_GLONASS_SatElement_H_
#define _GNSS_ID_GLONASS_SatElement_H_

#include <asn_application.h>

/* Including external dependencies */
#include "SV-ID.h"
#include "GNSS-SignalIDs.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GNSS-ID-GLONASS-SatElement */
typedef struct GNSS_ID_GLONASS_SatElement {
  SV_ID_t svID;
  GNSS_SignalIDs_t signalsAvailable;
  long* channelNumber; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} GNSS_ID_GLONASS_SatElement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_ID_GLONASS_SatElement;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSS_ID_GLONASS_SatElement_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_ID_GLONASS_SatElement_1[3];

#ifdef __cplusplus
}
#endif

#endif /* _GNSS_ID_GLONASS_SatElement_H_ */
#include <asn_internal.h>
