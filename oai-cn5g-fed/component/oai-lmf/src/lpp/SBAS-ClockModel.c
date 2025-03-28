/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "SBAS-ClockModel.h"

static int memb_sbasTo_constraint_1(
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

  if ((value >= 0 && value <= 5399)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_sbasAgfo_constraint_1(
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

static int memb_sbasAgf1_constraint_1(
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

  if ((value >= -128 && value <= 127)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static asn_per_constraints_t asn_PER_memb_sbasTo_constr_2 CC_NOTUSED = {
    {APC_CONSTRAINED, 13, 13, 0, 5399} /* (0..5399) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sbasAgfo_constr_3 CC_NOTUSED = {
    {APC_CONSTRAINED, 12, 12, -2048, 2047} /* (-2048..2047) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sbasAgf1_constr_4 CC_NOTUSED = {
    {APC_CONSTRAINED, 8, 8, -128, 127} /* (-128..127) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_SBAS_ClockModel_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct SBAS_ClockModel, sbasTo),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_sbasTo_constr_2, memb_sbasTo_constraint_1},
     0,
     0, /* No default value */
     "sbasTo"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct SBAS_ClockModel, sbasAgfo),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_sbasAgfo_constr_3, memb_sbasAgfo_constraint_1},
     0,
     0, /* No default value */
     "sbasAgfo"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct SBAS_ClockModel, sbasAgf1),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_sbasAgf1_constr_4, memb_sbasAgf1_constraint_1},
     0,
     0, /* No default value */
     "sbasAgf1"},
};
static const ber_tlv_tag_t asn_DEF_SBAS_ClockModel_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_SBAS_ClockModel_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* sbasTo */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* sbasAgfo */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}  /* sbasAgf1 */
};
asn_SEQUENCE_specifics_t asn_SPC_SBAS_ClockModel_specs_1 = {
    sizeof(struct SBAS_ClockModel),
    offsetof(struct SBAS_ClockModel, _asn_ctx),
    asn_MAP_SBAS_ClockModel_tag2el_1,
    3, /* Count of tags in the map */
    0,
    0,
    0, /* Optional elements (not needed) */
    3, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SBAS_ClockModel = {
    "SBAS-ClockModel",
    "SBAS-ClockModel",
    &asn_OP_SEQUENCE,
    asn_DEF_SBAS_ClockModel_tags_1,
    sizeof(asn_DEF_SBAS_ClockModel_tags_1) /
        sizeof(asn_DEF_SBAS_ClockModel_tags_1[0]), /* 1 */
    asn_DEF_SBAS_ClockModel_tags_1,                /* Same as above */
    sizeof(asn_DEF_SBAS_ClockModel_tags_1) /
        sizeof(asn_DEF_SBAS_ClockModel_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_SBAS_ClockModel_1,
    3,                               /* Elements count */
    &asn_SPC_SBAS_ClockModel_specs_1 /* Additional specs */
};
