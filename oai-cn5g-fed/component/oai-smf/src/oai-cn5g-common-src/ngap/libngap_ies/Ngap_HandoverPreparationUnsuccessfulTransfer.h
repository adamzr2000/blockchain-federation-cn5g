/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -no-gen-example -gen-APER -gen-UPER -no-gen-JER -gen-BER -D src`
 */

#ifndef _Ngap_HandoverPreparationUnsuccessfulTransfer_H_
#define _Ngap_HandoverPreparationUnsuccessfulTransfer_H_

#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_Cause.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_ProtocolExtensionContainer;

/* Ngap_HandoverPreparationUnsuccessfulTransfer */
typedef struct Ngap_HandoverPreparationUnsuccessfulTransfer {
  Ngap_Cause_t cause;
  struct Ngap_ProtocolExtensionContainer* iE_Extensions; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} Ngap_HandoverPreparationUnsuccessfulTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t
    asn_DEF_Ngap_HandoverPreparationUnsuccessfulTransfer;

#ifdef __cplusplus
}
#endif

#endif /* _Ngap_HandoverPreparationUnsuccessfulTransfer_H_ */
#include <asn_internal.h>
