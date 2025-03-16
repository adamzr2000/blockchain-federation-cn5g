/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -no-gen-example -gen-APER -gen-UPER -no-gen-JER -gen-BER -D src`
 */

#ifndef _Ngap_UserLocationInformationW_AGF_H_
#define _Ngap_UserLocationInformationW_AGF_H_

#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_HFCNode-ID.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_UserLocationInformationW_AGF_PR {
  Ngap_UserLocationInformationW_AGF_PR_NOTHING, /* No components present */
  Ngap_UserLocationInformationW_AGF_PR_globalLine_ID,
  Ngap_UserLocationInformationW_AGF_PR_hFCNode_ID,
  Ngap_UserLocationInformationW_AGF_PR_choice_Extensions
} Ngap_UserLocationInformationW_AGF_PR;

/* Forward declarations */
struct Ngap_GlobalLine_ID;
struct Ngap_ProtocolIE_SingleContainer;

/* Ngap_UserLocationInformationW-AGF */
typedef struct Ngap_UserLocationInformationW_AGF {
  Ngap_UserLocationInformationW_AGF_PR present;
  union Ngap_UserLocationInformationW_AGF_u {
    struct Ngap_GlobalLine_ID* globalLine_ID;
    Ngap_HFCNode_ID_t hFCNode_ID;
    struct Ngap_ProtocolIE_SingleContainer* choice_Extensions;
  } choice;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} Ngap_UserLocationInformationW_AGF_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_UserLocationInformationW_AGF;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_UserLocationInformationW_AGF_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_UserLocationInformationW_AGF_1[3];
extern asn_per_constraints_t
    asn_PER_type_Ngap_UserLocationInformationW_AGF_constr_1;

#ifdef __cplusplus
}
#endif

#endif /* _Ngap_UserLocationInformationW_AGF_H_ */
#include <asn_internal.h>
