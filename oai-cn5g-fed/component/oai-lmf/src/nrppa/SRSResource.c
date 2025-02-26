/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#include "SRSResource.h"

#include "ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int memb_startPosition_constraint_1(
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

  if ((value >= 0 && value <= 13)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_freqDomainPosition_constraint_1(
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

  if ((value >= 0 && value <= 67)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_freqDomainShift_constraint_1(
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

  if ((value >= 0 && value <= 268)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_c_SRS_constraint_1(
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

  if ((value >= 0 && value <= 63)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_b_SRS_constraint_1(
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

  if ((value >= 0 && value <= 3)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_b_hop_constraint_1(
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

  if ((value >= 0 && value <= 3)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_slotOffset_constraint_1(
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

  if ((value >= 0 && value <= 2559)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static int memb_sequenceId_constraint_1(
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

  if ((value >= 0 && value <= 1023)) {
    /* Constraint check succeeded */
    return 0;
  } else {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: constraint failed (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }
}

static asn_per_constraints_t asn_PER_type_nrofSRS_Ports_constr_3 CC_NOTUSED = {
    {APC_CONSTRAINED, 2, 2, 0, 2} /* (0..2) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_type_nrofSymbols_constr_9 CC_NOTUSED = {
    {APC_CONSTRAINED, 2, 2, 0, 2} /* (0..2) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_type_repetitionFactor_constr_13
    CC_NOTUSED = {
        {APC_CONSTRAINED, 2, 2, 0, 2} /* (0..2) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_type_groupOrSequenceHopping_constr_22
    CC_NOTUSED = {
        {APC_CONSTRAINED, 2, 2, 0, 2} /* (0..2) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_startPosition_constr_8 CC_NOTUSED = {
    {APC_CONSTRAINED, 4, 4, 0, 13} /* (0..13) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_freqDomainPosition_constr_17
    CC_NOTUSED = {
        {APC_CONSTRAINED, 7, 7, 0, 67} /* (0..67) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_freqDomainShift_constr_18
    CC_NOTUSED = {
        {APC_CONSTRAINED, 9, 9, 0, 268} /* (0..268) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_c_SRS_constr_19 CC_NOTUSED = {
    {APC_CONSTRAINED, 6, 6, 0, 63} /* (0..63) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_b_SRS_constr_20 CC_NOTUSED = {
    {APC_CONSTRAINED, 2, 2, 0, 3} /* (0..3) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_b_hop_constr_21 CC_NOTUSED = {
    {APC_CONSTRAINED, 2, 2, 0, 3} /* (0..3) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_slotOffset_constr_27 CC_NOTUSED = {
    {APC_CONSTRAINED, 12, 12, 0, 2559} /* (0..2559) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_sequenceId_constr_28 CC_NOTUSED = {
    {APC_CONSTRAINED, 10, 10, 0, 1023} /* (0..1023) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_nrofSRS_Ports_value2enum_3[] = {
    {0, 5, "port1"},
    {1, 6, "ports2"},
    {2, 6, "ports4"}};
static const unsigned int asn_MAP_nrofSRS_Ports_enum2value_3[] = {
    0, /* port1(0) */
    1, /* ports2(1) */
    2  /* ports4(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_nrofSRS_Ports_specs_3 = {
    asn_MAP_nrofSRS_Ports_value2enum_3, /* "tag" => N; sorted by tag */
    asn_MAP_nrofSRS_Ports_enum2value_3, /* N => "tag"; sorted by N */
    3,                                  /* Number of elements in the maps */
    0,                                  /* Enumeration is not extensible */
    1,                                  /* Strict enumeration */
    0,                                  /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_nrofSRS_Ports_tags_3[] = {
    (ASN_TAG_CLASS_CONTEXT | (1 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_nrofSRS_Ports_3 = {
        "nrofSRS-Ports",
        "nrofSRS-Ports",
        &asn_OP_NativeEnumerated,
        asn_DEF_nrofSRS_Ports_tags_3,
        sizeof(asn_DEF_nrofSRS_Ports_tags_3) /
                sizeof(asn_DEF_nrofSRS_Ports_tags_3[0]) -
            1,                        /* 1 */
        asn_DEF_nrofSRS_Ports_tags_3, /* Same as above */
        sizeof(asn_DEF_nrofSRS_Ports_tags_3) /
            sizeof(asn_DEF_nrofSRS_Ports_tags_3[0]), /* 2 */
        {0, &asn_PER_type_nrofSRS_Ports_constr_3, NativeEnumerated_constraint},
        0,
        0,                             /* Defined elsewhere */
        &asn_SPC_nrofSRS_Ports_specs_3 /* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_nrofSymbols_value2enum_9[] = {
    {0, 2, "n1"},
    {1, 2, "n2"},
    {2, 2, "n4"}};
static const unsigned int asn_MAP_nrofSymbols_enum2value_9[] = {
    0, /* n1(0) */
    1, /* n2(1) */
    2  /* n4(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_nrofSymbols_specs_9 = {
    asn_MAP_nrofSymbols_value2enum_9, /* "tag" => N; sorted by tag */
    asn_MAP_nrofSymbols_enum2value_9, /* N => "tag"; sorted by N */
    3,                                /* Number of elements in the maps */
    0,                                /* Enumeration is not extensible */
    1,                                /* Strict enumeration */
    0,                                /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_nrofSymbols_tags_9[] = {
    (ASN_TAG_CLASS_CONTEXT | (4 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_nrofSymbols_9 = {
        "nrofSymbols",
        "nrofSymbols",
        &asn_OP_NativeEnumerated,
        asn_DEF_nrofSymbols_tags_9,
        sizeof(asn_DEF_nrofSymbols_tags_9) /
                sizeof(asn_DEF_nrofSymbols_tags_9[0]) -
            1,                      /* 1 */
        asn_DEF_nrofSymbols_tags_9, /* Same as above */
        sizeof(asn_DEF_nrofSymbols_tags_9) /
            sizeof(asn_DEF_nrofSymbols_tags_9[0]), /* 2 */
        {0, &asn_PER_type_nrofSymbols_constr_9, NativeEnumerated_constraint},
        0,
        0,                           /* Defined elsewhere */
        &asn_SPC_nrofSymbols_specs_9 /* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_repetitionFactor_value2enum_13[] = {
    {0, 2, "n1"},
    {1, 2, "n2"},
    {2, 2, "n4"}};
static const unsigned int asn_MAP_repetitionFactor_enum2value_13[] = {
    0, /* n1(0) */
    1, /* n2(1) */
    2  /* n4(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_repetitionFactor_specs_13 = {
    asn_MAP_repetitionFactor_value2enum_13, /* "tag" => N; sorted by tag */
    asn_MAP_repetitionFactor_enum2value_13, /* N => "tag"; sorted by N */
    3,                                      /* Number of elements in the maps */
    0,                                      /* Enumeration is not extensible */
    1,                                      /* Strict enumeration */
    0,                                      /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_repetitionFactor_tags_13[] = {
    (ASN_TAG_CLASS_CONTEXT | (5 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_repetitionFactor_13 = {
        "repetitionFactor",
        "repetitionFactor",
        &asn_OP_NativeEnumerated,
        asn_DEF_repetitionFactor_tags_13,
        sizeof(asn_DEF_repetitionFactor_tags_13) /
                sizeof(asn_DEF_repetitionFactor_tags_13[0]) -
            1,                            /* 1 */
        asn_DEF_repetitionFactor_tags_13, /* Same as above */
        sizeof(asn_DEF_repetitionFactor_tags_13) /
            sizeof(asn_DEF_repetitionFactor_tags_13[0]), /* 2 */
        {0, &asn_PER_type_repetitionFactor_constr_13,
         NativeEnumerated_constraint},
        0,
        0,                                 /* Defined elsewhere */
        &asn_SPC_repetitionFactor_specs_13 /* Additional specs */
};

static const asn_INTEGER_enum_map_t
    asn_MAP_groupOrSequenceHopping_value2enum_22[] = {
        {0, 7, "neither"},
        {1, 12, "groupHopping"},
        {2, 15, "sequenceHopping"}};
static const unsigned int asn_MAP_groupOrSequenceHopping_enum2value_22[] = {
    1, /* groupHopping(1) */
    0, /* neither(0) */
    2  /* sequenceHopping(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_groupOrSequenceHopping_specs_22 = {
    asn_MAP_groupOrSequenceHopping_value2enum_22, /* "tag" => N; sorted by tag
                                                   */
    asn_MAP_groupOrSequenceHopping_enum2value_22, /* N => "tag"; sorted by N */
    3, /* Number of elements in the maps */
    0, /* Enumeration is not extensible */
    1, /* Strict enumeration */
    0, /* Native long size */
    0};
static const ber_tlv_tag_t asn_DEF_groupOrSequenceHopping_tags_22[] = {
    (ASN_TAG_CLASS_CONTEXT | (11 << 2)), (ASN_TAG_CLASS_UNIVERSAL | (10 << 2))};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_groupOrSequenceHopping_22 = {
        "groupOrSequenceHopping",
        "groupOrSequenceHopping",
        &asn_OP_NativeEnumerated,
        asn_DEF_groupOrSequenceHopping_tags_22,
        sizeof(asn_DEF_groupOrSequenceHopping_tags_22) /
                sizeof(asn_DEF_groupOrSequenceHopping_tags_22[0]) -
            1,                                  /* 1 */
        asn_DEF_groupOrSequenceHopping_tags_22, /* Same as above */
        sizeof(asn_DEF_groupOrSequenceHopping_tags_22) /
            sizeof(asn_DEF_groupOrSequenceHopping_tags_22[0]), /* 2 */
        {0, &asn_PER_type_groupOrSequenceHopping_constr_22,
         NativeEnumerated_constraint},
        0,
        0,                                       /* Defined elsewhere */
        &asn_SPC_groupOrSequenceHopping_specs_22 /* Additional specs */
};

asn_TYPE_member_t asn_MBR_SRSResource_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct SRSResource, sRSResourceID),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_SRSResourceID,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "sRSResourceID"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct SRSResource, nrofSRS_Ports),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_nrofSRS_Ports_3,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nrofSRS-Ports"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct SRSResource, transmissionComb),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     +1, /* EXPLICIT tag at current level */
     &asn_DEF_TransmissionComb,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "transmissionComb"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct SRSResource, startPosition),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_startPosition_constr_8, memb_startPosition_constraint_1},
     0,
     0, /* No default value */
     "startPosition"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct SRSResource, nrofSymbols),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_nrofSymbols_9,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nrofSymbols"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct SRSResource, repetitionFactor),
     (ASN_TAG_CLASS_CONTEXT | (5 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_repetitionFactor_13,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "repetitionFactor"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct SRSResource, freqDomainPosition),
     (ASN_TAG_CLASS_CONTEXT | (6 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_freqDomainPosition_constr_17,
      memb_freqDomainPosition_constraint_1},
     0,
     0, /* No default value */
     "freqDomainPosition"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct SRSResource, freqDomainShift),
     (ASN_TAG_CLASS_CONTEXT | (7 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_freqDomainShift_constr_18,
      memb_freqDomainShift_constraint_1},
     0,
     0, /* No default value */
     "freqDomainShift"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct SRSResource, c_SRS),
     (ASN_TAG_CLASS_CONTEXT | (8 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_c_SRS_constr_19, memb_c_SRS_constraint_1},
     0,
     0, /* No default value */
     "c-SRS"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct SRSResource, b_SRS),
     (ASN_TAG_CLASS_CONTEXT | (9 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_b_SRS_constr_20, memb_b_SRS_constraint_1},
     0,
     0, /* No default value */
     "b-SRS"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct SRSResource, b_hop),
     (ASN_TAG_CLASS_CONTEXT | (10 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_b_hop_constr_21, memb_b_hop_constraint_1},
     0,
     0, /* No default value */
     "b-hop"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct SRSResource, groupOrSequenceHopping),
     (ASN_TAG_CLASS_CONTEXT | (11 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_groupOrSequenceHopping_22,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "groupOrSequenceHopping"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct SRSResource, resourceType),
     (ASN_TAG_CLASS_CONTEXT | (12 << 2)),
     +1, /* EXPLICIT tag at current level */
     &asn_DEF_ResourceType,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "resourceType"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct SRSResource, slotOffset),
     (ASN_TAG_CLASS_CONTEXT | (13 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_slotOffset_constr_27, memb_slotOffset_constraint_1},
     0,
     0, /* No default value */
     "slotOffset"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct SRSResource, sequenceId),
     (ASN_TAG_CLASS_CONTEXT | (14 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger,
     0,
     {0, &asn_PER_memb_sequenceId_constr_28, memb_sequenceId_constraint_1},
     0,
     0, /* No default value */
     "sequenceId"},
    {ATF_POINTER,
     1,
     offsetof(struct SRSResource, iE_Extensions),
     (ASN_TAG_CLASS_CONTEXT | (15 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ProtocolExtensionContainer_2816P80,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "iE-Extensions"},
};
static const int asn_MAP_SRSResource_oms_1[]            = {15};
static const ber_tlv_tag_t asn_DEF_SRSResource_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_SRSResource_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0},   /* sRSResourceID */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0},   /* nrofSRS-Ports */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0},   /* transmissionComb */
    {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0},   /* startPosition */
    {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0},   /* nrofSymbols */
    {(ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0},   /* repetitionFactor */
    {(ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0},   /* freqDomainPosition */
    {(ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0},   /* freqDomainShift */
    {(ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0},   /* c-SRS */
    {(ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0},   /* b-SRS */
    {(ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0}, /* b-hop */
    {(ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0,
     0}, /* groupOrSequenceHopping */
    {(ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0}, /* resourceType */
    {(ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0}, /* slotOffset */
    {(ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0}, /* sequenceId */
    {(ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0}  /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_SRSResource_specs_1 = {
    sizeof(struct SRSResource),
    offsetof(struct SRSResource, _asn_ctx),
    asn_MAP_SRSResource_tag2el_1,
    16,                        /* Count of tags in the map */
    asn_MAP_SRSResource_oms_1, /* Optional members */
    1,
    0,  /* Root/Additions */
    16, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SRSResource = {
    "SRSResource",
    "SRSResource",
    &asn_OP_SEQUENCE,
    asn_DEF_SRSResource_tags_1,
    sizeof(asn_DEF_SRSResource_tags_1) /
        sizeof(asn_DEF_SRSResource_tags_1[0]), /* 1 */
    asn_DEF_SRSResource_tags_1,                /* Same as above */
    sizeof(asn_DEF_SRSResource_tags_1) /
        sizeof(asn_DEF_SRSResource_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_SRSResource_1,
    16,                          /* Elements count */
    &asn_SPC_SRSResource_specs_1 /* Additional specs */
};
