/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _TRP_LocationInfoElement_r16_H_
#define _TRP_LocationInfoElement_r16_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "NR-PhysCellID-r16.h"
#include "ARFCN-ValueNR-r15.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NCGI_r15;
struct RelativeLocation_r16;
struct DL_PRS_ResourceSets_TRP_Element_r16;

/* TRP-LocationInfoElement-r16 */
typedef struct TRP_LocationInfoElement_r16 {
  long dl_PRS_ID_r16;
  NR_PhysCellID_r16_t* nr_PhysCellID_r16;        /* OPTIONAL */
  struct NCGI_r15* nr_CellGlobalID_r16;          /* OPTIONAL */
  ARFCN_ValueNR_r15_t* nr_ARFCN_r16;             /* OPTIONAL */
  long* associated_DL_PRS_ID_r16;                /* OPTIONAL */
  struct RelativeLocation_r16* trp_Location_r16; /* OPTIONAL */
  struct TRP_LocationInfoElement_r16__trp_DL_PRS_ResourceSets_r16 {
    A_SEQUENCE_OF(struct DL_PRS_ResourceSets_TRP_Element_r16) list;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } * trp_DL_PRS_ResourceSets_r16;
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} TRP_LocationInfoElement_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TRP_LocationInfoElement_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_TRP_LocationInfoElement_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_TRP_LocationInfoElement_r16_1[7];

#ifdef __cplusplus
}
#endif

#endif /* _TRP_LocationInfoElement_r16_H_ */
#include <asn_internal.h>
