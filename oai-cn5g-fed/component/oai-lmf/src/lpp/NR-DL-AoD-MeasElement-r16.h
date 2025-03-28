/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _NR_DL_AoD_MeasElement_r16_H_
#define _NR_DL_AoD_MeasElement_r16_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "NR-PhysCellID-r16.h"
#include "ARFCN-ValueNR-r15.h"
#include "NR-DL-PRS-ResourceID-r16.h"
#include "NR-DL-PRS-ResourceSetID-r16.h"
#include "NR-TimeStamp-r16.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NCGI_r15;
struct NR_DL_AoD_AdditionalMeasurements_r16;

/* NR-DL-AoD-MeasElement-r16 */
typedef struct NR_DL_AoD_MeasElement_r16 {
  long dl_PRS_ID_r16;
  NR_PhysCellID_r16_t* nr_PhysCellID_r16;                     /* OPTIONAL */
  struct NCGI_r15* nr_CellGlobalID_r16;                       /* OPTIONAL */
  ARFCN_ValueNR_r15_t* nr_ARFCN_r16;                          /* OPTIONAL */
  NR_DL_PRS_ResourceID_r16_t* nr_DL_PRS_ResourceID_r16;       /* OPTIONAL */
  NR_DL_PRS_ResourceSetID_r16_t* nr_DL_PRS_ResourceSetID_r16; /* OPTIONAL */
  NR_TimeStamp_r16_t nr_TimeStamp_r16;
  long nr_DL_PRS_RSRP_Result_r16;
  long* nr_DL_PRS_RxBeamIndex_r16; /* OPTIONAL */
  struct NR_DL_AoD_AdditionalMeasurements_r16*
      nr_DL_AoD_AdditionalMeasurements_r16; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} NR_DL_AoD_MeasElement_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_DL_AoD_MeasElement_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_DL_AoD_MeasElement_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DL_AoD_MeasElement_r16_1[10];

#ifdef __cplusplus
}
#endif

#endif /* _NR_DL_AoD_MeasElement_r16_H_ */
#include <asn_internal.h>
