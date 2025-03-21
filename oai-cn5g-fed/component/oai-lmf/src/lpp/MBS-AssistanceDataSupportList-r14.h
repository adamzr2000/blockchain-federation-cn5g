/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _MBS_AssistanceDataSupportList_r14_H_
#define _MBS_AssistanceDataSupportList_r14_H_

#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MBS-AssistanceDataSupportList-r14 */
typedef struct MBS_AssistanceDataSupportList_r14 {
  BOOLEAN_t mbs_AcquisitionAssistanceDataSupport_r14;
  BOOLEAN_t mbs_AlmanacAssistanceDataSupport_r14;
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} MBS_AssistanceDataSupportList_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBS_AssistanceDataSupportList_r14;
extern asn_SEQUENCE_specifics_t
    asn_SPC_MBS_AssistanceDataSupportList_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_MBS_AssistanceDataSupportList_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif /* _MBS_AssistanceDataSupportList_r14_H_ */
#include <asn_internal.h>
