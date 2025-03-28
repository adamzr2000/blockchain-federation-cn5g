/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#include "TRPMeasurementQuantitiesList-Item.h"

#include "ProtocolExtensionContainer.h"
static int memb_timingReportingGranularityFactor_constraint_1(
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

  if ((value >= 0 && value <= 5)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static asn_per_constraints_t
    asn_PER_memb_timingReportingGranularityFactor_constr_3 CC_NOTUSED = {
        {APC_CONSTRAINED, 3, 3, 0, 5} /* (0..5) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_TRPMeasurementQuantitiesList_Item_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct TRPMeasurementQuantitiesList_Item,
         tRPMeasurementQuantities_Item),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_TRPMeasurementQuantities_Item,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "tRPMeasurementQuantities-Item"},
    {ATF_POINTER,
     2,
     offsetof(
         struct TRPMeasurementQuantitiesList_Item,
         timingReportingGranularityFactor),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_timingReportingGranularityFactor_constr_3,
      memb_timingReportingGranularityFactor_constraint_1},
     0,
     0, /* No default value */
     "timingReportingGranularityFactor"},
    {ATF_POINTER,
     1,
     offsetof(struct TRPMeasurementQuantitiesList_Item, iE_Extensions),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ProtocolExtensionContainer_2816P92,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "iE-Extensions"},
};
static const int asn_MAP_TRPMeasurementQuantitiesList_Item_oms_1[] = {1, 2};
static const ber_tlv_tag_t asn_DEF_TRPMeasurementQuantitiesList_Item_tags_1[] =
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_TRPMeasurementQuantitiesList_Item_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
         0}, /* tRPMeasurementQuantities-Item */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0,
         0}, /* timingReportingGranularityFactor */
        {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0} /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_TRPMeasurementQuantitiesList_Item_specs_1 = {
    sizeof(struct TRPMeasurementQuantitiesList_Item),
    offsetof(struct TRPMeasurementQuantitiesList_Item, _asn_ctx),
    asn_MAP_TRPMeasurementQuantitiesList_Item_tag2el_1,
    3, /* Count of tags in the map */
    asn_MAP_TRPMeasurementQuantitiesList_Item_oms_1, /* Optional members */
    2,
    0, /* Root/Additions */
    3, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TRPMeasurementQuantitiesList_Item = {
    "TRPMeasurementQuantitiesList-Item",
    "TRPMeasurementQuantitiesList-Item",
    &asn_OP_SEQUENCE,
    asn_DEF_TRPMeasurementQuantitiesList_Item_tags_1,
    sizeof(asn_DEF_TRPMeasurementQuantitiesList_Item_tags_1) /
        sizeof(asn_DEF_TRPMeasurementQuantitiesList_Item_tags_1[0]), /* 1 */
    asn_DEF_TRPMeasurementQuantitiesList_Item_tags_1, /* Same as above */
    sizeof(asn_DEF_TRPMeasurementQuantitiesList_Item_tags_1) /
        sizeof(asn_DEF_TRPMeasurementQuantitiesList_Item_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_TRPMeasurementQuantitiesList_Item_1,
    3,                                                 /* Elements count */
    &asn_SPC_TRPMeasurementQuantitiesList_Item_specs_1 /* Additional specs */
};
