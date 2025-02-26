/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "SSR-PhaseBiasSignalElement-r16.h"

static int memb_phaseBias_r16_constraint_1(
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

  if ((value >= -16384 && value <= 16383)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_phaseDiscontinuityIndicator_r16_constraint_1(
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

static int memb_phaseBiasIntegerIndicator_r16_constraint_1(
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

static asn_per_constraints_t asn_PER_memb_phaseBias_r16_constr_3 CC_NOTUSED = {
    {APC_CONSTRAINED, 15, 15, -16384, 16383} /* (-16384..16383) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t
    asn_PER_memb_phaseDiscontinuityIndicator_r16_constr_4 CC_NOTUSED = {
        {APC_CONSTRAINED, 2, 2, 0, 3} /* (0..3) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_phaseBiasIntegerIndicator_r16_constr_5
    CC_NOTUSED = {
        {APC_CONSTRAINED, 2, 2, 0, 3} /* (0..3) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_SSR_PhaseBiasSignalElement_r16_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct SSR_PhaseBiasSignalElement_r16,
         signal_and_tracking_mode_ID_r16),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_SignalID,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "signal-and-tracking-mode-ID-r16"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct SSR_PhaseBiasSignalElement_r16, phaseBias_r16),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_phaseBias_r16_constr_3, memb_phaseBias_r16_constraint_1},
     0,
     0, /* No default value */
     "phaseBias-r16"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct SSR_PhaseBiasSignalElement_r16,
         phaseDiscontinuityIndicator_r16),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_phaseDiscontinuityIndicator_r16_constr_4,
      memb_phaseDiscontinuityIndicator_r16_constraint_1},
     0,
     0, /* No default value */
     "phaseDiscontinuityIndicator-r16"},
    {ATF_POINTER,
     1,
     offsetof(
         struct SSR_PhaseBiasSignalElement_r16, phaseBiasIntegerIndicator_r16),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_phaseBiasIntegerIndicator_r16_constr_5,
      memb_phaseBiasIntegerIndicator_r16_constraint_1},
     0,
     0, /* No default value */
     "phaseBiasIntegerIndicator-r16"},
};
static const int asn_MAP_SSR_PhaseBiasSignalElement_r16_oms_1[] = {3};
static const ber_tlv_tag_t asn_DEF_SSR_PhaseBiasSignalElement_r16_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_SSR_PhaseBiasSignalElement_r16_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
         0}, /* signal-and-tracking-mode-ID-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* phaseBias-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0,
         0}, /* phaseDiscontinuityIndicator-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0,
         0} /* phaseBiasIntegerIndicator-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_SSR_PhaseBiasSignalElement_r16_specs_1 = {
    sizeof(struct SSR_PhaseBiasSignalElement_r16),
    offsetof(struct SSR_PhaseBiasSignalElement_r16, _asn_ctx),
    asn_MAP_SSR_PhaseBiasSignalElement_r16_tag2el_1,
    4,                                            /* Count of tags in the map */
    asn_MAP_SSR_PhaseBiasSignalElement_r16_oms_1, /* Optional members */
    1,
    0, /* Root/Additions */
    4, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SSR_PhaseBiasSignalElement_r16 = {
    "SSR-PhaseBiasSignalElement-r16",
    "SSR-PhaseBiasSignalElement-r16",
    &asn_OP_SEQUENCE,
    asn_DEF_SSR_PhaseBiasSignalElement_r16_tags_1,
    sizeof(asn_DEF_SSR_PhaseBiasSignalElement_r16_tags_1) /
        sizeof(asn_DEF_SSR_PhaseBiasSignalElement_r16_tags_1[0]), /* 1 */
    asn_DEF_SSR_PhaseBiasSignalElement_r16_tags_1, /* Same as above */
    sizeof(asn_DEF_SSR_PhaseBiasSignalElement_r16_tags_1) /
        sizeof(asn_DEF_SSR_PhaseBiasSignalElement_r16_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_SSR_PhaseBiasSignalElement_r16_1,
    4,                                              /* Elements count */
    &asn_SPC_SSR_PhaseBiasSignalElement_r16_specs_1 /* Additional specs */
};
