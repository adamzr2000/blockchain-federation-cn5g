/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _NR_MeasuredResultsElement_r16_H_
#define _NR_MeasuredResultsElement_r16_H_

#include <asn_application.h>

/* Including external dependencies */
#include "NR-PhysCellID-r16.h"
#include <BIT_STRING.h>
#include "ARFCN-ValueNR-r15.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_MeasuredResultsElement_r16__nr_ARFCN_r16_PR {
  NR_MeasuredResultsElement_r16__nr_ARFCN_r16_PR_NOTHING, /* No components
                                                             present */
  NR_MeasuredResultsElement_r16__nr_ARFCN_r16_PR_ssb_ARFCN_r16,
  NR_MeasuredResultsElement_r16__nr_ARFCN_r16_PR_csi_RS_pointA_r16
} NR_MeasuredResultsElement_r16__nr_ARFCN_r16_PR;

/* Forward declarations */
struct NCGI_r15;
struct MeasQuantityResults_r16;
struct ResultsPerSSB_IndexList_r16;
struct ResultsPerCSI_RS_IndexList_r16;

/* NR-MeasuredResultsElement-r16 */
typedef struct NR_MeasuredResultsElement_r16 {
  NR_PhysCellID_r16_t nr_PhysCellID_r16;
  struct NR_MeasuredResultsElement_r16__nr_ARFCN_r16 {
    NR_MeasuredResultsElement_r16__nr_ARFCN_r16_PR present;
    union NR_MeasuredResultsElement_r16__nr_ARFCN_r16_u {
      ARFCN_ValueNR_r15_t ssb_ARFCN_r16;
      ARFCN_ValueNR_r15_t csi_RS_pointA_r16;
    } choice;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } nr_ARFCN_r16;
  struct NCGI_r15* nr_CellGlobalID_r16;                       /* OPTIONAL */
  BIT_STRING_t* systemFrameNumber_r16;                        /* OPTIONAL */
  struct MeasQuantityResults_r16* resultsSSB_Cell_r16;        /* OPTIONAL */
  struct MeasQuantityResults_r16* resultsCSI_RS_Cell_r16;     /* OPTIONAL */
  struct ResultsPerSSB_IndexList_r16* resultsSSB_Indexes_r16; /* OPTIONAL */
  struct ResultsPerCSI_RS_IndexList_r16*
      resultsCSI_RS_Indexes_r16; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} NR_MeasuredResultsElement_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_MeasuredResultsElement_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MeasuredResultsElement_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MeasuredResultsElement_r16_1[8];

#ifdef __cplusplus
}
#endif

#endif /* _NR_MeasuredResultsElement_r16_H_ */
#include <asn_internal.h>
