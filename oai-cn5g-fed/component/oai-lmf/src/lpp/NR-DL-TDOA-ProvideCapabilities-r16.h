/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _NR_DL_TDOA_ProvideCapabilities_r16_H_
#define _NR_DL_TDOA_ProvideCapabilities_r16_H_

#include <asn_application.h>

/* Including external dependencies */
#include "PositioningModes.h"
#include "NR-DL-PRS-ResourcesCapability-r16.h"
#include "NR-DL-TDOA-MeasurementCapability-r16.h"
#include "NR-DL-PRS-QCL-ProcessingCapability-r16.h"
#include "NR-DL-PRS-ProcessingCapability-r16.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_DL_TDOA_ProvideCapabilities_r16__additionalPathsReport_r16 {
  NR_DL_TDOA_ProvideCapabilities_r16__additionalPathsReport_r16_supported = 0
} e_NR_DL_TDOA_ProvideCapabilities_r16__additionalPathsReport_r16;

/* Forward declarations */
struct PositioningModes;

/* NR-DL-TDOA-ProvideCapabilities-r16 */
typedef struct NR_DL_TDOA_ProvideCapabilities_r16 {
  PositioningModes_t nr_DL_TDOA_Mode_r16;
  NR_DL_PRS_ResourcesCapability_r16_t nr_DL_TDOA_PRS_Capability_r16;
  NR_DL_TDOA_MeasurementCapability_r16_t nr_DL_TDOA_MeasurementCapability_r16;
  NR_DL_PRS_QCL_ProcessingCapability_r16_t
      nr_DL_PRS_QCL_ProcessingCapability_r16;
  NR_DL_PRS_ProcessingCapability_r16_t nr_DL_PRS_ProcessingCapability_r16;
  long* additionalPathsReport_r16;                  /* OPTIONAL */
  struct PositioningModes* periodicalReporting_r16; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} NR_DL_TDOA_ProvideCapabilities_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_additionalPathsReport_r16_7;	//
 * (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_DL_TDOA_ProvideCapabilities_r16;
extern asn_SEQUENCE_specifics_t
    asn_SPC_NR_DL_TDOA_ProvideCapabilities_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DL_TDOA_ProvideCapabilities_r16_1[7];

#ifdef __cplusplus
}
#endif

#endif /* _NR_DL_TDOA_ProvideCapabilities_r16_H_ */
#include <asn_internal.h>
