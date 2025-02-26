/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "SatListRelatedDataElement.h"

static int memb_iod_constraint_1(
    const asn_TYPE_descriptor_t* td, const void* sptr,
    asn_app_constraint_failed_f* ctfailcb, void* app_key) {
  const BIT_STRING_t* st = (const BIT_STRING_t*) sptr;
  size_t size;

  if (!sptr) {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: value not given (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }

  if (st->size > 0) {
    /* Size in bits */
    size = 8 * st->size - (st->bits_unused & 0x07);
  } else {
    size = 0;
  }

  if ((size == 11)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_clockModelID_constraint_1(
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

  if ((value >= 1 && value <= 8)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_orbitModelID_constraint_1(
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

  if ((value >= 1 && value <= 8)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static asn_per_constraints_t asn_PER_memb_iod_constr_3 CC_NOTUSED = {
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    {APC_CONSTRAINED, 0, 0, 11, 11} /* (SIZE(11..11)) */,
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_clockModelID_constr_4 CC_NOTUSED = {
    {APC_CONSTRAINED, 3, 3, 1, 8} /* (1..8) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_orbitModelID_constr_5 CC_NOTUSED = {
    {APC_CONSTRAINED, 3, 3, 1, 8} /* (1..8) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_SatListRelatedDataElement_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct SatListRelatedDataElement, svID),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_SV_ID,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "svID"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct SatListRelatedDataElement, iod),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BIT_STRING,
     0,
     {0, &asn_PER_memb_iod_constr_3, memb_iod_constraint_1},
     0,
     0, /* No default value */
     "iod"},
    {ATF_POINTER,
     2,
     offsetof(struct SatListRelatedDataElement, clockModelID),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_clockModelID_constr_4, memb_clockModelID_constraint_1},
     0,
     0, /* No default value */
     "clockModelID"},
    {ATF_POINTER,
     1,
     offsetof(struct SatListRelatedDataElement, orbitModelID),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_orbitModelID_constr_5, memb_orbitModelID_constraint_1},
     0,
     0, /* No default value */
     "orbitModelID"},
};
static const int asn_MAP_SatListRelatedDataElement_oms_1[]            = {2, 3};
static const ber_tlv_tag_t asn_DEF_SatListRelatedDataElement_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_SatListRelatedDataElement_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* svID */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* iod */
        {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* clockModelID */
        {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}  /* orbitModelID */
};
asn_SEQUENCE_specifics_t asn_SPC_SatListRelatedDataElement_specs_1 = {
    sizeof(struct SatListRelatedDataElement),
    offsetof(struct SatListRelatedDataElement, _asn_ctx),
    asn_MAP_SatListRelatedDataElement_tag2el_1,
    4,                                       /* Count of tags in the map */
    asn_MAP_SatListRelatedDataElement_oms_1, /* Optional members */
    2,
    0, /* Root/Additions */
    4, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SatListRelatedDataElement = {
    "SatListRelatedDataElement",
    "SatListRelatedDataElement",
    &asn_OP_SEQUENCE,
    asn_DEF_SatListRelatedDataElement_tags_1,
    sizeof(asn_DEF_SatListRelatedDataElement_tags_1) /
        sizeof(asn_DEF_SatListRelatedDataElement_tags_1[0]), /* 1 */
    asn_DEF_SatListRelatedDataElement_tags_1,                /* Same as above */
    sizeof(asn_DEF_SatListRelatedDataElement_tags_1) /
        sizeof(asn_DEF_SatListRelatedDataElement_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_SatListRelatedDataElement_1,
    4,                                         /* Elements count */
    &asn_SPC_SatListRelatedDataElement_specs_1 /* Additional specs */
};
