/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _GNSS_DataBitAssistanceReq_H_
#define _GNSS_DataBitAssistanceReq_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "GNSS-SignalIDs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GNSS_DataBitsReqSatList;

/* GNSS-DataBitAssistanceReq */
typedef struct GNSS_DataBitAssistanceReq {
  long gnss_TOD_Req;
  long* gnss_TOD_FracReq; /* OPTIONAL */
  long dataBitInterval;
  GNSS_SignalIDs_t gnss_SignalType;
  struct GNSS_DataBitsReqSatList* gnss_DataBitsReq; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} GNSS_DataBitAssistanceReq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_DataBitAssistanceReq;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSS_DataBitAssistanceReq_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_DataBitAssistanceReq_1[5];

#ifdef __cplusplus
}
#endif

#endif /* _GNSS_DataBitAssistanceReq_H_ */
#include <asn_internal.h>
