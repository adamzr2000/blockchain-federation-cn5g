/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#include "PRSResource-List.h"

#include "PRSResource-Item.h"
asn_per_constraints_t asn_PER_type_PRSResource_List_constr_1 CC_NOTUSED = {
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    {APC_CONSTRAINED, 6, 6, 1, 64} /* (SIZE(1..64)) */,
    0,
    0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_PRSResource_List_1[] = {
    {ATF_POINTER,
     0,
     0,
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_PRSResource_Item,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     ""},
};
static const ber_tlv_tag_t asn_DEF_PRSResource_List_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
asn_SET_OF_specifics_t asn_SPC_PRSResource_List_specs_1 = {
    sizeof(struct PRSResource_List),
    offsetof(struct PRSResource_List, _asn_ctx),
    0, /* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_PRSResource_List = {
    "PRSResource-List",
    "PRSResource-List",
    &asn_OP_SEQUENCE_OF,
    asn_DEF_PRSResource_List_tags_1,
    sizeof(asn_DEF_PRSResource_List_tags_1) /
        sizeof(asn_DEF_PRSResource_List_tags_1[0]), /* 1 */
    asn_DEF_PRSResource_List_tags_1,                /* Same as above */
    sizeof(asn_DEF_PRSResource_List_tags_1) /
        sizeof(asn_DEF_PRSResource_List_tags_1[0]), /* 1 */
    {0, &asn_PER_type_PRSResource_List_constr_1, SEQUENCE_OF_constraint},
    asn_MBR_PRSResource_List_1,
    1,                                /* Single element */
    &asn_SPC_PRSResource_List_specs_1 /* Additional specs */
};
