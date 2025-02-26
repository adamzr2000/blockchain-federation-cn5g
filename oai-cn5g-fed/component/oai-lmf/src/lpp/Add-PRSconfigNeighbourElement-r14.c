/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "Add-PRSconfigNeighbourElement-r14.h"

#include "PRS-Info.h"
asn_TYPE_member_t asn_MBR_Add_PRSconfigNeighbourElement_r14_1[] = {
    {ATF_POINTER,
     1,
     offsetof(struct Add_PRSconfigNeighbourElement_r14, add_prsInfo_r14),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_PRS_Info,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "add-prsInfo-r14"},
};
static const int asn_MAP_Add_PRSconfigNeighbourElement_r14_oms_1[] = {0};
static const ber_tlv_tag_t asn_DEF_Add_PRSconfigNeighbourElement_r14_tags_1[] =
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_Add_PRSconfigNeighbourElement_r14_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0} /* add-prsInfo-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_Add_PRSconfigNeighbourElement_r14_specs_1 = {
    sizeof(struct Add_PRSconfigNeighbourElement_r14),
    offsetof(struct Add_PRSconfigNeighbourElement_r14, _asn_ctx),
    asn_MAP_Add_PRSconfigNeighbourElement_r14_tag2el_1,
    1, /* Count of tags in the map */
    asn_MAP_Add_PRSconfigNeighbourElement_r14_oms_1, /* Optional members */
    1,
    0, /* Root/Additions */
    1, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Add_PRSconfigNeighbourElement_r14 = {
    "Add-PRSconfigNeighbourElement-r14",
    "Add-PRSconfigNeighbourElement-r14",
    &asn_OP_SEQUENCE,
    asn_DEF_Add_PRSconfigNeighbourElement_r14_tags_1,
    sizeof(asn_DEF_Add_PRSconfigNeighbourElement_r14_tags_1) /
        sizeof(asn_DEF_Add_PRSconfigNeighbourElement_r14_tags_1[0]), /* 1 */
    asn_DEF_Add_PRSconfigNeighbourElement_r14_tags_1, /* Same as above */
    sizeof(asn_DEF_Add_PRSconfigNeighbourElement_r14_tags_1) /
        sizeof(asn_DEF_Add_PRSconfigNeighbourElement_r14_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_Add_PRSconfigNeighbourElement_r14_1,
    1,                                                 /* Elements count */
    &asn_SPC_Add_PRSconfigNeighbourElement_r14_specs_1 /* Additional specs */
};
