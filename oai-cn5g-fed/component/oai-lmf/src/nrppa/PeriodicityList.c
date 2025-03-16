/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#include "PeriodicityList.h"

asn_per_constraints_t asn_PER_type_PeriodicityList_constr_1 CC_NOTUSED = {
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    {APC_CONSTRAINED, 4, 4, 1, 16} /* (SIZE(1..16)) */,
    0,
    0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_PeriodicityList_1[] = {
    {ATF_POINTER,
     0,
     0,
     (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
     0,
     &asn_DEF_PeriodicityItem,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     ""},
};
static const ber_tlv_tag_t asn_DEF_PeriodicityList_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
asn_SET_OF_specifics_t asn_SPC_PeriodicityList_specs_1 = {
    sizeof(struct PeriodicityList), offsetof(struct PeriodicityList, _asn_ctx),
    1, /* XER encoding is XMLValueList */
};
asn_TYPE_descriptor_t asn_DEF_PeriodicityList = {
    "PeriodicityList",
    "PeriodicityList",
    &asn_OP_SEQUENCE_OF,
    asn_DEF_PeriodicityList_tags_1,
    sizeof(asn_DEF_PeriodicityList_tags_1) /
        sizeof(asn_DEF_PeriodicityList_tags_1[0]), /* 1 */
    asn_DEF_PeriodicityList_tags_1,                /* Same as above */
    sizeof(asn_DEF_PeriodicityList_tags_1) /
        sizeof(asn_DEF_PeriodicityList_tags_1[0]), /* 1 */
    {0, &asn_PER_type_PeriodicityList_constr_1, SEQUENCE_OF_constraint},
    asn_MBR_PeriodicityList_1,
    1,                               /* Single element */
    &asn_SPC_PeriodicityList_specs_1 /* Additional specs */
};
