/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "A-GNSS-RequestLocationInformation.h"

asn_TYPE_member_t asn_MBR_A_GNSS_RequestLocationInformation_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct A_GNSS_RequestLocationInformation,
         gnss_PositioningInstructions),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_PositioningInstructions,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-PositioningInstructions"},
};
static const ber_tlv_tag_t asn_DEF_A_GNSS_RequestLocationInformation_tags_1[] =
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_A_GNSS_RequestLocationInformation_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
         0} /* gnss-PositioningInstructions */
};
asn_SEQUENCE_specifics_t asn_SPC_A_GNSS_RequestLocationInformation_specs_1 = {
    sizeof(struct A_GNSS_RequestLocationInformation),
    offsetof(struct A_GNSS_RequestLocationInformation, _asn_ctx),
    asn_MAP_A_GNSS_RequestLocationInformation_tag2el_1,
    1, /* Count of tags in the map */
    0,
    0,
    0, /* Optional elements (not needed) */
    1, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_A_GNSS_RequestLocationInformation = {
    "A-GNSS-RequestLocationInformation",
    "A-GNSS-RequestLocationInformation",
    &asn_OP_SEQUENCE,
    asn_DEF_A_GNSS_RequestLocationInformation_tags_1,
    sizeof(asn_DEF_A_GNSS_RequestLocationInformation_tags_1) /
        sizeof(asn_DEF_A_GNSS_RequestLocationInformation_tags_1[0]), /* 1 */
    asn_DEF_A_GNSS_RequestLocationInformation_tags_1, /* Same as above */
    sizeof(asn_DEF_A_GNSS_RequestLocationInformation_tags_1) /
        sizeof(asn_DEF_A_GNSS_RequestLocationInformation_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_A_GNSS_RequestLocationInformation_1,
    1,                                                 /* Elements count */
    &asn_SPC_A_GNSS_RequestLocationInformation_specs_1 /* Additional specs */
};
