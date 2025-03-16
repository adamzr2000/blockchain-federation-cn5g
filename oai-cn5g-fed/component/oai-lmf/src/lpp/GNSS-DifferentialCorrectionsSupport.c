/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "GNSS-DifferentialCorrectionsSupport.h"

asn_TYPE_member_t asn_MBR_GNSS_DifferentialCorrectionsSupport_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct GNSS_DifferentialCorrectionsSupport, gnssSignalIDs),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_SignalIDs,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "gnssSignalIDs"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct GNSS_DifferentialCorrectionsSupport, dgnss_ValidityTimeSup),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BOOLEAN,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "dgnss-ValidityTimeSup"},
};
static const ber_tlv_tag_t
    asn_DEF_GNSS_DifferentialCorrectionsSupport_tags_1[] = {
        (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_GNSS_DifferentialCorrectionsSupport_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* gnssSignalIDs */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0,
         0} /* dgnss-ValidityTimeSup */
};
asn_SEQUENCE_specifics_t asn_SPC_GNSS_DifferentialCorrectionsSupport_specs_1 = {
    sizeof(struct GNSS_DifferentialCorrectionsSupport),
    offsetof(struct GNSS_DifferentialCorrectionsSupport, _asn_ctx),
    asn_MAP_GNSS_DifferentialCorrectionsSupport_tag2el_1,
    2, /* Count of tags in the map */
    0,
    0,
    0, /* Optional elements (not needed) */
    2, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GNSS_DifferentialCorrectionsSupport = {
    "GNSS-DifferentialCorrectionsSupport",
    "GNSS-DifferentialCorrectionsSupport",
    &asn_OP_SEQUENCE,
    asn_DEF_GNSS_DifferentialCorrectionsSupport_tags_1,
    sizeof(asn_DEF_GNSS_DifferentialCorrectionsSupport_tags_1) /
        sizeof(asn_DEF_GNSS_DifferentialCorrectionsSupport_tags_1[0]), /* 1 */
    asn_DEF_GNSS_DifferentialCorrectionsSupport_tags_1, /* Same as above */
    sizeof(asn_DEF_GNSS_DifferentialCorrectionsSupport_tags_1) /
        sizeof(asn_DEF_GNSS_DifferentialCorrectionsSupport_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_GNSS_DifferentialCorrectionsSupport_1,
    2,                                                   /* Elements count */
    &asn_SPC_GNSS_DifferentialCorrectionsSupport_specs_1 /* Additional specs */
};
