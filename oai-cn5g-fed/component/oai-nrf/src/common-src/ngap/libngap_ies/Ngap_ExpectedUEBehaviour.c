/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -no-gen-example -gen-APER -gen-UPER -no-gen-JER -gen-BER -D src`
 */

#include "Ngap_ExpectedUEBehaviour.h"

#include "Ngap_ExpectedUEActivityBehaviour.h"
#include "Ngap_ExpectedUEMovingTrajectory.h"
#include "Ngap_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_Ngap_ExpectedUEBehaviour_1[] = {
    {ATF_POINTER,
     5,
     offsetof(struct Ngap_ExpectedUEBehaviour, expectedUEActivityBehaviour),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_ExpectedUEActivityBehaviour,
     0,
     {
#if !defined(ASN_DISABLE_OER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
         0},
     0,
     0, /* No default value */
     "expectedUEActivityBehaviour"},
    {ATF_POINTER,
     4,
     offsetof(struct Ngap_ExpectedUEBehaviour, expectedHOInterval),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_ExpectedHOInterval,
     0,
     {
#if !defined(ASN_DISABLE_OER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
         0},
     0,
     0, /* No default value */
     "expectedHOInterval"},
    {ATF_POINTER,
     3,
     offsetof(struct Ngap_ExpectedUEBehaviour, expectedUEMobility),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_ExpectedUEMobility,
     0,
     {
#if !defined(ASN_DISABLE_OER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
         0},
     0,
     0, /* No default value */
     "expectedUEMobility"},
    {ATF_POINTER,
     2,
     offsetof(struct Ngap_ExpectedUEBehaviour, expectedUEMovingTrajectory),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_ExpectedUEMovingTrajectory,
     0,
     {
#if !defined(ASN_DISABLE_OER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
         0},
     0,
     0, /* No default value */
     "expectedUEMovingTrajectory"},
    {ATF_POINTER,
     1,
     offsetof(struct Ngap_ExpectedUEBehaviour, iE_Extensions),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_ProtocolExtensionContainer_9666P73,
     0,
     {
#if !defined(ASN_DISABLE_OER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
         0},
     0,
     0, /* No default value */
     "iE-Extensions"},
};
static const int asn_MAP_Ngap_ExpectedUEBehaviour_oms_1[] = {0, 1, 2, 3, 4};
static const ber_tlv_tag_t asn_DEF_Ngap_ExpectedUEBehaviour_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_ExpectedUEBehaviour_tag2el_1[] =
    {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
         0}, /* expectedUEActivityBehaviour */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* expectedHOInterval */
        {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* expectedUEMobility */
        {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0,
         0}, /* expectedUEMovingTrajectory */
        {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0} /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_ExpectedUEBehaviour_specs_1 = {
    sizeof(struct Ngap_ExpectedUEBehaviour),
    offsetof(struct Ngap_ExpectedUEBehaviour, _asn_ctx),
    asn_MAP_Ngap_ExpectedUEBehaviour_tag2el_1,
    5,                                      /* Count of tags in the map */
    asn_MAP_Ngap_ExpectedUEBehaviour_oms_1, /* Optional members */
    5,
    0, /* Root/Additions */
    5, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_ExpectedUEBehaviour = {
    "ExpectedUEBehaviour",
    "ExpectedUEBehaviour",
    &asn_OP_SEQUENCE,
    asn_DEF_Ngap_ExpectedUEBehaviour_tags_1,
    sizeof(asn_DEF_Ngap_ExpectedUEBehaviour_tags_1) /
        sizeof(asn_DEF_Ngap_ExpectedUEBehaviour_tags_1[0]), /* 1 */
    asn_DEF_Ngap_ExpectedUEBehaviour_tags_1,                /* Same as above */
    sizeof(asn_DEF_Ngap_ExpectedUEBehaviour_tags_1) /
        sizeof(asn_DEF_Ngap_ExpectedUEBehaviour_tags_1[0]), /* 1 */
    {
#if !defined(ASN_DISABLE_OER_SUPPORT)
        0,
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
        0,
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
        SEQUENCE_constraint},
    asn_MBR_Ngap_ExpectedUEBehaviour_1,
    5,                                        /* Elements count */
    &asn_SPC_Ngap_ExpectedUEBehaviour_specs_1 /* Additional specs */
};
