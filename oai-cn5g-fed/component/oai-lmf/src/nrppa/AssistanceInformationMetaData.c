/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#include "AssistanceInformationMetaData.h"

#include "ProtocolExtensionContainer.h"
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
static asn_per_constraints_t asn_PER_type_encrypted_constr_2 CC_NOTUSED = {
    {APC_CONSTRAINED | APC_EXTENSIBLE, 0, 0, 0, 0} /* (0..0,...) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_type_gNSSID_constr_5 CC_NOTUSED = {
    {APC_CONSTRAINED | APC_EXTENSIBLE, 3, 3, 0, 6} /* (0..6,...) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_type_sBASID_constr_14 CC_NOTUSED = {
    {APC_CONSTRAINED | APC_EXTENSIBLE, 2, 2, 0, 3} /* (0..3,...) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_encrypted_value2enum_2[] = {
    {0, 4, "true"}
    /* This list is extensible */
};
static const unsigned int asn_MAP_encrypted_enum2value_2[] = {
    0 /* true(0) */
      /* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_encrypted_specs_2 = {
    asn_MAP_encrypted_value2enum_2, /* "tag" => N; sorted by tag */
    asn_MAP_encrypted_enum2value_2, /* N => "tag"; sorted by N */
    1,                              /* Number of elements in the maps */
    2,                              /* Extensions before this member */
    1,                              /* Strict enumeration */
    0,                              /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_encrypted_tags_2[] = {
    (ASN_TAG_CLASS_CONTEXT | (0 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_encrypted_2 = {
        "encrypted",
        "encrypted",
        &asn_OP_NativeEnumerated,
        asn_DEF_encrypted_tags_2,
        sizeof(asn_DEF_encrypted_tags_2) / sizeof(asn_DEF_encrypted_tags_2[0]) -
            1,                    /* 1 */
        asn_DEF_encrypted_tags_2, /* Same as above */
        sizeof(asn_DEF_encrypted_tags_2) /
            sizeof(asn_DEF_encrypted_tags_2[0]), /* 2 */
        {0, &asn_PER_type_encrypted_constr_2, NativeEnumerated_constraint},
        0,
        0,                         /* Defined elsewhere */
        &asn_SPC_encrypted_specs_2 /* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_gNSSID_value2enum_5[] = {
    {0, 3, "gps"},     {1, 4, "sbas"}, {2, 4, "qzss"}, {3, 7, "galileo"},
    {4, 7, "glonass"}, {5, 3, "bds"},  {6, 5, "navic"}
    /* This list is extensible */
};
static const unsigned int asn_MAP_gNSSID_enum2value_5[] = {
    5, /* bds(5) */
    3, /* galileo(3) */
    4, /* glonass(4) */
    0, /* gps(0) */
    6, /* navic(6) */
    2, /* qzss(2) */
    1  /* sbas(1) */
       /* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_gNSSID_specs_5 = {
    asn_MAP_gNSSID_value2enum_5, /* "tag" => N; sorted by tag */
    asn_MAP_gNSSID_enum2value_5, /* N => "tag"; sorted by N */
    7,                           /* Number of elements in the maps */
    8,                           /* Extensions before this member */
    1,                           /* Strict enumeration */
    0,                           /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_gNSSID_tags_5[] = {
    (ASN_TAG_CLASS_CONTEXT | (1 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_gNSSID_5 = {
        "gNSSID",
        "gNSSID",
        &asn_OP_NativeEnumerated,
        asn_DEF_gNSSID_tags_5,
        sizeof(asn_DEF_gNSSID_tags_5) / sizeof(asn_DEF_gNSSID_tags_5[0]) -
            1,                 /* 1 */
        asn_DEF_gNSSID_tags_5, /* Same as above */
        sizeof(asn_DEF_gNSSID_tags_5) /
            sizeof(asn_DEF_gNSSID_tags_5[0]), /* 2 */
        {0, &asn_PER_type_gNSSID_constr_5, NativeEnumerated_constraint},
        0,
        0,                      /* Defined elsewhere */
        &asn_SPC_gNSSID_specs_5 /* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_sBASID_value2enum_14[] = {
    {0, 4, "waas"},
    {1, 5, "egnos"},
    {2, 4, "msas"},
    {3, 5, "gagan"}
    /* This list is extensible */
};
static const unsigned int asn_MAP_sBASID_enum2value_14[] = {
    1, /* egnos(1) */
    3, /* gagan(3) */
    2, /* msas(2) */
    0  /* waas(0) */
       /* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_sBASID_specs_14 = {
    asn_MAP_sBASID_value2enum_14, /* "tag" => N; sorted by tag */
    asn_MAP_sBASID_enum2value_14, /* N => "tag"; sorted by N */
    4,                            /* Number of elements in the maps */
    5,                            /* Extensions before this member */
    1,                            /* Strict enumeration */
    0,                            /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_sBASID_tags_14[] = {
    (ASN_TAG_CLASS_CONTEXT | (2 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_sBASID_14 = {
        "sBASID",
        "sBASID",
        &asn_OP_NativeEnumerated,
        asn_DEF_sBASID_tags_14,
        sizeof(asn_DEF_sBASID_tags_14) / sizeof(asn_DEF_sBASID_tags_14[0]) -
            1,                  /* 1 */
        asn_DEF_sBASID_tags_14, /* Same as above */
        sizeof(asn_DEF_sBASID_tags_14) /
            sizeof(asn_DEF_sBASID_tags_14[0]), /* 2 */
        {0, &asn_PER_type_sBASID_constr_14, NativeEnumerated_constraint},
        0,
        0,                       /* Defined elsewhere */
        &asn_SPC_sBASID_specs_14 /* Additional specs */
};

asn_TYPE_member_t asn_MBR_AssistanceInformationMetaData_1[] = {
    {ATF_POINTER,
     4,
     offsetof(struct AssistanceInformationMetaData, encrypted),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_encrypted_2,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "encrypted"},
    {ATF_POINTER,
     3,
     offsetof(struct AssistanceInformationMetaData, gNSSID),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_gNSSID_5,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gNSSID"},
    {ATF_POINTER,
     2,
     offsetof(struct AssistanceInformationMetaData, sBASID),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_sBASID_14,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "sBASID"},
    {ATF_POINTER,
     1,
     offsetof(struct AssistanceInformationMetaData, iE_Extensions),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ProtocolExtensionContainer_2816P7,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "iE-Extensions"},
};
static const int asn_MAP_AssistanceInformationMetaData_oms_1[] = {0, 1, 2, 3};
static const ber_tlv_tag_t asn_DEF_AssistanceInformationMetaData_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_AssistanceInformationMetaData_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* encrypted */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* gNSSID */
        {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* sBASID */
        {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}  /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_AssistanceInformationMetaData_specs_1 = {
    sizeof(struct AssistanceInformationMetaData),
    offsetof(struct AssistanceInformationMetaData, _asn_ctx),
    asn_MAP_AssistanceInformationMetaData_tag2el_1,
    4,                                           /* Count of tags in the map */
    asn_MAP_AssistanceInformationMetaData_oms_1, /* Optional members */
    4,
    0, /* Root/Additions */
    4, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AssistanceInformationMetaData = {
    "AssistanceInformationMetaData",
    "AssistanceInformationMetaData",
    &asn_OP_SEQUENCE,
    asn_DEF_AssistanceInformationMetaData_tags_1,
    sizeof(asn_DEF_AssistanceInformationMetaData_tags_1) /
        sizeof(asn_DEF_AssistanceInformationMetaData_tags_1[0]), /* 1 */
    asn_DEF_AssistanceInformationMetaData_tags_1, /* Same as above */
    sizeof(asn_DEF_AssistanceInformationMetaData_tags_1) /
        sizeof(asn_DEF_AssistanceInformationMetaData_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_AssistanceInformationMetaData_1,
    4,                                             /* Elements count */
    &asn_SPC_AssistanceInformationMetaData_specs_1 /* Additional specs */
};
