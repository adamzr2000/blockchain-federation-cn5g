/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "BadSignalElement.h"

#include "GNSS-SignalIDs.h"
asn_TYPE_member_t asn_MBR_BadSignalElement_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct BadSignalElement, badSVID),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_SV_ID,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "badSVID"},
    {ATF_POINTER,
     1,
     offsetof(struct BadSignalElement, badSignalID),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_SignalIDs,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "badSignalID"},
};
static const int asn_MAP_BadSignalElement_oms_1[]            = {1};
static const ber_tlv_tag_t asn_DEF_BadSignalElement_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_BadSignalElement_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* badSVID */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}  /* badSignalID */
};
asn_SEQUENCE_specifics_t asn_SPC_BadSignalElement_specs_1 = {
    sizeof(struct BadSignalElement),
    offsetof(struct BadSignalElement, _asn_ctx),
    asn_MAP_BadSignalElement_tag2el_1,
    2,                              /* Count of tags in the map */
    asn_MAP_BadSignalElement_oms_1, /* Optional members */
    1,
    0, /* Root/Additions */
    2, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BadSignalElement = {
    "BadSignalElement",
    "BadSignalElement",
    &asn_OP_SEQUENCE,
    asn_DEF_BadSignalElement_tags_1,
    sizeof(asn_DEF_BadSignalElement_tags_1) /
        sizeof(asn_DEF_BadSignalElement_tags_1[0]), /* 1 */
    asn_DEF_BadSignalElement_tags_1,                /* Same as above */
    sizeof(asn_DEF_BadSignalElement_tags_1) /
        sizeof(asn_DEF_BadSignalElement_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_BadSignalElement_1,
    2,                                /* Elements count */
    &asn_SPC_BadSignalElement_specs_1 /* Additional specs */
};
