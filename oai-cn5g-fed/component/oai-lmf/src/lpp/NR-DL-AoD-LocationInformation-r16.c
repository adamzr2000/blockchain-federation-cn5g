/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "NR-DL-AoD-LocationInformation-r16.h"

#include "NR-TimeStamp-r16.h"
static asn_per_constraints_t asn_PER_type_measurementReferenceTime_r16_constr_2
    CC_NOTUSED = {
        {APC_CONSTRAINED | APC_EXTENSIBLE, 1, 1, 0, 1} /* (0..1,...) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static asn_TYPE_member_t asn_MBR_measurementReferenceTime_r16_2[] = {
    {ATF_POINTER,
     0,
     offsetof(
         struct NR_DL_AoD_LocationInformation_r16__measurementReferenceTime_r16,
         choice.sfn_time_r16),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NR_TimeStamp_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "sfn-time-r16"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct NR_DL_AoD_LocationInformation_r16__measurementReferenceTime_r16,
         choice.utc_time_r16),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_UTCTime,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "utc-time-r16"},
};
static const asn_TYPE_tag2member_t
    asn_MAP_measurementReferenceTime_r16_tag2el_2[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* sfn-time-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}  /* utc-time-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_measurementReferenceTime_r16_specs_2 = {
    sizeof(
        struct NR_DL_AoD_LocationInformation_r16__measurementReferenceTime_r16),
    offsetof(
        struct NR_DL_AoD_LocationInformation_r16__measurementReferenceTime_r16,
        _asn_ctx),
    offsetof(
        struct NR_DL_AoD_LocationInformation_r16__measurementReferenceTime_r16,
        present),
    sizeof(
        ((struct
          NR_DL_AoD_LocationInformation_r16__measurementReferenceTime_r16*) 0)
            ->present),
    asn_MAP_measurementReferenceTime_r16_tag2el_2,
    2, /* Count of tags in the map */
    0,
    0,
    2 /* Extensions start */
};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_measurementReferenceTime_r16_2 = {
        "measurementReferenceTime-r16",
        "measurementReferenceTime-r16",
        &asn_OP_CHOICE,
        0, /* No effective tags (pointer) */
        0, /* No effective tags (count) */
        0, /* No tags (pointer) */
        0, /* No tags (count) */
        {0, &asn_PER_type_measurementReferenceTime_r16_constr_2,
         CHOICE_constraint},
        asn_MBR_measurementReferenceTime_r16_2,
        2,                                            /* Elements count */
        &asn_SPC_measurementReferenceTime_r16_specs_2 /* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_DL_AoD_LocationInformation_r16_1[] = {
    {ATF_POINTER,
     1,
     offsetof(
         struct NR_DL_AoD_LocationInformation_r16,
         measurementReferenceTime_r16),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     +1, /* EXPLICIT tag at current level */
     &asn_DEF_measurementReferenceTime_r16_2,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "measurementReferenceTime-r16"},
};
static const int asn_MAP_NR_DL_AoD_LocationInformation_r16_oms_1[] = {0};
static const ber_tlv_tag_t asn_DEF_NR_DL_AoD_LocationInformation_r16_tags_1[] =
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_NR_DL_AoD_LocationInformation_r16_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
         0} /* measurementReferenceTime-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_DL_AoD_LocationInformation_r16_specs_1 = {
    sizeof(struct NR_DL_AoD_LocationInformation_r16),
    offsetof(struct NR_DL_AoD_LocationInformation_r16, _asn_ctx),
    asn_MAP_NR_DL_AoD_LocationInformation_r16_tag2el_1,
    1, /* Count of tags in the map */
    asn_MAP_NR_DL_AoD_LocationInformation_r16_oms_1, /* Optional members */
    1,
    0, /* Root/Additions */
    1, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_DL_AoD_LocationInformation_r16 = {
    "NR-DL-AoD-LocationInformation-r16",
    "NR-DL-AoD-LocationInformation-r16",
    &asn_OP_SEQUENCE,
    asn_DEF_NR_DL_AoD_LocationInformation_r16_tags_1,
    sizeof(asn_DEF_NR_DL_AoD_LocationInformation_r16_tags_1) /
        sizeof(asn_DEF_NR_DL_AoD_LocationInformation_r16_tags_1[0]), /* 1 */
    asn_DEF_NR_DL_AoD_LocationInformation_r16_tags_1, /* Same as above */
    sizeof(asn_DEF_NR_DL_AoD_LocationInformation_r16_tags_1) /
        sizeof(asn_DEF_NR_DL_AoD_LocationInformation_r16_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_NR_DL_AoD_LocationInformation_r16_1,
    1,                                                 /* Elements count */
    &asn_SPC_NR_DL_AoD_LocationInformation_r16_specs_1 /* Additional specs */
};
