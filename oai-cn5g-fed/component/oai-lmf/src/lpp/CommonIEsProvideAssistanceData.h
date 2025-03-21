/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _CommonIEsProvideAssistanceData_H_
#define _CommonIEsProvideAssistanceData_H_

#include <asn_application.h>

/* Including external dependencies */
#include "SegmentationInfo-r14.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PeriodicAssistanceDataControlParameters_r15;

/* CommonIEsProvideAssistanceData */
typedef struct CommonIEsProvideAssistanceData {
  /*
   * This type is extensible,
   * possible extensions are below.
   */
  struct CommonIEsProvideAssistanceData__ext1 {
    SegmentationInfo_r14_t* segmentationInfo_r14; /* OPTIONAL */

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } * ext1;
  struct CommonIEsProvideAssistanceData__ext2 {
    struct PeriodicAssistanceDataControlParameters_r15*
        periodicAssistanceData_r15; /* OPTIONAL */

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } * ext2;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} CommonIEsProvideAssistanceData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CommonIEsProvideAssistanceData;
extern asn_SEQUENCE_specifics_t asn_SPC_CommonIEsProvideAssistanceData_specs_1;
extern asn_TYPE_member_t asn_MBR_CommonIEsProvideAssistanceData_1[2];

#ifdef __cplusplus
}
#endif

#endif /* _CommonIEsProvideAssistanceData_H_ */
#include <asn_internal.h>
