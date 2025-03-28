/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "GridElement-r16.h"

#include "TropospericDelayCorrection-r16.h"
#include "STEC-ResidualSatList-r16.h"
asn_TYPE_member_t asn_MBR_GridElement_r16_1[] = {
    {ATF_POINTER,
     2,
     offsetof(struct GridElement_r16, tropospericDelayCorrection_r16),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_TropospericDelayCorrection_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "tropospericDelayCorrection-r16"},
    {ATF_POINTER,
     1,
     offsetof(struct GridElement_r16, stec_ResidualSatList_r16),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_STEC_ResidualSatList_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "stec-ResidualSatList-r16"},
};
static const int asn_MAP_GridElement_r16_oms_1[]            = {0, 1};
static const ber_tlv_tag_t asn_DEF_GridElement_r16_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_GridElement_r16_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
     0}, /* tropospericDelayCorrection-r16 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0} /* stec-ResidualSatList-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_GridElement_r16_specs_1 = {
    sizeof(struct GridElement_r16),
    offsetof(struct GridElement_r16, _asn_ctx),
    asn_MAP_GridElement_r16_tag2el_1,
    2,                             /* Count of tags in the map */
    asn_MAP_GridElement_r16_oms_1, /* Optional members */
    2,
    0, /* Root/Additions */
    2, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GridElement_r16 = {
    "GridElement-r16",
    "GridElement-r16",
    &asn_OP_SEQUENCE,
    asn_DEF_GridElement_r16_tags_1,
    sizeof(asn_DEF_GridElement_r16_tags_1) /
        sizeof(asn_DEF_GridElement_r16_tags_1[0]), /* 1 */
    asn_DEF_GridElement_r16_tags_1,                /* Same as above */
    sizeof(asn_DEF_GridElement_r16_tags_1) /
        sizeof(asn_DEF_GridElement_r16_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_GridElement_r16_1,
    2,                               /* Elements count */
    &asn_SPC_GridElement_r16_specs_1 /* Additional specs */
};
