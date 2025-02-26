/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "WLAN-AP-Identifier-r13.h"

static int memb_bssid_r13_constraint_1(
    const asn_TYPE_descriptor_t* td, const void* sptr,
    asn_app_constraint_failed_f* ctfailcb, void* app_key) {
  const OCTET_STRING_t* st = (const OCTET_STRING_t*) sptr;
  size_t size;

  if (!sptr) {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: value not given (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }

  size = st->size;

  if ((size == 6)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_ssid_r13_constraint_1(
    const asn_TYPE_descriptor_t* td, const void* sptr,
    asn_app_constraint_failed_f* ctfailcb, void* app_key) {
  const OCTET_STRING_t* st = (const OCTET_STRING_t*) sptr;
  size_t size;

  if (!sptr) {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: value not given (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }

  size = st->size;

  if ((size >= 1 && size <= 32)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static asn_per_constraints_t asn_PER_memb_bssid_r13_constr_2 CC_NOTUSED = {
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    {APC_CONSTRAINED, 0, 0, 6, 6} /* (SIZE(6..6)) */,
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ssid_r13_constr_3 CC_NOTUSED = {
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    {APC_CONSTRAINED, 5, 5, 1, 32} /* (SIZE(1..32)) */,
    0,
    0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_WLAN_AP_Identifier_r13_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct WLAN_AP_Identifier_r13, bssid_r13),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_OCTET_STRING,
     0,
     {0, &asn_PER_memb_bssid_r13_constr_2, memb_bssid_r13_constraint_1},
     0,
     0, /* No default value */
     "bssid-r13"},
    {ATF_POINTER,
     1,
     offsetof(struct WLAN_AP_Identifier_r13, ssid_r13),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_OCTET_STRING,
     0,
     {0, &asn_PER_memb_ssid_r13_constr_3, memb_ssid_r13_constraint_1},
     0,
     0, /* No default value */
     "ssid-r13"},
};
static const int asn_MAP_WLAN_AP_Identifier_r13_oms_1[]            = {1};
static const ber_tlv_tag_t asn_DEF_WLAN_AP_Identifier_r13_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_WLAN_AP_Identifier_r13_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* bssid-r13 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}  /* ssid-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_WLAN_AP_Identifier_r13_specs_1 = {
    sizeof(struct WLAN_AP_Identifier_r13),
    offsetof(struct WLAN_AP_Identifier_r13, _asn_ctx),
    asn_MAP_WLAN_AP_Identifier_r13_tag2el_1,
    2,                                    /* Count of tags in the map */
    asn_MAP_WLAN_AP_Identifier_r13_oms_1, /* Optional members */
    1,
    0, /* Root/Additions */
    2, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_WLAN_AP_Identifier_r13 = {
    "WLAN-AP-Identifier-r13",
    "WLAN-AP-Identifier-r13",
    &asn_OP_SEQUENCE,
    asn_DEF_WLAN_AP_Identifier_r13_tags_1,
    sizeof(asn_DEF_WLAN_AP_Identifier_r13_tags_1) /
        sizeof(asn_DEF_WLAN_AP_Identifier_r13_tags_1[0]), /* 1 */
    asn_DEF_WLAN_AP_Identifier_r13_tags_1,                /* Same as above */
    sizeof(asn_DEF_WLAN_AP_Identifier_r13_tags_1) /
        sizeof(asn_DEF_WLAN_AP_Identifier_r13_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_WLAN_AP_Identifier_r13_1,
    2,                                      /* Elements count */
    &asn_SPC_WLAN_AP_Identifier_r13_specs_1 /* Additional specs */
};
