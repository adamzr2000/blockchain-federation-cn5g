/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "Velocity.h"

#include "HorizontalVelocity.h"
#include "HorizontalWithVerticalVelocity.h"
#include "HorizontalVelocityWithUncertainty.h"
#include "HorizontalWithVerticalVelocityAndUncertainty.h"
asn_per_constraints_t asn_PER_type_Velocity_constr_1 CC_NOTUSED = {
    {APC_CONSTRAINED | APC_EXTENSIBLE, 2, 2, 0, 3} /* (0..3,...) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_Velocity_1[] = {
    {ATF_POINTER,
     0,
     offsetof(struct Velocity, choice.horizontalVelocity),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_HorizontalVelocity,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "horizontalVelocity"},
    {ATF_POINTER,
     0,
     offsetof(struct Velocity, choice.horizontalWithVerticalVelocity),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_HorizontalWithVerticalVelocity,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "horizontalWithVerticalVelocity"},
    {ATF_POINTER,
     0,
     offsetof(struct Velocity, choice.horizontalVelocityWithUncertainty),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_HorizontalVelocityWithUncertainty,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "horizontalVelocityWithUncertainty"},
    {ATF_POINTER,
     0,
     offsetof(
         struct Velocity, choice.horizontalWithVerticalVelocityAndUncertainty),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_HorizontalWithVerticalVelocityAndUncertainty,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "horizontalWithVerticalVelocityAndUncertainty"},
};
static const asn_TYPE_tag2member_t asn_MAP_Velocity_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* horizontalVelocity */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0,
     0}, /* horizontalWithVerticalVelocity */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0,
     0}, /* horizontalVelocityWithUncertainty */
    {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0,
     0} /* horizontalWithVerticalVelocityAndUncertainty */
};
asn_CHOICE_specifics_t asn_SPC_Velocity_specs_1 = {
    sizeof(struct Velocity),
    offsetof(struct Velocity, _asn_ctx),
    offsetof(struct Velocity, present),
    sizeof(((struct Velocity*) 0)->present),
    asn_MAP_Velocity_tag2el_1,
    4, /* Count of tags in the map */
    0,
    0,
    4 /* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Velocity = {
    "Velocity",
    "Velocity",
    &asn_OP_CHOICE,
    0, /* No effective tags (pointer) */
    0, /* No effective tags (count) */
    0, /* No tags (pointer) */
    0, /* No tags (count) */
    {0, &asn_PER_type_Velocity_constr_1, CHOICE_constraint},
    asn_MBR_Velocity_1,
    4,                        /* Elements count */
    &asn_SPC_Velocity_specs_1 /* Additional specs */
};
