/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#include "SRSConfig.h"

#include "SRSResource-List.h"
#include "PosSRSResource-List.h"
#include "SRSResourceSet-List.h"
#include "PosSRSResourceSet-List.h"
#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_SRSConfig_1[] = {
    {ATF_POINTER,
     5,
     offsetof(struct SRSConfig, sRSResource_List),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_SRSResource_List,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "sRSResource-List"},
    {ATF_POINTER,
     4,
     offsetof(struct SRSConfig, posSRSResource_List),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_PosSRSResource_List,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "posSRSResource-List"},
    {ATF_POINTER,
     3,
     offsetof(struct SRSConfig, sRSResourceSet_List),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_SRSResourceSet_List,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "sRSResourceSet-List"},
    {ATF_POINTER,
     2,
     offsetof(struct SRSConfig, posSRSResourceSet_List),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_PosSRSResourceSet_List,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "posSRSResourceSet-List"},
    {ATF_POINTER,
     1,
     offsetof(struct SRSConfig, iE_Extensions),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ProtocolExtensionContainer_2816P77,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "iE-Extensions"},
};
static const int asn_MAP_SRSConfig_oms_1[]            = {0, 1, 2, 3, 4};
static const ber_tlv_tag_t asn_DEF_SRSConfig_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_SRSConfig_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* sRSResource-List */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* posSRSResource-List */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* sRSResourceSet-List */
    {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}, /* posSRSResourceSet-List */
    {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0}  /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_SRSConfig_specs_1 = {
    sizeof(struct SRSConfig),
    offsetof(struct SRSConfig, _asn_ctx),
    asn_MAP_SRSConfig_tag2el_1,
    5,                       /* Count of tags in the map */
    asn_MAP_SRSConfig_oms_1, /* Optional members */
    5,
    0, /* Root/Additions */
    5, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SRSConfig = {
    "SRSConfig",
    "SRSConfig",
    &asn_OP_SEQUENCE,
    asn_DEF_SRSConfig_tags_1,
    sizeof(asn_DEF_SRSConfig_tags_1) /
        sizeof(asn_DEF_SRSConfig_tags_1[0]), /* 1 */
    asn_DEF_SRSConfig_tags_1,                /* Same as above */
    sizeof(asn_DEF_SRSConfig_tags_1) /
        sizeof(asn_DEF_SRSConfig_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_SRSConfig_1,
    5,                         /* Elements count */
    &asn_SPC_SRSConfig_specs_1 /* Additional specs */
};
