/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#ifndef _TransmissionComb_H_
#define _TransmissionComb_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TransmissionComb_PR {
  TransmissionComb_PR_NOTHING, /* No components present */
  TransmissionComb_PR_n2,
  TransmissionComb_PR_n4,
  TransmissionComb_PR_choice_extension
} TransmissionComb_PR;

/* Forward declarations */
struct ProtocolIE_Single_Container;

/* TransmissionComb */
typedef struct TransmissionComb {
  TransmissionComb_PR present;
  union TransmissionComb_u {
    struct TransmissionComb__n2 {
      long combOffset_n2;
      long cyclicShift_n2;

      /* Context for parsing across buffer boundaries */
      asn_struct_ctx_t _asn_ctx;
    } * n2;
    struct TransmissionComb__n4 {
      long combOffset_n4;
      long cyclicShift_n4;

      /* Context for parsing across buffer boundaries */
      asn_struct_ctx_t _asn_ctx;
    } * n4;
    struct ProtocolIE_Single_Container* choice_extension;
  } choice;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} TransmissionComb_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TransmissionComb;
extern asn_CHOICE_specifics_t asn_SPC_TransmissionComb_specs_1;
extern asn_TYPE_member_t asn_MBR_TransmissionComb_1[3];
extern asn_per_constraints_t asn_PER_type_TransmissionComb_constr_1;

#ifdef __cplusplus
}
#endif

#endif /* _TransmissionComb_H_ */
#include <asn_internal.h>
