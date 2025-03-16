/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "NR-PositionCalculationAssistance-r16.h"

#include "NR-TRP-LocationInfo-r16.h"
#include "NR-DL-PRS-BeamInfo-r16.h"
#include "NR-RTD-Info-r16.h"
asn_TYPE_member_t asn_MBR_NR_PositionCalculationAssistance_r16_1[] = {
    {ATF_POINTER,
     3,
     offsetof(
         struct NR_PositionCalculationAssistance_r16, nr_TRP_LocationInfo_r16),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NR_TRP_LocationInfo_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nr-TRP-LocationInfo-r16"},
    {ATF_POINTER,
     2,
     offsetof(
         struct NR_PositionCalculationAssistance_r16, nr_DL_PRS_BeamInfo_r16),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NR_DL_PRS_BeamInfo_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nr-DL-PRS-BeamInfo-r16"},
    {ATF_POINTER,
     1,
     offsetof(struct NR_PositionCalculationAssistance_r16, nr_RTD_Info_r16),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NR_RTD_Info_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nr-RTD-Info-r16"},
};
static const int asn_MAP_NR_PositionCalculationAssistance_r16_oms_1[] = {
    0, 1, 2};
static const ber_tlv_tag_t
    asn_DEF_NR_PositionCalculationAssistance_r16_tags_1[] = {
        (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_NR_PositionCalculationAssistance_r16_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
         0}, /* nr-TRP-LocationInfo-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0,
         0}, /* nr-DL-PRS-BeamInfo-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0} /* nr-RTD-Info-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_PositionCalculationAssistance_r16_specs_1 =
    {
        sizeof(struct NR_PositionCalculationAssistance_r16),
        offsetof(struct NR_PositionCalculationAssistance_r16, _asn_ctx),
        asn_MAP_NR_PositionCalculationAssistance_r16_tag2el_1,
        3, /* Count of tags in the map */
        asn_MAP_NR_PositionCalculationAssistance_r16_oms_1, /* Optional members
                                                             */
        3,
        0, /* Root/Additions */
        3, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_PositionCalculationAssistance_r16 = {
    "NR-PositionCalculationAssistance-r16",
    "NR-PositionCalculationAssistance-r16",
    &asn_OP_SEQUENCE,
    asn_DEF_NR_PositionCalculationAssistance_r16_tags_1,
    sizeof(asn_DEF_NR_PositionCalculationAssistance_r16_tags_1) /
        sizeof(asn_DEF_NR_PositionCalculationAssistance_r16_tags_1[0]), /* 1 */
    asn_DEF_NR_PositionCalculationAssistance_r16_tags_1, /* Same as above */
    sizeof(asn_DEF_NR_PositionCalculationAssistance_r16_tags_1) /
        sizeof(asn_DEF_NR_PositionCalculationAssistance_r16_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_NR_PositionCalculationAssistance_r16_1,
    3,                                                    /* Elements count */
    &asn_SPC_NR_PositionCalculationAssistance_r16_specs_1 /* Additional specs */
};
