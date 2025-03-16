/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _NeighbourMeasurementElement_NB_r14_H_
#define _NeighbourMeasurementElement_NB_r14_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "ARFCN-ValueEUTRA-r14.h"
#include "OTDOA-MeasQuality.h"
#include "CarrierFreqOffsetNB-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ECGI;
struct AdditionalPathList_r14;

/* NeighbourMeasurementElement-NB-r14 */
typedef struct NeighbourMeasurementElement_NB_r14 {
  long physCellIdNeighbour_r14;
  struct ECGI* cellGlobalIdNeighbour_r14;      /* OPTIONAL */
  ARFCN_ValueEUTRA_r14_t* earfcnNeighbour_r14; /* OPTIONAL */
  long rstd_r14;
  OTDOA_MeasQuality_t rstd_Quality_r14;
  long* tpIdNeighbour_r14;                                      /* OPTIONAL */
  long* prsIdNeighbour_r14;                                     /* OPTIONAL */
  long* delta_rstd_r14;                                         /* OPTIONAL */
  struct AdditionalPathList_r14* additionalPathsNeighbour_r14;  /* OPTIONAL */
  long* nprsIdNeighbour_r14;                                    /* OPTIONAL */
  CarrierFreqOffsetNB_r14_t* carrierFreqOffsetNB_Neighbour_r14; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} NeighbourMeasurementElement_NB_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NeighbourMeasurementElement_NB_r14;
extern asn_SEQUENCE_specifics_t
    asn_SPC_NeighbourMeasurementElement_NB_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_NeighbourMeasurementElement_NB_r14_1[11];

#ifdef __cplusplus
}
#endif

#endif /* _NeighbourMeasurementElement_NB_r14_H_ */
#include <asn_internal.h>
