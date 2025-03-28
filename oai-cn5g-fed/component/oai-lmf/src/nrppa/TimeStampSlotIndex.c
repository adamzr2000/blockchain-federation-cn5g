/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#include "TimeStampSlotIndex.h"

#include "ProtocolIE-Single-Container.h"
static int memb_sCS_15_constraint_1(
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

static int memb_sCS_30_constraint_1(
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

  if ((value >= 0 && value <= 19)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_sCS_60_constraint_1(
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

  if ((value >= 0 && value <= 39)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_sCS_120_constraint_1(
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

  if ((value >= 0 && value <= 79)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static asn_per_constraints_t asn_PER_memb_sCS_15_constr_2 CC_NOTUSED = {
    {APC_CONSTRAINED, 4, 4, 0, 9} /* (0..9) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sCS_30_constr_3 CC_NOTUSED = {
    {APC_CONSTRAINED, 5, 5, 0, 19} /* (0..19) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sCS_60_constr_4 CC_NOTUSED = {
    {APC_CONSTRAINED, 6, 6, 0, 39} /* (0..39) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sCS_120_constr_5 CC_NOTUSED = {
    {APC_CONSTRAINED, 7, 7, 0, 79} /* (0..79) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
asn_per_constraints_t asn_PER_type_TimeStampSlotIndex_constr_1 CC_NOTUSED = {
    {APC_CONSTRAINED, 3, 3, 0, 4} /* (0..4) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_TimeStampSlotIndex_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct TimeStampSlotIndex, choice.sCS_15),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_sCS_15_constr_2, memb_sCS_15_constraint_1},
     0,
     0, /* No default value */
     "sCS-15"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct TimeStampSlotIndex, choice.sCS_30),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_sCS_30_constr_3, memb_sCS_30_constraint_1},
     0,
     0, /* No default value */
     "sCS-30"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct TimeStampSlotIndex, choice.sCS_60),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_sCS_60_constr_4, memb_sCS_60_constraint_1},
     0,
     0, /* No default value */
     "sCS-60"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct TimeStampSlotIndex, choice.sCS_120),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_sCS_120_constr_5, memb_sCS_120_constraint_1},
     0,
     0, /* No default value */
     "sCS-120"},
    {ATF_POINTER,
     0,
     offsetof(struct TimeStampSlotIndex, choice.choice_extension),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ProtocolIE_Single_Container_2792P23,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "choice-extension"},
};
static const asn_TYPE_tag2member_t asn_MAP_TimeStampSlotIndex_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* sCS-15 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* sCS-30 */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* sCS-60 */
    {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}, /* sCS-120 */
    {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0}  /* choice-extension */
};
asn_CHOICE_specifics_t asn_SPC_TimeStampSlotIndex_specs_1 = {
    sizeof(struct TimeStampSlotIndex),
    offsetof(struct TimeStampSlotIndex, _asn_ctx),
    offsetof(struct TimeStampSlotIndex, present),
    sizeof(((struct TimeStampSlotIndex*) 0)->present),
    asn_MAP_TimeStampSlotIndex_tag2el_1,
    5, /* Count of tags in the map */
    0,
    0,
    -1 /* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_TimeStampSlotIndex = {
    "TimeStampSlotIndex",
    "TimeStampSlotIndex",
    &asn_OP_CHOICE,
    0, /* No effective tags (pointer) */
    0, /* No effective tags (count) */
    0, /* No tags (pointer) */
    0, /* No tags (count) */
    {0, &asn_PER_type_TimeStampSlotIndex_constr_1, CHOICE_constraint},
    asn_MBR_TimeStampSlotIndex_1,
    5,                                  /* Elements count */
    &asn_SPC_TimeStampSlotIndex_specs_1 /* Additional specs */
};
