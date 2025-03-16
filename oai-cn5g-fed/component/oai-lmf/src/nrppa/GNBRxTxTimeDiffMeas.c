/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#include "GNBRxTxTimeDiffMeas.h"

#include "ProtocolIE-Single-Container.h"
static int memb_k0_constraint_1(
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

  if ((value >= 0 && value <= 1970049)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_k1_constraint_1(
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

  if ((value >= 0 && value <= 985025)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_k2_constraint_1(
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

  if ((value >= 0 && value <= 492513)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_k3_constraint_1(
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

  if ((value >= 0 && value <= 246257)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_k4_constraint_1(
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

  if ((value >= 0 && value <= 123129)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_k5_constraint_1(
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

  if ((value >= 0 && value <= 61565)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static asn_per_constraints_t asn_PER_memb_k0_constr_2 CC_NOTUSED = {
    {APC_CONSTRAINED, 21, -1, 0, 1970049} /* (0..1970049) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_k1_constr_3 CC_NOTUSED = {
    {APC_CONSTRAINED, 20, -1, 0, 985025} /* (0..985025) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_k2_constr_4 CC_NOTUSED = {
    {APC_CONSTRAINED, 19, -1, 0, 492513} /* (0..492513) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_k3_constr_5 CC_NOTUSED = {
    {APC_CONSTRAINED, 18, -1, 0, 246257} /* (0..246257) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_k4_constr_6 CC_NOTUSED = {
    {APC_CONSTRAINED, 17, -1, 0, 123129} /* (0..123129) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_k5_constr_7 CC_NOTUSED = {
    {APC_CONSTRAINED, 16, 16, 0, 61565} /* (0..61565) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
asn_per_constraints_t asn_PER_type_GNBRxTxTimeDiffMeas_constr_1 CC_NOTUSED = {
    {APC_CONSTRAINED, 3, 3, 0, 6} /* (0..6) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_GNBRxTxTimeDiffMeas_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct GNBRxTxTimeDiffMeas, choice.k0),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_k0_constr_2, memb_k0_constraint_1},
     0,
     0, /* No default value */
     "k0"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct GNBRxTxTimeDiffMeas, choice.k1),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_k1_constr_3, memb_k1_constraint_1},
     0,
     0, /* No default value */
     "k1"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct GNBRxTxTimeDiffMeas, choice.k2),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_k2_constr_4, memb_k2_constraint_1},
     0,
     0, /* No default value */
     "k2"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct GNBRxTxTimeDiffMeas, choice.k3),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_k3_constr_5, memb_k3_constraint_1},
     0,
     0, /* No default value */
     "k3"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct GNBRxTxTimeDiffMeas, choice.k4),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_k4_constr_6, memb_k4_constraint_1},
     0,
     0, /* No default value */
     "k4"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct GNBRxTxTimeDiffMeas, choice.k5),
     (ASN_TAG_CLASS_CONTEXT | (5 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_k5_constr_7, memb_k5_constraint_1},
     0,
     0, /* No default value */
     "k5"},
    {ATF_POINTER,
     0,
     offsetof(struct GNBRxTxTimeDiffMeas, choice.choice_extension),
     (ASN_TAG_CLASS_CONTEXT | (6 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ProtocolIE_Single_Container_2792P7,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "choice-extension"},
};
static const asn_TYPE_tag2member_t asn_MAP_GNBRxTxTimeDiffMeas_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* k0 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* k1 */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* k2 */
    {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}, /* k3 */
    {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0}, /* k4 */
    {(ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0}, /* k5 */
    {(ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0}  /* choice-extension */
};
asn_CHOICE_specifics_t asn_SPC_GNBRxTxTimeDiffMeas_specs_1 = {
    sizeof(struct GNBRxTxTimeDiffMeas),
    offsetof(struct GNBRxTxTimeDiffMeas, _asn_ctx),
    offsetof(struct GNBRxTxTimeDiffMeas, present),
    sizeof(((struct GNBRxTxTimeDiffMeas*) 0)->present),
    asn_MAP_GNBRxTxTimeDiffMeas_tag2el_1,
    7, /* Count of tags in the map */
    0,
    0,
    -1 /* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_GNBRxTxTimeDiffMeas = {
    "GNBRxTxTimeDiffMeas",
    "GNBRxTxTimeDiffMeas",
    &asn_OP_CHOICE,
    0, /* No effective tags (pointer) */
    0, /* No effective tags (count) */
    0, /* No tags (pointer) */
    0, /* No tags (count) */
    {0, &asn_PER_type_GNBRxTxTimeDiffMeas_constr_1, CHOICE_constraint},
    asn_MBR_GNBRxTxTimeDiffMeas_1,
    7,                                   /* Elements count */
    &asn_SPC_GNBRxTxTimeDiffMeas_specs_1 /* Additional specs */
};
