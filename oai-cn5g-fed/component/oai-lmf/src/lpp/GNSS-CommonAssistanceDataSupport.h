/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _GNSS_CommonAssistanceDataSupport_H_
#define _GNSS_CommonAssistanceDataSupport_H_

#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GNSS_ReferenceTimeSupport;
struct GNSS_ReferenceLocationSupport;
struct GNSS_IonosphericModelSupport;
struct GNSS_EarthOrientationParametersSupport;
struct GNSS_RTK_ReferenceStationInfoSupport_r15;
struct GNSS_RTK_AuxiliaryStationDataSupport_r15;

/* GNSS-CommonAssistanceDataSupport */
typedef struct GNSS_CommonAssistanceDataSupport {
  struct GNSS_ReferenceTimeSupport* gnss_ReferenceTimeSupport; /* OPTIONAL */
  struct GNSS_ReferenceLocationSupport*
      gnss_ReferenceLocationSupport; /* OPTIONAL */
  struct GNSS_IonosphericModelSupport*
      gnss_IonosphericModelSupport; /* OPTIONAL */
  struct GNSS_EarthOrientationParametersSupport*
      gnss_EarthOrientationParametersSupport; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */
  struct GNSS_CommonAssistanceDataSupport__ext1 {
    struct GNSS_RTK_ReferenceStationInfoSupport_r15*
        gnss_RTK_ReferenceStationInfoSupport_r15; /* OPTIONAL */
    struct GNSS_RTK_AuxiliaryStationDataSupport_r15*
        gnss_RTK_AuxiliaryStationDataSupport_r15; /* OPTIONAL */

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } * ext1;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} GNSS_CommonAssistanceDataSupport_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_CommonAssistanceDataSupport;
extern asn_SEQUENCE_specifics_t
    asn_SPC_GNSS_CommonAssistanceDataSupport_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_CommonAssistanceDataSupport_1[5];

#ifdef __cplusplus
}
#endif

#endif /* _GNSS_CommonAssistanceDataSupport_H_ */
#include <asn_internal.h>
