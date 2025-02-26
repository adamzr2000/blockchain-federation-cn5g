/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "GNSS-ID.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_gnss_id_constr_2 CC_NOTUSED = {
    {APC_CONSTRAINED | APC_EXTENSIBLE, 3, 3, 0, 4} /* (0..4,...) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_gnss_id_value2enum_2[] = {
    {0, 3, "gps"},     {1, 4, "sbas"}, {2, 4, "qzss"},        {3, 7, "galileo"},
    {4, 7, "glonass"}, {5, 3, "bds"},  {6, 11, "navic-v1610"}
    /* This list is extensible */
};
static const unsigned int asn_MAP_gnss_id_enum2value_2[] = {
    5, /* bds(5) */
    3, /* galileo(3) */
    4, /* glonass(4) */
    0, /* gps(0) */
    6, /* navic-v1610(6) */
    2, /* qzss(2) */
    1  /* sbas(1) */
       /* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_gnss_id_specs_2 = {
    asn_MAP_gnss_id_value2enum_2, /* "tag" => N; sorted by tag */
    asn_MAP_gnss_id_enum2value_2, /* N => "tag"; sorted by N */
    7,                            /* Number of elements in the maps */
    6,                            /* Extensions before this member */
    1,                            /* Strict enumeration */
    0,                            /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_gnss_id_tags_2[] = {
    (ASN_TAG_CLASS_CONTEXT | (0 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_gnss_id_2 = {
        "gnss-id",
        "gnss-id",
        &asn_OP_NativeEnumerated,
        asn_DEF_gnss_id_tags_2,
        sizeof(asn_DEF_gnss_id_tags_2) / sizeof(asn_DEF_gnss_id_tags_2[0]) -
            1,                  /* 1 */
        asn_DEF_gnss_id_tags_2, /* Same as above */
        sizeof(asn_DEF_gnss_id_tags_2) /
            sizeof(asn_DEF_gnss_id_tags_2[0]), /* 2 */
        {0, &asn_PER_type_gnss_id_constr_2, NativeEnumerated_constraint},
        0,
        0,                       /* Defined elsewhere */
        &asn_SPC_gnss_id_specs_2 /* Additional specs */
};

asn_TYPE_member_t asn_MBR_GNSS_ID_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct GNSS_ID, gnss_id),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_gnss_id_2,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-id"},
};
static const ber_tlv_tag_t asn_DEF_GNSS_ID_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_GNSS_ID_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0} /* gnss-id */
};
asn_SEQUENCE_specifics_t asn_SPC_GNSS_ID_specs_1 = {
    sizeof(struct GNSS_ID),
    offsetof(struct GNSS_ID, _asn_ctx),
    asn_MAP_GNSS_ID_tag2el_1,
    1, /* Count of tags in the map */
    0,
    0,
    0, /* Optional elements (not needed) */
    1, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GNSS_ID = {
    "GNSS-ID",
    "GNSS-ID",
    &asn_OP_SEQUENCE,
    asn_DEF_GNSS_ID_tags_1,
    sizeof(asn_DEF_GNSS_ID_tags_1) / sizeof(asn_DEF_GNSS_ID_tags_1[0]), /* 1 */
    asn_DEF_GNSS_ID_tags_1, /* Same as above */
    sizeof(asn_DEF_GNSS_ID_tags_1) / sizeof(asn_DEF_GNSS_ID_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_GNSS_ID_1,
    1,                       /* Elements count */
    &asn_SPC_GNSS_ID_specs_1 /* Additional specs */
};
