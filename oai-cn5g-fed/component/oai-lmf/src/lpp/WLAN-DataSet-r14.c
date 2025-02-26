/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "WLAN-DataSet-r14.h"

#include "SupportedChannels-11a-r14.h"
#include "SupportedChannels-11bg-r14.h"
#include "WLAN-AP-Data-r14.h"
static int memb_wlan_AP_List_r14_constraint_1(
    const asn_TYPE_descriptor_t* td, const void* sptr,
    asn_app_constraint_failed_f* ctfailcb, void* app_key) {
  size_t size;

  if (!sptr) {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: value not given (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }

  /* Determine the number of elements */
  size = _A_CSEQUENCE_FROM_VOID(sptr)->count;

  if ((size >= 1 && size <= 128)) {
    /* Perform validation of the inner elements */
    return td->encoding_constraints.general_constraints(
        td, sptr, ctfailcb, app_key);
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static asn_per_constraints_t asn_PER_type_wlan_AP_List_r14_constr_2
    CC_NOTUSED = {
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        {APC_CONSTRAINED, 7, 7, 1, 128} /* (SIZE(1..128)) */,
        0,
        0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_wlan_AP_List_r14_constr_2
    CC_NOTUSED = {
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        {APC_CONSTRAINED, 7, 7, 1, 128} /* (SIZE(1..128)) */,
        0,
        0 /* No PER value map */
};
static asn_TYPE_member_t asn_MBR_wlan_AP_List_r14_2[] = {
    {ATF_POINTER,
     0,
     0,
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_WLAN_AP_Data_r14,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     ""},
};
static const ber_tlv_tag_t asn_DEF_wlan_AP_List_r14_tags_2[] = {
    (ASN_TAG_CLASS_CONTEXT | (0 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static asn_SET_OF_specifics_t asn_SPC_wlan_AP_List_r14_specs_2 = {
    sizeof(struct WLAN_DataSet_r14__wlan_AP_List_r14),
    offsetof(struct WLAN_DataSet_r14__wlan_AP_List_r14, _asn_ctx),
    0, /* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_wlan_AP_List_r14_2 = {
        "wlan-AP-List-r14",
        "wlan-AP-List-r14",
        &asn_OP_SEQUENCE_OF,
        asn_DEF_wlan_AP_List_r14_tags_2,
        sizeof(asn_DEF_wlan_AP_List_r14_tags_2) /
                sizeof(asn_DEF_wlan_AP_List_r14_tags_2[0]) -
            1,                           /* 1 */
        asn_DEF_wlan_AP_List_r14_tags_2, /* Same as above */
        sizeof(asn_DEF_wlan_AP_List_r14_tags_2) /
            sizeof(asn_DEF_wlan_AP_List_r14_tags_2[0]), /* 2 */
        {0, &asn_PER_type_wlan_AP_List_r14_constr_2, SEQUENCE_OF_constraint},
        asn_MBR_wlan_AP_List_r14_2,
        1,                                /* Single element */
        &asn_SPC_wlan_AP_List_r14_specs_2 /* Additional specs */
};

asn_TYPE_member_t asn_MBR_WLAN_DataSet_r14_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct WLAN_DataSet_r14, wlan_AP_List_r14),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     0,
     &asn_DEF_wlan_AP_List_r14_2,
     0,
     {0, &asn_PER_memb_wlan_AP_List_r14_constr_2,
      memb_wlan_AP_List_r14_constraint_1},
     0,
     0, /* No default value */
     "wlan-AP-List-r14"},
    {ATF_POINTER,
     2,
     offsetof(struct WLAN_DataSet_r14, supportedChannels_11a_r14),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_SupportedChannels_11a_r14,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "supportedChannels-11a-r14"},
    {ATF_POINTER,
     1,
     offsetof(struct WLAN_DataSet_r14, supportedChannels_11bg_r14),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_SupportedChannels_11bg_r14,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "supportedChannels-11bg-r14"},
};
static const int asn_MAP_WLAN_DataSet_r14_oms_1[]            = {1, 2};
static const ber_tlv_tag_t asn_DEF_WLAN_DataSet_r14_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_WLAN_DataSet_r14_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* wlan-AP-List-r14 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0,
     0}, /* supportedChannels-11a-r14 */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0,
     0} /* supportedChannels-11bg-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_WLAN_DataSet_r14_specs_1 = {
    sizeof(struct WLAN_DataSet_r14),
    offsetof(struct WLAN_DataSet_r14, _asn_ctx),
    asn_MAP_WLAN_DataSet_r14_tag2el_1,
    3,                              /* Count of tags in the map */
    asn_MAP_WLAN_DataSet_r14_oms_1, /* Optional members */
    2,
    0, /* Root/Additions */
    3, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_WLAN_DataSet_r14 = {
    "WLAN-DataSet-r14",
    "WLAN-DataSet-r14",
    &asn_OP_SEQUENCE,
    asn_DEF_WLAN_DataSet_r14_tags_1,
    sizeof(asn_DEF_WLAN_DataSet_r14_tags_1) /
        sizeof(asn_DEF_WLAN_DataSet_r14_tags_1[0]), /* 1 */
    asn_DEF_WLAN_DataSet_r14_tags_1,                /* Same as above */
    sizeof(asn_DEF_WLAN_DataSet_r14_tags_1) /
        sizeof(asn_DEF_WLAN_DataSet_r14_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_WLAN_DataSet_r14_1,
    3,                                /* Elements count */
    &asn_SPC_WLAN_DataSet_r14_specs_1 /* Additional specs */
};
