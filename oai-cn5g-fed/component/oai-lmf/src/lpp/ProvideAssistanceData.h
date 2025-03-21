/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _ProvideAssistanceData_H_
#define _ProvideAssistanceData_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ProvideAssistanceData__criticalExtensions_PR {
  ProvideAssistanceData__criticalExtensions_PR_NOTHING, /* No components present
                                                         */
  ProvideAssistanceData__criticalExtensions_PR_c1,
  ProvideAssistanceData__criticalExtensions_PR_criticalExtensionsFuture
} ProvideAssistanceData__criticalExtensions_PR;
typedef enum ProvideAssistanceData__criticalExtensions__c1_PR {
  ProvideAssistanceData__criticalExtensions__c1_PR_NOTHING, /* No components
                                                               present */
  ProvideAssistanceData__criticalExtensions__c1_PR_provideAssistanceData_r9,
  ProvideAssistanceData__criticalExtensions__c1_PR_spare3,
  ProvideAssistanceData__criticalExtensions__c1_PR_spare2,
  ProvideAssistanceData__criticalExtensions__c1_PR_spare1
} ProvideAssistanceData__criticalExtensions__c1_PR;

/* Forward declarations */
struct ProvideAssistanceData_r9_IEs;

/* ProvideAssistanceData */
typedef struct ProvideAssistanceData {
  struct ProvideAssistanceData__criticalExtensions {
    ProvideAssistanceData__criticalExtensions_PR present;
    union ProvideAssistanceData__criticalExtensions_u {
      struct ProvideAssistanceData__criticalExtensions__c1 {
        ProvideAssistanceData__criticalExtensions__c1_PR present;
        union ProvideAssistanceData__criticalExtensions__c1_u {
          struct ProvideAssistanceData_r9_IEs* provideAssistanceData_r9;
          NULL_t spare3;
          NULL_t spare2;
          NULL_t spare1;
        } choice;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
      } * c1;
      struct
          ProvideAssistanceData__criticalExtensions__criticalExtensionsFuture {
        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
      } * criticalExtensionsFuture;
    } choice;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } criticalExtensions;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} ProvideAssistanceData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProvideAssistanceData;
extern asn_SEQUENCE_specifics_t asn_SPC_ProvideAssistanceData_specs_1;
extern asn_TYPE_member_t asn_MBR_ProvideAssistanceData_1[1];

#ifdef __cplusplus
}
#endif

#endif /* _ProvideAssistanceData_H_ */
#include <asn_internal.h>
