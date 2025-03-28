/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "RequestLocationInformation-r9-IEs.h"

#include "CommonIEsRequestLocationInformation.h"
#include "A-GNSS-RequestLocationInformation.h"
#include "OTDOA-RequestLocationInformation.h"
#include "ECID-RequestLocationInformation.h"
#include "EPDU-Sequence.h"
#include "Sensor-RequestLocationInformation-r13.h"
#include "TBS-RequestLocationInformation-r13.h"
#include "WLAN-RequestLocationInformation-r13.h"
#include "BT-RequestLocationInformation-r13.h"
#include "NR-ECID-RequestLocationInformation-r16.h"
#include "NR-Multi-RTT-RequestLocationInformation-r16.h"
#include "NR-DL-AoD-RequestLocationInformation-r16.h"
#include "NR-DL-TDOA-RequestLocationInformation-r16.h"
static asn_TYPE_member_t asn_MBR_ext1_8[] = {
    {ATF_POINTER,
     4,
     offsetof(
         struct RequestLocationInformation_r9_IEs__ext1,
         sensor_RequestLocationInformation_r13),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Sensor_RequestLocationInformation_r13,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "sensor-RequestLocationInformation-r13"},
    {ATF_POINTER,
     3,
     offsetof(
         struct RequestLocationInformation_r9_IEs__ext1,
         tbs_RequestLocationInformation_r13),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_TBS_RequestLocationInformation_r13,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "tbs-RequestLocationInformation-r13"},
    {ATF_POINTER,
     2,
     offsetof(
         struct RequestLocationInformation_r9_IEs__ext1,
         wlan_RequestLocationInformation_r13),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_WLAN_RequestLocationInformation_r13,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "wlan-RequestLocationInformation-r13"},
    {ATF_POINTER,
     1,
     offsetof(
         struct RequestLocationInformation_r9_IEs__ext1,
         bt_RequestLocationInformation_r13),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BT_RequestLocationInformation_r13,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "bt-RequestLocationInformation-r13"},
};
static const int asn_MAP_ext1_oms_8[]            = {0, 1, 2, 3};
static const ber_tlv_tag_t asn_DEF_ext1_tags_8[] = {
    (ASN_TAG_CLASS_CONTEXT | (5 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_8[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
     0}, /* sensor-RequestLocationInformation-r13 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0,
     0}, /* tbs-RequestLocationInformation-r13 */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0,
     0}, /* wlan-RequestLocationInformation-r13 */
    {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0,
     0} /* bt-RequestLocationInformation-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_8 = {
    sizeof(struct RequestLocationInformation_r9_IEs__ext1),
    offsetof(struct RequestLocationInformation_r9_IEs__ext1, _asn_ctx),
    asn_MAP_ext1_tag2el_8,
    4,                  /* Count of tags in the map */
    asn_MAP_ext1_oms_8, /* Optional members */
    4,
    0,  /* Root/Additions */
    -1, /* First extension addition */
};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_ext1_8 = {
        "ext1",
        "ext1",
        &asn_OP_SEQUENCE,
        asn_DEF_ext1_tags_8,
        sizeof(asn_DEF_ext1_tags_8) / sizeof(asn_DEF_ext1_tags_8[0]) -
            1,               /* 1 */
        asn_DEF_ext1_tags_8, /* Same as above */
        sizeof(asn_DEF_ext1_tags_8) / sizeof(asn_DEF_ext1_tags_8[0]), /* 2 */
        {0, 0, SEQUENCE_constraint},
        asn_MBR_ext1_8,
        4,                    /* Elements count */
        &asn_SPC_ext1_specs_8 /* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_13[] = {
    {ATF_POINTER,
     4,
     offsetof(
         struct RequestLocationInformation_r9_IEs__ext2,
         nr_ECID_RequestLocationInformation_r16),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NR_ECID_RequestLocationInformation_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nr-ECID-RequestLocationInformation-r16"},
    {ATF_POINTER,
     3,
     offsetof(
         struct RequestLocationInformation_r9_IEs__ext2,
         nr_Multi_RTT_RequestLocationInformation_r16),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NR_Multi_RTT_RequestLocationInformation_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nr-Multi-RTT-RequestLocationInformation-r16"},
    {ATF_POINTER,
     2,
     offsetof(
         struct RequestLocationInformation_r9_IEs__ext2,
         nr_DL_AoD_RequestLocationInformation_r16),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NR_DL_AoD_RequestLocationInformation_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nr-DL-AoD-RequestLocationInformation-r16"},
    {ATF_POINTER,
     1,
     offsetof(
         struct RequestLocationInformation_r9_IEs__ext2,
         nr_DL_TDOA_RequestLocationInformation_r16),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NR_DL_TDOA_RequestLocationInformation_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nr-DL-TDOA-RequestLocationInformation-r16"},
};
static const int asn_MAP_ext2_oms_13[]            = {0, 1, 2, 3};
static const ber_tlv_tag_t asn_DEF_ext2_tags_13[] = {
    (ASN_TAG_CLASS_CONTEXT | (6 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_13[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
     0}, /* nr-ECID-RequestLocationInformation-r16 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0,
     0}, /* nr-Multi-RTT-RequestLocationInformation-r16 */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0,
     0}, /* nr-DL-AoD-RequestLocationInformation-r16 */
    {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0,
     0} /* nr-DL-TDOA-RequestLocationInformation-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_13 = {
    sizeof(struct RequestLocationInformation_r9_IEs__ext2),
    offsetof(struct RequestLocationInformation_r9_IEs__ext2, _asn_ctx),
    asn_MAP_ext2_tag2el_13,
    4,                   /* Count of tags in the map */
    asn_MAP_ext2_oms_13, /* Optional members */
    4,
    0,  /* Root/Additions */
    -1, /* First extension addition */
};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_ext2_13 = {
        "ext2",
        "ext2",
        &asn_OP_SEQUENCE,
        asn_DEF_ext2_tags_13,
        sizeof(asn_DEF_ext2_tags_13) / sizeof(asn_DEF_ext2_tags_13[0]) -
            1,                /* 1 */
        asn_DEF_ext2_tags_13, /* Same as above */
        sizeof(asn_DEF_ext2_tags_13) / sizeof(asn_DEF_ext2_tags_13[0]), /* 2 */
        {0, 0, SEQUENCE_constraint},
        asn_MBR_ext2_13,
        4,                     /* Elements count */
        &asn_SPC_ext2_specs_13 /* Additional specs */
};

asn_TYPE_member_t asn_MBR_RequestLocationInformation_r9_IEs_1[] = {
    {ATF_POINTER,
     7,
     offsetof(
         struct RequestLocationInformation_r9_IEs,
         commonIEsRequestLocationInformation),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_CommonIEsRequestLocationInformation,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "commonIEsRequestLocationInformation"},
    {ATF_POINTER,
     6,
     offsetof(
         struct RequestLocationInformation_r9_IEs,
         a_gnss_RequestLocationInformation),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_A_GNSS_RequestLocationInformation,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "a-gnss-RequestLocationInformation"},
    {ATF_POINTER,
     5,
     offsetof(
         struct RequestLocationInformation_r9_IEs,
         otdoa_RequestLocationInformation),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_OTDOA_RequestLocationInformation,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "otdoa-RequestLocationInformation"},
    {ATF_POINTER,
     4,
     offsetof(
         struct RequestLocationInformation_r9_IEs,
         ecid_RequestLocationInformation),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ECID_RequestLocationInformation,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "ecid-RequestLocationInformation"},
    {ATF_POINTER,
     3,
     offsetof(
         struct RequestLocationInformation_r9_IEs,
         epdu_RequestLocationInformation),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_EPDU_Sequence,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "epdu-RequestLocationInformation"},
    {ATF_POINTER,
     2,
     offsetof(struct RequestLocationInformation_r9_IEs, ext1),
     (ASN_TAG_CLASS_CONTEXT | (5 << 2)),
     0,
     &asn_DEF_ext1_8,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "ext1"},
    {ATF_POINTER,
     1,
     offsetof(struct RequestLocationInformation_r9_IEs, ext2),
     (ASN_TAG_CLASS_CONTEXT | (6 << 2)),
     0,
     &asn_DEF_ext2_13,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "ext2"},
};
static const int asn_MAP_RequestLocationInformation_r9_IEs_oms_1[] = {
    0, 1, 2, 3, 4, 5, 6};
static const ber_tlv_tag_t asn_DEF_RequestLocationInformation_r9_IEs_tags_1[] =
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_RequestLocationInformation_r9_IEs_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
         0}, /* commonIEsRequestLocationInformation */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0,
         0}, /* a-gnss-RequestLocationInformation */
        {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0,
         0}, /* otdoa-RequestLocationInformation */
        {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0,
         0}, /* ecid-RequestLocationInformation */
        {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0,
         0}, /* epdu-RequestLocationInformation */
        {(ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0}, /* ext1 */
        {(ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0}  /* ext2 */
};
asn_SEQUENCE_specifics_t asn_SPC_RequestLocationInformation_r9_IEs_specs_1 = {
    sizeof(struct RequestLocationInformation_r9_IEs),
    offsetof(struct RequestLocationInformation_r9_IEs, _asn_ctx),
    asn_MAP_RequestLocationInformation_r9_IEs_tag2el_1,
    7, /* Count of tags in the map */
    asn_MAP_RequestLocationInformation_r9_IEs_oms_1, /* Optional members */
    5,
    2, /* Root/Additions */
    5, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RequestLocationInformation_r9_IEs = {
    "RequestLocationInformation-r9-IEs",
    "RequestLocationInformation-r9-IEs",
    &asn_OP_SEQUENCE,
    asn_DEF_RequestLocationInformation_r9_IEs_tags_1,
    sizeof(asn_DEF_RequestLocationInformation_r9_IEs_tags_1) /
        sizeof(asn_DEF_RequestLocationInformation_r9_IEs_tags_1[0]), /* 1 */
    asn_DEF_RequestLocationInformation_r9_IEs_tags_1, /* Same as above */
    sizeof(asn_DEF_RequestLocationInformation_r9_IEs_tags_1) /
        sizeof(asn_DEF_RequestLocationInformation_r9_IEs_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_RequestLocationInformation_r9_IEs_1,
    7,                                                 /* Elements count */
    &asn_SPC_RequestLocationInformation_r9_IEs_specs_1 /* Additional specs */
};
