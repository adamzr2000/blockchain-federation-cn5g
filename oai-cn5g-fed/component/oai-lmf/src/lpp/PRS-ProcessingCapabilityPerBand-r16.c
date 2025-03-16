/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "PRS-ProcessingCapabilityPerBand-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_fr1_constr_4 CC_NOTUSED = {
    {APC_CONSTRAINED, 3, 3, 0, 6} /* (0..6) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_type_fr2_constr_12 CC_NOTUSED = {
    {APC_CONSTRAINED, 2, 2, 0, 3} /* (0..3) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_type_supportedBandwidthPRS_r16_constr_3
    CC_NOTUSED = {
        {APC_CONSTRAINED | APC_EXTENSIBLE, 1, 1, 0, 1} /* (0..1,...) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_type_dl_PRS_BufferType_r16_constr_18
    CC_NOTUSED = {
        {APC_CONSTRAINED | APC_EXTENSIBLE, 1, 1, 0, 1} /* (0..1,...) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static asn_per_constraints_t
    asn_PER_type_durationOfPRS_ProcessingSymbols_r16_constr_23 CC_NOTUSED = {
        {APC_CONSTRAINED, 5, 5, 0, 17} /* (0..17) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static asn_per_constraints_t
    asn_PER_type_durationOfPRS_ProcessingSymbolsInEveryTms_r16_constr_42
        CC_NOTUSED = {
            {APC_CONSTRAINED, 4, 4, 0, 9} /* (0..9) */,
            {APC_UNCONSTRAINED, -1, -1, 0, 0},
            0,
            0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_type_scs15_r16_constr_55 CC_NOTUSED = {
    {APC_CONSTRAINED, 4, 4, 0, 8} /* (0..8) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_type_scs30_r16_constr_65 CC_NOTUSED = {
    {APC_CONSTRAINED, 4, 4, 0, 8} /* (0..8) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_type_scs60_r16_constr_75 CC_NOTUSED = {
    {APC_CONSTRAINED, 4, 4, 0, 8} /* (0..8) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_type_scs120_r16_constr_85 CC_NOTUSED = {
    {APC_CONSTRAINED, 4, 4, 0, 8} /* (0..8) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_fr1_value2enum_4[] = {
    {0, 4, "mhz5"},  {1, 5, "mhz10"}, {2, 5, "mhz20"}, {3, 5, "mhz40"},
    {4, 5, "mhz50"}, {5, 5, "mhz80"}, {6, 6, "mhz100"}};
static const unsigned int asn_MAP_fr1_enum2value_4[] = {
    1, /* mhz10(1) */
    6, /* mhz100(6) */
    2, /* mhz20(2) */
    3, /* mhz40(3) */
    0, /* mhz5(0) */
    4, /* mhz50(4) */
    5  /* mhz80(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_fr1_specs_4 = {
    asn_MAP_fr1_value2enum_4, /* "tag" => N; sorted by tag */
    asn_MAP_fr1_enum2value_4, /* N => "tag"; sorted by N */
    7,                        /* Number of elements in the maps */
    0,                        /* Enumeration is not extensible */
    1,                        /* Strict enumeration */
    0,                        /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_fr1_tags_4[] = {
    (ASN_TAG_CLASS_CONTEXT | (0 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_fr1_4 = {
        "fr1",
        "fr1",
        &asn_OP_NativeEnumerated,
        asn_DEF_fr1_tags_4,
        sizeof(asn_DEF_fr1_tags_4) / sizeof(asn_DEF_fr1_tags_4[0]) - 1, /* 1 */
        asn_DEF_fr1_tags_4, /* Same as above */
        sizeof(asn_DEF_fr1_tags_4) / sizeof(asn_DEF_fr1_tags_4[0]), /* 2 */
        {0, &asn_PER_type_fr1_constr_4, NativeEnumerated_constraint},
        0,
        0,                   /* Defined elsewhere */
        &asn_SPC_fr1_specs_4 /* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_fr2_value2enum_12[] = {
    {0, 5, "mhz50"},
    {1, 6, "mhz100"},
    {2, 6, "mhz200"},
    {3, 6, "mhz400"}};
static const unsigned int asn_MAP_fr2_enum2value_12[] = {
    1, /* mhz100(1) */
    2, /* mhz200(2) */
    3, /* mhz400(3) */
    0  /* mhz50(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_fr2_specs_12 = {
    asn_MAP_fr2_value2enum_12, /* "tag" => N; sorted by tag */
    asn_MAP_fr2_enum2value_12, /* N => "tag"; sorted by N */
    4,                         /* Number of elements in the maps */
    0,                         /* Enumeration is not extensible */
    1,                         /* Strict enumeration */
    0,                         /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_fr2_tags_12[] = {
    (ASN_TAG_CLASS_CONTEXT | (1 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_fr2_12 = {
        "fr2",
        "fr2",
        &asn_OP_NativeEnumerated,
        asn_DEF_fr2_tags_12,
        sizeof(asn_DEF_fr2_tags_12) / sizeof(asn_DEF_fr2_tags_12[0]) -
            1,               /* 1 */
        asn_DEF_fr2_tags_12, /* Same as above */
        sizeof(asn_DEF_fr2_tags_12) / sizeof(asn_DEF_fr2_tags_12[0]), /* 2 */
        {0, &asn_PER_type_fr2_constr_12, NativeEnumerated_constraint},
        0,
        0,                    /* Defined elsewhere */
        &asn_SPC_fr2_specs_12 /* Additional specs */
};

static asn_TYPE_member_t asn_MBR_supportedBandwidthPRS_r16_3[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct PRS_ProcessingCapabilityPerBand_r16__supportedBandwidthPRS_r16,
         choice.fr1),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_fr1_4,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "fr1"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct PRS_ProcessingCapabilityPerBand_r16__supportedBandwidthPRS_r16,
         choice.fr2),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_fr2_12,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "fr2"},
};
static const asn_TYPE_tag2member_t
    asn_MAP_supportedBandwidthPRS_r16_tag2el_3[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* fr1 */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}  /* fr2 */
};
static asn_CHOICE_specifics_t asn_SPC_supportedBandwidthPRS_r16_specs_3 = {
    sizeof(
        struct PRS_ProcessingCapabilityPerBand_r16__supportedBandwidthPRS_r16),
    offsetof(
        struct PRS_ProcessingCapabilityPerBand_r16__supportedBandwidthPRS_r16,
        _asn_ctx),
    offsetof(
        struct PRS_ProcessingCapabilityPerBand_r16__supportedBandwidthPRS_r16,
        present),
    sizeof(((struct
             PRS_ProcessingCapabilityPerBand_r16__supportedBandwidthPRS_r16*) 0)
               ->present),
    asn_MAP_supportedBandwidthPRS_r16_tag2el_3,
    2, /* Count of tags in the map */
    0,
    0,
    2 /* Extensions start */
};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_supportedBandwidthPRS_r16_3 = {
        "supportedBandwidthPRS-r16",
        "supportedBandwidthPRS-r16",
        &asn_OP_CHOICE,
        0, /* No effective tags (pointer) */
        0, /* No effective tags (count) */
        0, /* No tags (pointer) */
        0, /* No tags (count) */
        {0, &asn_PER_type_supportedBandwidthPRS_r16_constr_3,
         CHOICE_constraint},
        asn_MBR_supportedBandwidthPRS_r16_3,
        2,                                         /* Elements count */
        &asn_SPC_supportedBandwidthPRS_r16_specs_3 /* Additional specs */
};

static const asn_INTEGER_enum_map_t
    asn_MAP_dl_PRS_BufferType_r16_value2enum_18[] = {
        {0, 5, "type1"},
        {1, 5, "type2"}
        /* This list is extensible */
};
static const unsigned int asn_MAP_dl_PRS_BufferType_r16_enum2value_18[] = {
    0, /* type1(0) */
    1  /* type2(1) */
       /* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_dl_PRS_BufferType_r16_specs_18 = {
    asn_MAP_dl_PRS_BufferType_r16_value2enum_18, /* "tag" => N; sorted by tag */
    asn_MAP_dl_PRS_BufferType_r16_enum2value_18, /* N => "tag"; sorted by N */
    2, /* Number of elements in the maps */
    3, /* Extensions before this member */
    1, /* Strict enumeration */
    0, /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_dl_PRS_BufferType_r16_tags_18[] = {
    (ASN_TAG_CLASS_CONTEXT | (2 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_dl_PRS_BufferType_r16_18 = {
        "dl-PRS-BufferType-r16",
        "dl-PRS-BufferType-r16",
        &asn_OP_NativeEnumerated,
        asn_DEF_dl_PRS_BufferType_r16_tags_18,
        sizeof(asn_DEF_dl_PRS_BufferType_r16_tags_18) /
                sizeof(asn_DEF_dl_PRS_BufferType_r16_tags_18[0]) -
            1,                                 /* 1 */
        asn_DEF_dl_PRS_BufferType_r16_tags_18, /* Same as above */
        sizeof(asn_DEF_dl_PRS_BufferType_r16_tags_18) /
            sizeof(asn_DEF_dl_PRS_BufferType_r16_tags_18[0]), /* 2 */
        {0, &asn_PER_type_dl_PRS_BufferType_r16_constr_18,
         NativeEnumerated_constraint},
        0,
        0,                                      /* Defined elsewhere */
        &asn_SPC_dl_PRS_BufferType_r16_specs_18 /* Additional specs */
};

static const asn_INTEGER_enum_map_t
    asn_MAP_durationOfPRS_ProcessingSymbols_r16_value2enum_23[] = {
        {0, 7, "nDot125"}, {1, 6, "nDot25"}, {2, 5, "nDot5"}, {3, 2, "n1"},
        {4, 2, "n2"},      {5, 2, "n4"},     {6, 2, "n6"},    {7, 2, "n8"},
        {8, 3, "n12"},     {9, 3, "n16"},    {10, 3, "n20"},  {11, 3, "n25"},
        {12, 3, "n30"},    {13, 3, "n32"},   {14, 3, "n35"},  {15, 3, "n40"},
        {16, 3, "n45"},    {17, 3, "n50"}};
static const unsigned int
    asn_MAP_durationOfPRS_ProcessingSymbols_r16_enum2value_23[] = {
        3,  /* n1(3) */
        8,  /* n12(8) */
        9,  /* n16(9) */
        4,  /* n2(4) */
        10, /* n20(10) */
        11, /* n25(11) */
        12, /* n30(12) */
        13, /* n32(13) */
        14, /* n35(14) */
        5,  /* n4(5) */
        15, /* n40(15) */
        16, /* n45(16) */
        17, /* n50(17) */
        6,  /* n6(6) */
        7,  /* n8(7) */
        0,  /* nDot125(0) */
        1,  /* nDot25(1) */
        2   /* nDot5(2) */
};
static const asn_INTEGER_specifics_t
    asn_SPC_durationOfPRS_ProcessingSymbols_r16_specs_23 = {
        asn_MAP_durationOfPRS_ProcessingSymbols_r16_value2enum_23, /* "tag" =>
                                                                      N; sorted
                                                                      by tag */
        asn_MAP_durationOfPRS_ProcessingSymbols_r16_enum2value_23, /* N =>
                                                                      "tag";
                                                                      sorted by
                                                                      N */
        18, /* Number of elements in the maps */
        0,  /* Enumeration is not extensible */
        1,  /* Strict enumeration */
        0,  /* Native long size */
        0};
static const ber_tlv_tag_t
    asn_DEF_durationOfPRS_ProcessingSymbols_r16_tags_23[] = {
        (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
        (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_durationOfPRS_ProcessingSymbols_r16_23 = {
        "durationOfPRS-ProcessingSymbols-r16",
        "durationOfPRS-ProcessingSymbols-r16",
        &asn_OP_NativeEnumerated,
        asn_DEF_durationOfPRS_ProcessingSymbols_r16_tags_23,
        sizeof(asn_DEF_durationOfPRS_ProcessingSymbols_r16_tags_23) /
                sizeof(asn_DEF_durationOfPRS_ProcessingSymbols_r16_tags_23[0]) -
            1,                                               /* 1 */
        asn_DEF_durationOfPRS_ProcessingSymbols_r16_tags_23, /* Same as above */
        sizeof(asn_DEF_durationOfPRS_ProcessingSymbols_r16_tags_23) /
            sizeof(
                asn_DEF_durationOfPRS_ProcessingSymbols_r16_tags_23[0]), /* 2 */
        {0, &asn_PER_type_durationOfPRS_ProcessingSymbols_r16_constr_23,
         NativeEnumerated_constraint},
        0,
        0, /* Defined elsewhere */
        &asn_SPC_durationOfPRS_ProcessingSymbols_r16_specs_23 /* Additional
                                                                 specs */
};

static const asn_INTEGER_enum_map_t
    asn_MAP_durationOfPRS_ProcessingSymbolsInEveryTms_r16_value2enum_42[] = {
        {0, 2, "n8"},   {1, 3, "n16"},  {2, 3, "n20"},  {3, 3, "n30"},
        {4, 3, "n40"},  {5, 3, "n80"},  {6, 4, "n160"}, {7, 4, "n320"},
        {8, 4, "n640"}, {9, 5, "n1280"}};
static const unsigned int
    asn_MAP_durationOfPRS_ProcessingSymbolsInEveryTms_r16_enum2value_42[] = {
        9, /* n1280(9) */
        1, /* n16(1) */
        6, /* n160(6) */
        2, /* n20(2) */
        3, /* n30(3) */
        7, /* n320(7) */
        4, /* n40(4) */
        8, /* n640(8) */
        0, /* n8(0) */
        5  /* n80(5) */
};
static const asn_INTEGER_specifics_t
    asn_SPC_durationOfPRS_ProcessingSymbolsInEveryTms_r16_specs_42 = {
        asn_MAP_durationOfPRS_ProcessingSymbolsInEveryTms_r16_value2enum_42, /* "tag"
                                                                                =>
                                                                                N;
                                                                                sorted
                                                                                by
                                                                                tag
                                                                              */
        asn_MAP_durationOfPRS_ProcessingSymbolsInEveryTms_r16_enum2value_42, /* N
                                                                                =>
                                                                                "tag";
                                                                                sorted
                                                                                by
                                                                                N
                                                                              */
        10, /* Number of elements in the maps */
        0,  /* Enumeration is not extensible */
        1,  /* Strict enumeration */
        0,  /* Native long size */
        0};
static const ber_tlv_tag_t
    asn_DEF_durationOfPRS_ProcessingSymbolsInEveryTms_r16_tags_42[] = {
        (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
        (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_durationOfPRS_ProcessingSymbolsInEveryTms_r16_42 = {
        "durationOfPRS-ProcessingSymbolsInEveryTms-r16",
        "durationOfPRS-ProcessingSymbolsInEveryTms-r16",
        &asn_OP_NativeEnumerated,
        asn_DEF_durationOfPRS_ProcessingSymbolsInEveryTms_r16_tags_42,
        sizeof(asn_DEF_durationOfPRS_ProcessingSymbolsInEveryTms_r16_tags_42) /
                sizeof(
                    asn_DEF_durationOfPRS_ProcessingSymbolsInEveryTms_r16_tags_42
                        [0]) -
            1,                                                         /* 1 */
        asn_DEF_durationOfPRS_ProcessingSymbolsInEveryTms_r16_tags_42, /* Same
                                                                          as
                                                                          above
                                                                        */
        sizeof(asn_DEF_durationOfPRS_ProcessingSymbolsInEveryTms_r16_tags_42) /
            sizeof(asn_DEF_durationOfPRS_ProcessingSymbolsInEveryTms_r16_tags_42
                       [0]), /* 2 */
        {0,
         &asn_PER_type_durationOfPRS_ProcessingSymbolsInEveryTms_r16_constr_42,
         NativeEnumerated_constraint},
        0,
        0, /* Defined elsewhere */
        &asn_SPC_durationOfPRS_ProcessingSymbolsInEveryTms_r16_specs_42 /* Additional
                                                                           specs
                                                                         */
};

static asn_TYPE_member_t asn_MBR_durationOfPRS_Processing_r16_22[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct
         PRS_ProcessingCapabilityPerBand_r16__durationOfPRS_Processing_r16,
         durationOfPRS_ProcessingSymbols_r16),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_durationOfPRS_ProcessingSymbols_r16_23,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "durationOfPRS-ProcessingSymbols-r16"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct
         PRS_ProcessingCapabilityPerBand_r16__durationOfPRS_Processing_r16,
         durationOfPRS_ProcessingSymbolsInEveryTms_r16),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_durationOfPRS_ProcessingSymbolsInEveryTms_r16_42,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "durationOfPRS-ProcessingSymbolsInEveryTms-r16"},
};
static const ber_tlv_tag_t asn_DEF_durationOfPRS_Processing_r16_tags_22[] = {
    (ASN_TAG_CLASS_CONTEXT | (3 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_durationOfPRS_Processing_r16_tag2el_22[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
         0}, /* durationOfPRS-ProcessingSymbols-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0,
         0} /* durationOfPRS-ProcessingSymbolsInEveryTms-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_durationOfPRS_Processing_r16_specs_22 =
    {
        sizeof(
            struct
            PRS_ProcessingCapabilityPerBand_r16__durationOfPRS_Processing_r16),
        offsetof(
            struct
            PRS_ProcessingCapabilityPerBand_r16__durationOfPRS_Processing_r16,
            _asn_ctx),
        asn_MAP_durationOfPRS_Processing_r16_tag2el_22,
        2, /* Count of tags in the map */
        0,
        0,
        0, /* Optional elements (not needed) */
        2, /* First extension addition */
};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_durationOfPRS_Processing_r16_22 = {
        "durationOfPRS-Processing-r16",
        "durationOfPRS-Processing-r16",
        &asn_OP_SEQUENCE,
        asn_DEF_durationOfPRS_Processing_r16_tags_22,
        sizeof(asn_DEF_durationOfPRS_Processing_r16_tags_22) /
                sizeof(asn_DEF_durationOfPRS_Processing_r16_tags_22[0]) -
            1,                                        /* 1 */
        asn_DEF_durationOfPRS_Processing_r16_tags_22, /* Same as above */
        sizeof(asn_DEF_durationOfPRS_Processing_r16_tags_22) /
            sizeof(asn_DEF_durationOfPRS_Processing_r16_tags_22[0]), /* 2 */
        {0, 0, SEQUENCE_constraint},
        asn_MBR_durationOfPRS_Processing_r16_22,
        2,                                             /* Elements count */
        &asn_SPC_durationOfPRS_Processing_r16_specs_22 /* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_scs15_r16_value2enum_55[] = {
    {0, 2, "n1"},  {1, 2, "n2"},  {2, 2, "n4"},  {3, 2, "n8"}, {4, 3, "n16"},
    {5, 3, "n24"}, {6, 3, "n32"}, {7, 3, "n48"}, {8, 3, "n64"}};
static const unsigned int asn_MAP_scs15_r16_enum2value_55[] = {
    0, /* n1(0) */
    4, /* n16(4) */
    1, /* n2(1) */
    5, /* n24(5) */
    6, /* n32(6) */
    2, /* n4(2) */
    7, /* n48(7) */
    8, /* n64(8) */
    3  /* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_scs15_r16_specs_55 = {
    asn_MAP_scs15_r16_value2enum_55, /* "tag" => N; sorted by tag */
    asn_MAP_scs15_r16_enum2value_55, /* N => "tag"; sorted by N */
    9,                               /* Number of elements in the maps */
    0,                               /* Enumeration is not extensible */
    1,                               /* Strict enumeration */
    0,                               /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_scs15_r16_tags_55[] = {
    (ASN_TAG_CLASS_CONTEXT | (0 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_scs15_r16_55 = {
        "scs15-r16",
        "scs15-r16",
        &asn_OP_NativeEnumerated,
        asn_DEF_scs15_r16_tags_55,
        sizeof(asn_DEF_scs15_r16_tags_55) /
                sizeof(asn_DEF_scs15_r16_tags_55[0]) -
            1,                     /* 1 */
        asn_DEF_scs15_r16_tags_55, /* Same as above */
        sizeof(asn_DEF_scs15_r16_tags_55) /
            sizeof(asn_DEF_scs15_r16_tags_55[0]), /* 2 */
        {0, &asn_PER_type_scs15_r16_constr_55, NativeEnumerated_constraint},
        0,
        0,                          /* Defined elsewhere */
        &asn_SPC_scs15_r16_specs_55 /* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_scs30_r16_value2enum_65[] = {
    {0, 2, "n1"},  {1, 2, "n2"},  {2, 2, "n4"},  {3, 2, "n8"}, {4, 3, "n16"},
    {5, 3, "n24"}, {6, 3, "n32"}, {7, 3, "n48"}, {8, 3, "n64"}};
static const unsigned int asn_MAP_scs30_r16_enum2value_65[] = {
    0, /* n1(0) */
    4, /* n16(4) */
    1, /* n2(1) */
    5, /* n24(5) */
    6, /* n32(6) */
    2, /* n4(2) */
    7, /* n48(7) */
    8, /* n64(8) */
    3  /* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_scs30_r16_specs_65 = {
    asn_MAP_scs30_r16_value2enum_65, /* "tag" => N; sorted by tag */
    asn_MAP_scs30_r16_enum2value_65, /* N => "tag"; sorted by N */
    9,                               /* Number of elements in the maps */
    0,                               /* Enumeration is not extensible */
    1,                               /* Strict enumeration */
    0,                               /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_scs30_r16_tags_65[] = {
    (ASN_TAG_CLASS_CONTEXT | (1 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_scs30_r16_65 = {
        "scs30-r16",
        "scs30-r16",
        &asn_OP_NativeEnumerated,
        asn_DEF_scs30_r16_tags_65,
        sizeof(asn_DEF_scs30_r16_tags_65) /
                sizeof(asn_DEF_scs30_r16_tags_65[0]) -
            1,                     /* 1 */
        asn_DEF_scs30_r16_tags_65, /* Same as above */
        sizeof(asn_DEF_scs30_r16_tags_65) /
            sizeof(asn_DEF_scs30_r16_tags_65[0]), /* 2 */
        {0, &asn_PER_type_scs30_r16_constr_65, NativeEnumerated_constraint},
        0,
        0,                          /* Defined elsewhere */
        &asn_SPC_scs30_r16_specs_65 /* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_scs60_r16_value2enum_75[] = {
    {0, 2, "n1"},  {1, 2, "n2"},  {2, 2, "n4"},  {3, 2, "n8"}, {4, 3, "n16"},
    {5, 3, "n24"}, {6, 3, "n32"}, {7, 3, "n48"}, {8, 3, "n64"}};
static const unsigned int asn_MAP_scs60_r16_enum2value_75[] = {
    0, /* n1(0) */
    4, /* n16(4) */
    1, /* n2(1) */
    5, /* n24(5) */
    6, /* n32(6) */
    2, /* n4(2) */
    7, /* n48(7) */
    8, /* n64(8) */
    3  /* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_scs60_r16_specs_75 = {
    asn_MAP_scs60_r16_value2enum_75, /* "tag" => N; sorted by tag */
    asn_MAP_scs60_r16_enum2value_75, /* N => "tag"; sorted by N */
    9,                               /* Number of elements in the maps */
    0,                               /* Enumeration is not extensible */
    1,                               /* Strict enumeration */
    0,                               /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_scs60_r16_tags_75[] = {
    (ASN_TAG_CLASS_CONTEXT | (2 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_scs60_r16_75 = {
        "scs60-r16",
        "scs60-r16",
        &asn_OP_NativeEnumerated,
        asn_DEF_scs60_r16_tags_75,
        sizeof(asn_DEF_scs60_r16_tags_75) /
                sizeof(asn_DEF_scs60_r16_tags_75[0]) -
            1,                     /* 1 */
        asn_DEF_scs60_r16_tags_75, /* Same as above */
        sizeof(asn_DEF_scs60_r16_tags_75) /
            sizeof(asn_DEF_scs60_r16_tags_75[0]), /* 2 */
        {0, &asn_PER_type_scs60_r16_constr_75, NativeEnumerated_constraint},
        0,
        0,                          /* Defined elsewhere */
        &asn_SPC_scs60_r16_specs_75 /* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_scs120_r16_value2enum_85[] = {
    {0, 2, "n1"},  {1, 2, "n2"},  {2, 2, "n4"},  {3, 2, "n8"}, {4, 3, "n16"},
    {5, 3, "n24"}, {6, 3, "n32"}, {7, 3, "n48"}, {8, 3, "n64"}};
static const unsigned int asn_MAP_scs120_r16_enum2value_85[] = {
    0, /* n1(0) */
    4, /* n16(4) */
    1, /* n2(1) */
    5, /* n24(5) */
    6, /* n32(6) */
    2, /* n4(2) */
    7, /* n48(7) */
    8, /* n64(8) */
    3  /* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_scs120_r16_specs_85 = {
    asn_MAP_scs120_r16_value2enum_85, /* "tag" => N; sorted by tag */
    asn_MAP_scs120_r16_enum2value_85, /* N => "tag"; sorted by N */
    9,                                /* Number of elements in the maps */
    0,                                /* Enumeration is not extensible */
    1,                                /* Strict enumeration */
    0,                                /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_scs120_r16_tags_85[] = {
    (ASN_TAG_CLASS_CONTEXT | (3 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_scs120_r16_85 = {
        "scs120-r16",
        "scs120-r16",
        &asn_OP_NativeEnumerated,
        asn_DEF_scs120_r16_tags_85,
        sizeof(asn_DEF_scs120_r16_tags_85) /
                sizeof(asn_DEF_scs120_r16_tags_85[0]) -
            1,                      /* 1 */
        asn_DEF_scs120_r16_tags_85, /* Same as above */
        sizeof(asn_DEF_scs120_r16_tags_85) /
            sizeof(asn_DEF_scs120_r16_tags_85[0]), /* 2 */
        {0, &asn_PER_type_scs120_r16_constr_85, NativeEnumerated_constraint},
        0,
        0,                           /* Defined elsewhere */
        &asn_SPC_scs120_r16_specs_85 /* Additional specs */
};

static asn_TYPE_member_t asn_MBR_maxNumOfDL_PRS_ResProcessedPerSlot_r16_54[] = {
    {ATF_POINTER,
     4,
     offsetof(
         struct
         PRS_ProcessingCapabilityPerBand_r16__maxNumOfDL_PRS_ResProcessedPerSlot_r16,
         scs15_r16),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_scs15_r16_55,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "scs15-r16"},
    {ATF_POINTER,
     3,
     offsetof(
         struct
         PRS_ProcessingCapabilityPerBand_r16__maxNumOfDL_PRS_ResProcessedPerSlot_r16,
         scs30_r16),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_scs30_r16_65,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "scs30-r16"},
    {ATF_POINTER,
     2,
     offsetof(
         struct
         PRS_ProcessingCapabilityPerBand_r16__maxNumOfDL_PRS_ResProcessedPerSlot_r16,
         scs60_r16),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_scs60_r16_75,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "scs60-r16"},
    {ATF_POINTER,
     1,
     offsetof(
         struct
         PRS_ProcessingCapabilityPerBand_r16__maxNumOfDL_PRS_ResProcessedPerSlot_r16,
         scs120_r16),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_scs120_r16_85,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "scs120-r16"},
};
static const int asn_MAP_maxNumOfDL_PRS_ResProcessedPerSlot_r16_oms_54[] = {
    0, 1, 2, 3};
static const ber_tlv_tag_t
    asn_DEF_maxNumOfDL_PRS_ResProcessedPerSlot_r16_tags_54[] = {
        (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
        (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_maxNumOfDL_PRS_ResProcessedPerSlot_r16_tag2el_54[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* scs15-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* scs30-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* scs60-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}  /* scs120-r16 */
};
static asn_SEQUENCE_specifics_t
    asn_SPC_maxNumOfDL_PRS_ResProcessedPerSlot_r16_specs_54 = {
        sizeof(
            struct
            PRS_ProcessingCapabilityPerBand_r16__maxNumOfDL_PRS_ResProcessedPerSlot_r16),
        offsetof(
            struct
            PRS_ProcessingCapabilityPerBand_r16__maxNumOfDL_PRS_ResProcessedPerSlot_r16,
            _asn_ctx),
        asn_MAP_maxNumOfDL_PRS_ResProcessedPerSlot_r16_tag2el_54,
        4, /* Count of tags in the map */
        asn_MAP_maxNumOfDL_PRS_ResProcessedPerSlot_r16_oms_54, /* Optional
                                                                  members */
        4,
        0, /* Root/Additions */
        4, /* First extension addition */
};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_maxNumOfDL_PRS_ResProcessedPerSlot_r16_54 = {
        "maxNumOfDL-PRS-ResProcessedPerSlot-r16",
        "maxNumOfDL-PRS-ResProcessedPerSlot-r16",
        &asn_OP_SEQUENCE,
        asn_DEF_maxNumOfDL_PRS_ResProcessedPerSlot_r16_tags_54,
        sizeof(asn_DEF_maxNumOfDL_PRS_ResProcessedPerSlot_r16_tags_54) /
                sizeof(
                    asn_DEF_maxNumOfDL_PRS_ResProcessedPerSlot_r16_tags_54[0]) -
            1,                                                  /* 1 */
        asn_DEF_maxNumOfDL_PRS_ResProcessedPerSlot_r16_tags_54, /* Same as above
                                                                 */
        sizeof(asn_DEF_maxNumOfDL_PRS_ResProcessedPerSlot_r16_tags_54) /
            sizeof(asn_DEF_maxNumOfDL_PRS_ResProcessedPerSlot_r16_tags_54
                       [0]), /* 2 */
        {0, 0, SEQUENCE_constraint},
        asn_MBR_maxNumOfDL_PRS_ResProcessedPerSlot_r16_54,
        4, /* Elements count */
        &asn_SPC_maxNumOfDL_PRS_ResProcessedPerSlot_r16_specs_54 /* Additional
                                                                    specs */
};

asn_TYPE_member_t asn_MBR_PRS_ProcessingCapabilityPerBand_r16_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct PRS_ProcessingCapabilityPerBand_r16, freqBandIndicatorNR_r16),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_FreqBandIndicatorNR_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "freqBandIndicatorNR-r16"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct PRS_ProcessingCapabilityPerBand_r16, supportedBandwidthPRS_r16),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     +1, /* EXPLICIT tag at current level */
     &asn_DEF_supportedBandwidthPRS_r16_3,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "supportedBandwidthPRS-r16"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct PRS_ProcessingCapabilityPerBand_r16, dl_PRS_BufferType_r16),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_dl_PRS_BufferType_r16_18,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "dl-PRS-BufferType-r16"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct PRS_ProcessingCapabilityPerBand_r16,
         durationOfPRS_Processing_r16),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     0,
     &asn_DEF_durationOfPRS_Processing_r16_22,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "durationOfPRS-Processing-r16"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct PRS_ProcessingCapabilityPerBand_r16,
         maxNumOfDL_PRS_ResProcessedPerSlot_r16),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     0,
     &asn_DEF_maxNumOfDL_PRS_ResProcessedPerSlot_r16_54,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "maxNumOfDL-PRS-ResProcessedPerSlot-r16"},
};
static const ber_tlv_tag_t
    asn_DEF_PRS_ProcessingCapabilityPerBand_r16_tags_1[] = {
        (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_PRS_ProcessingCapabilityPerBand_r16_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
         0}, /* freqBandIndicatorNR-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0,
         0}, /* supportedBandwidthPRS-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0,
         0}, /* dl-PRS-BufferType-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0,
         0}, /* durationOfPRS-Processing-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0,
         0} /* maxNumOfDL-PRS-ResProcessedPerSlot-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_PRS_ProcessingCapabilityPerBand_r16_specs_1 = {
    sizeof(struct PRS_ProcessingCapabilityPerBand_r16),
    offsetof(struct PRS_ProcessingCapabilityPerBand_r16, _asn_ctx),
    asn_MAP_PRS_ProcessingCapabilityPerBand_r16_tag2el_1,
    5, /* Count of tags in the map */
    0,
    0,
    0, /* Optional elements (not needed) */
    5, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PRS_ProcessingCapabilityPerBand_r16 = {
    "PRS-ProcessingCapabilityPerBand-r16",
    "PRS-ProcessingCapabilityPerBand-r16",
    &asn_OP_SEQUENCE,
    asn_DEF_PRS_ProcessingCapabilityPerBand_r16_tags_1,
    sizeof(asn_DEF_PRS_ProcessingCapabilityPerBand_r16_tags_1) /
        sizeof(asn_DEF_PRS_ProcessingCapabilityPerBand_r16_tags_1[0]), /* 1 */
    asn_DEF_PRS_ProcessingCapabilityPerBand_r16_tags_1, /* Same as above */
    sizeof(asn_DEF_PRS_ProcessingCapabilityPerBand_r16_tags_1) /
        sizeof(asn_DEF_PRS_ProcessingCapabilityPerBand_r16_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_PRS_ProcessingCapabilityPerBand_r16_1,
    5,                                                   /* Elements count */
    &asn_SPC_PRS_ProcessingCapabilityPerBand_r16_specs_1 /* Additional specs */
};
