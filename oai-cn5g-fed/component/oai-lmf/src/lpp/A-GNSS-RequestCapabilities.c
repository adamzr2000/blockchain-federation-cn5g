/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "A-GNSS-RequestCapabilities.h"

asn_TYPE_member_t asn_MBR_A_GNSS_RequestCapabilities_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct A_GNSS_RequestCapabilities, gnss_SupportListReq),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BOOLEAN,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnss-SupportListReq"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct A_GNSS_RequestCapabilities, assistanceDataSupportListReq),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BOOLEAN,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "assistanceDataSupportListReq"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct A_GNSS_RequestCapabilities, locationVelocityTypesReq),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BOOLEAN,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "locationVelocityTypesReq"},
};
static const ber_tlv_tag_t asn_DEF_A_GNSS_RequestCapabilities_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_A_GNSS_RequestCapabilities_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* gnss-SupportListReq */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0,
         0}, /* assistanceDataSupportListReq */
        {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0,
         0} /* locationVelocityTypesReq */
};
asn_SEQUENCE_specifics_t asn_SPC_A_GNSS_RequestCapabilities_specs_1 = {
    sizeof(struct A_GNSS_RequestCapabilities),
    offsetof(struct A_GNSS_RequestCapabilities, _asn_ctx),
    asn_MAP_A_GNSS_RequestCapabilities_tag2el_1,
    3, /* Count of tags in the map */
    0,
    0,
    0, /* Optional elements (not needed) */
    3, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_A_GNSS_RequestCapabilities = {
    "A-GNSS-RequestCapabilities",
    "A-GNSS-RequestCapabilities",
    &asn_OP_SEQUENCE,
    asn_DEF_A_GNSS_RequestCapabilities_tags_1,
    sizeof(asn_DEF_A_GNSS_RequestCapabilities_tags_1) /
        sizeof(asn_DEF_A_GNSS_RequestCapabilities_tags_1[0]), /* 1 */
    asn_DEF_A_GNSS_RequestCapabilities_tags_1, /* Same as above */
    sizeof(asn_DEF_A_GNSS_RequestCapabilities_tags_1) /
        sizeof(asn_DEF_A_GNSS_RequestCapabilities_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_A_GNSS_RequestCapabilities_1,
    3,                                          /* Elements count */
    &asn_SPC_A_GNSS_RequestCapabilities_specs_1 /* Additional specs */
};
