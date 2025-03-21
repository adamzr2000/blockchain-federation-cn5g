/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "STEC-SatElement-r16.h"

static int memb_stecQualityIndicator_r16_constraint_1(
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

static int memb_stec_C00_r16_constraint_1(
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

  if ((value >= -8192 && value <= 8191)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_stec_C01_r16_constraint_1(
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

  if ((value >= -2048 && value <= 2047)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_stec_C10_r16_constraint_1(
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

  if ((value >= -2048 && value <= 2047)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_stec_C11_r16_constraint_1(
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

  if ((value >= -512 && value <= 511)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static asn_per_constraints_t asn_PER_memb_stecQualityIndicator_r16_constr_3
    CC_NOTUSED = {
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        {APC_CONSTRAINED, 0, 0, 6, 6} /* (SIZE(6..6)) */,
        0,
        0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_stec_C00_r16_constr_4 CC_NOTUSED = {
    {APC_CONSTRAINED, 14, 14, -8192, 8191} /* (-8192..8191) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_stec_C01_r16_constr_5 CC_NOTUSED = {
    {APC_CONSTRAINED, 12, 12, -2048, 2047} /* (-2048..2047) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_stec_C10_r16_constr_6 CC_NOTUSED = {
    {APC_CONSTRAINED, 12, 12, -2048, 2047} /* (-2048..2047) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_stec_C11_r16_constr_7 CC_NOTUSED = {
    {APC_CONSTRAINED, 10, 10, -512, 511} /* (-512..511) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_STEC_SatElement_r16_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct STEC_SatElement_r16, svID_r16),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_SV_ID,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "svID-r16"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct STEC_SatElement_r16, stecQualityIndicator_r16),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BIT_STRING,
     0,
     {0, &asn_PER_memb_stecQualityIndicator_r16_constr_3,
      memb_stecQualityIndicator_r16_constraint_1},
     0,
     0, /* No default value */
     "stecQualityIndicator-r16"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct STEC_SatElement_r16, stec_C00_r16),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_stec_C00_r16_constr_4, memb_stec_C00_r16_constraint_1},
     0,
     0, /* No default value */
     "stec-C00-r16"},
    {ATF_POINTER,
     3,
     offsetof(struct STEC_SatElement_r16, stec_C01_r16),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_stec_C01_r16_constr_5, memb_stec_C01_r16_constraint_1},
     0,
     0, /* No default value */
     "stec-C01-r16"},
    {ATF_POINTER,
     2,
     offsetof(struct STEC_SatElement_r16, stec_C10_r16),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_stec_C10_r16_constr_6, memb_stec_C10_r16_constraint_1},
     0,
     0, /* No default value */
     "stec-C10-r16"},
    {ATF_POINTER,
     1,
     offsetof(struct STEC_SatElement_r16, stec_C11_r16),
     (ASN_TAG_CLASS_CONTEXT | (5 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_stec_C11_r16_constr_7, memb_stec_C11_r16_constraint_1},
     0,
     0, /* No default value */
     "stec-C11-r16"},
};
static const int asn_MAP_STEC_SatElement_r16_oms_1[]            = {3, 4, 5};
static const ber_tlv_tag_t asn_DEF_STEC_SatElement_r16_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_STEC_SatElement_r16_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* svID-r16 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0,
     0}, /* stecQualityIndicator-r16 */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* stec-C00-r16 */
    {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}, /* stec-C01-r16 */
    {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0}, /* stec-C10-r16 */
    {(ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0}  /* stec-C11-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_STEC_SatElement_r16_specs_1 = {
    sizeof(struct STEC_SatElement_r16),
    offsetof(struct STEC_SatElement_r16, _asn_ctx),
    asn_MAP_STEC_SatElement_r16_tag2el_1,
    6,                                 /* Count of tags in the map */
    asn_MAP_STEC_SatElement_r16_oms_1, /* Optional members */
    3,
    0, /* Root/Additions */
    6, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_STEC_SatElement_r16 = {
    "STEC-SatElement-r16",
    "STEC-SatElement-r16",
    &asn_OP_SEQUENCE,
    asn_DEF_STEC_SatElement_r16_tags_1,
    sizeof(asn_DEF_STEC_SatElement_r16_tags_1) /
        sizeof(asn_DEF_STEC_SatElement_r16_tags_1[0]), /* 1 */
    asn_DEF_STEC_SatElement_r16_tags_1,                /* Same as above */
    sizeof(asn_DEF_STEC_SatElement_r16_tags_1) /
        sizeof(asn_DEF_STEC_SatElement_r16_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_STEC_SatElement_r16_1,
    6,                                   /* Elements count */
    &asn_SPC_STEC_SatElement_r16_specs_1 /* Additional specs */
};
