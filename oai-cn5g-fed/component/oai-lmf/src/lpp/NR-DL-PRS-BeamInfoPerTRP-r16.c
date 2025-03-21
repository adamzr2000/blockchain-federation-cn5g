/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "NR-DL-PRS-BeamInfoPerTRP-r16.h"

#include "NCGI-r15.h"
#include "LCS-GCS-TranslationParameter-r16.h"
#include "DL-PRS-BeamInfoSet-r16.h"
static int memb_dl_PRS_ID_r16_constraint_1(
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

  if ((value >= 0 && value <= 255)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_associated_DL_PRS_ID_r16_constraint_1(
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

  if ((value >= 0 && value <= 255)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static asn_per_constraints_t asn_PER_memb_dl_PRS_ID_r16_constr_2 CC_NOTUSED = {
    {APC_CONSTRAINED, 8, 8, 0, 255} /* (0..255) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_associated_DL_PRS_ID_r16_constr_6
    CC_NOTUSED = {
        {APC_CONSTRAINED, 8, 8, 0, 255} /* (0..255) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_NR_DL_PRS_BeamInfoPerTRP_r16_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct NR_DL_PRS_BeamInfoPerTRP_r16, dl_PRS_ID_r16),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_dl_PRS_ID_r16_constr_2, memb_dl_PRS_ID_r16_constraint_1},
     0,
     0, /* No default value */
     "dl-PRS-ID-r16"},
    {ATF_POINTER,
     6,
     offsetof(struct NR_DL_PRS_BeamInfoPerTRP_r16, nr_PhysCellID_r16),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NR_PhysCellID_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nr-PhysCellID-r16"},
    {ATF_POINTER,
     5,
     offsetof(struct NR_DL_PRS_BeamInfoPerTRP_r16, nr_CellGlobalID_r16),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NCGI_r15,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nr-CellGlobalID-r16"},
    {ATF_POINTER,
     4,
     offsetof(struct NR_DL_PRS_BeamInfoPerTRP_r16, nr_ARFCN_r16),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ARFCN_ValueNR_r15,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nr-ARFCN-r16"},
    {ATF_POINTER,
     3,
     offsetof(struct NR_DL_PRS_BeamInfoPerTRP_r16, associated_DL_PRS_ID_r16),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_associated_DL_PRS_ID_r16_constr_6,
      memb_associated_DL_PRS_ID_r16_constraint_1},
     0,
     0, /* No default value */
     "associated-DL-PRS-ID-r16"},
    {ATF_POINTER,
     2,
     offsetof(
         struct NR_DL_PRS_BeamInfoPerTRP_r16, lcs_GCS_TranslationParameter_r16),
     (ASN_TAG_CLASS_CONTEXT | (5 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_LCS_GCS_TranslationParameter_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "lcs-GCS-TranslationParameter-r16"},
    {ATF_POINTER,
     1,
     offsetof(struct NR_DL_PRS_BeamInfoPerTRP_r16, dl_PRS_BeamInfoSet_r16),
     (ASN_TAG_CLASS_CONTEXT | (6 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_DL_PRS_BeamInfoSet_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "dl-PRS-BeamInfoSet-r16"},
};
static const int asn_MAP_NR_DL_PRS_BeamInfoPerTRP_r16_oms_1[] = {1, 2, 3,
                                                                 4, 5, 6};
static const ber_tlv_tag_t asn_DEF_NR_DL_PRS_BeamInfoPerTRP_r16_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_NR_DL_PRS_BeamInfoPerTRP_r16_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* dl-PRS-ID-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* nr-PhysCellID-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* nr-CellGlobalID-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}, /* nr-ARFCN-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0,
         0}, /* associated-DL-PRS-ID-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0,
         0}, /* lcs-GCS-TranslationParameter-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0,
         0} /* dl-PRS-BeamInfoSet-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_DL_PRS_BeamInfoPerTRP_r16_specs_1 = {
    sizeof(struct NR_DL_PRS_BeamInfoPerTRP_r16),
    offsetof(struct NR_DL_PRS_BeamInfoPerTRP_r16, _asn_ctx),
    asn_MAP_NR_DL_PRS_BeamInfoPerTRP_r16_tag2el_1,
    7,                                          /* Count of tags in the map */
    asn_MAP_NR_DL_PRS_BeamInfoPerTRP_r16_oms_1, /* Optional members */
    6,
    0, /* Root/Additions */
    7, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_DL_PRS_BeamInfoPerTRP_r16 = {
    "NR-DL-PRS-BeamInfoPerTRP-r16",
    "NR-DL-PRS-BeamInfoPerTRP-r16",
    &asn_OP_SEQUENCE,
    asn_DEF_NR_DL_PRS_BeamInfoPerTRP_r16_tags_1,
    sizeof(asn_DEF_NR_DL_PRS_BeamInfoPerTRP_r16_tags_1) /
        sizeof(asn_DEF_NR_DL_PRS_BeamInfoPerTRP_r16_tags_1[0]), /* 1 */
    asn_DEF_NR_DL_PRS_BeamInfoPerTRP_r16_tags_1, /* Same as above */
    sizeof(asn_DEF_NR_DL_PRS_BeamInfoPerTRP_r16_tags_1) /
        sizeof(asn_DEF_NR_DL_PRS_BeamInfoPerTRP_r16_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_NR_DL_PRS_BeamInfoPerTRP_r16_1,
    7,                                            /* Elements count */
    &asn_SPC_NR_DL_PRS_BeamInfoPerTRP_r16_specs_1 /* Additional specs */
};
