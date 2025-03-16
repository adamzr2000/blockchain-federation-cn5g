/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _LPP_MessageBody_H_
#define _LPP_MessageBody_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LPP_MessageBody_PR {
  LPP_MessageBody_PR_NOTHING, /* No components present */
  LPP_MessageBody_PR_c1,
  LPP_MessageBody_PR_messageClassExtension
} LPP_MessageBody_PR;
typedef enum LPP_MessageBody__c1_PR {
  LPP_MessageBody__c1_PR_NOTHING, /* No components present */
  LPP_MessageBody__c1_PR_requestCapabilities,
  LPP_MessageBody__c1_PR_provideCapabilities,
  LPP_MessageBody__c1_PR_requestAssistanceData,
  LPP_MessageBody__c1_PR_provideAssistanceData,
  LPP_MessageBody__c1_PR_requestLocationInformation,
  LPP_MessageBody__c1_PR_provideLocationInformation,
  LPP_MessageBody__c1_PR_abort,
  LPP_MessageBody__c1_PR_error,
  LPP_MessageBody__c1_PR_spare7,
  LPP_MessageBody__c1_PR_spare6,
  LPP_MessageBody__c1_PR_spare5,
  LPP_MessageBody__c1_PR_spare4,
  LPP_MessageBody__c1_PR_spare3,
  LPP_MessageBody__c1_PR_spare2,
  LPP_MessageBody__c1_PR_spare1,
  LPP_MessageBody__c1_PR_spare0
} LPP_MessageBody__c1_PR;

/* Forward declarations */
struct RequestCapabilities;
struct ProvideCapabilities;
struct RequestAssistanceData;
struct ProvideAssistanceData;
struct RequestLocationInformation;
struct ProvideLocationInformation;
struct Abort;
struct Error;

/* LPP-MessageBody */
typedef struct LPP_MessageBody {
  LPP_MessageBody_PR present;
  union LPP_MessageBody_u {
    struct LPP_MessageBody__c1 {
      LPP_MessageBody__c1_PR present;
      union LPP_MessageBody__c1_u {
        struct RequestCapabilities* requestCapabilities;
        struct ProvideCapabilities* provideCapabilities;
        struct RequestAssistanceData* requestAssistanceData;
        struct ProvideAssistanceData* provideAssistanceData;
        struct RequestLocationInformation* requestLocationInformation;
        struct ProvideLocationInformation* provideLocationInformation;
        struct Abort* abort;
        struct Error* error;
        NULL_t spare7;
        NULL_t spare6;
        NULL_t spare5;
        NULL_t spare4;
        NULL_t spare3;
        NULL_t spare2;
        NULL_t spare1;
        NULL_t spare0;
      } choice;

      /* Context for parsing across buffer boundaries */
      asn_struct_ctx_t _asn_ctx;
    } * c1;
    struct LPP_MessageBody__messageClassExtension {
      /* Context for parsing across buffer boundaries */
      asn_struct_ctx_t _asn_ctx;
    } * messageClassExtension;
  } choice;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} LPP_MessageBody_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_MessageBody;
extern asn_CHOICE_specifics_t asn_SPC_LPP_MessageBody_specs_1;
extern asn_TYPE_member_t asn_MBR_LPP_MessageBody_1[2];
extern asn_per_constraints_t asn_PER_type_LPP_MessageBody_constr_1;

#ifdef __cplusplus
}
#endif

#endif /* _LPP_MessageBody_H_ */
#include <asn_internal.h>
