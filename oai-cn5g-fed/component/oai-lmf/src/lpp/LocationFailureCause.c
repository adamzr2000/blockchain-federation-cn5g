/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "LocationFailureCause.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_LocationFailureCause_constr_1 CC_NOTUSED = {
    {APC_CONSTRAINED | APC_EXTENSIBLE, 2, 2, 0, 3} /* (0..3,...) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static const asn_INTEGER_enum_map_t
    asn_MAP_LocationFailureCause_value2enum_1[] = {
        {0, 9, "undefined"},
        {1, 27, "requestedMethodNotSupported"},
        {2, 21, "positionMethodFailure"},
        {3, 40, "periodicLocationMeasurementsNotAvailable"}
        /* This list is extensible */
};
static const unsigned int asn_MAP_LocationFailureCause_enum2value_1[] = {
    3, /* periodicLocationMeasurementsNotAvailable(3) */
    2, /* positionMethodFailure(2) */
    1, /* requestedMethodNotSupported(1) */
    0  /* undefined(0) */
       /* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_LocationFailureCause_specs_1 = {
    asn_MAP_LocationFailureCause_value2enum_1, /* "tag" => N; sorted by tag */
    asn_MAP_LocationFailureCause_enum2value_1, /* N => "tag"; sorted by N */
    4, /* Number of elements in the maps */
    5, /* Extensions before this member */
    1, /* Strict enumeration */
    0, /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_LocationFailureCause_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
asn_TYPE_descriptor_t asn_DEF_LocationFailureCause = {
    "LocationFailureCause",
    "LocationFailureCause",
    &asn_OP_NativeEnumerated,
    asn_DEF_LocationFailureCause_tags_1,
    sizeof(asn_DEF_LocationFailureCause_tags_1) /
        sizeof(asn_DEF_LocationFailureCause_tags_1[0]), /* 1 */
    asn_DEF_LocationFailureCause_tags_1,                /* Same as above */
    sizeof(asn_DEF_LocationFailureCause_tags_1) /
        sizeof(asn_DEF_LocationFailureCause_tags_1[0]), /* 1 */
    {0, &asn_PER_type_LocationFailureCause_constr_1,
     NativeEnumerated_constraint},
    0,
    0,                                    /* Defined elsewhere */
    &asn_SPC_LocationFailureCause_specs_1 /* Additional specs */
};
