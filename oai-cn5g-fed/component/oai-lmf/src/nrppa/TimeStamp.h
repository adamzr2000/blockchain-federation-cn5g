/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#ifndef _TimeStamp_H_
#define _TimeStamp_H_

#include <asn_application.h>

/* Including external dependencies */
#include "SystemFrameNumber.h"
#include "TimeStampSlotIndex.h"
#include "SFNInitialisationTime.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* TimeStamp */
typedef struct TimeStamp {
  SystemFrameNumber_t systemFrameNumber;
  TimeStampSlotIndex_t slotIndex;
  SFNInitialisationTime_t* measurementTime;        /* OPTIONAL */
  struct ProtocolExtensionContainer* iE_Extension; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} TimeStamp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TimeStamp;
extern asn_SEQUENCE_specifics_t asn_SPC_TimeStamp_specs_1;
extern asn_TYPE_member_t asn_MBR_TimeStamp_1[4];

#ifdef __cplusplus
}
#endif

#endif /* _TimeStamp_H_ */
#include <asn_internal.h>
