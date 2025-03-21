/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _A_GNSS_ProvideLocationInformation_H_
#define _A_GNSS_ProvideLocationInformation_H_

#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GNSS_SignalMeasurementInformation;
struct GNSS_LocationInformation;
struct A_GNSS_Error;

/* A-GNSS-ProvideLocationInformation */
typedef struct A_GNSS_ProvideLocationInformation {
  struct GNSS_SignalMeasurementInformation*
      gnss_SignalMeasurementInformation;                     /* OPTIONAL */
  struct GNSS_LocationInformation* gnss_LocationInformation; /* OPTIONAL */
  struct A_GNSS_Error* gnss_Error;                           /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} A_GNSS_ProvideLocationInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_A_GNSS_ProvideLocationInformation;
extern asn_SEQUENCE_specifics_t
    asn_SPC_A_GNSS_ProvideLocationInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_A_GNSS_ProvideLocationInformation_1[3];

#ifdef __cplusplus
}
#endif

#endif /* _A_GNSS_ProvideLocationInformation_H_ */
#include <asn_internal.h>
