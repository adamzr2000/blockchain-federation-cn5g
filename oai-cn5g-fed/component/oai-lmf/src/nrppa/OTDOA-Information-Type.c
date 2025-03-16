/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-PDU-Contents"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#include "OTDOA-Information-Type.h"

#include "ProtocolIE-Single-Container.h"
asn_per_constraints_t asn_PER_type_OTDOA_Information_Type_constr_1
    CC_NOTUSED = {
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        {APC_CONSTRAINED, 6, 6, 1, 63} /* (SIZE(1..63)) */,
        0,
        0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_OTDOA_Information_Type_1[] = {
    {ATF_POINTER,
     0,
     0,
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_ProtocolIE_Single_Container_2792P0,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     ""},
};
static const ber_tlv_tag_t asn_DEF_OTDOA_Information_Type_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
asn_SET_OF_specifics_t asn_SPC_OTDOA_Information_Type_specs_1 = {
    sizeof(struct OTDOA_Information_Type),
    offsetof(struct OTDOA_Information_Type, _asn_ctx),
    0, /* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_OTDOA_Information_Type = {
    "OTDOA-Information-Type",
    "OTDOA-Information-Type",
    &asn_OP_SEQUENCE_OF,
    asn_DEF_OTDOA_Information_Type_tags_1,
    sizeof(asn_DEF_OTDOA_Information_Type_tags_1) /
        sizeof(asn_DEF_OTDOA_Information_Type_tags_1[0]), /* 1 */
    asn_DEF_OTDOA_Information_Type_tags_1,                /* Same as above */
    sizeof(asn_DEF_OTDOA_Information_Type_tags_1) /
        sizeof(asn_DEF_OTDOA_Information_Type_tags_1[0]), /* 1 */
    {0, &asn_PER_type_OTDOA_Information_Type_constr_1, SEQUENCE_OF_constraint},
    asn_MBR_OTDOA_Information_Type_1,
    1,                                      /* Single element */
    &asn_SPC_OTDOA_Information_Type_specs_1 /* Additional specs */
};
