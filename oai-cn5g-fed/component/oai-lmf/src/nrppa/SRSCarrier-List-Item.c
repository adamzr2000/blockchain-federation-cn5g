/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#include "SRSCarrier-List-Item.h"

#include "ProtocolExtensionContainer.h"
static int memb_pointA_constraint_1(
    const asn_TYPE_descriptor_t* td, const void* sptr,
    asn_app_constraint_failed_f* ctfailcb, void* app_key) {
  long value;

  if (!sptr) {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: value not given (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }

  value = *(const long*) sptr;

  if ((value >= 0 && value <= 3279165)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_pCI_constraint_1(
    const asn_TYPE_descriptor_t* td, const void* sptr,
    asn_app_constraint_failed_f* ctfailcb, void* app_key) {
  long value;

  if (!sptr) {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: value not given (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }

  value = *(const long*) sptr;

  if ((value >= 0 && value <= 1007)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static asn_per_constraints_t asn_PER_memb_pointA_constr_2 CC_NOTUSED = {
    {APC_CONSTRAINED | APC_EXTENSIBLE, 22, -1, 0,
     3279165} /* (0..3279165,...) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_pCI_constr_5 CC_NOTUSED = {
    {APC_CONSTRAINED, 10, 10, 0, 1007} /* (0..1007) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_SRSCarrier_List_Item_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct SRSCarrier_List_Item, pointA),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_pointA_constr_2, memb_pointA_constraint_1},
     0,
     0, /* No default value */
     "pointA"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct SRSCarrier_List_Item, uplinkChannelBW_PerSCS_List),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_UplinkChannelBW_PerSCS_List,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "uplinkChannelBW-PerSCS-List"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct SRSCarrier_List_Item, activeULBWP),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ActiveULBWP,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "activeULBWP"},
    {ATF_POINTER,
     2,
     offsetof(struct SRSCarrier_List_Item, pCI),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_pCI_constr_5, memb_pCI_constraint_1},
     0,
     0, /* No default value */
     "pCI"},
    {ATF_POINTER,
     1,
     offsetof(struct SRSCarrier_List_Item, iE_Extensions),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ProtocolExtensionContainer_2816P78,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "iE-Extensions"},
};
static const int asn_MAP_SRSCarrier_List_Item_oms_1[]            = {3, 4};
static const ber_tlv_tag_t asn_DEF_SRSCarrier_List_Item_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_SRSCarrier_List_Item_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* pointA */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0,
     0}, /* uplinkChannelBW-PerSCS-List */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* activeULBWP */
    {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}, /* pCI */
    {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0}  /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_SRSCarrier_List_Item_specs_1 = {
    sizeof(struct SRSCarrier_List_Item),
    offsetof(struct SRSCarrier_List_Item, _asn_ctx),
    asn_MAP_SRSCarrier_List_Item_tag2el_1,
    5,                                  /* Count of tags in the map */
    asn_MAP_SRSCarrier_List_Item_oms_1, /* Optional members */
    2,
    0, /* Root/Additions */
    5, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SRSCarrier_List_Item = {
    "SRSCarrier-List-Item",
    "SRSCarrier-List-Item",
    &asn_OP_SEQUENCE,
    asn_DEF_SRSCarrier_List_Item_tags_1,
    sizeof(asn_DEF_SRSCarrier_List_Item_tags_1) /
        sizeof(asn_DEF_SRSCarrier_List_Item_tags_1[0]), /* 1 */
    asn_DEF_SRSCarrier_List_Item_tags_1,                /* Same as above */
    sizeof(asn_DEF_SRSCarrier_List_Item_tags_1) /
        sizeof(asn_DEF_SRSCarrier_List_Item_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_SRSCarrier_List_Item_1,
    5,                                    /* Elements count */
    &asn_SPC_SRSCarrier_List_Item_specs_1 /* Additional specs */
};
