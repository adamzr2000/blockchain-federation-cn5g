/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "GNSS-SSR-CodeBiasSupport-r15.h"

asn_TYPE_member_t asn_MBR_GNSS_SSR_CodeBiasSupport_r15_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct GNSS_SSR_CodeBiasSupport_r15,
         signal_and_tracking_mode_ID_Sup_r15),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_SignalIDs,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "signal-and-tracking-mode-ID-Sup-r15"},
};
static const ber_tlv_tag_t asn_DEF_GNSS_SSR_CodeBiasSupport_r15_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_GNSS_SSR_CodeBiasSupport_r15_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
         0} /* signal-and-tracking-mode-ID-Sup-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_GNSS_SSR_CodeBiasSupport_r15_specs_1 = {
    sizeof(struct GNSS_SSR_CodeBiasSupport_r15),
    offsetof(struct GNSS_SSR_CodeBiasSupport_r15, _asn_ctx),
    asn_MAP_GNSS_SSR_CodeBiasSupport_r15_tag2el_1,
    1, /* Count of tags in the map */
    0,
    0,
    0, /* Optional elements (not needed) */
    1, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GNSS_SSR_CodeBiasSupport_r15 = {
    "GNSS-SSR-CodeBiasSupport-r15",
    "GNSS-SSR-CodeBiasSupport-r15",
    &asn_OP_SEQUENCE,
    asn_DEF_GNSS_SSR_CodeBiasSupport_r15_tags_1,
    sizeof(asn_DEF_GNSS_SSR_CodeBiasSupport_r15_tags_1) /
        sizeof(asn_DEF_GNSS_SSR_CodeBiasSupport_r15_tags_1[0]), /* 1 */
    asn_DEF_GNSS_SSR_CodeBiasSupport_r15_tags_1, /* Same as above */
    sizeof(asn_DEF_GNSS_SSR_CodeBiasSupport_r15_tags_1) /
        sizeof(asn_DEF_GNSS_SSR_CodeBiasSupport_r15_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_GNSS_SSR_CodeBiasSupport_r15_1,
    1,                                            /* Elements count */
    &asn_SPC_GNSS_SSR_CodeBiasSupport_r15_specs_1 /* Additional specs */
};
