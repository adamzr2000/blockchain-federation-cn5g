/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _StandardClockModelElement_H_
#define _StandardClockModelElement_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* StandardClockModelElement */
typedef struct StandardClockModelElement {
  long stanClockToc;
  long stanClockAF2;
  long stanClockAF1;
  long stanClockAF0;
  long* stanClockTgd; /* OPTIONAL */
  long sisa;
  long* stanModelID; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} StandardClockModelElement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_StandardClockModelElement;
extern asn_SEQUENCE_specifics_t asn_SPC_StandardClockModelElement_specs_1;
extern asn_TYPE_member_t asn_MBR_StandardClockModelElement_1[7];

#ifdef __cplusplus
}
#endif

#endif /* _StandardClockModelElement_H_ */
#include <asn_internal.h>
