/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#ifndef _PRSMutingConfiguration_EUTRA_H_
#define _PRSMutingConfiguration_EUTRA_H_

#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PRSMutingConfiguration_EUTRA_PR {
  PRSMutingConfiguration_EUTRA_PR_NOTHING, /* No components present */
  PRSMutingConfiguration_EUTRA_PR_two,
  PRSMutingConfiguration_EUTRA_PR_four,
  PRSMutingConfiguration_EUTRA_PR_eight,
  PRSMutingConfiguration_EUTRA_PR_sixteen,
  PRSMutingConfiguration_EUTRA_PR_thirty_two,
  PRSMutingConfiguration_EUTRA_PR_sixty_four,
  PRSMutingConfiguration_EUTRA_PR_one_hundred_and_twenty_eight,
  PRSMutingConfiguration_EUTRA_PR_two_hundred_and_fifty_six,
  PRSMutingConfiguration_EUTRA_PR_five_hundred_and_twelve,
  PRSMutingConfiguration_EUTRA_PR_one_thousand_and_twenty_four,
  PRSMutingConfiguration_EUTRA_PR_pRSMutingConfiguration_EUTRA_Extension
} PRSMutingConfiguration_EUTRA_PR;

/* Forward declarations */
struct ProtocolIE_Single_Container;

/* PRSMutingConfiguration-EUTRA */
typedef struct PRSMutingConfiguration_EUTRA {
  PRSMutingConfiguration_EUTRA_PR present;
  union PRSMutingConfiguration_EUTRA_u {
    BIT_STRING_t two;
    BIT_STRING_t four;
    BIT_STRING_t eight;
    BIT_STRING_t sixteen;
    BIT_STRING_t thirty_two;
    BIT_STRING_t sixty_four;
    BIT_STRING_t one_hundred_and_twenty_eight;
    BIT_STRING_t two_hundred_and_fifty_six;
    BIT_STRING_t five_hundred_and_twelve;
    BIT_STRING_t one_thousand_and_twenty_four;
    struct ProtocolIE_Single_Container* pRSMutingConfiguration_EUTRA_Extension;
  } choice;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} PRSMutingConfiguration_EUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PRSMutingConfiguration_EUTRA;
extern asn_CHOICE_specifics_t asn_SPC_PRSMutingConfiguration_EUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_PRSMutingConfiguration_EUTRA_1[11];
extern asn_per_constraints_t asn_PER_type_PRSMutingConfiguration_EUTRA_constr_1;

#ifdef __cplusplus
}
#endif

#endif /* _PRSMutingConfiguration_EUTRA_H_ */
#include <asn_internal.h>
