/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "CarrierFreqOffsetNB-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_CarrierFreqOffsetNB_r14_constr_1
    CC_NOTUSED = {
        {APC_CONSTRAINED, 5, 5, 0, 20} /* (0..20) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static const asn_INTEGER_enum_map_t
    asn_MAP_CarrierFreqOffsetNB_r14_value2enum_1[] = {
        {0, 4, "v-10"}, {1, 3, "v-9"}, {2, 3, "v-8"},      {3, 3, "v-7"},
        {4, 3, "v-6"},  {5, 3, "v-5"}, {6, 3, "v-4"},      {7, 3, "v-3"},
        {8, 3, "v-2"},  {9, 3, "v-1"}, {10, 7, "v-0dot5"}, {11, 2, "v0"},
        {12, 2, "v1"},  {13, 2, "v2"}, {14, 2, "v3"},      {15, 2, "v4"},
        {16, 2, "v5"},  {17, 2, "v6"}, {18, 2, "v7"},      {19, 2, "v8"},
        {20, 2, "v9"}};
static const unsigned int asn_MAP_CarrierFreqOffsetNB_r14_enum2value_1[] = {
    10, /* v-0dot5(10) */
    9,  /* v-1(9) */
    0,  /* v-10(0) */
    8,  /* v-2(8) */
    7,  /* v-3(7) */
    6,  /* v-4(6) */
    5,  /* v-5(5) */
    4,  /* v-6(4) */
    3,  /* v-7(3) */
    2,  /* v-8(2) */
    1,  /* v-9(1) */
    11, /* v0(11) */
    12, /* v1(12) */
    13, /* v2(13) */
    14, /* v3(14) */
    15, /* v4(15) */
    16, /* v5(16) */
    17, /* v6(17) */
    18, /* v7(18) */
    19, /* v8(19) */
    20  /* v9(20) */
};
const asn_INTEGER_specifics_t asn_SPC_CarrierFreqOffsetNB_r14_specs_1 = {
    asn_MAP_CarrierFreqOffsetNB_r14_value2enum_1, /* "tag" => N; sorted by tag
                                                   */
    asn_MAP_CarrierFreqOffsetNB_r14_enum2value_1, /* N => "tag"; sorted by N */
    21, /* Number of elements in the maps */
    0,  /* Enumeration is not extensible */
    1,  /* Strict enumeration */
    0,  /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_CarrierFreqOffsetNB_r14_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
asn_TYPE_descriptor_t asn_DEF_CarrierFreqOffsetNB_r14 = {
    "CarrierFreqOffsetNB-r14",
    "CarrierFreqOffsetNB-r14",
    &asn_OP_NativeEnumerated,
    asn_DEF_CarrierFreqOffsetNB_r14_tags_1,
    sizeof(asn_DEF_CarrierFreqOffsetNB_r14_tags_1) /
        sizeof(asn_DEF_CarrierFreqOffsetNB_r14_tags_1[0]), /* 1 */
    asn_DEF_CarrierFreqOffsetNB_r14_tags_1,                /* Same as above */
    sizeof(asn_DEF_CarrierFreqOffsetNB_r14_tags_1) /
        sizeof(asn_DEF_CarrierFreqOffsetNB_r14_tags_1[0]), /* 1 */
    {0, &asn_PER_type_CarrierFreqOffsetNB_r14_constr_1,
     NativeEnumerated_constraint},
    0,
    0,                                       /* Defined elsewhere */
    &asn_SPC_CarrierFreqOffsetNB_r14_specs_1 /* Additional specs */
};
