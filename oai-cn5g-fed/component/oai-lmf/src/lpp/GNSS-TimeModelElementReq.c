/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "GNSS-TimeModelElementReq.h"

static int memb_gnss_TO_IDsReq_constraint_1(
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

  if ((value >= 1 && value <= 15)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static asn_per_constraints_t asn_PER_memb_gnss_TO_IDsReq_constr_2 CC_NOTUSED = {
    {APC_CONSTRAINED, 4, 4, 1, 15} /* (1..15) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_GNSS_TimeModelElementReq_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct GNSS_TimeModelElementReq, gnss_TO_IDsReq),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_gnss_TO_IDsReq_constr_2,
      memb_gnss_TO_IDsReq_constraint_1},
     0,
     0, /* No default value */
     "gnss-TO-IDsReq"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct GNSS_TimeModelElementReq, deltaTreq),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BOOLEAN,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "deltaTreq"},
};
static const ber_tlv_tag_t asn_DEF_GNSS_TimeModelElementReq_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_GNSS_TimeModelElementReq_tag2el_1[] =
    {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* gnss-TO-IDsReq */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}  /* deltaTreq */
};
asn_SEQUENCE_specifics_t asn_SPC_GNSS_TimeModelElementReq_specs_1 = {
    sizeof(struct GNSS_TimeModelElementReq),
    offsetof(struct GNSS_TimeModelElementReq, _asn_ctx),
    asn_MAP_GNSS_TimeModelElementReq_tag2el_1,
    2, /* Count of tags in the map */
    0,
    0,
    0, /* Optional elements (not needed) */
    2, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GNSS_TimeModelElementReq = {
    "GNSS-TimeModelElementReq",
    "GNSS-TimeModelElementReq",
    &asn_OP_SEQUENCE,
    asn_DEF_GNSS_TimeModelElementReq_tags_1,
    sizeof(asn_DEF_GNSS_TimeModelElementReq_tags_1) /
        sizeof(asn_DEF_GNSS_TimeModelElementReq_tags_1[0]), /* 1 */
    asn_DEF_GNSS_TimeModelElementReq_tags_1,                /* Same as above */
    sizeof(asn_DEF_GNSS_TimeModelElementReq_tags_1) /
        sizeof(asn_DEF_GNSS_TimeModelElementReq_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_GNSS_TimeModelElementReq_1,
    2,                                        /* Elements count */
    &asn_SPC_GNSS_TimeModelElementReq_specs_1 /* Additional specs */
};
