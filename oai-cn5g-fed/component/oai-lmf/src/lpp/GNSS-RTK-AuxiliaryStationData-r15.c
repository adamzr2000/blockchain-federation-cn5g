/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "GNSS-RTK-AuxiliaryStationData-r15.h"

#include "GNSS-SubNetworkID-r15.h"
asn_TYPE_member_t asn_MBR_GNSS_RTK_AuxiliaryStationData_r15_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct GNSS_RTK_AuxiliaryStationData_r15, networkID_r15),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_NetworkID_r15,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "networkID-r15"},
    {ATF_POINTER,
     1,
     offsetof(struct GNSS_RTK_AuxiliaryStationData_r15, subNetworkID_r15),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_SubNetworkID_r15,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "subNetworkID-r15"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct GNSS_RTK_AuxiliaryStationData_r15,
         master_referenceStationID_r15),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_ReferenceStationID_r15,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "master-referenceStationID-r15"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct GNSS_RTK_AuxiliaryStationData_r15, auxiliaryStationList_r15),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_AuxiliaryStationList_r15,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "auxiliaryStationList-r15"},
};
static const int asn_MAP_GNSS_RTK_AuxiliaryStationData_r15_oms_1[] = {1};
static const ber_tlv_tag_t asn_DEF_GNSS_RTK_AuxiliaryStationData_r15_tags_1[] =
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_GNSS_RTK_AuxiliaryStationData_r15_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* networkID-r15 */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* subNetworkID-r15 */
        {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0,
         0}, /* master-referenceStationID-r15 */
        {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0,
         0} /* auxiliaryStationList-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_GNSS_RTK_AuxiliaryStationData_r15_specs_1 = {
    sizeof(struct GNSS_RTK_AuxiliaryStationData_r15),
    offsetof(struct GNSS_RTK_AuxiliaryStationData_r15, _asn_ctx),
    asn_MAP_GNSS_RTK_AuxiliaryStationData_r15_tag2el_1,
    4, /* Count of tags in the map */
    asn_MAP_GNSS_RTK_AuxiliaryStationData_r15_oms_1, /* Optional members */
    1,
    0, /* Root/Additions */
    4, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GNSS_RTK_AuxiliaryStationData_r15 = {
    "GNSS-RTK-AuxiliaryStationData-r15",
    "GNSS-RTK-AuxiliaryStationData-r15",
    &asn_OP_SEQUENCE,
    asn_DEF_GNSS_RTK_AuxiliaryStationData_r15_tags_1,
    sizeof(asn_DEF_GNSS_RTK_AuxiliaryStationData_r15_tags_1) /
        sizeof(asn_DEF_GNSS_RTK_AuxiliaryStationData_r15_tags_1[0]), /* 1 */
    asn_DEF_GNSS_RTK_AuxiliaryStationData_r15_tags_1, /* Same as above */
    sizeof(asn_DEF_GNSS_RTK_AuxiliaryStationData_r15_tags_1) /
        sizeof(asn_DEF_GNSS_RTK_AuxiliaryStationData_r15_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_GNSS_RTK_AuxiliaryStationData_r15_1,
    4,                                                 /* Elements count */
    &asn_SPC_GNSS_RTK_AuxiliaryStationData_r15_specs_1 /* Additional specs */
};
