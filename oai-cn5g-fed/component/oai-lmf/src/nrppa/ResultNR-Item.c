/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#include "ResultNR-Item.h"

#include "ResultSS-RSRP-PerSSB.h"
#include "ResultSS-RSRQ-PerSSB.h"
#include "CGI-NR.h"
#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ResultNR_Item_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct ResultNR_Item, nR_PCI),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NR_PCI,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nR-PCI"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct ResultNR_Item, nR_ARFCN),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NR_ARFCN,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nR-ARFCN"},
    {ATF_POINTER,
     6,
     offsetof(struct ResultNR_Item, valueSS_RSRP_Cell),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ValueRSRP_NR,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "valueSS-RSRP-Cell"},
    {ATF_POINTER,
     5,
     offsetof(struct ResultNR_Item, valueSS_RSRQ_Cell),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ValueRSRQ_NR,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "valueSS-RSRQ-Cell"},
    {ATF_POINTER,
     4,
     offsetof(struct ResultNR_Item, sS_RSRP_PerSSB),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ResultSS_RSRP_PerSSB,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "sS-RSRP-PerSSB"},
    {ATF_POINTER,
     3,
     offsetof(struct ResultNR_Item, sS_RSRQ_PerSSB),
     (ASN_TAG_CLASS_CONTEXT | (5 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ResultSS_RSRQ_PerSSB,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "sS-RSRQ-PerSSB"},
    {ATF_POINTER,
     2,
     offsetof(struct ResultNR_Item, cGI_NR),
     (ASN_TAG_CLASS_CONTEXT | (6 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_CGI_NR,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "cGI-NR"},
    {ATF_POINTER,
     1,
     offsetof(struct ResultNR_Item, iE_Extensions),
     (ASN_TAG_CLASS_CONTEXT | (7 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ProtocolExtensionContainer_2816P70,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "iE-Extensions"},
};
static const int asn_MAP_ResultNR_Item_oms_1[]            = {2, 3, 4, 5, 6, 7};
static const ber_tlv_tag_t asn_DEF_ResultNR_Item_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_ResultNR_Item_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* nR-PCI */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* nR-ARFCN */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* valueSS-RSRP-Cell */
    {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}, /* valueSS-RSRQ-Cell */
    {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0}, /* sS-RSRP-PerSSB */
    {(ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0}, /* sS-RSRQ-PerSSB */
    {(ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0}, /* cGI-NR */
    {(ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0}  /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ResultNR_Item_specs_1 = {
    sizeof(struct ResultNR_Item),
    offsetof(struct ResultNR_Item, _asn_ctx),
    asn_MAP_ResultNR_Item_tag2el_1,
    8,                           /* Count of tags in the map */
    asn_MAP_ResultNR_Item_oms_1, /* Optional members */
    6,
    0, /* Root/Additions */
    8, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ResultNR_Item = {
    "ResultNR-Item",
    "ResultNR-Item",
    &asn_OP_SEQUENCE,
    asn_DEF_ResultNR_Item_tags_1,
    sizeof(asn_DEF_ResultNR_Item_tags_1) /
        sizeof(asn_DEF_ResultNR_Item_tags_1[0]), /* 1 */
    asn_DEF_ResultNR_Item_tags_1,                /* Same as above */
    sizeof(asn_DEF_ResultNR_Item_tags_1) /
        sizeof(asn_DEF_ResultNR_Item_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_ResultNR_Item_1,
    8,                             /* Elements count */
    &asn_SPC_ResultNR_Item_specs_1 /* Additional specs */
};
