/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "NR-MeasuredResultsElement-r16.h"

#include "NCGI-r15.h"
#include "MeasQuantityResults-r16.h"
#include "ResultsPerSSB-IndexList-r16.h"
#include "ResultsPerCSI-RS-IndexList-r16.h"
static int memb_systemFrameNumber_r16_constraint_1(
    const asn_TYPE_descriptor_t* td, const void* sptr,
    asn_app_constraint_failed_f* ctfailcb, void* app_key) {
  const BIT_STRING_t* st = (const BIT_STRING_t*) sptr;
  size_t size;

  if (!sptr) {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: value not given (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }

  if (st->size > 0) {
    /* Size in bits */
    size = 8 * st->size - (st->bits_unused & 0x07);
  } else {
    size = 0;
  }

  if ((size == 10)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static asn_per_constraints_t asn_PER_type_nr_ARFCN_r16_constr_3 CC_NOTUSED = {
    {APC_CONSTRAINED, 1, 1, 0, 1} /* (0..1) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_systemFrameNumber_r16_constr_7
    CC_NOTUSED = {
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        {APC_CONSTRAINED, 0, 0, 10, 10} /* (SIZE(10..10)) */,
        0,
        0 /* No PER value map */
};
static asn_TYPE_member_t asn_MBR_nr_ARFCN_r16_3[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct NR_MeasuredResultsElement_r16__nr_ARFCN_r16,
         choice.ssb_ARFCN_r16),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ARFCN_ValueNR_r15,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "ssb-ARFCN-r16"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct NR_MeasuredResultsElement_r16__nr_ARFCN_r16,
         choice.csi_RS_pointA_r16),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ARFCN_ValueNR_r15,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "csi-RS-pointA-r16"},
};
static const asn_TYPE_tag2member_t asn_MAP_nr_ARFCN_r16_tag2el_3[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* ssb-ARFCN-r16 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}  /* csi-RS-pointA-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_nr_ARFCN_r16_specs_3 = {
    sizeof(struct NR_MeasuredResultsElement_r16__nr_ARFCN_r16),
    offsetof(struct NR_MeasuredResultsElement_r16__nr_ARFCN_r16, _asn_ctx),
    offsetof(struct NR_MeasuredResultsElement_r16__nr_ARFCN_r16, present),
    sizeof(((struct NR_MeasuredResultsElement_r16__nr_ARFCN_r16*) 0)->present),
    asn_MAP_nr_ARFCN_r16_tag2el_3,
    2, /* Count of tags in the map */
    0,
    0,
    -1 /* Extensions start */
};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_nr_ARFCN_r16_3 = {
        "nr-ARFCN-r16",
        "nr-ARFCN-r16",
        &asn_OP_CHOICE,
        0, /* No effective tags (pointer) */
        0, /* No effective tags (count) */
        0, /* No tags (pointer) */
        0, /* No tags (count) */
        {0, &asn_PER_type_nr_ARFCN_r16_constr_3, CHOICE_constraint},
        asn_MBR_nr_ARFCN_r16_3,
        2,                            /* Elements count */
        &asn_SPC_nr_ARFCN_r16_specs_3 /* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_MeasuredResultsElement_r16_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct NR_MeasuredResultsElement_r16, nr_PhysCellID_r16),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NR_PhysCellID_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nr-PhysCellID-r16"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct NR_MeasuredResultsElement_r16, nr_ARFCN_r16),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     +1, /* EXPLICIT tag at current level */
     &asn_DEF_nr_ARFCN_r16_3,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nr-ARFCN-r16"},
    {ATF_POINTER,
     6,
     offsetof(struct NR_MeasuredResultsElement_r16, nr_CellGlobalID_r16),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NCGI_r15,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nr-CellGlobalID-r16"},
    {ATF_POINTER,
     5,
     offsetof(struct NR_MeasuredResultsElement_r16, systemFrameNumber_r16),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BIT_STRING,
     0,
     {0, &asn_PER_memb_systemFrameNumber_r16_constr_7,
      memb_systemFrameNumber_r16_constraint_1},
     0,
     0, /* No default value */
     "systemFrameNumber-r16"},
    {ATF_POINTER,
     4,
     offsetof(struct NR_MeasuredResultsElement_r16, resultsSSB_Cell_r16),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_MeasQuantityResults_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "resultsSSB-Cell-r16"},
    {ATF_POINTER,
     3,
     offsetof(struct NR_MeasuredResultsElement_r16, resultsCSI_RS_Cell_r16),
     (ASN_TAG_CLASS_CONTEXT | (5 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_MeasQuantityResults_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "resultsCSI-RS-Cell-r16"},
    {ATF_POINTER,
     2,
     offsetof(struct NR_MeasuredResultsElement_r16, resultsSSB_Indexes_r16),
     (ASN_TAG_CLASS_CONTEXT | (6 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ResultsPerSSB_IndexList_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "resultsSSB-Indexes-r16"},
    {ATF_POINTER,
     1,
     offsetof(struct NR_MeasuredResultsElement_r16, resultsCSI_RS_Indexes_r16),
     (ASN_TAG_CLASS_CONTEXT | (7 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ResultsPerCSI_RS_IndexList_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "resultsCSI-RS-Indexes-r16"},
};
static const int asn_MAP_NR_MeasuredResultsElement_r16_oms_1[] = {2, 3, 4,
                                                                  5, 6, 7};
static const ber_tlv_tag_t asn_DEF_NR_MeasuredResultsElement_r16_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_NR_MeasuredResultsElement_r16_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* nr-PhysCellID-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* nr-ARFCN-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* nr-CellGlobalID-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0,
         0}, /* systemFrameNumber-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0}, /* resultsSSB-Cell-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0,
         0}, /* resultsCSI-RS-Cell-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0,
         0}, /* resultsSSB-Indexes-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0,
         0} /* resultsCSI-RS-Indexes-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_MeasuredResultsElement_r16_specs_1 = {
    sizeof(struct NR_MeasuredResultsElement_r16),
    offsetof(struct NR_MeasuredResultsElement_r16, _asn_ctx),
    asn_MAP_NR_MeasuredResultsElement_r16_tag2el_1,
    8,                                           /* Count of tags in the map */
    asn_MAP_NR_MeasuredResultsElement_r16_oms_1, /* Optional members */
    6,
    0, /* Root/Additions */
    8, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_MeasuredResultsElement_r16 = {
    "NR-MeasuredResultsElement-r16",
    "NR-MeasuredResultsElement-r16",
    &asn_OP_SEQUENCE,
    asn_DEF_NR_MeasuredResultsElement_r16_tags_1,
    sizeof(asn_DEF_NR_MeasuredResultsElement_r16_tags_1) /
        sizeof(asn_DEF_NR_MeasuredResultsElement_r16_tags_1[0]), /* 1 */
    asn_DEF_NR_MeasuredResultsElement_r16_tags_1, /* Same as above */
    sizeof(asn_DEF_NR_MeasuredResultsElement_r16_tags_1) /
        sizeof(asn_DEF_NR_MeasuredResultsElement_r16_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_NR_MeasuredResultsElement_r16_1,
    8,                                             /* Elements count */
    &asn_SPC_NR_MeasuredResultsElement_r16_specs_1 /* Additional specs */
};
