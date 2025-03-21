/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#ifndef _DLPRSResourceCoordinates_H_
#define _DLPRSResourceCoordinates_H_

#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;
struct DLPRSResourceSetARP;

/* DLPRSResourceCoordinates */
typedef struct DLPRSResourceCoordinates {
  struct DLPRSResourceCoordinates__listofDL_PRSResourceSetARP {
    A_SEQUENCE_OF(struct DLPRSResourceSetARP) list;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } listofDL_PRSResourceSetARP;
  struct ProtocolExtensionContainer* iE_Extensions; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} DLPRSResourceCoordinates_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DLPRSResourceCoordinates;
extern asn_SEQUENCE_specifics_t asn_SPC_DLPRSResourceCoordinates_specs_1;
extern asn_TYPE_member_t asn_MBR_DLPRSResourceCoordinates_1[2];

#ifdef __cplusplus
}
#endif

#endif /* _DLPRSResourceCoordinates_H_ */
#include <asn_internal.h>
