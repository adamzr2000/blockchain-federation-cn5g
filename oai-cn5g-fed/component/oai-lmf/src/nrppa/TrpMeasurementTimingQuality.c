/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#include "TrpMeasurementTimingQuality.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int memb_measurementQuality_constraint_1(
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

  if ((value >= 0 && value <= 31)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static asn_per_constraints_t asn_PER_type_resolution_constr_3 CC_NOTUSED = {
    {APC_CONSTRAINED | APC_EXTENSIBLE, 2, 2, 0, 3} /* (0..3,...) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_measurementQuality_constr_2
    CC_NOTUSED = {
        {APC_CONSTRAINED, 5, 5, 0, 31} /* (0..31) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_resolution_value2enum_3[] = {
    {0, 6, "m0dot1"},
    {1, 2, "m1"},
    {2, 3, "m10"},
    {3, 3, "m30"}
    /* This list is extensible */
};
static const unsigned int asn_MAP_resolution_enum2value_3[] = {
    0, /* m0dot1(0) */
    1, /* m1(1) */
    2, /* m10(2) */
    3  /* m30(3) */
       /* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_resolution_specs_3 = {
    asn_MAP_resolution_value2enum_3, /* "tag" => N; sorted by tag */
    asn_MAP_resolution_enum2value_3, /* N => "tag"; sorted by N */
    4,                               /* Number of elements in the maps */
    5,                               /* Extensions before this member */
    1,                               /* Strict enumeration */
    0,                               /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_resolution_tags_3[] = {
    (ASN_TAG_CLASS_CONTEXT | (1 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_resolution_3 = {
        "resolution",
        "resolution",
        &asn_OP_NativeEnumerated,
        asn_DEF_resolution_tags_3,
        sizeof(asn_DEF_resolution_tags_3) /
                sizeof(asn_DEF_resolution_tags_3[0]) -
            1,                     /* 1 */
        asn_DEF_resolution_tags_3, /* Same as above */
        sizeof(asn_DEF_resolution_tags_3) /
            sizeof(asn_DEF_resolution_tags_3[0]), /* 2 */
        {0, &asn_PER_type_resolution_constr_3, NativeEnumerated_constraint},
        0,
        0,                          /* Defined elsewhere */
        &asn_SPC_resolution_specs_3 /* Additional specs */
};

asn_TYPE_member_t asn_MBR_TrpMeasurementTimingQuality_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct TrpMeasurementTimingQuality, measurementQuality),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_measurementQuality_constr_2,
      memb_measurementQuality_constraint_1},
     0,
     0, /* No default value */
     "measurementQuality"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct TrpMeasurementTimingQuality, resolution),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_resolution_3,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "resolution"},
};
static const ber_tlv_tag_t asn_DEF_TrpMeasurementTimingQuality_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_TrpMeasurementTimingQuality_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* measurementQuality */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}  /* resolution */
};
asn_SEQUENCE_specifics_t asn_SPC_TrpMeasurementTimingQuality_specs_1 = {
    sizeof(struct TrpMeasurementTimingQuality),
    offsetof(struct TrpMeasurementTimingQuality, _asn_ctx),
    asn_MAP_TrpMeasurementTimingQuality_tag2el_1,
    2, /* Count of tags in the map */
    0,
    0,
    0, /* Optional elements (not needed) */
    2, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TrpMeasurementTimingQuality = {
    "TrpMeasurementTimingQuality",
    "TrpMeasurementTimingQuality",
    &asn_OP_SEQUENCE,
    asn_DEF_TrpMeasurementTimingQuality_tags_1,
    sizeof(asn_DEF_TrpMeasurementTimingQuality_tags_1) /
        sizeof(asn_DEF_TrpMeasurementTimingQuality_tags_1[0]), /* 1 */
    asn_DEF_TrpMeasurementTimingQuality_tags_1, /* Same as above */
    sizeof(asn_DEF_TrpMeasurementTimingQuality_tags_1) /
        sizeof(asn_DEF_TrpMeasurementTimingQuality_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_TrpMeasurementTimingQuality_1,
    2,                                           /* Elements count */
    &asn_SPC_TrpMeasurementTimingQuality_specs_1 /* Additional specs */
};
