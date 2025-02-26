/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#include "LocationUncertainty.h"

#include "ProtocolExtensionContainer.h"
static int memb_horizontalUncertainty_constraint_1(
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

  if ((value >= 0 && value <= 255)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_horizontalConfidence_constraint_1(
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

  if ((value >= 0 && value <= 100)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_verticalUncertainty_constraint_1(
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

  if ((value >= 0 && value <= 255)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_verticalConfidence_constraint_1(
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

  if ((value >= 0 && value <= 100)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static asn_per_constraints_t asn_PER_memb_horizontalUncertainty_constr_2
    CC_NOTUSED = {
        {APC_CONSTRAINED, 8, 8, 0, 255} /* (0..255) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_horizontalConfidence_constr_3
    CC_NOTUSED = {
        {APC_CONSTRAINED, 7, 7, 0, 100} /* (0..100) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_verticalUncertainty_constr_4
    CC_NOTUSED = {
        {APC_CONSTRAINED, 8, 8, 0, 255} /* (0..255) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_verticalConfidence_constr_5
    CC_NOTUSED = {
        {APC_CONSTRAINED, 7, 7, 0, 100} /* (0..100) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_LocationUncertainty_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct LocationUncertainty, horizontalUncertainty),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_horizontalUncertainty_constr_2,
      memb_horizontalUncertainty_constraint_1},
     0,
     0, /* No default value */
     "horizontalUncertainty"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct LocationUncertainty, horizontalConfidence),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_horizontalConfidence_constr_3,
      memb_horizontalConfidence_constraint_1},
     0,
     0, /* No default value */
     "horizontalConfidence"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct LocationUncertainty, verticalUncertainty),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_verticalUncertainty_constr_4,
      memb_verticalUncertainty_constraint_1},
     0,
     0, /* No default value */
     "verticalUncertainty"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct LocationUncertainty, verticalConfidence),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_verticalConfidence_constr_5,
      memb_verticalConfidence_constraint_1},
     0,
     0, /* No default value */
     "verticalConfidence"},
    {ATF_POINTER,
     1,
     offsetof(struct LocationUncertainty, iE_Extensions),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ProtocolExtensionContainer_2816P19,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "iE-Extensions"},
};
static const int asn_MAP_LocationUncertainty_oms_1[]            = {4};
static const ber_tlv_tag_t asn_DEF_LocationUncertainty_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_LocationUncertainty_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* horizontalUncertainty */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* horizontalConfidence */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* verticalUncertainty */
    {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}, /* verticalConfidence */
    {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0}  /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_LocationUncertainty_specs_1 = {
    sizeof(struct LocationUncertainty),
    offsetof(struct LocationUncertainty, _asn_ctx),
    asn_MAP_LocationUncertainty_tag2el_1,
    5,                                 /* Count of tags in the map */
    asn_MAP_LocationUncertainty_oms_1, /* Optional members */
    1,
    0, /* Root/Additions */
    5, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LocationUncertainty = {
    "LocationUncertainty",
    "LocationUncertainty",
    &asn_OP_SEQUENCE,
    asn_DEF_LocationUncertainty_tags_1,
    sizeof(asn_DEF_LocationUncertainty_tags_1) /
        sizeof(asn_DEF_LocationUncertainty_tags_1[0]), /* 1 */
    asn_DEF_LocationUncertainty_tags_1,                /* Same as above */
    sizeof(asn_DEF_LocationUncertainty_tags_1) /
        sizeof(asn_DEF_LocationUncertainty_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_LocationUncertainty_1,
    5,                                   /* Elements count */
    &asn_SPC_LocationUncertainty_specs_1 /* Additional specs */
};
