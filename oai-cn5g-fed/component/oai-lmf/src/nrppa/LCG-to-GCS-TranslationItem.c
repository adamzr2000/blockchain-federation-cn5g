/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#include "LCG-to-GCS-TranslationItem.h"

static int memb_alpha_constraint_1(
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

  if ((value >= 0 && value <= 359)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_alphaFine_constraint_1(
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

  if ((value >= 0 && value <= 9)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_beta_constraint_1(
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

  if ((value >= 0 && value <= 359)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_betaFine_constraint_1(
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

  if ((value >= 0 && value <= 9)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_gamma_constraint_1(
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

  if ((value >= 0 && value <= 359)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_gammaFine_constraint_1(
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

  if ((value >= 0 && value <= 9)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static asn_per_constraints_t asn_PER_memb_alpha_constr_2 CC_NOTUSED = {
    {APC_CONSTRAINED, 9, 9, 0, 359} /* (0..359) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_alphaFine_constr_3 CC_NOTUSED = {
    {APC_CONSTRAINED, 4, 4, 0, 9} /* (0..9) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_beta_constr_4 CC_NOTUSED = {
    {APC_CONSTRAINED, 9, 9, 0, 359} /* (0..359) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_betaFine_constr_5 CC_NOTUSED = {
    {APC_CONSTRAINED, 4, 4, 0, 9} /* (0..9) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_gamma_constr_6 CC_NOTUSED = {
    {APC_CONSTRAINED, 9, 9, 0, 359} /* (0..359) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_gammaFine_constr_7 CC_NOTUSED = {
    {APC_CONSTRAINED, 4, 4, 0, 9} /* (0..9) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_LCG_to_GCS_TranslationItem_1[] = {
    {ATF_POINTER,
     6,
     offsetof(struct LCG_to_GCS_TranslationItem, alpha),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_alpha_constr_2, memb_alpha_constraint_1},
     0,
     0, /* No default value */
     "alpha"},
    {ATF_POINTER,
     5,
     offsetof(struct LCG_to_GCS_TranslationItem, alphaFine),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_alphaFine_constr_3, memb_alphaFine_constraint_1},
     0,
     0, /* No default value */
     "alphaFine"},
    {ATF_POINTER,
     4,
     offsetof(struct LCG_to_GCS_TranslationItem, beta),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_beta_constr_4, memb_beta_constraint_1},
     0,
     0, /* No default value */
     "beta"},
    {ATF_POINTER,
     3,
     offsetof(struct LCG_to_GCS_TranslationItem, betaFine),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_betaFine_constr_5, memb_betaFine_constraint_1},
     0,
     0, /* No default value */
     "betaFine"},
    {ATF_POINTER,
     2,
     offsetof(struct LCG_to_GCS_TranslationItem, gamma),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_gamma_constr_6, memb_gamma_constraint_1},
     0,
     0, /* No default value */
     "gamma"},
    {ATF_POINTER,
     1,
     offsetof(struct LCG_to_GCS_TranslationItem, gammaFine),
     (ASN_TAG_CLASS_CONTEXT | (5 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_gammaFine_constr_7, memb_gammaFine_constraint_1},
     0,
     0, /* No default value */
     "gammaFine"},
};
static const int asn_MAP_LCG_to_GCS_TranslationItem_oms_1[] = {0, 1, 2,
                                                               3, 4, 5};
static const ber_tlv_tag_t asn_DEF_LCG_to_GCS_TranslationItem_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_LCG_to_GCS_TranslationItem_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* alpha */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* alphaFine */
        {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* beta */
        {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}, /* betaFine */
        {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0}, /* gamma */
        {(ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0}  /* gammaFine */
};
asn_SEQUENCE_specifics_t asn_SPC_LCG_to_GCS_TranslationItem_specs_1 = {
    sizeof(struct LCG_to_GCS_TranslationItem),
    offsetof(struct LCG_to_GCS_TranslationItem, _asn_ctx),
    asn_MAP_LCG_to_GCS_TranslationItem_tag2el_1,
    6,                                        /* Count of tags in the map */
    asn_MAP_LCG_to_GCS_TranslationItem_oms_1, /* Optional members */
    6,
    0, /* Root/Additions */
    6, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LCG_to_GCS_TranslationItem = {
    "LCG-to-GCS-TranslationItem",
    "LCG-to-GCS-TranslationItem",
    &asn_OP_SEQUENCE,
    asn_DEF_LCG_to_GCS_TranslationItem_tags_1,
    sizeof(asn_DEF_LCG_to_GCS_TranslationItem_tags_1) /
        sizeof(asn_DEF_LCG_to_GCS_TranslationItem_tags_1[0]), /* 1 */
    asn_DEF_LCG_to_GCS_TranslationItem_tags_1, /* Same as above */
    sizeof(asn_DEF_LCG_to_GCS_TranslationItem_tags_1) /
        sizeof(asn_DEF_LCG_to_GCS_TranslationItem_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_LCG_to_GCS_TranslationItem_1,
    6,                                          /* Elements count */
    &asn_SPC_LCG_to_GCS_TranslationItem_specs_1 /* Additional specs */
};
