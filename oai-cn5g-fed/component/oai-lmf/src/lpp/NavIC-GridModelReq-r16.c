/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "NavIC-GridModelReq-r16.h"

static const ber_tlv_tag_t asn_DEF_NavIC_GridModelReq_r16_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
asn_SEQUENCE_specifics_t asn_SPC_NavIC_GridModelReq_r16_specs_1 = {
    sizeof(struct NavIC_GridModelReq_r16),
    offsetof(struct NavIC_GridModelReq_r16, _asn_ctx),
    0, /* No top level tags */
    0, /* No tags in the map */
    0,
    0,
    0, /* Optional elements (not needed) */
    0, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NavIC_GridModelReq_r16 = {
    "NavIC-GridModelReq-r16",
    "NavIC-GridModelReq-r16",
    &asn_OP_SEQUENCE,
    asn_DEF_NavIC_GridModelReq_r16_tags_1,
    sizeof(asn_DEF_NavIC_GridModelReq_r16_tags_1) /
        sizeof(asn_DEF_NavIC_GridModelReq_r16_tags_1[0]), /* 1 */
    asn_DEF_NavIC_GridModelReq_r16_tags_1,                /* Same as above */
    sizeof(asn_DEF_NavIC_GridModelReq_r16_tags_1) /
        sizeof(asn_DEF_NavIC_GridModelReq_r16_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    0,
    0,                                      /* No members */
    &asn_SPC_NavIC_GridModelReq_r16_specs_1 /* Additional specs */
};
