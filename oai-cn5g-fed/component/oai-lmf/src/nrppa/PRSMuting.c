/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#include "PRSMuting.h"

#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_PRSMuting_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct PRSMuting, pRSMutingOption1),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_PRSMutingOption1,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "pRSMutingOption1"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct PRSMuting, pRSMutingOption2),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_PRSMutingOption2,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "pRSMutingOption2"},
    {ATF_POINTER,
     1,
     offsetof(struct PRSMuting, iE_Extensions),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ProtocolExtensionContainer_2816P39,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "iE-Extensions"},
};
static const int asn_MAP_PRSMuting_oms_1[]            = {2};
static const ber_tlv_tag_t asn_DEF_PRSMuting_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_PRSMuting_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* pRSMutingOption1 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* pRSMutingOption2 */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}  /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_PRSMuting_specs_1 = {
    sizeof(struct PRSMuting),
    offsetof(struct PRSMuting, _asn_ctx),
    asn_MAP_PRSMuting_tag2el_1,
    3,                       /* Count of tags in the map */
    asn_MAP_PRSMuting_oms_1, /* Optional members */
    1,
    0, /* Root/Additions */
    3, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PRSMuting = {
    "PRSMuting",
    "PRSMuting",
    &asn_OP_SEQUENCE,
    asn_DEF_PRSMuting_tags_1,
    sizeof(asn_DEF_PRSMuting_tags_1) /
        sizeof(asn_DEF_PRSMuting_tags_1[0]), /* 1 */
    asn_DEF_PRSMuting_tags_1,                /* Same as above */
    sizeof(asn_DEF_PRSMuting_tags_1) /
        sizeof(asn_DEF_PRSMuting_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_PRSMuting_1,
    3,                         /* Elements count */
    &asn_SPC_PRSMuting_specs_1 /* Additional specs */
};
