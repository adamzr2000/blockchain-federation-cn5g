/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-PDU-Contents"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#ifndef _PositioningActivationFailure_H_
#define _PositioningActivationFailure_H_

#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PositioningActivationFailure */
typedef struct PositioningActivationFailure {
  ProtocolIE_Container_2789P28_t protocolIEs;
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} PositioningActivationFailure_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PositioningActivationFailure;
extern asn_SEQUENCE_specifics_t asn_SPC_PositioningActivationFailure_specs_1;
extern asn_TYPE_member_t asn_MBR_PositioningActivationFailure_1[1];

#ifdef __cplusplus
}
#endif

#endif /* _PositioningActivationFailure_H_ */
#include <asn_internal.h>
