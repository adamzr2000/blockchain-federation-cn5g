/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-PDU-Contents"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#include "AssistanceInformationControl.h"

asn_TYPE_member_t asn_MBR_AssistanceInformationControl_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct AssistanceInformationControl, protocolIEs),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ProtocolIE_Container_2789P9,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "protocolIEs"},
};
static const ber_tlv_tag_t asn_DEF_AssistanceInformationControl_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_AssistanceInformationControl_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0} /* protocolIEs */
};
asn_SEQUENCE_specifics_t asn_SPC_AssistanceInformationControl_specs_1 = {
    sizeof(struct AssistanceInformationControl),
    offsetof(struct AssistanceInformationControl, _asn_ctx),
    asn_MAP_AssistanceInformationControl_tag2el_1,
    1, /* Count of tags in the map */
    0,
    0,
    0, /* Optional elements (not needed) */
    1, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AssistanceInformationControl = {
    "AssistanceInformationControl",
    "AssistanceInformationControl",
    &asn_OP_SEQUENCE,
    asn_DEF_AssistanceInformationControl_tags_1,
    sizeof(asn_DEF_AssistanceInformationControl_tags_1) /
        sizeof(asn_DEF_AssistanceInformationControl_tags_1[0]), /* 1 */
    asn_DEF_AssistanceInformationControl_tags_1, /* Same as above */
    sizeof(asn_DEF_AssistanceInformationControl_tags_1) /
        sizeof(asn_DEF_AssistanceInformationControl_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_AssistanceInformationControl_1,
    1,                                            /* Elements count */
    &asn_SPC_AssistanceInformationControl_specs_1 /* Additional specs */
};
