/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _RequestCapabilities_H_
#define _RequestCapabilities_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RequestCapabilities__criticalExtensions_PR {
  RequestCapabilities__criticalExtensions_PR_NOTHING, /* No components present
                                                       */
  RequestCapabilities__criticalExtensions_PR_c1,
  RequestCapabilities__criticalExtensions_PR_criticalExtensionsFuture
} RequestCapabilities__criticalExtensions_PR;
typedef enum RequestCapabilities__criticalExtensions__c1_PR {
  RequestCapabilities__criticalExtensions__c1_PR_NOTHING, /* No components
                                                             present */
  RequestCapabilities__criticalExtensions__c1_PR_requestCapabilities_r9,
  RequestCapabilities__criticalExtensions__c1_PR_spare3,
  RequestCapabilities__criticalExtensions__c1_PR_spare2,
  RequestCapabilities__criticalExtensions__c1_PR_spare1
} RequestCapabilities__criticalExtensions__c1_PR;

/* Forward declarations */
struct RequestCapabilities_r9_IEs;

/* RequestCapabilities */
typedef struct RequestCapabilities {
  struct RequestCapabilities__criticalExtensions {
    RequestCapabilities__criticalExtensions_PR present;
    union RequestCapabilities__criticalExtensions_u {
      struct RequestCapabilities__criticalExtensions__c1 {
        RequestCapabilities__criticalExtensions__c1_PR present;
        union RequestCapabilities__criticalExtensions__c1_u {
          struct RequestCapabilities_r9_IEs* requestCapabilities_r9;
          NULL_t spare3;
          NULL_t spare2;
          NULL_t spare1;
        } choice;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
      } * c1;
      struct RequestCapabilities__criticalExtensions__criticalExtensionsFuture {
        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
      } * criticalExtensionsFuture;
    } choice;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } criticalExtensions;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} RequestCapabilities_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RequestCapabilities;
extern asn_SEQUENCE_specifics_t asn_SPC_RequestCapabilities_specs_1;
extern asn_TYPE_member_t asn_MBR_RequestCapabilities_1[1];

#ifdef __cplusplus
}
#endif

#endif /* _RequestCapabilities_H_ */
#include <asn_internal.h>
