/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "Acknowledgement.h"

asn_TYPE_member_t asn_MBR_Acknowledgement_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct Acknowledgement, ackRequested),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BOOLEAN,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "ackRequested"},
    {ATF_POINTER,
     1,
     offsetof(struct Acknowledgement, ackIndicator),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_SequenceNumber,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "ackIndicator"},
};
static const int asn_MAP_Acknowledgement_oms_1[]            = {1};
static const ber_tlv_tag_t asn_DEF_Acknowledgement_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_Acknowledgement_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* ackRequested */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}  /* ackIndicator */
};
asn_SEQUENCE_specifics_t asn_SPC_Acknowledgement_specs_1 = {
    sizeof(struct Acknowledgement),
    offsetof(struct Acknowledgement, _asn_ctx),
    asn_MAP_Acknowledgement_tag2el_1,
    2,                             /* Count of tags in the map */
    asn_MAP_Acknowledgement_oms_1, /* Optional members */
    1,
    0,  /* Root/Additions */
    -1, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Acknowledgement = {
    "Acknowledgement",
    "Acknowledgement",
    &asn_OP_SEQUENCE,
    asn_DEF_Acknowledgement_tags_1,
    sizeof(asn_DEF_Acknowledgement_tags_1) /
        sizeof(asn_DEF_Acknowledgement_tags_1[0]), /* 1 */
    asn_DEF_Acknowledgement_tags_1,                /* Same as above */
    sizeof(asn_DEF_Acknowledgement_tags_1) /
        sizeof(asn_DEF_Acknowledgement_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_Acknowledgement_1,
    2,                               /* Elements count */
    &asn_SPC_Acknowledgement_specs_1 /* Additional specs */
};
