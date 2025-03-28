/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _GNSS_GenericAssistDataElement_H_
#define _GNSS_GenericAssistDataElement_H_

#include <asn_application.h>

/* Including external dependencies */
#include "GNSS-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SBAS_ID;
struct GNSS_TimeModelList;
struct GNSS_DifferentialCorrections;
struct GNSS_NavigationModel;
struct GNSS_RealTimeIntegrity;
struct GNSS_DataBitAssistance;
struct GNSS_AcquisitionAssistance;
struct GNSS_Almanac;
struct GNSS_UTC_Model;
struct GNSS_AuxiliaryInformation;
struct BDS_DifferentialCorrections_r12;
struct BDS_GridModelParameter_r12;
struct GNSS_RTK_Observations_r15;
struct GLO_RTK_BiasInformation_r15;
struct GNSS_RTK_MAC_CorrectionDifferences_r15;
struct GNSS_RTK_Residuals_r15;
struct GNSS_RTK_FKP_Gradients_r15;
struct GNSS_SSR_OrbitCorrections_r15;
struct GNSS_SSR_ClockCorrections_r15;
struct GNSS_SSR_CodeBias_r15;
struct GNSS_SSR_URA_r16;
struct GNSS_SSR_PhaseBias_r16;
struct GNSS_SSR_STEC_Correction_r16;
struct GNSS_SSR_GriddedCorrection_r16;
struct NavIC_DifferentialCorrections_r16;
struct NavIC_GridModelParameter_r16;

/* GNSS-GenericAssistDataElement */
typedef struct GNSS_GenericAssistDataElement {
  GNSS_ID_t gnss_ID;
  struct SBAS_ID* sbas_ID;                    /* OPTIONAL */
  struct GNSS_TimeModelList* gnss_TimeModels; /* OPTIONAL */
  struct GNSS_DifferentialCorrections*
      gnss_DifferentialCorrections;                              /* OPTIONAL */
  struct GNSS_NavigationModel* gnss_NavigationModel;             /* OPTIONAL */
  struct GNSS_RealTimeIntegrity* gnss_RealTimeIntegrity;         /* OPTIONAL */
  struct GNSS_DataBitAssistance* gnss_DataBitAssistance;         /* OPTIONAL */
  struct GNSS_AcquisitionAssistance* gnss_AcquisitionAssistance; /* OPTIONAL */
  struct GNSS_Almanac* gnss_Almanac;                             /* OPTIONAL */
  struct GNSS_UTC_Model* gnss_UTC_Model;                         /* OPTIONAL */
  struct GNSS_AuxiliaryInformation* gnss_AuxiliaryInformation;   /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */
  struct GNSS_GenericAssistDataElement__ext1 {
    struct BDS_DifferentialCorrections_r12*
        bds_DifferentialCorrections_r12;                  /* OPTIONAL */
    struct BDS_GridModelParameter_r12* bds_GridModel_r12; /* OPTIONAL */

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } * ext1;
  struct GNSS_GenericAssistDataElement__ext2 {
    struct GNSS_RTK_Observations_r15* gnss_RTK_Observations_r15; /* OPTIONAL */
    struct GLO_RTK_BiasInformation_r15*
        glo_RTK_BiasInformation_r15; /* OPTIONAL */
    struct GNSS_RTK_MAC_CorrectionDifferences_r15*
        gnss_RTK_MAC_CorrectionDifferences_r15;            /* OPTIONAL */
    struct GNSS_RTK_Residuals_r15* gnss_RTK_Residuals_r15; /* OPTIONAL */
    struct GNSS_RTK_FKP_Gradients_r15*
        gnss_RTK_FKP_Gradients_r15; /* OPTIONAL */
    struct GNSS_SSR_OrbitCorrections_r15*
        gnss_SSR_OrbitCorrections_r15; /* OPTIONAL */
    struct GNSS_SSR_ClockCorrections_r15*
        gnss_SSR_ClockCorrections_r15;                   /* OPTIONAL */
    struct GNSS_SSR_CodeBias_r15* gnss_SSR_CodeBias_r15; /* OPTIONAL */

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } * ext2;
  struct GNSS_GenericAssistDataElement__ext3 {
    struct GNSS_SSR_URA_r16* gnss_SSR_URA_r16;             /* OPTIONAL */
    struct GNSS_SSR_PhaseBias_r16* gnss_SSR_PhaseBias_r16; /* OPTIONAL */
    struct GNSS_SSR_STEC_Correction_r16*
        gnss_SSR_STEC_Correction_r16; /* OPTIONAL */
    struct GNSS_SSR_GriddedCorrection_r16*
        gnss_SSR_GriddedCorrection_r16; /* OPTIONAL */
    struct NavIC_DifferentialCorrections_r16*
        navic_DifferentialCorrections_r16;                    /* OPTIONAL */
    struct NavIC_GridModelParameter_r16* navic_GridModel_r16; /* OPTIONAL */

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } * ext3;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} GNSS_GenericAssistDataElement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_GenericAssistDataElement;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSS_GenericAssistDataElement_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_GenericAssistDataElement_1[14];

#ifdef __cplusplus
}
#endif

#endif /* _GNSS_GenericAssistDataElement_H_ */
#include <asn_internal.h>
