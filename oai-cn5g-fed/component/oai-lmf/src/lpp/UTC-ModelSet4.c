/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "UTC-ModelSet4.h"

static int memb_utcA1wnt_constraint_1(
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

  if ((value >= -8388608 && value <= 8388607)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_utcA0wnt_constraint_1(
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

  if ((value >= (-2147483647L - 1) && value <= 2147483647)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_utcTot_constraint_1(
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

static int memb_utcWNt_constraint_1(
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

static int memb_utcDeltaTls_constraint_1(
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

static int memb_utcWNlsf_constraint_1(
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

static int memb_utcDN_constraint_1(
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

static int memb_utcDeltaTlsf_constraint_1(
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

static int memb_utcStandardID_constraint_1(
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

  if ((value >= 0 && value <= 7)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static asn_per_constraints_t asn_PER_memb_utcA1wnt_constr_2 CC_NOTUSED = {
    {APC_CONSTRAINED, 24, -1, -8388608, 8388607} /* (-8388608..8388607) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_utcA0wnt_constr_3 CC_NOTUSED = {
    {APC_CONSTRAINED, 32, -1, (-2147483647L - 1),
     2147483647} /* (-2147483648..2147483647) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_utcTot_constr_4 CC_NOTUSED = {
    {APC_CONSTRAINED, 8, 8, 0, 255} /* (0..255) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_utcWNt_constr_5 CC_NOTUSED = {
    {APC_CONSTRAINED, 8, 8, 0, 255} /* (0..255) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_utcDeltaTls_constr_6 CC_NOTUSED = {
    {APC_CONSTRAINED, 8, 8, -128, 127} /* (-128..127) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_utcWNlsf_constr_7 CC_NOTUSED = {
    {APC_CONSTRAINED, 8, 8, 0, 255} /* (0..255) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_utcDN_constr_8 CC_NOTUSED = {
    {APC_CONSTRAINED, 8, 8, -128, 127} /* (-128..127) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_utcDeltaTlsf_constr_9 CC_NOTUSED = {
    {APC_CONSTRAINED, 8, 8, -128, 127} /* (-128..127) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_utcStandardID_constr_10 CC_NOTUSED = {
    {APC_CONSTRAINED, 3, 3, 0, 7} /* (0..7) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_UTC_ModelSet4_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct UTC_ModelSet4, utcA1wnt),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_utcA1wnt_constr_2, memb_utcA1wnt_constraint_1},
     0,
     0, /* No default value */
     "utcA1wnt"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct UTC_ModelSet4, utcA0wnt),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_utcA0wnt_constr_3, memb_utcA0wnt_constraint_1},
     0,
     0, /* No default value */
     "utcA0wnt"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct UTC_ModelSet4, utcTot),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_utcTot_constr_4, memb_utcTot_constraint_1},
     0,
     0, /* No default value */
     "utcTot"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct UTC_ModelSet4, utcWNt),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_utcWNt_constr_5, memb_utcWNt_constraint_1},
     0,
     0, /* No default value */
     "utcWNt"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct UTC_ModelSet4, utcDeltaTls),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_utcDeltaTls_constr_6, memb_utcDeltaTls_constraint_1},
     0,
     0, /* No default value */
     "utcDeltaTls"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct UTC_ModelSet4, utcWNlsf),
     (ASN_TAG_CLASS_CONTEXT | (5 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_utcWNlsf_constr_7, memb_utcWNlsf_constraint_1},
     0,
     0, /* No default value */
     "utcWNlsf"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct UTC_ModelSet4, utcDN),
     (ASN_TAG_CLASS_CONTEXT | (6 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_utcDN_constr_8, memb_utcDN_constraint_1},
     0,
     0, /* No default value */
     "utcDN"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct UTC_ModelSet4, utcDeltaTlsf),
     (ASN_TAG_CLASS_CONTEXT | (7 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_utcDeltaTlsf_constr_9, memb_utcDeltaTlsf_constraint_1},
     0,
     0, /* No default value */
     "utcDeltaTlsf"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct UTC_ModelSet4, utcStandardID),
     (ASN_TAG_CLASS_CONTEXT | (8 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_utcStandardID_constr_10,
      memb_utcStandardID_constraint_1},
     0,
     0, /* No default value */
     "utcStandardID"},
};
static const ber_tlv_tag_t asn_DEF_UTC_ModelSet4_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_UTC_ModelSet4_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* utcA1wnt */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* utcA0wnt */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* utcTot */
    {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}, /* utcWNt */
    {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0}, /* utcDeltaTls */
    {(ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0}, /* utcWNlsf */
    {(ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0}, /* utcDN */
    {(ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0}, /* utcDeltaTlsf */
    {(ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0}  /* utcStandardID */
};
asn_SEQUENCE_specifics_t asn_SPC_UTC_ModelSet4_specs_1 = {
    sizeof(struct UTC_ModelSet4),
    offsetof(struct UTC_ModelSet4, _asn_ctx),
    asn_MAP_UTC_ModelSet4_tag2el_1,
    9, /* Count of tags in the map */
    0,
    0,
    0, /* Optional elements (not needed) */
    9, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UTC_ModelSet4 = {
    "UTC-ModelSet4",
    "UTC-ModelSet4",
    &asn_OP_SEQUENCE,
    asn_DEF_UTC_ModelSet4_tags_1,
    sizeof(asn_DEF_UTC_ModelSet4_tags_1) /
        sizeof(asn_DEF_UTC_ModelSet4_tags_1[0]), /* 1 */
    asn_DEF_UTC_ModelSet4_tags_1,                /* Same as above */
    sizeof(asn_DEF_UTC_ModelSet4_tags_1) /
        sizeof(asn_DEF_UTC_ModelSet4_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_UTC_ModelSet4_1,
    9,                             /* Elements count */
    &asn_SPC_UTC_ModelSet4_specs_1 /* Additional specs */
};
