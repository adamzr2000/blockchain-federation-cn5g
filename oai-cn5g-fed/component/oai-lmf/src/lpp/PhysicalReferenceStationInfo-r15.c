/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "PhysicalReferenceStationInfo-r15.h"

#include "AntennaReferencePointUnc-r15.h"
static int memb_physical_ARP_ECEF_X_r15_constraint_1(
    const asn_TYPE_descriptor_t* td, const void* sptr,
    asn_app_constraint_failed_f* ctfailcb, void* app_key) {
  const INTEGER_t* st = (const INTEGER_t*) sptr;
  long value;

  if (!sptr) {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: value not given (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }

  if (asn_INTEGER2long(st, &value)) {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: value too large (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }

  if ((value >= -137438953472 && value <= 137438953471)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_physical_ARP_ECEF_Y_r15_constraint_1(
    const asn_TYPE_descriptor_t* td, const void* sptr,
    asn_app_constraint_failed_f* ctfailcb, void* app_key) {
  const INTEGER_t* st = (const INTEGER_t*) sptr;
  long value;

  if (!sptr) {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: value not given (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }

  if (asn_INTEGER2long(st, &value)) {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: value too large (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }

  if ((value >= -137438953472 && value <= 137438953471)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_physical_ARP_ECEF_Z_r15_constraint_1(
    const asn_TYPE_descriptor_t* td, const void* sptr,
    asn_app_constraint_failed_f* ctfailcb, void* app_key) {
  const INTEGER_t* st = (const INTEGER_t*) sptr;
  long value;

  if (!sptr) {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: value not given (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }

  if (asn_INTEGER2long(st, &value)) {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: value too large (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }

  if ((value >= -137438953472 && value <= 137438953471)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static asn_per_constraints_t asn_PER_memb_physical_ARP_ECEF_X_r15_constr_3
    CC_NOTUSED = {
        {APC_CONSTRAINED, 38, -1, -137438953472,
         137438953471} /* (-137438953472..137438953471) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_physical_ARP_ECEF_Y_r15_constr_4
    CC_NOTUSED = {
        {APC_CONSTRAINED, 38, -1, -137438953472,
         137438953471} /* (-137438953472..137438953471) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_physical_ARP_ECEF_Z_r15_constr_5
    CC_NOTUSED = {
        {APC_CONSTRAINED, 38, -1, -137438953472,
         137438953471} /* (-137438953472..137438953471) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_PhysicalReferenceStationInfo_r15_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct PhysicalReferenceStationInfo_r15,
         physicalReferenceStationID_r15),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_GNSS_ReferenceStationID_r15,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "physicalReferenceStationID-r15"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct PhysicalReferenceStationInfo_r15, physical_ARP_ECEF_X_r15),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_INTEGER,
     0,
     {0, &asn_PER_memb_physical_ARP_ECEF_X_r15_constr_3,
      memb_physical_ARP_ECEF_X_r15_constraint_1},
     0,
     0, /* No default value */
     "physical-ARP-ECEF-X-r15"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct PhysicalReferenceStationInfo_r15, physical_ARP_ECEF_Y_r15),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_INTEGER,
     0,
     {0, &asn_PER_memb_physical_ARP_ECEF_Y_r15_constr_4,
      memb_physical_ARP_ECEF_Y_r15_constraint_1},
     0,
     0, /* No default value */
     "physical-ARP-ECEF-Y-r15"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct PhysicalReferenceStationInfo_r15, physical_ARP_ECEF_Z_r15),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_INTEGER,
     0,
     {0, &asn_PER_memb_physical_ARP_ECEF_Z_r15_constr_5,
      memb_physical_ARP_ECEF_Z_r15_constraint_1},
     0,
     0, /* No default value */
     "physical-ARP-ECEF-Z-r15"},
    {ATF_POINTER,
     1,
     offsetof(struct PhysicalReferenceStationInfo_r15, physical_ARP_unc_r15),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_AntennaReferencePointUnc_r15,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "physical-ARP-unc-r15"},
};
static const int asn_MAP_PhysicalReferenceStationInfo_r15_oms_1[] = {4};
static const ber_tlv_tag_t asn_DEF_PhysicalReferenceStationInfo_r15_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_PhysicalReferenceStationInfo_r15_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
         0}, /* physicalReferenceStationID-r15 */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0,
         0}, /* physical-ARP-ECEF-X-r15 */
        {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0,
         0}, /* physical-ARP-ECEF-Y-r15 */
        {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0,
         0}, /* physical-ARP-ECEF-Z-r15 */
        {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0} /* physical-ARP-unc-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_PhysicalReferenceStationInfo_r15_specs_1 = {
    sizeof(struct PhysicalReferenceStationInfo_r15),
    offsetof(struct PhysicalReferenceStationInfo_r15, _asn_ctx),
    asn_MAP_PhysicalReferenceStationInfo_r15_tag2el_1,
    5, /* Count of tags in the map */
    asn_MAP_PhysicalReferenceStationInfo_r15_oms_1, /* Optional members */
    1,
    0, /* Root/Additions */
    5, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PhysicalReferenceStationInfo_r15 = {
    "PhysicalReferenceStationInfo-r15",
    "PhysicalReferenceStationInfo-r15",
    &asn_OP_SEQUENCE,
    asn_DEF_PhysicalReferenceStationInfo_r15_tags_1,
    sizeof(asn_DEF_PhysicalReferenceStationInfo_r15_tags_1) /
        sizeof(asn_DEF_PhysicalReferenceStationInfo_r15_tags_1[0]), /* 1 */
    asn_DEF_PhysicalReferenceStationInfo_r15_tags_1, /* Same as above */
    sizeof(asn_DEF_PhysicalReferenceStationInfo_r15_tags_1) /
        sizeof(asn_DEF_PhysicalReferenceStationInfo_r15_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_PhysicalReferenceStationInfo_r15_1,
    5,                                                /* Elements count */
    &asn_SPC_PhysicalReferenceStationInfo_r15_specs_1 /* Additional specs */
};
