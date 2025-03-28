/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _BadSignalElement_H_
#define _BadSignalElement_H_

#include <asn_application.h>

/* Including external dependencies */
#include "SV-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GNSS_SignalIDs;

/* BadSignalElement */
typedef struct BadSignalElement {
  SV_ID_t badSVID;
  struct GNSS_SignalIDs* badSignalID; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} BadSignalElement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BadSignalElement;
extern asn_SEQUENCE_specifics_t asn_SPC_BadSignalElement_specs_1;
extern asn_TYPE_member_t asn_MBR_BadSignalElement_1[2];

#ifdef __cplusplus
}
#endif

#endif /* _BadSignalElement_H_ */
#include <asn_internal.h>
