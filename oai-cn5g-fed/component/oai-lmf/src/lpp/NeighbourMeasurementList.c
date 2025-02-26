/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "NeighbourMeasurementList.h"

#include "NeighbourMeasurementElement.h"
asn_per_constraints_t asn_PER_type_NeighbourMeasurementList_constr_1
    CC_NOTUSED = {
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        {APC_CONSTRAINED, 5, 5, 1, 24} /* (SIZE(1..24)) */,
        0,
        0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_NeighbourMeasurementList_1[] = {
    {ATF_POINTER,
     0,
     0,
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_NeighbourMeasurementElement,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     ""},
};
static const ber_tlv_tag_t asn_DEF_NeighbourMeasurementList_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
asn_SET_OF_specifics_t asn_SPC_NeighbourMeasurementList_specs_1 = {
    sizeof(struct NeighbourMeasurementList),
    offsetof(struct NeighbourMeasurementList, _asn_ctx),
    0, /* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_NeighbourMeasurementList = {
    "NeighbourMeasurementList",
    "NeighbourMeasurementList",
    &asn_OP_SEQUENCE_OF,
    asn_DEF_NeighbourMeasurementList_tags_1,
    sizeof(asn_DEF_NeighbourMeasurementList_tags_1) /
        sizeof(asn_DEF_NeighbourMeasurementList_tags_1[0]), /* 1 */
    asn_DEF_NeighbourMeasurementList_tags_1,                /* Same as above */
    sizeof(asn_DEF_NeighbourMeasurementList_tags_1) /
        sizeof(asn_DEF_NeighbourMeasurementList_tags_1[0]), /* 1 */
    {0, &asn_PER_type_NeighbourMeasurementList_constr_1,
     SEQUENCE_OF_constraint},
    asn_MBR_NeighbourMeasurementList_1,
    1,                                        /* Single element */
    &asn_SPC_NeighbourMeasurementList_specs_1 /* Additional specs */
};
