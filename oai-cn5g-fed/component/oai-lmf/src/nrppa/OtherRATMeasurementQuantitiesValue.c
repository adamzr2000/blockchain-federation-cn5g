/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#include "OtherRATMeasurementQuantitiesValue.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_OtherRATMeasurementQuantitiesValue_constr_1
    CC_NOTUSED = {
        {APC_CONSTRAINED | APC_EXTENSIBLE, 1, 1, 0, 1} /* (0..1,...) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static const asn_INTEGER_enum_map_t
    asn_MAP_OtherRATMeasurementQuantitiesValue_value2enum_1[] = {
        {0, 5, "geran"},
        {1, 5, "utran"},
        {2, 2, "nR"},
        {3, 5, "eUTRA"}
        /* This list is extensible */
};
static const unsigned int
    asn_MAP_OtherRATMeasurementQuantitiesValue_enum2value_1[] = {
        3, /* eUTRA(3) */
        0, /* geran(0) */
        2, /* nR(2) */
        1  /* utran(1) */
           /* This list is extensible */
};
const asn_INTEGER_specifics_t
    asn_SPC_OtherRATMeasurementQuantitiesValue_specs_1 = {
        asn_MAP_OtherRATMeasurementQuantitiesValue_value2enum_1, /* "tag" => N;
                                                                    sorted by
                                                                    tag */
        asn_MAP_OtherRATMeasurementQuantitiesValue_enum2value_1, /* N => "tag";
                                                                    sorted by N
                                                                  */
        4, /* Number of elements in the maps */
        3, /* Extensions before this member */
        1, /* Strict enumeration */
        0, /* Native long size */
        0};
static const ber_tlv_tag_t asn_DEF_OtherRATMeasurementQuantitiesValue_tags_1[] =
    {(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
asn_TYPE_descriptor_t asn_DEF_OtherRATMeasurementQuantitiesValue = {
    "OtherRATMeasurementQuantitiesValue",
    "OtherRATMeasurementQuantitiesValue",
    &asn_OP_NativeEnumerated,
    asn_DEF_OtherRATMeasurementQuantitiesValue_tags_1,
    sizeof(asn_DEF_OtherRATMeasurementQuantitiesValue_tags_1) /
        sizeof(asn_DEF_OtherRATMeasurementQuantitiesValue_tags_1[0]), /* 1 */
    asn_DEF_OtherRATMeasurementQuantitiesValue_tags_1, /* Same as above */
    sizeof(asn_DEF_OtherRATMeasurementQuantitiesValue_tags_1) /
        sizeof(asn_DEF_OtherRATMeasurementQuantitiesValue_tags_1[0]), /* 1 */
    {0, &asn_PER_type_OtherRATMeasurementQuantitiesValue_constr_1,
     NativeEnumerated_constraint},
    0,
    0,                                                  /* Defined elsewhere */
    &asn_SPC_OtherRATMeasurementQuantitiesValue_specs_1 /* Additional specs */
};
