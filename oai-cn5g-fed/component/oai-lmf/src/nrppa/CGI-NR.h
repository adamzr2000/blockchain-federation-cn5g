/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#ifndef _CGI_NR_H_
#define _CGI_NR_H_

#include <asn_application.h>

/* Including external dependencies */
#include "PLMN-Identity.h"
#include "NRCellIdentifier.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* CGI-NR */
typedef struct CGI_NR {
  PLMN_Identity_t pLMN_Identity;
  NRCellIdentifier_t nRcellIdentifier;
  struct ProtocolExtensionContainer* iE_Extensions; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} CGI_NR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CGI_NR;
extern asn_SEQUENCE_specifics_t asn_SPC_CGI_NR_specs_1;
extern asn_TYPE_member_t asn_MBR_CGI_NR_1[3];

#ifdef __cplusplus
}
#endif

#endif /* _CGI_NR_H_ */
#include <asn_internal.h>
