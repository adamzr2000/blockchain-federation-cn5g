/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "DL-PRS-ResourcesBandCombination-r16.h"

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
static int memb_bandList_r16_constraint_1(
    const asn_TYPE_descriptor_t* td, const void* sptr,
    asn_app_constraint_failed_f* ctfailcb, void* app_key) {
  size_t size;

  if (!sptr) {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: value not given (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }

  /* Determine the number of elements */
  size = _A_CSEQUENCE_FROM_VOID(sptr)->count;

  if ((size >= 1 && size <= 4)) {
    /* Perform validation of the inner elements */
    return td->encoding_constraints.general_constraints(
        td, sptr, ctfailcb, app_key);
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static asn_per_constraints_t asn_PER_type_bandList_r16_constr_2 CC_NOTUSED = {
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    {APC_CONSTRAINED, 2, 2, 1, 4} /* (SIZE(1..4)) */,
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_type_fr1_Only_r16_constr_5 CC_NOTUSED = {
    {APC_CONSTRAINED, 4, 4, 0, 8} /* (0..8) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_type_fr2_Only_r16_constr_15 CC_NOTUSED = {
    {APC_CONSTRAINED, 4, 4, 0, 8} /* (0..8) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_type_fr1_r16_constr_26 CC_NOTUSED = {
    {APC_CONSTRAINED, 4, 4, 0, 9} /* (0..9) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_type_fr2_r16_constr_37 CC_NOTUSED = {
    {APC_CONSTRAINED, 4, 4, 0, 8} /* (0..8) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t
    asn_PER_type_maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16_constr_4
        CC_NOTUSED = {
            {APC_CONSTRAINED | APC_EXTENSIBLE, 2, 2, 0, 2} /* (0..2,...) */,
            {APC_UNCONSTRAINED, -1, -1, 0, 0},
            0,
            0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_bandList_r16_constr_2 CC_NOTUSED = {
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    {APC_CONSTRAINED, 2, 2, 1, 4} /* (SIZE(1..4)) */,
    0,
    0 /* No PER value map */
};
static asn_TYPE_member_t asn_MBR_bandList_r16_2[] = {
    {ATF_POINTER,
     0,
     0,
     (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
     0,
     &asn_DEF_FreqBandIndicatorNR_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     ""},
};
static const ber_tlv_tag_t asn_DEF_bandList_r16_tags_2[] = {
    (ASN_TAG_CLASS_CONTEXT | (0 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static asn_SET_OF_specifics_t asn_SPC_bandList_r16_specs_2 = {
    sizeof(struct DL_PRS_ResourcesBandCombination_r16__bandList_r16),
    offsetof(
        struct DL_PRS_ResourcesBandCombination_r16__bandList_r16, _asn_ctx),
    0, /* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_bandList_r16_2 = {
        "bandList-r16",
        "bandList-r16",
        &asn_OP_SEQUENCE_OF,
        asn_DEF_bandList_r16_tags_2,
        sizeof(asn_DEF_bandList_r16_tags_2) /
                sizeof(asn_DEF_bandList_r16_tags_2[0]) -
            1,                       /* 1 */
        asn_DEF_bandList_r16_tags_2, /* Same as above */
        sizeof(asn_DEF_bandList_r16_tags_2) /
            sizeof(asn_DEF_bandList_r16_tags_2[0]), /* 2 */
        {0, &asn_PER_type_bandList_r16_constr_2, SEQUENCE_OF_constraint},
        asn_MBR_bandList_r16_2,
        1,                            /* Single element */
        &asn_SPC_bandList_r16_specs_2 /* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_fr1_Only_r16_value2enum_5[] = {
    {0, 2, "n6"},   {1, 3, "n24"},   {2, 3, "n64"},
    {3, 4, "n128"}, {4, 4, "n192"},  {5, 4, "n256"},
    {6, 4, "n512"}, {7, 5, "n1024"}, {8, 5, "n2048"}};
static const unsigned int asn_MAP_fr1_Only_r16_enum2value_5[] = {
    7, /* n1024(7) */
    3, /* n128(3) */
    4, /* n192(4) */
    8, /* n2048(8) */
    1, /* n24(1) */
    5, /* n256(5) */
    6, /* n512(6) */
    0, /* n6(0) */
    2  /* n64(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_fr1_Only_r16_specs_5 = {
    asn_MAP_fr1_Only_r16_value2enum_5, /* "tag" => N; sorted by tag */
    asn_MAP_fr1_Only_r16_enum2value_5, /* N => "tag"; sorted by N */
    9,                                 /* Number of elements in the maps */
    0,                                 /* Enumeration is not extensible */
    1,                                 /* Strict enumeration */
    0,                                 /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_fr1_Only_r16_tags_5[] = {
    (ASN_TAG_CLASS_CONTEXT | (0 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_fr1_Only_r16_5 = {
        "fr1-Only-r16",
        "fr1-Only-r16",
        &asn_OP_NativeEnumerated,
        asn_DEF_fr1_Only_r16_tags_5,
        sizeof(asn_DEF_fr1_Only_r16_tags_5) /
                sizeof(asn_DEF_fr1_Only_r16_tags_5[0]) -
            1,                       /* 1 */
        asn_DEF_fr1_Only_r16_tags_5, /* Same as above */
        sizeof(asn_DEF_fr1_Only_r16_tags_5) /
            sizeof(asn_DEF_fr1_Only_r16_tags_5[0]), /* 2 */
        {0, &asn_PER_type_fr1_Only_r16_constr_5, NativeEnumerated_constraint},
        0,
        0,                            /* Defined elsewhere */
        &asn_SPC_fr1_Only_r16_specs_5 /* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_fr2_Only_r16_value2enum_15[] = {
    {0, 3, "n24"},  {1, 3, "n64"},   {2, 3, "n96"},
    {3, 4, "n128"}, {4, 4, "n192"},  {5, 4, "n256"},
    {6, 4, "n512"}, {7, 5, "n1024"}, {8, 5, "n2048"}};
static const unsigned int asn_MAP_fr2_Only_r16_enum2value_15[] = {
    7, /* n1024(7) */
    3, /* n128(3) */
    4, /* n192(4) */
    8, /* n2048(8) */
    0, /* n24(0) */
    5, /* n256(5) */
    6, /* n512(6) */
    1, /* n64(1) */
    2  /* n96(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_fr2_Only_r16_specs_15 = {
    asn_MAP_fr2_Only_r16_value2enum_15, /* "tag" => N; sorted by tag */
    asn_MAP_fr2_Only_r16_enum2value_15, /* N => "tag"; sorted by N */
    9,                                  /* Number of elements in the maps */
    0,                                  /* Enumeration is not extensible */
    1,                                  /* Strict enumeration */
    0,                                  /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_fr2_Only_r16_tags_15[] = {
    (ASN_TAG_CLASS_CONTEXT | (1 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_fr2_Only_r16_15 = {
        "fr2-Only-r16",
        "fr2-Only-r16",
        &asn_OP_NativeEnumerated,
        asn_DEF_fr2_Only_r16_tags_15,
        sizeof(asn_DEF_fr2_Only_r16_tags_15) /
                sizeof(asn_DEF_fr2_Only_r16_tags_15[0]) -
            1,                        /* 1 */
        asn_DEF_fr2_Only_r16_tags_15, /* Same as above */
        sizeof(asn_DEF_fr2_Only_r16_tags_15) /
            sizeof(asn_DEF_fr2_Only_r16_tags_15[0]), /* 2 */
        {0, &asn_PER_type_fr2_Only_r16_constr_15, NativeEnumerated_constraint},
        0,
        0,                             /* Defined elsewhere */
        &asn_SPC_fr2_Only_r16_specs_15 /* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_fr1_r16_value2enum_26[] = {
    {0, 2, "n6"},    {1, 3, "n24"},  {2, 3, "n64"},  {3, 3, "n96"},
    {4, 4, "n128"},  {5, 4, "n192"}, {6, 4, "n256"}, {7, 4, "n512"},
    {8, 5, "n1024"}, {9, 5, "n2048"}};
static const unsigned int asn_MAP_fr1_r16_enum2value_26[] = {
    8, /* n1024(8) */
    4, /* n128(4) */
    5, /* n192(5) */
    9, /* n2048(9) */
    1, /* n24(1) */
    6, /* n256(6) */
    7, /* n512(7) */
    0, /* n6(0) */
    2, /* n64(2) */
    3  /* n96(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_fr1_r16_specs_26 = {
    asn_MAP_fr1_r16_value2enum_26, /* "tag" => N; sorted by tag */
    asn_MAP_fr1_r16_enum2value_26, /* N => "tag"; sorted by N */
    10,                            /* Number of elements in the maps */
    0,                             /* Enumeration is not extensible */
    1,                             /* Strict enumeration */
    0,                             /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_fr1_r16_tags_26[] = {
    (ASN_TAG_CLASS_CONTEXT | (0 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_fr1_r16_26 = {
        "fr1-r16",
        "fr1-r16",
        &asn_OP_NativeEnumerated,
        asn_DEF_fr1_r16_tags_26,
        sizeof(asn_DEF_fr1_r16_tags_26) / sizeof(asn_DEF_fr1_r16_tags_26[0]) -
            1,                   /* 1 */
        asn_DEF_fr1_r16_tags_26, /* Same as above */
        sizeof(asn_DEF_fr1_r16_tags_26) /
            sizeof(asn_DEF_fr1_r16_tags_26[0]), /* 2 */
        {0, &asn_PER_type_fr1_r16_constr_26, NativeEnumerated_constraint},
        0,
        0,                        /* Defined elsewhere */
        &asn_SPC_fr1_r16_specs_26 /* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_fr2_r16_value2enum_37[] = {
    {0, 3, "n24"},  {1, 3, "n64"},   {2, 3, "n96"},
    {3, 4, "n128"}, {4, 4, "n192"},  {5, 4, "n256"},
    {6, 4, "n512"}, {7, 5, "n1024"}, {8, 5, "n2048"}};
static const unsigned int asn_MAP_fr2_r16_enum2value_37[] = {
    7, /* n1024(7) */
    3, /* n128(3) */
    4, /* n192(4) */
    8, /* n2048(8) */
    0, /* n24(0) */
    5, /* n256(5) */
    6, /* n512(6) */
    1, /* n64(1) */
    2  /* n96(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_fr2_r16_specs_37 = {
    asn_MAP_fr2_r16_value2enum_37, /* "tag" => N; sorted by tag */
    asn_MAP_fr2_r16_enum2value_37, /* N => "tag"; sorted by N */
    9,                             /* Number of elements in the maps */
    0,                             /* Enumeration is not extensible */
    1,                             /* Strict enumeration */
    0,                             /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_fr2_r16_tags_37[] = {
    (ASN_TAG_CLASS_CONTEXT | (1 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_fr2_r16_37 = {
        "fr2-r16",
        "fr2-r16",
        &asn_OP_NativeEnumerated,
        asn_DEF_fr2_r16_tags_37,
        sizeof(asn_DEF_fr2_r16_tags_37) / sizeof(asn_DEF_fr2_r16_tags_37[0]) -
            1,                   /* 1 */
        asn_DEF_fr2_r16_tags_37, /* Same as above */
        sizeof(asn_DEF_fr2_r16_tags_37) /
            sizeof(asn_DEF_fr2_r16_tags_37[0]), /* 2 */
        {0, &asn_PER_type_fr2_r16_constr_37, NativeEnumerated_constraint},
        0,
        0,                        /* Defined elsewhere */
        &asn_SPC_fr2_r16_specs_37 /* Additional specs */
};

static asn_TYPE_member_t asn_MBR_fr1_FR2Mix_r16_25[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct
         DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16,
         fr1_r16),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_fr1_r16_26,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "fr1-r16"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct
         DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16,
         fr2_r16),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_fr2_r16_37,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "fr2-r16"},
};
static const ber_tlv_tag_t asn_DEF_fr1_FR2Mix_r16_tags_25[] = {
    (ASN_TAG_CLASS_CONTEXT | (2 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_fr1_FR2Mix_r16_tag2el_25[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* fr1-r16 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}  /* fr2-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_fr1_FR2Mix_r16_specs_25 = {
    sizeof(
        struct
        DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16),
    offsetof(
        struct
        DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16__fr1_FR2Mix_r16,
        _asn_ctx),
    asn_MAP_fr1_FR2Mix_r16_tag2el_25,
    2, /* Count of tags in the map */
    0,
    0,
    0, /* Optional elements (not needed) */
    2, /* First extension addition */
};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_fr1_FR2Mix_r16_25 = {
        "fr1-FR2Mix-r16",
        "fr1-FR2Mix-r16",
        &asn_OP_SEQUENCE,
        asn_DEF_fr1_FR2Mix_r16_tags_25,
        sizeof(asn_DEF_fr1_FR2Mix_r16_tags_25) /
                sizeof(asn_DEF_fr1_FR2Mix_r16_tags_25[0]) -
            1,                          /* 1 */
        asn_DEF_fr1_FR2Mix_r16_tags_25, /* Same as above */
        sizeof(asn_DEF_fr1_FR2Mix_r16_tags_25) /
            sizeof(asn_DEF_fr1_FR2Mix_r16_tags_25[0]), /* 2 */
        {0, 0, SEQUENCE_constraint},
        asn_MBR_fr1_FR2Mix_r16_25,
        2,                               /* Elements count */
        &asn_SPC_fr1_FR2Mix_r16_specs_25 /* Additional specs */
};

static asn_TYPE_member_t
    asn_MBR_maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16_4[] = {
        {ATF_NOFLAGS,
         0,
         offsetof(
             struct
             DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16,
             choice.fr1_Only_r16),
         (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
         -1, /* IMPLICIT tag at current level */
         &asn_DEF_fr1_Only_r16_5,
         0,
         {0, 0, 0},
         0,
         0, /* No default value */
         "fr1-Only-r16"},
        {ATF_NOFLAGS,
         0,
         offsetof(
             struct
             DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16,
             choice.fr2_Only_r16),
         (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
         -1, /* IMPLICIT tag at current level */
         &asn_DEF_fr2_Only_r16_15,
         0,
         {0, 0, 0},
         0,
         0, /* No default value */
         "fr2-Only-r16"},
        {ATF_POINTER,
         0,
         offsetof(
             struct
             DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16,
             choice.fr1_FR2Mix_r16),
         (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
         0,
         &asn_DEF_fr1_FR2Mix_r16_25,
         0,
         {0, 0, 0},
         0,
         0, /* No default value */
         "fr1-FR2Mix-r16"},
};
static const asn_TYPE_tag2member_t
    asn_MAP_maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16_tag2el_4[] =
        {
            {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* fr1-Only-r16 */
            {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* fr2-Only-r16 */
            {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}  /* fr1-FR2Mix-r16 */
};
static asn_CHOICE_specifics_t
    asn_SPC_maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16_specs_4 = {
        sizeof(
            struct
            DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16),
        offsetof(
            struct
            DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16,
            _asn_ctx),
        offsetof(
            struct
            DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16,
            present),
        sizeof(
            ((struct
              DL_PRS_ResourcesBandCombination_r16__maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16*) 0)
                ->present),
        asn_MAP_maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16_tag2el_4,
        3, /* Count of tags in the map */
        0,
        0,
        3 /* Extensions start */
};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t
        asn_DEF_maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16_4 = {
            "maxNrOfDL-PRS-ResourcesAcrossAllFL-TRP-ResourceSet-r16",
            "maxNrOfDL-PRS-ResourcesAcrossAllFL-TRP-ResourceSet-r16",
            &asn_OP_CHOICE,
            0, /* No effective tags (pointer) */
            0, /* No effective tags (count) */
            0, /* No tags (pointer) */
            0, /* No tags (count) */
            {0,
             &asn_PER_type_maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16_constr_4,
             CHOICE_constraint},
            asn_MBR_maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16_4,
            3, /* Elements count */
            &asn_SPC_maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16_specs_4 /* Additional specs */
};

asn_TYPE_member_t asn_MBR_DL_PRS_ResourcesBandCombination_r16_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct DL_PRS_ResourcesBandCombination_r16, bandList_r16),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     0,
     &asn_DEF_bandList_r16_2,
     0,
     {0, &asn_PER_memb_bandList_r16_constr_2, memb_bandList_r16_constraint_1},
     0,
     0, /* No default value */
     "bandList-r16"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct DL_PRS_ResourcesBandCombination_r16,
         maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     +1, /* EXPLICIT tag at current level */
     &asn_DEF_maxNrOfDL_PRS_ResourcesAcrossAllFL_TRP_ResourceSet_r16_4,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "maxNrOfDL-PRS-ResourcesAcrossAllFL-TRP-ResourceSet-r16"},
};
static const ber_tlv_tag_t
    asn_DEF_DL_PRS_ResourcesBandCombination_r16_tags_1[] = {
        (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_DL_PRS_ResourcesBandCombination_r16_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* bandList-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0,
         0} /* maxNrOfDL-PRS-ResourcesAcrossAllFL-TRP-ResourceSet-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_DL_PRS_ResourcesBandCombination_r16_specs_1 = {
    sizeof(struct DL_PRS_ResourcesBandCombination_r16),
    offsetof(struct DL_PRS_ResourcesBandCombination_r16, _asn_ctx),
    asn_MAP_DL_PRS_ResourcesBandCombination_r16_tag2el_1,
    2, /* Count of tags in the map */
    0,
    0,
    0, /* Optional elements (not needed) */
    2, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DL_PRS_ResourcesBandCombination_r16 = {
    "DL-PRS-ResourcesBandCombination-r16",
    "DL-PRS-ResourcesBandCombination-r16",
    &asn_OP_SEQUENCE,
    asn_DEF_DL_PRS_ResourcesBandCombination_r16_tags_1,
    sizeof(asn_DEF_DL_PRS_ResourcesBandCombination_r16_tags_1) /
        sizeof(asn_DEF_DL_PRS_ResourcesBandCombination_r16_tags_1[0]), /* 1 */
    asn_DEF_DL_PRS_ResourcesBandCombination_r16_tags_1, /* Same as above */
    sizeof(asn_DEF_DL_PRS_ResourcesBandCombination_r16_tags_1) /
        sizeof(asn_DEF_DL_PRS_ResourcesBandCombination_r16_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_DL_PRS_ResourcesBandCombination_r16_1,
    2,                                                   /* Elements count */
    &asn_SPC_DL_PRS_ResourcesBandCombination_r16_specs_1 /* Additional specs */
};
