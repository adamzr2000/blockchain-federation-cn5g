/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "OTDOA-RequestLocationInformation.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int memb_maxNoOfRSTDmeas_r14_constraint_4(
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

  if ((value >= 1 && value <= 32)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_multipathRSTD_r14_constr_5
    CC_NOTUSED = {
        {APC_CONSTRAINED, 0, 0, 0, 0} /* (0..0) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_maxNoOfRSTDmeas_r14_constr_7
    CC_NOTUSED = {
        {APC_CONSTRAINED, 5, 5, 1, 32} /* (1..32) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_type_motionMeasurements_r15_constr_9
    CC_NOTUSED = {
        {APC_CONSTRAINED, 0, 0, 0, 0} /* (0..0) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_multipathRSTD_r14_value2enum_5[] = {
    {0, 9, "requested"}};
static const unsigned int asn_MAP_multipathRSTD_r14_enum2value_5[] = {
    0 /* requested(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_multipathRSTD_r14_specs_5 = {
    asn_MAP_multipathRSTD_r14_value2enum_5, /* "tag" => N; sorted by tag */
    asn_MAP_multipathRSTD_r14_enum2value_5, /* N => "tag"; sorted by N */
    1,                                      /* Number of elements in the maps */
    0,                                      /* Enumeration is not extensible */
    1,                                      /* Strict enumeration */
    0,                                      /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_multipathRSTD_r14_tags_5[] = {
    (ASN_TAG_CLASS_CONTEXT | (0 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_multipathRSTD_r14_5 = {
        "multipathRSTD-r14",
        "multipathRSTD-r14",
        &asn_OP_NativeEnumerated,
        asn_DEF_multipathRSTD_r14_tags_5,
        sizeof(asn_DEF_multipathRSTD_r14_tags_5) /
                sizeof(asn_DEF_multipathRSTD_r14_tags_5[0]) -
            1,                            /* 1 */
        asn_DEF_multipathRSTD_r14_tags_5, /* Same as above */
        sizeof(asn_DEF_multipathRSTD_r14_tags_5) /
            sizeof(asn_DEF_multipathRSTD_r14_tags_5[0]), /* 2 */
        {0, &asn_PER_type_multipathRSTD_r14_constr_5,
         NativeEnumerated_constraint},
        0,
        0,                                 /* Defined elsewhere */
        &asn_SPC_multipathRSTD_r14_specs_5 /* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_4[] = {
    {ATF_POINTER,
     2,
     offsetof(struct OTDOA_RequestLocationInformation__ext1, multipathRSTD_r14),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_multipathRSTD_r14_5,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "multipathRSTD-r14"},
    {ATF_POINTER,
     1,
     offsetof(
         struct OTDOA_RequestLocationInformation__ext1, maxNoOfRSTDmeas_r14),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_maxNoOfRSTDmeas_r14_constr_7,
      memb_maxNoOfRSTDmeas_r14_constraint_4},
     0,
     0, /* No default value */
     "maxNoOfRSTDmeas-r14"},
};
static const int asn_MAP_ext1_oms_4[]            = {0, 1};
static const ber_tlv_tag_t asn_DEF_ext1_tags_4[] = {
    (ASN_TAG_CLASS_CONTEXT | (1 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_4[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* multipathRSTD-r14 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}  /* maxNoOfRSTDmeas-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_4 = {
    sizeof(struct OTDOA_RequestLocationInformation__ext1),
    offsetof(struct OTDOA_RequestLocationInformation__ext1, _asn_ctx),
    asn_MAP_ext1_tag2el_4,
    2,                  /* Count of tags in the map */
    asn_MAP_ext1_oms_4, /* Optional members */
    2,
    0,  /* Root/Additions */
    -1, /* First extension addition */
};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_ext1_4 = {
        "ext1",
        "ext1",
        &asn_OP_SEQUENCE,
        asn_DEF_ext1_tags_4,
        sizeof(asn_DEF_ext1_tags_4) / sizeof(asn_DEF_ext1_tags_4[0]) -
            1,               /* 1 */
        asn_DEF_ext1_tags_4, /* Same as above */
        sizeof(asn_DEF_ext1_tags_4) / sizeof(asn_DEF_ext1_tags_4[0]), /* 2 */
        {0, 0, SEQUENCE_constraint},
        asn_MBR_ext1_4,
        2,                    /* Elements count */
        &asn_SPC_ext1_specs_4 /* Additional specs */
};

static const asn_INTEGER_enum_map_t
    asn_MAP_motionMeasurements_r15_value2enum_9[] = {{0, 9, "requested"}};
static const unsigned int asn_MAP_motionMeasurements_r15_enum2value_9[] = {
    0 /* requested(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_motionMeasurements_r15_specs_9 = {
    asn_MAP_motionMeasurements_r15_value2enum_9, /* "tag" => N; sorted by tag */
    asn_MAP_motionMeasurements_r15_enum2value_9, /* N => "tag"; sorted by N */
    1, /* Number of elements in the maps */
    0, /* Enumeration is not extensible */
    1, /* Strict enumeration */
    0, /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_motionMeasurements_r15_tags_9[] = {
    (ASN_TAG_CLASS_CONTEXT | (0 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_motionMeasurements_r15_9 = {
        "motionMeasurements-r15",
        "motionMeasurements-r15",
        &asn_OP_NativeEnumerated,
        asn_DEF_motionMeasurements_r15_tags_9,
        sizeof(asn_DEF_motionMeasurements_r15_tags_9) /
                sizeof(asn_DEF_motionMeasurements_r15_tags_9[0]) -
            1,                                 /* 1 */
        asn_DEF_motionMeasurements_r15_tags_9, /* Same as above */
        sizeof(asn_DEF_motionMeasurements_r15_tags_9) /
            sizeof(asn_DEF_motionMeasurements_r15_tags_9[0]), /* 2 */
        {0, &asn_PER_type_motionMeasurements_r15_constr_9,
         NativeEnumerated_constraint},
        0,
        0,                                      /* Defined elsewhere */
        &asn_SPC_motionMeasurements_r15_specs_9 /* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_8[] = {
    {ATF_POINTER,
     1,
     offsetof(
         struct OTDOA_RequestLocationInformation__ext2, motionMeasurements_r15),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_motionMeasurements_r15_9,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "motionMeasurements-r15"},
};
static const int asn_MAP_ext2_oms_8[]            = {0};
static const ber_tlv_tag_t asn_DEF_ext2_tags_8[] = {
    (ASN_TAG_CLASS_CONTEXT | (2 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_8[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0} /* motionMeasurements-r15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_8 = {
    sizeof(struct OTDOA_RequestLocationInformation__ext2),
    offsetof(struct OTDOA_RequestLocationInformation__ext2, _asn_ctx),
    asn_MAP_ext2_tag2el_8,
    1,                  /* Count of tags in the map */
    asn_MAP_ext2_oms_8, /* Optional members */
    1,
    0,  /* Root/Additions */
    -1, /* First extension addition */
};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_ext2_8 = {
        "ext2",
        "ext2",
        &asn_OP_SEQUENCE,
        asn_DEF_ext2_tags_8,
        sizeof(asn_DEF_ext2_tags_8) / sizeof(asn_DEF_ext2_tags_8[0]) -
            1,               /* 1 */
        asn_DEF_ext2_tags_8, /* Same as above */
        sizeof(asn_DEF_ext2_tags_8) / sizeof(asn_DEF_ext2_tags_8[0]), /* 2 */
        {0, 0, SEQUENCE_constraint},
        asn_MBR_ext2_8,
        1,                    /* Elements count */
        &asn_SPC_ext2_specs_8 /* Additional specs */
};

asn_TYPE_member_t asn_MBR_OTDOA_RequestLocationInformation_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct OTDOA_RequestLocationInformation, assistanceAvailability),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BOOLEAN,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "assistanceAvailability"},
    {ATF_POINTER,
     2,
     offsetof(struct OTDOA_RequestLocationInformation, ext1),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     0,
     &asn_DEF_ext1_4,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "ext1"},
    {ATF_POINTER,
     1,
     offsetof(struct OTDOA_RequestLocationInformation, ext2),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     0,
     &asn_DEF_ext2_8,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "ext2"},
};
static const int asn_MAP_OTDOA_RequestLocationInformation_oms_1[] = {1, 2};
static const ber_tlv_tag_t asn_DEF_OTDOA_RequestLocationInformation_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_OTDOA_RequestLocationInformation_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
         0}, /* assistanceAvailability */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* ext1 */
        {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}  /* ext2 */
};
asn_SEQUENCE_specifics_t asn_SPC_OTDOA_RequestLocationInformation_specs_1 = {
    sizeof(struct OTDOA_RequestLocationInformation),
    offsetof(struct OTDOA_RequestLocationInformation, _asn_ctx),
    asn_MAP_OTDOA_RequestLocationInformation_tag2el_1,
    3, /* Count of tags in the map */
    asn_MAP_OTDOA_RequestLocationInformation_oms_1, /* Optional members */
    0,
    2, /* Root/Additions */
    1, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_OTDOA_RequestLocationInformation = {
    "OTDOA-RequestLocationInformation",
    "OTDOA-RequestLocationInformation",
    &asn_OP_SEQUENCE,
    asn_DEF_OTDOA_RequestLocationInformation_tags_1,
    sizeof(asn_DEF_OTDOA_RequestLocationInformation_tags_1) /
        sizeof(asn_DEF_OTDOA_RequestLocationInformation_tags_1[0]), /* 1 */
    asn_DEF_OTDOA_RequestLocationInformation_tags_1, /* Same as above */
    sizeof(asn_DEF_OTDOA_RequestLocationInformation_tags_1) /
        sizeof(asn_DEF_OTDOA_RequestLocationInformation_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_OTDOA_RequestLocationInformation_1,
    3,                                                /* Elements count */
    &asn_SPC_OTDOA_RequestLocationInformation_specs_1 /* Additional specs */
};
