/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "GPS-TOW-AssistElement.h"

static int memb_satelliteID_constraint_1(
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

  if ((value >= 1 && value <= 64)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_tlmWord_constraint_1(
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

  if ((value >= 0 && value <= 16383)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_antiSpoof_constraint_1(
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

  if ((value >= 0 && value <= 1)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_alert_constraint_1(
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

  if ((value >= 0 && value <= 1)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_tlmRsvdBits_constraint_1(
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

  if ((value >= 0 && value <= 3)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static asn_per_constraints_t asn_PER_memb_satelliteID_constr_2 CC_NOTUSED = {
    {APC_CONSTRAINED, 6, 6, 1, 64} /* (1..64) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_tlmWord_constr_3 CC_NOTUSED = {
    {APC_CONSTRAINED, 14, 14, 0, 16383} /* (0..16383) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_antiSpoof_constr_4 CC_NOTUSED = {
    {APC_CONSTRAINED, 1, 1, 0, 1} /* (0..1) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_alert_constr_5 CC_NOTUSED = {
    {APC_CONSTRAINED, 1, 1, 0, 1} /* (0..1) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_tlmRsvdBits_constr_6 CC_NOTUSED = {
    {APC_CONSTRAINED, 2, 2, 0, 3} /* (0..3) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_GPS_TOW_AssistElement_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct GPS_TOW_AssistElement, satelliteID),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_satelliteID_constr_2, memb_satelliteID_constraint_1},
     0,
     0, /* No default value */
     "satelliteID"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct GPS_TOW_AssistElement, tlmWord),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_tlmWord_constr_3, memb_tlmWord_constraint_1},
     0,
     0, /* No default value */
     "tlmWord"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct GPS_TOW_AssistElement, antiSpoof),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_antiSpoof_constr_4, memb_antiSpoof_constraint_1},
     0,
     0, /* No default value */
     "antiSpoof"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct GPS_TOW_AssistElement, alert),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_alert_constr_5, memb_alert_constraint_1},
     0,
     0, /* No default value */
     "alert"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct GPS_TOW_AssistElement, tlmRsvdBits),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_tlmRsvdBits_constr_6, memb_tlmRsvdBits_constraint_1},
     0,
     0, /* No default value */
     "tlmRsvdBits"},
};
static const ber_tlv_tag_t asn_DEF_GPS_TOW_AssistElement_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_GPS_TOW_AssistElement_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* satelliteID */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* tlmWord */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* antiSpoof */
    {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}, /* alert */
    {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0}  /* tlmRsvdBits */
};
asn_SEQUENCE_specifics_t asn_SPC_GPS_TOW_AssistElement_specs_1 = {
    sizeof(struct GPS_TOW_AssistElement),
    offsetof(struct GPS_TOW_AssistElement, _asn_ctx),
    asn_MAP_GPS_TOW_AssistElement_tag2el_1,
    5, /* Count of tags in the map */
    0,
    0,
    0, /* Optional elements (not needed) */
    5, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GPS_TOW_AssistElement = {
    "GPS-TOW-AssistElement",
    "GPS-TOW-AssistElement",
    &asn_OP_SEQUENCE,
    asn_DEF_GPS_TOW_AssistElement_tags_1,
    sizeof(asn_DEF_GPS_TOW_AssistElement_tags_1) /
        sizeof(asn_DEF_GPS_TOW_AssistElement_tags_1[0]), /* 1 */
    asn_DEF_GPS_TOW_AssistElement_tags_1,                /* Same as above */
    sizeof(asn_DEF_GPS_TOW_AssistElement_tags_1) /
        sizeof(asn_DEF_GPS_TOW_AssistElement_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_GPS_TOW_AssistElement_1,
    5,                                     /* Elements count */
    &asn_SPC_GPS_TOW_AssistElement_specs_1 /* Additional specs */
};
