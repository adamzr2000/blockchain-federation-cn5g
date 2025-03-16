/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "DL-PRS-ResourcesBandCombinationList-r16.h"

#include "DL-PRS-ResourcesBandCombination-r16.h"
asn_per_constraints_t
    asn_PER_type_DL_PRS_ResourcesBandCombinationList_r16_constr_1 CC_NOTUSED = {
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        {APC_CONSTRAINED, 10, 10, 1, 1024} /* (SIZE(1..1024)) */,
        0,
        0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_DL_PRS_ResourcesBandCombinationList_r16_1[] = {
    {ATF_POINTER,
     0,
     0,
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_DL_PRS_ResourcesBandCombination_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     ""},
};
static const ber_tlv_tag_t
    asn_DEF_DL_PRS_ResourcesBandCombinationList_r16_tags_1[] = {
        (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
asn_SET_OF_specifics_t asn_SPC_DL_PRS_ResourcesBandCombinationList_r16_specs_1 =
    {
        sizeof(struct DL_PRS_ResourcesBandCombinationList_r16),
        offsetof(struct DL_PRS_ResourcesBandCombinationList_r16, _asn_ctx),
        0, /* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_DL_PRS_ResourcesBandCombinationList_r16 = {
    "DL-PRS-ResourcesBandCombinationList-r16",
    "DL-PRS-ResourcesBandCombinationList-r16",
    &asn_OP_SEQUENCE_OF,
    asn_DEF_DL_PRS_ResourcesBandCombinationList_r16_tags_1,
    sizeof(asn_DEF_DL_PRS_ResourcesBandCombinationList_r16_tags_1) /
        sizeof(
            asn_DEF_DL_PRS_ResourcesBandCombinationList_r16_tags_1[0]), /* 1 */
    asn_DEF_DL_PRS_ResourcesBandCombinationList_r16_tags_1, /* Same as above */
    sizeof(asn_DEF_DL_PRS_ResourcesBandCombinationList_r16_tags_1) /
        sizeof(
            asn_DEF_DL_PRS_ResourcesBandCombinationList_r16_tags_1[0]), /* 1 */
    {0, &asn_PER_type_DL_PRS_ResourcesBandCombinationList_r16_constr_1,
     SEQUENCE_OF_constraint},
    asn_MBR_DL_PRS_ResourcesBandCombinationList_r16_1,
    1, /* Single element */
    &asn_SPC_DL_PRS_ResourcesBandCombinationList_r16_specs_1 /* Additional specs
                                                              */
};
