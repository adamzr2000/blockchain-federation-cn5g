/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -no-gen-example -gen-APER -gen-UPER -no-gen-JER -gen-BER -D src`
 */

#include "Ngap_UEContextResumeRequestTransfer.h"

#include "Ngap_QosFlowListWithCause.h"
#include "Ngap_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_Ngap_UEContextResumeRequestTransfer_1[] = {
    {ATF_POINTER,
     2,
     offsetof(
         struct Ngap_UEContextResumeRequestTransfer, qosFlowFailedToResumeList),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_QosFlowListWithCause,
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
     "qosFlowFailedToResumeList"},
    {ATF_POINTER,
     1,
     offsetof(struct Ngap_UEContextResumeRequestTransfer, iE_Extensions),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_ProtocolExtensionContainer_9666P266,
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
static const int asn_MAP_Ngap_UEContextResumeRequestTransfer_oms_1[] = {0, 1};
static const ber_tlv_tag_t
    asn_DEF_Ngap_UEContextResumeRequestTransfer_tags_1[] = {
        (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_Ngap_UEContextResumeRequestTransfer_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
         0}, /* qosFlowFailedToResumeList */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0} /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t
    asn_SPC_Ngap_UEContextResumeRequestTransfer_specs_1 = {
        sizeof(struct Ngap_UEContextResumeRequestTransfer),
        offsetof(struct Ngap_UEContextResumeRequestTransfer, _asn_ctx),
        asn_MAP_Ngap_UEContextResumeRequestTransfer_tag2el_1,
        2, /* Count of tags in the map */
        asn_MAP_Ngap_UEContextResumeRequestTransfer_oms_1, /* Optional members
                                                            */
        2,
        0, /* Root/Additions */
        2, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_UEContextResumeRequestTransfer = {
    "UEContextResumeRequestTransfer",
    "UEContextResumeRequestTransfer",
    &asn_OP_SEQUENCE,
    asn_DEF_Ngap_UEContextResumeRequestTransfer_tags_1,
    sizeof(asn_DEF_Ngap_UEContextResumeRequestTransfer_tags_1) /
        sizeof(asn_DEF_Ngap_UEContextResumeRequestTransfer_tags_1[0]), /* 1 */
    asn_DEF_Ngap_UEContextResumeRequestTransfer_tags_1, /* Same as above */
    sizeof(asn_DEF_Ngap_UEContextResumeRequestTransfer_tags_1) /
        sizeof(asn_DEF_Ngap_UEContextResumeRequestTransfer_tags_1[0]), /* 1 */
    {
#if !defined(ASN_DISABLE_OER_SUPPORT)
        0,
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
        0,
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
        SEQUENCE_constraint},
    asn_MBR_Ngap_UEContextResumeRequestTransfer_1,
    2,                                                   /* Elements count */
    &asn_SPC_Ngap_UEContextResumeRequestTransfer_specs_1 /* Additional specs */
};
