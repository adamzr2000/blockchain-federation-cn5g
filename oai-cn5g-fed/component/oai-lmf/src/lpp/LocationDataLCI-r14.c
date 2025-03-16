/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#include "LocationDataLCI-r14.h"

static int memb_latitudeUncertainty_r14_constraint_1(
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

  if ((size == 6)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_latitude_r14_constraint_1(
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

  if ((size == 34)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_longitudeUncertainty_r14_constraint_1(
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

  if ((size == 6)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_longitude_r14_constraint_1(
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

  if ((size == 34)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_altitudeUncertainty_r14_constraint_1(
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

  if ((size == 6)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_altitude_r14_constraint_1(
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

  if ((size == 30)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_datum_r14_constraint_1(
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

  if ((size == 8)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static asn_per_constraints_t asn_PER_memb_latitudeUncertainty_r14_constr_2
    CC_NOTUSED = {
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        {APC_CONSTRAINED, 0, 0, 6, 6} /* (SIZE(6..6)) */,
        0,
        0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_latitude_r14_constr_3 CC_NOTUSED = {
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    {APC_CONSTRAINED, 0, 0, 34, 34} /* (SIZE(34..34)) */,
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_longitudeUncertainty_r14_constr_4
    CC_NOTUSED = {
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        {APC_CONSTRAINED, 0, 0, 6, 6} /* (SIZE(6..6)) */,
        0,
        0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_longitude_r14_constr_5 CC_NOTUSED = {
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    {APC_CONSTRAINED, 0, 0, 34, 34} /* (SIZE(34..34)) */,
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_altitudeUncertainty_r14_constr_6
    CC_NOTUSED = {
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        {APC_CONSTRAINED, 0, 0, 6, 6} /* (SIZE(6..6)) */,
        0,
        0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_altitude_r14_constr_7 CC_NOTUSED = {
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    {APC_CONSTRAINED, 0, 0, 30, 30} /* (SIZE(30..30)) */,
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_datum_r14_constr_8 CC_NOTUSED = {
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    {APC_CONSTRAINED, 0, 0, 8, 8} /* (SIZE(8..8)) */,
    0,
    0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_LocationDataLCI_r14_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct LocationDataLCI_r14, latitudeUncertainty_r14),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BIT_STRING,
     0,
     {0, &asn_PER_memb_latitudeUncertainty_r14_constr_2,
      memb_latitudeUncertainty_r14_constraint_1},
     0,
     0, /* No default value */
     "latitudeUncertainty-r14"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct LocationDataLCI_r14, latitude_r14),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BIT_STRING,
     0,
     {0, &asn_PER_memb_latitude_r14_constr_3, memb_latitude_r14_constraint_1},
     0,
     0, /* No default value */
     "latitude-r14"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct LocationDataLCI_r14, longitudeUncertainty_r14),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BIT_STRING,
     0,
     {0, &asn_PER_memb_longitudeUncertainty_r14_constr_4,
      memb_longitudeUncertainty_r14_constraint_1},
     0,
     0, /* No default value */
     "longitudeUncertainty-r14"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct LocationDataLCI_r14, longitude_r14),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BIT_STRING,
     0,
     {0, &asn_PER_memb_longitude_r14_constr_5, memb_longitude_r14_constraint_1},
     0,
     0, /* No default value */
     "longitude-r14"},
    {ATF_POINTER,
     2,
     offsetof(struct LocationDataLCI_r14, altitudeUncertainty_r14),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BIT_STRING,
     0,
     {0, &asn_PER_memb_altitudeUncertainty_r14_constr_6,
      memb_altitudeUncertainty_r14_constraint_1},
     0,
     0, /* No default value */
     "altitudeUncertainty-r14"},
    {ATF_POINTER,
     1,
     offsetof(struct LocationDataLCI_r14, altitude_r14),
     (ASN_TAG_CLASS_CONTEXT | (5 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BIT_STRING,
     0,
     {0, &asn_PER_memb_altitude_r14_constr_7, memb_altitude_r14_constraint_1},
     0,
     0, /* No default value */
     "altitude-r14"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct LocationDataLCI_r14, datum_r14),
     (ASN_TAG_CLASS_CONTEXT | (6 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_BIT_STRING,
     0,
     {0, &asn_PER_memb_datum_r14_constr_8, memb_datum_r14_constraint_1},
     0,
     0, /* No default value */
     "datum-r14"},
};
static const int asn_MAP_LocationDataLCI_r14_oms_1[]            = {4, 5};
static const ber_tlv_tag_t asn_DEF_LocationDataLCI_r14_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_LocationDataLCI_r14_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* latitudeUncertainty-r14 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* latitude-r14 */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0,
     0}, /* longitudeUncertainty-r14 */
    {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}, /* longitude-r14 */
    {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0}, /* altitudeUncertainty-r14 */
    {(ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0}, /* altitude-r14 */
    {(ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0}  /* datum-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LocationDataLCI_r14_specs_1 = {
    sizeof(struct LocationDataLCI_r14),
    offsetof(struct LocationDataLCI_r14, _asn_ctx),
    asn_MAP_LocationDataLCI_r14_tag2el_1,
    7,                                 /* Count of tags in the map */
    asn_MAP_LocationDataLCI_r14_oms_1, /* Optional members */
    2,
    0, /* Root/Additions */
    7, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LocationDataLCI_r14 = {
    "LocationDataLCI-r14",
    "LocationDataLCI-r14",
    &asn_OP_SEQUENCE,
    asn_DEF_LocationDataLCI_r14_tags_1,
    sizeof(asn_DEF_LocationDataLCI_r14_tags_1) /
        sizeof(asn_DEF_LocationDataLCI_r14_tags_1[0]), /* 1 */
    asn_DEF_LocationDataLCI_r14_tags_1,                /* Same as above */
    sizeof(asn_DEF_LocationDataLCI_r14_tags_1) /
        sizeof(asn_DEF_LocationDataLCI_r14_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_LocationDataLCI_r14_1,
    7,                                   /* Elements count */
    &asn_SPC_LocationDataLCI_r14_specs_1 /* Additional specs */
};
