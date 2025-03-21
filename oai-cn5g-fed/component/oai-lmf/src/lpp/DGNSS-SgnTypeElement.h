/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _DGNSS_SgnTypeElement_H_
#define _DGNSS_SgnTypeElement_H_

#include <asn_application.h>

/* Including external dependencies */
#include "GNSS-SignalID.h"
#include <NativeInteger.h>
#include "DGNSS-SatList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DGNSS-SgnTypeElement */
typedef struct DGNSS_SgnTypeElement {
  GNSS_SignalID_t gnss_SignalID;
  long gnss_StatusHealth;
  DGNSS_SatList_t dgnss_SatList;
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} DGNSS_SgnTypeElement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DGNSS_SgnTypeElement;
extern asn_SEQUENCE_specifics_t asn_SPC_DGNSS_SgnTypeElement_specs_1;
extern asn_TYPE_member_t asn_MBR_DGNSS_SgnTypeElement_1[3];

#ifdef __cplusplus
}
#endif

#endif /* _DGNSS_SgnTypeElement_H_ */
#include <asn_internal.h>
