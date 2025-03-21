/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "GNSS-GenericAssistDataElement.h"

#include "SBAS-ID.h"
#include "GNSS-TimeModelList.h"
#include "GNSS-DifferentialCorrections.h"
#include "GNSS-NavigationModel.h"
#include "GNSS-RealTimeIntegrity.h"
#include "GNSS-DataBitAssistance.h"
#include "GNSS-AcquisitionAssistance.h"
#include "GNSS-Almanac.h"
#include "GNSS-UTC-Model.h"
#include "GNSS-AuxiliaryInformation.h"
#include "BDS-DifferentialCorrections-r12.h"
#include "BDS-GridModelParameter-r12.h"
#include "GNSS-RTK-Observations-r15.h"
#include "GLO-RTK-BiasInformation-r15.h"
#include "GNSS-RTK-MAC-CorrectionDifferences-r15.h"
#include "GNSS-RTK-Residuals-r15.h"
#include "GNSS-RTK-FKP-Gradients-r15.h"
#include "GNSS-SSR-OrbitCorrections-r15.h"
#include "GNSS-SSR-ClockCorrections-r15.h"
#include "GNSS-SSR-CodeBias-r15.h"
#include "GNSS-SSR-URA-r16.h"
#include "GNSS-SSR-PhaseBias-r16.h"
#include "GNSS-SSR-STEC-Correction-r16.h"
#include "GNSS-SSR-GriddedCorrection-r16.h"
#include "NavIC-DifferentialCorrections-r16.h"
#include "NavIC-GridModelParameter-r16.h"
static asn_TYPE_member_t asn_MBR_ext1_14[] = {
    {ATF_POINTER,
     2,
     offsetof(
         struct GNSS_GenericAssistDataElement__ext1,
         bds_DifferentialCorrections_r12),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BDS_DifferentialCorrections_r12,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "bds-DifferentialCorrections-r12"},
    {ATF_POINTER,
     1,
     offsetof(struct GNSS_GenericAssistDataElement__ext1, bds_GridModel_r12),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BDS_GridModelParameter_r12,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "bds-GridModel-r12"},
};
static const int asn_MAP_ext1_oms_14[]            = {0, 1};
static const ber_tlv_tag_t asn_DEF_ext1_tags_14[] = {
    (ASN_TAG_CLASS_CONTEXT | (11 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_14[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
     0}, /* bds-DifferentialCorrections-r12 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0} /* bds-GridModel-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_14 = {
    sizeof(struct GNSS_GenericAssistDataElement__ext1),
    offsetof(struct GNSS_GenericAssistDataElement__ext1, _asn_ctx),
    asn_MAP_ext1_tag2el_14,
    2,                   /* Count of tags in the map */
    asn_MAP_ext1_oms_14, /* Optional members */
    2,
    0,  /* Root/Additions */
    -1, /* First extension addition */
};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_ext1_14 = {
        "ext1",
        "ext1",
        &asn_OP_SEQUENCE,
        asn_DEF_ext1_tags_14,
        sizeof(asn_DEF_ext1_tags_14) / sizeof(asn_DEF_ext1_tags_14[0]) -
            1,                /* 1 */
        asn_DEF_ext1_tags_14, /* Same as above */
        sizeof(asn_DEF_ext1_tags_14) / sizeof(asn_DEF_ext1_tags_14[0]), /* 2 */
        {0, 0, SEQUENCE_constraint},
        asn_MBR_ext1_14,
        2,                     /* Elements count */
        &asn_SPC_ext1_specs_14 /* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_17[] = {
    {ATF_POINTER,
     8,
     offsetof(
         struct GNSS_GenericAssistDataElement__ext2, gnss_RTK_Observations_r15),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_RTK_Observations_r15,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-RTK-Observations-r15"},
    {ATF_POINTER,
     7,
     offsetof(
         struct GNSS_GenericAssistDataElement__ext2,
         glo_RTK_BiasInformation_r15),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GLO_RTK_BiasInformation_r15,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "glo-RTK-BiasInformation-r15"},
    {ATF_POINTER,
     6,
     offsetof(
         struct GNSS_GenericAssistDataElement__ext2,
         gnss_RTK_MAC_CorrectionDifferences_r15),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_RTK_MAC_CorrectionDifferences_r15,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-RTK-MAC-CorrectionDifferences-r15"},
    {ATF_POINTER,
     5,
     offsetof(
         struct GNSS_GenericAssistDataElement__ext2, gnss_RTK_Residuals_r15),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_RTK_Residuals_r15,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-RTK-Residuals-r15"},
    {ATF_POINTER,
     4,
     offsetof(
         struct GNSS_GenericAssistDataElement__ext2,
         gnss_RTK_FKP_Gradients_r15),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_RTK_FKP_Gradients_r15,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-RTK-FKP-Gradients-r15"},
    {ATF_POINTER,
     3,
     offsetof(
         struct GNSS_GenericAssistDataElement__ext2,
         gnss_SSR_OrbitCorrections_r15),
     (ASN_TAG_CLASS_CONTEXT | (5 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_SSR_OrbitCorrections_r15,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-SSR-OrbitCorrections-r15"},
    {ATF_POINTER,
     2,
     offsetof(
         struct GNSS_GenericAssistDataElement__ext2,
         gnss_SSR_ClockCorrections_r15),
     (ASN_TAG_CLASS_CONTEXT | (6 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_SSR_ClockCorrections_r15,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-SSR-ClockCorrections-r15"},
    {ATF_POINTER,
     1,
     offsetof(
         struct GNSS_GenericAssistDataElement__ext2, gnss_SSR_CodeBias_r15),
     (ASN_TAG_CLASS_CONTEXT | (7 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_SSR_CodeBias_r15,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-SSR-CodeBias-r15"},
};
static const int asn_MAP_ext2_oms_17[]            = {0, 1, 2, 3, 4, 5, 6, 7};
static const ber_tlv_tag_t asn_DEF_ext2_tags_17[] = {
    (ASN_TAG_CLASS_CONTEXT | (12 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_17[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
     0}, /* gnss-RTK-Observations-r15 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0,
     0}, /* glo-RTK-BiasInformation-r15 */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0,
     0}, /* gnss-RTK-MAC-CorrectionDifferences-r15 */
    {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}, /* gnss-RTK-Residuals-r15 */
    {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0,
     0}, /* gnss-RTK-FKP-Gradients-r15 */
    {(ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0,
     0}, /* gnss-SSR-OrbitCorrections-r15 */
    {(ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0,
     0}, /* gnss-SSR-ClockCorrections-r15 */
    {(ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0} /* gnss-SSR-CodeBias-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_17 = {
    sizeof(struct GNSS_GenericAssistDataElement__ext2),
    offsetof(struct GNSS_GenericAssistDataElement__ext2, _asn_ctx),
    asn_MAP_ext2_tag2el_17,
    8,                   /* Count of tags in the map */
    asn_MAP_ext2_oms_17, /* Optional members */
    8,
    0,  /* Root/Additions */
    -1, /* First extension addition */
};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_ext2_17 = {
        "ext2",
        "ext2",
        &asn_OP_SEQUENCE,
        asn_DEF_ext2_tags_17,
        sizeof(asn_DEF_ext2_tags_17) / sizeof(asn_DEF_ext2_tags_17[0]) -
            1,                /* 1 */
        asn_DEF_ext2_tags_17, /* Same as above */
        sizeof(asn_DEF_ext2_tags_17) / sizeof(asn_DEF_ext2_tags_17[0]), /* 2 */
        {0, 0, SEQUENCE_constraint},
        asn_MBR_ext2_17,
        8,                     /* Elements count */
        &asn_SPC_ext2_specs_17 /* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext3_26[] = {
    {ATF_POINTER,
     6,
     offsetof(struct GNSS_GenericAssistDataElement__ext3, gnss_SSR_URA_r16),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_SSR_URA_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-SSR-URA-r16"},
    {ATF_POINTER,
     5,
     offsetof(
         struct GNSS_GenericAssistDataElement__ext3, gnss_SSR_PhaseBias_r16),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_SSR_PhaseBias_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-SSR-PhaseBias-r16"},
    {ATF_POINTER,
     4,
     offsetof(
         struct GNSS_GenericAssistDataElement__ext3,
         gnss_SSR_STEC_Correction_r16),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_SSR_STEC_Correction_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-SSR-STEC-Correction-r16"},
    {ATF_POINTER,
     3,
     offsetof(
         struct GNSS_GenericAssistDataElement__ext3,
         gnss_SSR_GriddedCorrection_r16),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_SSR_GriddedCorrection_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-SSR-GriddedCorrection-r16"},
    {ATF_POINTER,
     2,
     offsetof(
         struct GNSS_GenericAssistDataElement__ext3,
         navic_DifferentialCorrections_r16),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NavIC_DifferentialCorrections_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "navic-DifferentialCorrections-r16"},
    {ATF_POINTER,
     1,
     offsetof(struct GNSS_GenericAssistDataElement__ext3, navic_GridModel_r16),
     (ASN_TAG_CLASS_CONTEXT | (5 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NavIC_GridModelParameter_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "navic-GridModel-r16"},
};
static const int asn_MAP_ext3_oms_26[]            = {0, 1, 2, 3, 4, 5};
static const ber_tlv_tag_t asn_DEF_ext3_tags_26[] = {
    (ASN_TAG_CLASS_CONTEXT | (13 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_ext3_tag2el_26[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* gnss-SSR-URA-r16 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* gnss-SSR-PhaseBias-r16 */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0,
     0}, /* gnss-SSR-STEC-Correction-r16 */
    {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0,
     0}, /* gnss-SSR-GriddedCorrection-r16 */
    {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0,
     0}, /* navic-DifferentialCorrections-r16 */
    {(ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0} /* navic-GridModel-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext3_specs_26 = {
    sizeof(struct GNSS_GenericAssistDataElement__ext3),
    offsetof(struct GNSS_GenericAssistDataElement__ext3, _asn_ctx),
    asn_MAP_ext3_tag2el_26,
    6,                   /* Count of tags in the map */
    asn_MAP_ext3_oms_26, /* Optional members */
    6,
    0,  /* Root/Additions */
    -1, /* First extension addition */
};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_ext3_26 = {
        "ext3",
        "ext3",
        &asn_OP_SEQUENCE,
        asn_DEF_ext3_tags_26,
        sizeof(asn_DEF_ext3_tags_26) / sizeof(asn_DEF_ext3_tags_26[0]) -
            1,                /* 1 */
        asn_DEF_ext3_tags_26, /* Same as above */
        sizeof(asn_DEF_ext3_tags_26) / sizeof(asn_DEF_ext3_tags_26[0]), /* 2 */
        {0, 0, SEQUENCE_constraint},
        asn_MBR_ext3_26,
        6,                     /* Elements count */
        &asn_SPC_ext3_specs_26 /* Additional specs */
};

asn_TYPE_member_t asn_MBR_GNSS_GenericAssistDataElement_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct GNSS_GenericAssistDataElement, gnss_ID),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_ID,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-ID"},
    {ATF_POINTER,
     13,
     offsetof(struct GNSS_GenericAssistDataElement, sbas_ID),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_SBAS_ID,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "sbas-ID"},
    {ATF_POINTER,
     12,
     offsetof(struct GNSS_GenericAssistDataElement, gnss_TimeModels),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_TimeModelList,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-TimeModels"},
    {ATF_POINTER,
     11,
     offsetof(
         struct GNSS_GenericAssistDataElement, gnss_DifferentialCorrections),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_DifferentialCorrections,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-DifferentialCorrections"},
    {ATF_POINTER,
     10,
     offsetof(struct GNSS_GenericAssistDataElement, gnss_NavigationModel),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_NavigationModel,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-NavigationModel"},
    {ATF_POINTER,
     9,
     offsetof(struct GNSS_GenericAssistDataElement, gnss_RealTimeIntegrity),
     (ASN_TAG_CLASS_CONTEXT | (5 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_RealTimeIntegrity,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-RealTimeIntegrity"},
    {ATF_POINTER,
     8,
     offsetof(struct GNSS_GenericAssistDataElement, gnss_DataBitAssistance),
     (ASN_TAG_CLASS_CONTEXT | (6 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_DataBitAssistance,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-DataBitAssistance"},
    {ATF_POINTER,
     7,
     offsetof(struct GNSS_GenericAssistDataElement, gnss_AcquisitionAssistance),
     (ASN_TAG_CLASS_CONTEXT | (7 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_AcquisitionAssistance,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-AcquisitionAssistance"},
    {ATF_POINTER,
     6,
     offsetof(struct GNSS_GenericAssistDataElement, gnss_Almanac),
     (ASN_TAG_CLASS_CONTEXT | (8 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_Almanac,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-Almanac"},
    {ATF_POINTER,
     5,
     offsetof(struct GNSS_GenericAssistDataElement, gnss_UTC_Model),
     (ASN_TAG_CLASS_CONTEXT | (9 << 2)),
     +1, /* EXPLICIT tag at current level */
     &asn_DEF_GNSS_UTC_Model,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-UTC-Model"},
    {ATF_POINTER,
     4,
     offsetof(struct GNSS_GenericAssistDataElement, gnss_AuxiliaryInformation),
     (ASN_TAG_CLASS_CONTEXT | (10 << 2)),
     +1, /* EXPLICIT tag at current level */
     &asn_DEF_GNSS_AuxiliaryInformation,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-AuxiliaryInformation"},
    {ATF_POINTER,
     3,
     offsetof(struct GNSS_GenericAssistDataElement, ext1),
     (ASN_TAG_CLASS_CONTEXT | (11 << 2)),
     0,
     &asn_DEF_ext1_14,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "ext1"},
    {ATF_POINTER,
     2,
     offsetof(struct GNSS_GenericAssistDataElement, ext2),
     (ASN_TAG_CLASS_CONTEXT | (12 << 2)),
     0,
     &asn_DEF_ext2_17,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "ext2"},
    {ATF_POINTER,
     1,
     offsetof(struct GNSS_GenericAssistDataElement, ext3),
     (ASN_TAG_CLASS_CONTEXT | (13 << 2)),
     0,
     &asn_DEF_ext3_26,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "ext3"},
};
static const int asn_MAP_GNSS_GenericAssistDataElement_oms_1[] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
static const ber_tlv_tag_t asn_DEF_GNSS_GenericAssistDataElement_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_GNSS_GenericAssistDataElement_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* gnss-ID */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* sbas-ID */
        {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* gnss-TimeModels */
        {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0,
         0}, /* gnss-DifferentialCorrections */
        {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0,
         0}, /* gnss-NavigationModel */
        {(ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0,
         0}, /* gnss-RealTimeIntegrity */
        {(ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0,
         0}, /* gnss-DataBitAssistance */
        {(ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0,
         0}, /* gnss-AcquisitionAssistance */
        {(ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0}, /* gnss-Almanac */
        {(ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0}, /* gnss-UTC-Model */
        {(ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0,
         0}, /* gnss-AuxiliaryInformation */
        {(ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0}, /* ext1 */
        {(ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0}, /* ext2 */
        {(ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0}  /* ext3 */
};
asn_SEQUENCE_specifics_t asn_SPC_GNSS_GenericAssistDataElement_specs_1 = {
    sizeof(struct GNSS_GenericAssistDataElement),
    offsetof(struct GNSS_GenericAssistDataElement, _asn_ctx),
    asn_MAP_GNSS_GenericAssistDataElement_tag2el_1,
    14,                                          /* Count of tags in the map */
    asn_MAP_GNSS_GenericAssistDataElement_oms_1, /* Optional members */
    10,
    3,  /* Root/Additions */
    11, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GNSS_GenericAssistDataElement = {
    "GNSS-GenericAssistDataElement",
    "GNSS-GenericAssistDataElement",
    &asn_OP_SEQUENCE,
    asn_DEF_GNSS_GenericAssistDataElement_tags_1,
    sizeof(asn_DEF_GNSS_GenericAssistDataElement_tags_1) /
        sizeof(asn_DEF_GNSS_GenericAssistDataElement_tags_1[0]), /* 1 */
    asn_DEF_GNSS_GenericAssistDataElement_tags_1, /* Same as above */
    sizeof(asn_DEF_GNSS_GenericAssistDataElement_tags_1) /
        sizeof(asn_DEF_GNSS_GenericAssistDataElement_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_GNSS_GenericAssistDataElement_1,
    14,                                            /* Elements count */
    &asn_SPC_GNSS_GenericAssistDataElement_specs_1 /* Additional specs */
};
