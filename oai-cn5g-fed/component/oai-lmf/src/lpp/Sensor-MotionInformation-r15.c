/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "Sensor-MotionInformation-r15.h"

asn_TYPE_member_t asn_MBR_Sensor_MotionInformation_r15_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct Sensor_MotionInformation_r15, refTime_r15),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     +1, /* EXPLICIT tag at current level */
     &asn_DEF_DisplacementTimeStamp_r15,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "refTime-r15"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct Sensor_MotionInformation_r15, displacementInfoList_r15),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_DisplacementInfoList_r15,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "displacementInfoList-r15"},
};
static const ber_tlv_tag_t asn_DEF_Sensor_MotionInformation_r15_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_Sensor_MotionInformation_r15_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* refTime-r15 */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0,
         0} /* displacementInfoList-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_Sensor_MotionInformation_r15_specs_1 = {
    sizeof(struct Sensor_MotionInformation_r15),
    offsetof(struct Sensor_MotionInformation_r15, _asn_ctx),
    asn_MAP_Sensor_MotionInformation_r15_tag2el_1,
    2, /* Count of tags in the map */
    0,
    0,
    0, /* Optional elements (not needed) */
    2, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Sensor_MotionInformation_r15 = {
    "Sensor-MotionInformation-r15",
    "Sensor-MotionInformation-r15",
    &asn_OP_SEQUENCE,
    asn_DEF_Sensor_MotionInformation_r15_tags_1,
    sizeof(asn_DEF_Sensor_MotionInformation_r15_tags_1) /
        sizeof(asn_DEF_Sensor_MotionInformation_r15_tags_1[0]), /* 1 */
    asn_DEF_Sensor_MotionInformation_r15_tags_1, /* Same as above */
    sizeof(asn_DEF_Sensor_MotionInformation_r15_tags_1) /
        sizeof(asn_DEF_Sensor_MotionInformation_r15_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_Sensor_MotionInformation_r15_1,
    2,                                            /* Elements count */
    &asn_SPC_Sensor_MotionInformation_r15_specs_1 /* Additional specs */
};
