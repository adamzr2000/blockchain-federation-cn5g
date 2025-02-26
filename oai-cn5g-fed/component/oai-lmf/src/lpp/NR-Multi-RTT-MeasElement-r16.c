/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "NR-Multi-RTT-MeasElement-r16.h"

#include "NCGI-r15.h"
#include "NR-AdditionalPathList-r16.h"
#include "NR-Multi-RTT-AdditionalMeasurements-r16.h"
static int memb_k0_r16_constraint_8(
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

  if ((value >= 0 && value <= 1970049)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_k1_r16_constraint_8(
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

  if ((value >= 0 && value <= 985025)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_k2_r16_constraint_8(
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

  if ((value >= 0 && value <= 492513)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_k3_r16_constraint_8(
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

  if ((value >= 0 && value <= 246257)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_k4_r16_constraint_8(
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

  if ((value >= 0 && value <= 123129)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_k5_r16_constraint_8(
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

  if ((value >= 0 && value <= 61565)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

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

static int memb_nr_DL_PRS_RSRP_Result_r16_constraint_1(
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

  if ((value >= 0 && value <= 126)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static asn_per_constraints_t asn_PER_memb_k0_r16_constr_9 CC_NOTUSED = {
    {APC_CONSTRAINED, 21, -1, 0, 1970049} /* (0..1970049) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_k1_r16_constr_10 CC_NOTUSED = {
    {APC_CONSTRAINED, 20, -1, 0, 985025} /* (0..985025) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_k2_r16_constr_11 CC_NOTUSED = {
    {APC_CONSTRAINED, 19, -1, 0, 492513} /* (0..492513) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_k3_r16_constr_12 CC_NOTUSED = {
    {APC_CONSTRAINED, 18, -1, 0, 246257} /* (0..246257) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_k4_r16_constr_13 CC_NOTUSED = {
    {APC_CONSTRAINED, 17, -1, 0, 123129} /* (0..123129) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_k5_r16_constr_14 CC_NOTUSED = {
    {APC_CONSTRAINED, 16, 16, 0, 61565} /* (0..61565) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_type_nr_UE_RxTxTimeDiff_r16_constr_8
    CC_NOTUSED = {
        {APC_CONSTRAINED | APC_EXTENSIBLE, 3, 3, 0, 5} /* (0..5,...) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_dl_PRS_ID_r16_constr_2 CC_NOTUSED = {
    {APC_CONSTRAINED, 8, 8, 0, 255} /* (0..255) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_nr_DL_PRS_RSRP_Result_r16_constr_19
    CC_NOTUSED = {
        {APC_CONSTRAINED, 7, 7, 0, 126} /* (0..126) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static asn_TYPE_member_t asn_MBR_nr_UE_RxTxTimeDiff_r16_8[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct NR_Multi_RTT_MeasElement_r16__nr_UE_RxTxTimeDiff_r16,
         choice.k0_r16),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_k0_r16_constr_9, memb_k0_r16_constraint_8},
     0,
     0, /* No default value */
     "k0-r16"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct NR_Multi_RTT_MeasElement_r16__nr_UE_RxTxTimeDiff_r16,
         choice.k1_r16),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_k1_r16_constr_10, memb_k1_r16_constraint_8},
     0,
     0, /* No default value */
     "k1-r16"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct NR_Multi_RTT_MeasElement_r16__nr_UE_RxTxTimeDiff_r16,
         choice.k2_r16),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_k2_r16_constr_11, memb_k2_r16_constraint_8},
     0,
     0, /* No default value */
     "k2-r16"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct NR_Multi_RTT_MeasElement_r16__nr_UE_RxTxTimeDiff_r16,
         choice.k3_r16),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_k3_r16_constr_12, memb_k3_r16_constraint_8},
     0,
     0, /* No default value */
     "k3-r16"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct NR_Multi_RTT_MeasElement_r16__nr_UE_RxTxTimeDiff_r16,
         choice.k4_r16),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_k4_r16_constr_13, memb_k4_r16_constraint_8},
     0,
     0, /* No default value */
     "k4-r16"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct NR_Multi_RTT_MeasElement_r16__nr_UE_RxTxTimeDiff_r16,
         choice.k5_r16),
     (ASN_TAG_CLASS_CONTEXT | (5 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_k5_r16_constr_14, memb_k5_r16_constraint_8},
     0,
     0, /* No default value */
     "k5-r16"},
};
static const asn_TYPE_tag2member_t asn_MAP_nr_UE_RxTxTimeDiff_r16_tag2el_8[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* k0-r16 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* k1-r16 */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* k2-r16 */
    {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}, /* k3-r16 */
    {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0}, /* k4-r16 */
    {(ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0}  /* k5-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_nr_UE_RxTxTimeDiff_r16_specs_8 = {
    sizeof(struct NR_Multi_RTT_MeasElement_r16__nr_UE_RxTxTimeDiff_r16),
    offsetof(
        struct NR_Multi_RTT_MeasElement_r16__nr_UE_RxTxTimeDiff_r16, _asn_ctx),
    offsetof(
        struct NR_Multi_RTT_MeasElement_r16__nr_UE_RxTxTimeDiff_r16, present),
    sizeof(((struct NR_Multi_RTT_MeasElement_r16__nr_UE_RxTxTimeDiff_r16*) 0)
               ->present),
    asn_MAP_nr_UE_RxTxTimeDiff_r16_tag2el_8,
    6, /* Count of tags in the map */
    0,
    0,
    6 /* Extensions start */
};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_nr_UE_RxTxTimeDiff_r16_8 = {
        "nr-UE-RxTxTimeDiff-r16",
        "nr-UE-RxTxTimeDiff-r16",
        &asn_OP_CHOICE,
        0, /* No effective tags (pointer) */
        0, /* No effective tags (count) */
        0, /* No tags (pointer) */
        0, /* No tags (count) */
        {0, &asn_PER_type_nr_UE_RxTxTimeDiff_r16_constr_8, CHOICE_constraint},
        asn_MBR_nr_UE_RxTxTimeDiff_r16_8,
        6,                                      /* Elements count */
        &asn_SPC_nr_UE_RxTxTimeDiff_r16_specs_8 /* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_Multi_RTT_MeasElement_r16_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct NR_Multi_RTT_MeasElement_r16, dl_PRS_ID_r16),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_dl_PRS_ID_r16_constr_2, memb_dl_PRS_ID_r16_constraint_1},
     0,
     0, /* No default value */
     "dl-PRS-ID-r16"},
    {ATF_POINTER,
     5,
     offsetof(struct NR_Multi_RTT_MeasElement_r16, nr_PhysCellID_r16),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NR_PhysCellID_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nr-PhysCellID-r16"},
    {ATF_POINTER,
     4,
     offsetof(struct NR_Multi_RTT_MeasElement_r16, nr_CellGlobalID_r16),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NCGI_r15,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nr-CellGlobalID-r16"},
    {ATF_POINTER,
     3,
     offsetof(struct NR_Multi_RTT_MeasElement_r16, nr_ARFCN_r16),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ARFCN_ValueNR_r15,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nr-ARFCN-r16"},
    {ATF_POINTER,
     2,
     offsetof(struct NR_Multi_RTT_MeasElement_r16, nr_DL_PRS_ResourceID_r16),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NR_DL_PRS_ResourceID_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nr-DL-PRS-ResourceID-r16"},
    {ATF_POINTER,
     1,
     offsetof(struct NR_Multi_RTT_MeasElement_r16, nr_DL_PRS_ResourceSetID_r16),
     (ASN_TAG_CLASS_CONTEXT | (5 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NR_DL_PRS_ResourceSetID_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nr-DL-PRS-ResourceSetID-r16"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct NR_Multi_RTT_MeasElement_r16, nr_UE_RxTxTimeDiff_r16),
     (ASN_TAG_CLASS_CONTEXT | (6 << 2)),
     +1, /* EXPLICIT tag at current level */
     &asn_DEF_nr_UE_RxTxTimeDiff_r16_8,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nr-UE-RxTxTimeDiff-r16"},
    {ATF_POINTER,
     1,
     offsetof(struct NR_Multi_RTT_MeasElement_r16, nr_AdditionalPathList_r16),
     (ASN_TAG_CLASS_CONTEXT | (7 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NR_AdditionalPathList_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nr-AdditionalPathList-r16"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct NR_Multi_RTT_MeasElement_r16, nr_TimeStamp_r16),
     (ASN_TAG_CLASS_CONTEXT | (8 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NR_TimeStamp_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nr-TimeStamp-r16"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct NR_Multi_RTT_MeasElement_r16, nr_TimingQuality_r16),
     (ASN_TAG_CLASS_CONTEXT | (9 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NR_TimingQuality_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nr-TimingQuality-r16"},
    {ATF_POINTER,
     2,
     offsetof(struct NR_Multi_RTT_MeasElement_r16, nr_DL_PRS_RSRP_Result_r16),
     (ASN_TAG_CLASS_CONTEXT | (10 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_nr_DL_PRS_RSRP_Result_r16_constr_19,
      memb_nr_DL_PRS_RSRP_Result_r16_constraint_1},
     0,
     0, /* No default value */
     "nr-DL-PRS-RSRP-Result-r16"},
    {ATF_POINTER,
     1,
     offsetof(
         struct NR_Multi_RTT_MeasElement_r16,
         nr_Multi_RTT_AdditionalMeasurements_r16),
     (ASN_TAG_CLASS_CONTEXT | (11 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NR_Multi_RTT_AdditionalMeasurements_r16,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nr-Multi-RTT-AdditionalMeasurements-r16"},
};
static const int asn_MAP_NR_Multi_RTT_MeasElement_r16_oms_1[] = {1, 2, 3,  4,
                                                                 5, 7, 10, 11};
static const ber_tlv_tag_t asn_DEF_NR_Multi_RTT_MeasElement_r16_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_NR_Multi_RTT_MeasElement_r16_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* dl-PRS-ID-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* nr-PhysCellID-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* nr-CellGlobalID-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}, /* nr-ARFCN-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0,
         0}, /* nr-DL-PRS-ResourceID-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0,
         0}, /* nr-DL-PRS-ResourceSetID-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0,
         0}, /* nr-UE-RxTxTimeDiff-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0,
         0}, /* nr-AdditionalPathList-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0}, /* nr-TimeStamp-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0,
         0}, /* nr-TimingQuality-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0,
         0}, /* nr-DL-PRS-RSRP-Result-r16 */
        {(ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0,
         0} /* nr-Multi-RTT-AdditionalMeasurements-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_Multi_RTT_MeasElement_r16_specs_1 = {
    sizeof(struct NR_Multi_RTT_MeasElement_r16),
    offsetof(struct NR_Multi_RTT_MeasElement_r16, _asn_ctx),
    asn_MAP_NR_Multi_RTT_MeasElement_r16_tag2el_1,
    12,                                         /* Count of tags in the map */
    asn_MAP_NR_Multi_RTT_MeasElement_r16_oms_1, /* Optional members */
    8,
    0,  /* Root/Additions */
    12, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_Multi_RTT_MeasElement_r16 = {
    "NR-Multi-RTT-MeasElement-r16",
    "NR-Multi-RTT-MeasElement-r16",
    &asn_OP_SEQUENCE,
    asn_DEF_NR_Multi_RTT_MeasElement_r16_tags_1,
    sizeof(asn_DEF_NR_Multi_RTT_MeasElement_r16_tags_1) /
        sizeof(asn_DEF_NR_Multi_RTT_MeasElement_r16_tags_1[0]), /* 1 */
    asn_DEF_NR_Multi_RTT_MeasElement_r16_tags_1, /* Same as above */
    sizeof(asn_DEF_NR_Multi_RTT_MeasElement_r16_tags_1) /
        sizeof(asn_DEF_NR_Multi_RTT_MeasElement_r16_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_NR_Multi_RTT_MeasElement_r16_1,
    12,                                           /* Elements count */
    &asn_SPC_NR_Multi_RTT_MeasElement_r16_specs_1 /* Additional specs */
};
