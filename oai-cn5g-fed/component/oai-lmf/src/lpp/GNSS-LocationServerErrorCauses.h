/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _GNSS_LocationServerErrorCauses_H_
#define _GNSS_LocationServerErrorCauses_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GNSS_LocationServerErrorCauses__cause {
  GNSS_LocationServerErrorCauses__cause_undefined = 0,
  GNSS_LocationServerErrorCauses__cause_undeliveredAssistanceDataIsNotSupportedByServer =
      1,
  GNSS_LocationServerErrorCauses__cause_undeliveredAssistanceDataIsSupportedButCurrentlyNotAvailableByServer =
      2,
  GNSS_LocationServerErrorCauses__cause_undeliveredAssistanceDataIsPartlyNotSupportedAndPartlyNotAvailableByServer =
      3,
  /*
   * Enumeration is extensible
   */
  GNSS_LocationServerErrorCauses__cause_unconfirmedPeriodicAssistanceDataIsNotSupported_v1510 =
      4,
  GNSS_LocationServerErrorCauses__cause_unconfirmedPeriodicAssistanceDataIsSupportedButCurrentlyNotAvailable_v1510 =
      5,
  GNSS_LocationServerErrorCauses__cause_unconfirmedPeriodicAssistanceDataIsPartlyNotSupportedAndPartlyNotAvailable_v1510 =
      6,
  GNSS_LocationServerErrorCauses__cause_undeliveredPeriodicAssistanceDataIsCurrentlyNotAvailable_v1510 =
      7
} e_GNSS_LocationServerErrorCauses__cause;

/* GNSS-LocationServerErrorCauses */
typedef struct GNSS_LocationServerErrorCauses {
  long cause;
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} GNSS_LocationServerErrorCauses_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cause_2;	// (Use
 * -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_LocationServerErrorCauses;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSS_LocationServerErrorCauses_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_LocationServerErrorCauses_1[1];

#ifdef __cplusplus
}
#endif

#endif /* _GNSS_LocationServerErrorCauses_H_ */
#include <asn_internal.h>
