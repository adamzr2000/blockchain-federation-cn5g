/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "NR-DL-TDOA-MeasList-r16.h"

#include "NR-DL-TDOA-MeasElement-r16.h"
asn_per_constraints_t asn_PER_type_NR_DL_TDOA_MeasList_r16_constr_1
    CC_NOTUSED = {
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        {APC_CONSTRAINED, 8, 8, 1, 256} /* (SIZE(1..256)) */,
        0,
        0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_NR_DL_TDOA_MeasList_r16_1[] = {
    {ATF_POINTER,
     0,
     0,
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_NR_DL_TDOA_MeasElement_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     ""},
};
static const ber_tlv_tag_t asn_DEF_NR_DL_TDOA_MeasList_r16_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
asn_SET_OF_specifics_t asn_SPC_NR_DL_TDOA_MeasList_r16_specs_1 = {
    sizeof(struct NR_DL_TDOA_MeasList_r16),
    offsetof(struct NR_DL_TDOA_MeasList_r16, _asn_ctx),
    0, /* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_NR_DL_TDOA_MeasList_r16 = {
    "NR-DL-TDOA-MeasList-r16",
    "NR-DL-TDOA-MeasList-r16",
    &asn_OP_SEQUENCE_OF,
    asn_DEF_NR_DL_TDOA_MeasList_r16_tags_1,
    sizeof(asn_DEF_NR_DL_TDOA_MeasList_r16_tags_1) /
        sizeof(asn_DEF_NR_DL_TDOA_MeasList_r16_tags_1[0]), /* 1 */
    asn_DEF_NR_DL_TDOA_MeasList_r16_tags_1,                /* Same as above */
    sizeof(asn_DEF_NR_DL_TDOA_MeasList_r16_tags_1) /
        sizeof(asn_DEF_NR_DL_TDOA_MeasList_r16_tags_1[0]), /* 1 */
    {0, &asn_PER_type_NR_DL_TDOA_MeasList_r16_constr_1, SEQUENCE_OF_constraint},
    asn_MBR_NR_DL_TDOA_MeasList_r16_1,
    1,                                       /* Single element */
    &asn_SPC_NR_DL_TDOA_MeasList_r16_specs_1 /* Additional specs */
};
