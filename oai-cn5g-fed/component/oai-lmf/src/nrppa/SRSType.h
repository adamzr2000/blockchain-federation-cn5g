/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-PDU-Contents"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#ifndef _SRSType_H_
#define _SRSType_H_

#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SRSType_PR {
  SRSType_PR_NOTHING, /* No components present */
  SRSType_PR_semipersistentSRS,
  SRSType_PR_aperiodicSRS,
  SRSType_PR_sRSType_extension
} SRSType_PR;

/* Forward declarations */
struct SemipersistentSRS;
struct AperiodicSRS;
struct ProtocolIE_Single_Container;

/* SRSType */
typedef struct SRSType {
  SRSType_PR present;
  union SRSType_u {
    struct SemipersistentSRS* semipersistentSRS;
    struct AperiodicSRS* aperiodicSRS;
    struct ProtocolIE_Single_Container* sRSType_extension;
  } choice;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} SRSType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRSType;
extern asn_CHOICE_specifics_t asn_SPC_SRSType_specs_1;
extern asn_TYPE_member_t asn_MBR_SRSType_1[3];
extern asn_per_constraints_t asn_PER_type_SRSType_constr_1;

#ifdef __cplusplus
}
#endif

#endif /* _SRSType_H_ */
#include <asn_internal.h>
