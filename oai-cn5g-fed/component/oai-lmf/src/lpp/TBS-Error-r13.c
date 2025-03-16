/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "TBS-Error-r13.h"

#include "TBS-LocationServerErrorCauses-r13.h"
#include "TBS-TargetDeviceErrorCauses-r13.h"
asn_per_constraints_t asn_PER_type_TBS_Error_r13_constr_1 CC_NOTUSED = {
    {APC_CONSTRAINED | APC_EXTENSIBLE, 1, 1, 0, 1} /* (0..1,...) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_TBS_Error_r13_1[] = {
    {ATF_POINTER,
     0,
     offsetof(struct TBS_Error_r13, choice.locationServerErrorCauses_r13),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_TBS_LocationServerErrorCauses_r13,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "locationServerErrorCauses-r13"},
    {ATF_POINTER,
     0,
     offsetof(struct TBS_Error_r13, choice.targetDeviceErrorCauses_r13),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_TBS_TargetDeviceErrorCauses_r13,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "targetDeviceErrorCauses-r13"},
};
static const asn_TYPE_tag2member_t asn_MAP_TBS_Error_r13_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
     0}, /* locationServerErrorCauses-r13 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0,
     0} /* targetDeviceErrorCauses-r13 */
};
asn_CHOICE_specifics_t asn_SPC_TBS_Error_r13_specs_1 = {
    sizeof(struct TBS_Error_r13),
    offsetof(struct TBS_Error_r13, _asn_ctx),
    offsetof(struct TBS_Error_r13, present),
    sizeof(((struct TBS_Error_r13*) 0)->present),
    asn_MAP_TBS_Error_r13_tag2el_1,
    2, /* Count of tags in the map */
    0,
    0,
    2 /* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_TBS_Error_r13 = {
    "TBS-Error-r13",
    "TBS-Error-r13",
    &asn_OP_CHOICE,
    0, /* No effective tags (pointer) */
    0, /* No effective tags (count) */
    0, /* No tags (pointer) */
    0, /* No tags (count) */
    {0, &asn_PER_type_TBS_Error_r13_constr_1, CHOICE_constraint},
    asn_MBR_TBS_Error_r13_1,
    2,                             /* Elements count */
    &asn_SPC_TBS_Error_r13_specs_1 /* Additional specs */
};
