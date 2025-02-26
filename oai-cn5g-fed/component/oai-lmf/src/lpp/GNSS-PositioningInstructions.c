/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "GNSS-PositioningInstructions.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_ha_GNSS_Req_r15_constr_9
    CC_NOTUSED = {
        {APC_CONSTRAINED, 0, 0, 0, 0} /* (0..0) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ha_GNSS_Req_r15_value2enum_9[] = {
    {0, 4, "true"}};
static const unsigned int asn_MAP_ha_GNSS_Req_r15_enum2value_9[] = {
    0 /* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ha_GNSS_Req_r15_specs_9 = {
    asn_MAP_ha_GNSS_Req_r15_value2enum_9, /* "tag" => N; sorted by tag */
    asn_MAP_ha_GNSS_Req_r15_enum2value_9, /* N => "tag"; sorted by N */
    1,                                    /* Number of elements in the maps */
    0,                                    /* Enumeration is not extensible */
    1,                                    /* Strict enumeration */
    0,                                    /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_ha_GNSS_Req_r15_tags_9[] = {
    (ASN_TAG_CLASS_CONTEXT | (0 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_ha_GNSS_Req_r15_9 = {
        "ha-GNSS-Req-r15",
        "ha-GNSS-Req-r15",
        &asn_OP_NativeEnumerated,
        asn_DEF_ha_GNSS_Req_r15_tags_9,
        sizeof(asn_DEF_ha_GNSS_Req_r15_tags_9) /
                sizeof(asn_DEF_ha_GNSS_Req_r15_tags_9[0]) -
            1,                          /* 1 */
        asn_DEF_ha_GNSS_Req_r15_tags_9, /* Same as above */
        sizeof(asn_DEF_ha_GNSS_Req_r15_tags_9) /
            sizeof(asn_DEF_ha_GNSS_Req_r15_tags_9[0]), /* 2 */
        {0, &asn_PER_type_ha_GNSS_Req_r15_constr_9,
         NativeEnumerated_constraint},
        0,
        0,                               /* Defined elsewhere */
        &asn_SPC_ha_GNSS_Req_r15_specs_9 /* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_8[] = {
    {ATF_POINTER,
     1,
     offsetof(struct GNSS_PositioningInstructions__ext1, ha_GNSS_Req_r15),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ha_GNSS_Req_r15_9,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "ha-GNSS-Req-r15"},
};
static const int asn_MAP_ext1_oms_8[]            = {0};
static const ber_tlv_tag_t asn_DEF_ext1_tags_8[] = {
    (ASN_TAG_CLASS_CONTEXT | (5 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_8[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0} /* ha-GNSS-Req-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_8 = {
    sizeof(struct GNSS_PositioningInstructions__ext1),
    offsetof(struct GNSS_PositioningInstructions__ext1, _asn_ctx),
    asn_MAP_ext1_tag2el_8,
    1,                  /* Count of tags in the map */
    asn_MAP_ext1_oms_8, /* Optional members */
    1,
    0,  /* Root/Additions */
    -1, /* First extension addition */
};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_ext1_8 = {
        "ext1",
        "ext1",
        &asn_OP_SEQUENCE,
        asn_DEF_ext1_tags_8,
        sizeof(asn_DEF_ext1_tags_8) / sizeof(asn_DEF_ext1_tags_8[0]) -
            1,               /* 1 */
        asn_DEF_ext1_tags_8, /* Same as above */
        sizeof(asn_DEF_ext1_tags_8) / sizeof(asn_DEF_ext1_tags_8[0]), /* 2 */
        {0, 0, SEQUENCE_constraint},
        asn_MBR_ext1_8,
        1,                    /* Elements count */
        &asn_SPC_ext1_specs_8 /* Additional specs */
};

asn_TYPE_member_t asn_MBR_GNSS_PositioningInstructions_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct GNSS_PositioningInstructions, gnss_Methods),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_ID_Bitmap,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-Methods"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct GNSS_PositioningInstructions, fineTimeAssistanceMeasReq),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BOOLEAN,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "fineTimeAssistanceMeasReq"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct GNSS_PositioningInstructions, adrMeasReq),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BOOLEAN,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "adrMeasReq"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct GNSS_PositioningInstructions, multiFreqMeasReq),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BOOLEAN,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "multiFreqMeasReq"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct GNSS_PositioningInstructions, assistanceAvailability),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BOOLEAN,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "assistanceAvailability"},
    {ATF_POINTER,
     1,
     offsetof(struct GNSS_PositioningInstructions, ext1),
     (ASN_TAG_CLASS_CONTEXT | (5 << 2)),
     0,
     &asn_DEF_ext1_8,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "ext1"},
};
static const int asn_MAP_GNSS_PositioningInstructions_oms_1[]            = {5};
static const ber_tlv_tag_t asn_DEF_GNSS_PositioningInstructions_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_GNSS_PositioningInstructions_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* gnss-Methods */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0,
         0}, /* fineTimeAssistanceMeasReq */
        {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* adrMeasReq */
        {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}, /* multiFreqMeasReq */
        {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0,
         0}, /* assistanceAvailability */
        {(ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0} /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_GNSS_PositioningInstructions_specs_1 = {
    sizeof(struct GNSS_PositioningInstructions),
    offsetof(struct GNSS_PositioningInstructions, _asn_ctx),
    asn_MAP_GNSS_PositioningInstructions_tag2el_1,
    6,                                          /* Count of tags in the map */
    asn_MAP_GNSS_PositioningInstructions_oms_1, /* Optional members */
    0,
    1, /* Root/Additions */
    5, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GNSS_PositioningInstructions = {
    "GNSS-PositioningInstructions",
    "GNSS-PositioningInstructions",
    &asn_OP_SEQUENCE,
    asn_DEF_GNSS_PositioningInstructions_tags_1,
    sizeof(asn_DEF_GNSS_PositioningInstructions_tags_1) /
        sizeof(asn_DEF_GNSS_PositioningInstructions_tags_1[0]), /* 1 */
    asn_DEF_GNSS_PositioningInstructions_tags_1, /* Same as above */
    sizeof(asn_DEF_GNSS_PositioningInstructions_tags_1) /
        sizeof(asn_DEF_GNSS_PositioningInstructions_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_GNSS_PositioningInstructions_1,
    6,                                            /* Elements count */
    &asn_SPC_GNSS_PositioningInstructions_specs_1 /* Additional specs */
};
