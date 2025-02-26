/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#include "TDD-Config-EUTRA-Item.h"

#include "ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_subframeAssignment_constr_2
    CC_NOTUSED = {
        {APC_CONSTRAINED | APC_EXTENSIBLE, 3, 3, 0, 6} /* (0..6,...) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_subframeAssignment_value2enum_2[] =
    {
        {0, 3, "sa0"}, {1, 3, "sa1"}, {2, 3, "sa2"}, {3, 3, "sa3"},
        {4, 3, "sa4"}, {5, 3, "sa5"}, {6, 3, "sa6"}
        /* This list is extensible */
};
static const unsigned int asn_MAP_subframeAssignment_enum2value_2[] = {
    0, /* sa0(0) */
    1, /* sa1(1) */
    2, /* sa2(2) */
    3, /* sa3(3) */
    4, /* sa4(4) */
    5, /* sa5(5) */
    6  /* sa6(6) */
       /* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_subframeAssignment_specs_2 = {
    asn_MAP_subframeAssignment_value2enum_2, /* "tag" => N; sorted by tag */
    asn_MAP_subframeAssignment_enum2value_2, /* N => "tag"; sorted by N */
    7, /* Number of elements in the maps */
    8, /* Extensions before this member */
    1, /* Strict enumeration */
    0, /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_subframeAssignment_tags_2[] = {
    (ASN_TAG_CLASS_CONTEXT | (0 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_subframeAssignment_2 = {
        "subframeAssignment",
        "subframeAssignment",
        &asn_OP_NativeEnumerated,
        asn_DEF_subframeAssignment_tags_2,
        sizeof(asn_DEF_subframeAssignment_tags_2) /
                sizeof(asn_DEF_subframeAssignment_tags_2[0]) -
            1,                             /* 1 */
        asn_DEF_subframeAssignment_tags_2, /* Same as above */
        sizeof(asn_DEF_subframeAssignment_tags_2) /
            sizeof(asn_DEF_subframeAssignment_tags_2[0]), /* 2 */
        {0, &asn_PER_type_subframeAssignment_constr_2,
         NativeEnumerated_constraint},
        0,
        0,                                  /* Defined elsewhere */
        &asn_SPC_subframeAssignment_specs_2 /* Additional specs */
};

asn_TYPE_member_t asn_MBR_TDD_Config_EUTRA_Item_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct TDD_Config_EUTRA_Item, subframeAssignment),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_subframeAssignment_2,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "subframeAssignment"},
    {ATF_POINTER,
     1,
     offsetof(struct TDD_Config_EUTRA_Item, iE_Extensions),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ProtocolExtensionContainer_2816P89,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "iE-Extensions"},
};
static const int asn_MAP_TDD_Config_EUTRA_Item_oms_1[]            = {1};
static const ber_tlv_tag_t asn_DEF_TDD_Config_EUTRA_Item_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_TDD_Config_EUTRA_Item_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* subframeAssignment */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}  /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_TDD_Config_EUTRA_Item_specs_1 = {
    sizeof(struct TDD_Config_EUTRA_Item),
    offsetof(struct TDD_Config_EUTRA_Item, _asn_ctx),
    asn_MAP_TDD_Config_EUTRA_Item_tag2el_1,
    2,                                   /* Count of tags in the map */
    asn_MAP_TDD_Config_EUTRA_Item_oms_1, /* Optional members */
    1,
    0, /* Root/Additions */
    2, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TDD_Config_EUTRA_Item = {
    "TDD-Config-EUTRA-Item",
    "TDD-Config-EUTRA-Item",
    &asn_OP_SEQUENCE,
    asn_DEF_TDD_Config_EUTRA_Item_tags_1,
    sizeof(asn_DEF_TDD_Config_EUTRA_Item_tags_1) /
        sizeof(asn_DEF_TDD_Config_EUTRA_Item_tags_1[0]), /* 1 */
    asn_DEF_TDD_Config_EUTRA_Item_tags_1,                /* Same as above */
    sizeof(asn_DEF_TDD_Config_EUTRA_Item_tags_1) /
        sizeof(asn_DEF_TDD_Config_EUTRA_Item_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_TDD_Config_EUTRA_Item_1,
    2,                                     /* Elements count */
    &asn_SPC_TDD_Config_EUTRA_Item_specs_1 /* Additional specs */
};
