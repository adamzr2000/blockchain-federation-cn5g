/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -no-gen-example -gen-APER -gen-UPER -no-gen-JER -gen-BER -D src`
 */

#ifndef _Ngap_QosCharacteristics_H_
#define _Ngap_QosCharacteristics_H_

#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_QosCharacteristics_PR {
  Ngap_QosCharacteristics_PR_NOTHING, /* No components present */
  Ngap_QosCharacteristics_PR_nonDynamic5QI,
  Ngap_QosCharacteristics_PR_dynamic5QI,
  Ngap_QosCharacteristics_PR_choice_Extensions
} Ngap_QosCharacteristics_PR;

/* Forward declarations */
struct Ngap_NonDynamic5QIDescriptor;
struct Ngap_Dynamic5QIDescriptor;
struct Ngap_ProtocolIE_SingleContainer;

/* Ngap_QosCharacteristics */
typedef struct Ngap_QosCharacteristics {
  Ngap_QosCharacteristics_PR present;
  union Ngap_QosCharacteristics_u {
    struct Ngap_NonDynamic5QIDescriptor* nonDynamic5QI;
    struct Ngap_Dynamic5QIDescriptor* dynamic5QI;
    struct Ngap_ProtocolIE_SingleContainer* choice_Extensions;
  } choice;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} Ngap_QosCharacteristics_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_QosCharacteristics;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_QosCharacteristics_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_QosCharacteristics_1[3];
extern asn_per_constraints_t asn_PER_type_Ngap_QosCharacteristics_constr_1;

#ifdef __cplusplus
}
#endif

#endif /* _Ngap_QosCharacteristics_H_ */
#include <asn_internal.h>
