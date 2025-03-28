/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-PDU-Descriptions"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#include "InitiatingMessage.h"

static const long asn_VAL_1_id_e_CIDMeasurementInitiation                = 2;
static const long asn_VAL_1_reject                                       = 0;
static const long asn_VAL_2_id_oTDOAInformationExchange                  = 6;
static const long asn_VAL_2_reject                                       = 0;
static const long asn_VAL_3_id_positioningInformationExchange            = 9;
static const long asn_VAL_3_reject                                       = 0;
static const long asn_VAL_4_id_Measurement                               = 11;
static const long asn_VAL_4_reject                                       = 0;
static const long asn_VAL_5_id_tRPInformationExchange                    = 16;
static const long asn_VAL_5_reject                                       = 0;
static const long asn_VAL_6_id_positioningActivation                     = 17;
static const long asn_VAL_6_reject                                       = 0;
static const long asn_VAL_7_id_e_CIDMeasurementFailureIndication         = 3;
static const long asn_VAL_7_ignore                                       = 1;
static const long asn_VAL_8_id_e_CIDMeasurementReport                    = 4;
static const long asn_VAL_8_ignore                                       = 1;
static const long asn_VAL_9_id_e_CIDMeasurementTermination               = 5;
static const long asn_VAL_9_reject                                       = 0;
static const long asn_VAL_10_id_errorIndication                          = 0;
static const long asn_VAL_10_ignore                                      = 1;
static const long asn_VAL_11_id_privateMessage                           = 1;
static const long asn_VAL_11_ignore                                      = 1;
static const long asn_VAL_12_id_assistanceInformationControl             = 7;
static const long asn_VAL_12_reject                                      = 0;
static const long asn_VAL_13_id_assistanceInformationFeedback            = 8;
static const long asn_VAL_13_reject                                      = 0;
static const long asn_VAL_14_id_positioningInformationUpdate             = 10;
static const long asn_VAL_14_ignore                                      = 1;
static const long asn_VAL_15_id_MeasurementReport                        = 12;
static const long asn_VAL_15_ignore                                      = 1;
static const long asn_VAL_16_id_MeasurementUpdate                        = 13;
static const long asn_VAL_16_ignore                                      = 1;
static const long asn_VAL_17_id_MeasurementAbort                         = 14;
static const long asn_VAL_17_ignore                                      = 1;
static const long asn_VAL_18_id_MeasurementFailureIndication             = 15;
static const long asn_VAL_18_ignore                                      = 1;
static const long asn_VAL_19_id_positioningDeactivation                  = 18;
static const long asn_VAL_19_ignore                                      = 1;
static const asn_ioc_cell_t asn_IOS_NRPPA_ELEMENTARY_PROCEDURES_1_rows[] = {
    {"&InitiatingMessage", aioc__type,
     &asn_DEF_E_CIDMeasurementInitiationRequest},
    {"&SuccessfulOutcome", aioc__type,
     &asn_DEF_E_CIDMeasurementInitiationResponse},
    {"&UnsuccessfulOutcome", aioc__type,
     &asn_DEF_E_CIDMeasurementInitiationFailure},
    {"&procedureCode", aioc__value, &asn_DEF_ProcedureCode,
     &asn_VAL_1_id_e_CIDMeasurementInitiation},
    {"&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_1_reject},
    {"&InitiatingMessage", aioc__type, &asn_DEF_OTDOAInformationRequest},
    {"&SuccessfulOutcome", aioc__type, &asn_DEF_OTDOAInformationResponse},
    {"&UnsuccessfulOutcome", aioc__type, &asn_DEF_OTDOAInformationFailure},
    {"&procedureCode", aioc__value, &asn_DEF_ProcedureCode,
     &asn_VAL_2_id_oTDOAInformationExchange},
    {"&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_2_reject},
    {"&InitiatingMessage", aioc__type, &asn_DEF_PositioningInformationRequest},
    {"&SuccessfulOutcome", aioc__type, &asn_DEF_PositioningInformationResponse},
    {"&UnsuccessfulOutcome", aioc__type,
     &asn_DEF_PositioningInformationFailure},
    {"&procedureCode", aioc__value, &asn_DEF_ProcedureCode,
     &asn_VAL_3_id_positioningInformationExchange},
    {"&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_3_reject},
    {"&InitiatingMessage", aioc__type, &asn_DEF_MeasurementRequest},
    {"&SuccessfulOutcome", aioc__type, &asn_DEF_MeasurementResponse},
    {"&UnsuccessfulOutcome", aioc__type, &asn_DEF_MeasurementFailure},
    {"&procedureCode", aioc__value, &asn_DEF_ProcedureCode,
     &asn_VAL_4_id_Measurement},
    {"&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_4_reject},
    {"&InitiatingMessage", aioc__type, &asn_DEF_TRPInformationRequest},
    {"&SuccessfulOutcome", aioc__type, &asn_DEF_TRPInformationResponse},
    {"&UnsuccessfulOutcome", aioc__type, &asn_DEF_TRPInformationFailure},
    {"&procedureCode", aioc__value, &asn_DEF_ProcedureCode,
     &asn_VAL_5_id_tRPInformationExchange},
    {"&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_5_reject},
    {"&InitiatingMessage", aioc__type, &asn_DEF_PositioningActivationRequest},
    {"&SuccessfulOutcome", aioc__type, &asn_DEF_PositioningActivationResponse},
    {"&UnsuccessfulOutcome", aioc__type, &asn_DEF_PositioningActivationFailure},
    {"&procedureCode", aioc__value, &asn_DEF_ProcedureCode,
     &asn_VAL_6_id_positioningActivation},
    {"&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_6_reject},
    {"&InitiatingMessage", aioc__type,
     &asn_DEF_E_CIDMeasurementFailureIndication},
    {
        "&SuccessfulOutcome",
    },
    {
        "&UnsuccessfulOutcome",
    },
    {"&procedureCode", aioc__value, &asn_DEF_ProcedureCode,
     &asn_VAL_7_id_e_CIDMeasurementFailureIndication},
    {"&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_7_ignore},
    {"&InitiatingMessage", aioc__type, &asn_DEF_E_CIDMeasurementReport},
    {
        "&SuccessfulOutcome",
    },
    {
        "&UnsuccessfulOutcome",
    },
    {"&procedureCode", aioc__value, &asn_DEF_ProcedureCode,
     &asn_VAL_8_id_e_CIDMeasurementReport},
    {"&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_8_ignore},
    {"&InitiatingMessage", aioc__type,
     &asn_DEF_E_CIDMeasurementTerminationCommand},
    {
        "&SuccessfulOutcome",
    },
    {
        "&UnsuccessfulOutcome",
    },
    {"&procedureCode", aioc__value, &asn_DEF_ProcedureCode,
     &asn_VAL_9_id_e_CIDMeasurementTermination},
    {"&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_9_reject},
    {"&InitiatingMessage", aioc__type, &asn_DEF_ErrorIndication},
    {
        "&SuccessfulOutcome",
    },
    {
        "&UnsuccessfulOutcome",
    },
    {"&procedureCode", aioc__value, &asn_DEF_ProcedureCode,
     &asn_VAL_10_id_errorIndication},
    {"&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_10_ignore},
    {"&InitiatingMessage", aioc__type, &asn_DEF_PrivateMessage},
    {
        "&SuccessfulOutcome",
    },
    {
        "&UnsuccessfulOutcome",
    },
    {"&procedureCode", aioc__value, &asn_DEF_ProcedureCode,
     &asn_VAL_11_id_privateMessage},
    {"&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_11_ignore},
    {"&InitiatingMessage", aioc__type, &asn_DEF_AssistanceInformationControl},
    {
        "&SuccessfulOutcome",
    },
    {
        "&UnsuccessfulOutcome",
    },
    {"&procedureCode", aioc__value, &asn_DEF_ProcedureCode,
     &asn_VAL_12_id_assistanceInformationControl},
    {"&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_12_reject},
    {"&InitiatingMessage", aioc__type, &asn_DEF_AssistanceInformationFeedback},
    {
        "&SuccessfulOutcome",
    },
    {
        "&UnsuccessfulOutcome",
    },
    {"&procedureCode", aioc__value, &asn_DEF_ProcedureCode,
     &asn_VAL_13_id_assistanceInformationFeedback},
    {"&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_13_reject},
    {"&InitiatingMessage", aioc__type, &asn_DEF_PositioningInformationUpdate},
    {
        "&SuccessfulOutcome",
    },
    {
        "&UnsuccessfulOutcome",
    },
    {"&procedureCode", aioc__value, &asn_DEF_ProcedureCode,
     &asn_VAL_14_id_positioningInformationUpdate},
    {"&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_14_ignore},
    {"&InitiatingMessage", aioc__type, &asn_DEF_MeasurementReport},
    {
        "&SuccessfulOutcome",
    },
    {
        "&UnsuccessfulOutcome",
    },
    {"&procedureCode", aioc__value, &asn_DEF_ProcedureCode,
     &asn_VAL_15_id_MeasurementReport},
    {"&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_15_ignore},
    {"&InitiatingMessage", aioc__type, &asn_DEF_MeasurementUpdate},
    {
        "&SuccessfulOutcome",
    },
    {
        "&UnsuccessfulOutcome",
    },
    {"&procedureCode", aioc__value, &asn_DEF_ProcedureCode,
     &asn_VAL_16_id_MeasurementUpdate},
    {"&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_16_ignore},
    {"&InitiatingMessage", aioc__type, &asn_DEF_MeasurementAbort},
    {
        "&SuccessfulOutcome",
    },
    {
        "&UnsuccessfulOutcome",
    },
    {"&procedureCode", aioc__value, &asn_DEF_ProcedureCode,
     &asn_VAL_17_id_MeasurementAbort},
    {"&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_17_ignore},
    {"&InitiatingMessage", aioc__type, &asn_DEF_MeasurementFailureIndication},
    {
        "&SuccessfulOutcome",
    },
    {
        "&UnsuccessfulOutcome",
    },
    {"&procedureCode", aioc__value, &asn_DEF_ProcedureCode,
     &asn_VAL_18_id_MeasurementFailureIndication},
    {"&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_18_ignore},
    {"&InitiatingMessage", aioc__type, &asn_DEF_PositioningDeactivation},
    {
        "&SuccessfulOutcome",
    },
    {
        "&UnsuccessfulOutcome",
    },
    {"&procedureCode", aioc__value, &asn_DEF_ProcedureCode,
     &asn_VAL_19_id_positioningDeactivation},
    {"&criticality", aioc__value, &asn_DEF_Criticality, &asn_VAL_19_ignore}};
static const asn_ioc_set_t asn_IOS_NRPPA_ELEMENTARY_PROCEDURES_1[] = {
    {19, 5, asn_IOS_NRPPA_ELEMENTARY_PROCEDURES_1_rows}};
static int memb_procedureCode_constraint_1(
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

static asn_type_selector_result_t select_InitiatingMessage_criticality_type(
    const asn_TYPE_descriptor_t* parent_type, const void* parent_sptr) {
  asn_type_selector_result_t result = {0, 0};
  const asn_ioc_set_t* itable       = asn_IOS_NRPPA_ELEMENTARY_PROCEDURES_1;
  size_t constraining_column        = 3; /* &procedureCode */
  size_t for_column                 = 4; /* &criticality */
  size_t row, presence_index = 0;
  const long* constraining_value =
      (const long*) ((const char*) parent_sptr + offsetof(struct InitiatingMessage, procedureCode));

  for (row = 0; row < itable->rows_count; row++) {
    const asn_ioc_cell_t* constraining_cell =
        &itable->rows[row * itable->columns_count + constraining_column];
    const asn_ioc_cell_t* type_cell =
        &itable->rows[row * itable->columns_count + for_column];

    if (type_cell->cell_kind == aioc__undefined) continue;

    presence_index++;
    if (constraining_cell->type_descriptor->op->compare_struct(
            constraining_cell->type_descriptor, constraining_value,
            constraining_cell->value_sptr) == 0) {
      result.type_descriptor = type_cell->type_descriptor;
      result.presence_index  = presence_index;
      break;
    }
  }

  return result;
}

static int memb_criticality_constraint_1(
    const asn_TYPE_descriptor_t* td, const void* sptr,
    asn_app_constraint_failed_f* ctfailcb, void* app_key) {
  if (!sptr) {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: value not given (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }

  if (1 /* No applicable constraints whatsoever */) {
    /* Nothing is here. See below */
  }

  return td->encoding_constraints.general_constraints(
      td, sptr, ctfailcb, app_key);
}

static asn_type_selector_result_t select_InitiatingMessage_value_type(
    const asn_TYPE_descriptor_t* parent_type, const void* parent_sptr) {
  asn_type_selector_result_t result = {0, 0};
  const asn_ioc_set_t* itable       = asn_IOS_NRPPA_ELEMENTARY_PROCEDURES_1;
  size_t constraining_column        = 3; /* &procedureCode */
  size_t for_column                 = 0; /* &InitiatingMessage */
  size_t row, presence_index = 0;
  const long* constraining_value =
      (const long*) ((const char*) parent_sptr + offsetof(struct InitiatingMessage, procedureCode));

  for (row = 0; row < itable->rows_count; row++) {
    const asn_ioc_cell_t* constraining_cell =
        &itable->rows[row * itable->columns_count + constraining_column];
    const asn_ioc_cell_t* type_cell =
        &itable->rows[row * itable->columns_count + for_column];

    if (type_cell->cell_kind == aioc__undefined) continue;

    presence_index++;
    if (constraining_cell->type_descriptor->op->compare_struct(
            constraining_cell->type_descriptor, constraining_value,
            constraining_cell->value_sptr) == 0) {
      result.type_descriptor = type_cell->type_descriptor;
      result.presence_index  = presence_index;
      break;
    }
  }

  return result;
}

static int memb_value_constraint_1(
    const asn_TYPE_descriptor_t* td, const void* sptr,
    asn_app_constraint_failed_f* ctfailcb, void* app_key) {
  if (!sptr) {
    ASN__CTFAIL(
        app_key, td, sptr, "%s: value not given (%s:%d)", td->name, __FILE__,
        __LINE__);
    return -1;
  }

  if (1 /* No applicable constraints whatsoever */) {
    /* Nothing is here. See below */
  }

  return td->encoding_constraints.general_constraints(
      td, sptr, ctfailcb, app_key);
}

static asn_per_constraints_t asn_PER_memb_procedureCode_constr_2 CC_NOTUSED = {
    {APC_CONSTRAINED, 8, 8, 0, 255} /* (0..255) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_criticality_constr_3 CC_NOTUSED = {
    {APC_CONSTRAINED, 2, 2, 0, 2} /* (0..2) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_value_constr_5 CC_NOTUSED = {
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_TYPE_member_t asn_MBR_value_5[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct InitiatingMessage__value,
         choice.E_CIDMeasurementInitiationRequest),
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_E_CIDMeasurementInitiationRequest,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "E-CIDMeasurementInitiationRequest"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct InitiatingMessage__value, choice.OTDOAInformationRequest),
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_OTDOAInformationRequest,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "OTDOAInformationRequest"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct InitiatingMessage__value, choice.PositioningInformationRequest),
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_PositioningInformationRequest,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "PositioningInformationRequest"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct InitiatingMessage__value, choice.MeasurementRequest),
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_MeasurementRequest,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "MeasurementRequest"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct InitiatingMessage__value, choice.TRPInformationRequest),
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_TRPInformationRequest,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "TRPInformationRequest"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct InitiatingMessage__value, choice.PositioningActivationRequest),
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_PositioningActivationRequest,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "PositioningActivationRequest"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct InitiatingMessage__value,
         choice.E_CIDMeasurementFailureIndication),
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_E_CIDMeasurementFailureIndication,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "E-CIDMeasurementFailureIndication"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct InitiatingMessage__value, choice.E_CIDMeasurementReport),
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_E_CIDMeasurementReport,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "E-CIDMeasurementReport"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct InitiatingMessage__value,
         choice.E_CIDMeasurementTerminationCommand),
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_E_CIDMeasurementTerminationCommand,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "E-CIDMeasurementTerminationCommand"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct InitiatingMessage__value, choice.ErrorIndication),
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_ErrorIndication,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "ErrorIndication"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct InitiatingMessage__value, choice.PrivateMessage),
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_PrivateMessage,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "PrivateMessage"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct InitiatingMessage__value, choice.AssistanceInformationControl),
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_AssistanceInformationControl,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "AssistanceInformationControl"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct InitiatingMessage__value, choice.AssistanceInformationFeedback),
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_AssistanceInformationFeedback,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "AssistanceInformationFeedback"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct InitiatingMessage__value, choice.PositioningInformationUpdate),
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_PositioningInformationUpdate,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "PositioningInformationUpdate"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct InitiatingMessage__value, choice.MeasurementReport),
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_MeasurementReport,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "MeasurementReport"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct InitiatingMessage__value, choice.MeasurementUpdate),
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_MeasurementUpdate,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "MeasurementUpdate"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct InitiatingMessage__value, choice.MeasurementAbort),
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_MeasurementAbort,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "MeasurementAbort"},
    {ATF_NOFLAGS,
     0,
     offsetof(
         struct InitiatingMessage__value, choice.MeasurementFailureIndication),
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_MeasurementFailureIndication,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "MeasurementFailureIndication"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct InitiatingMessage__value, choice.PositioningDeactivation),
     (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
     0,
     &asn_DEF_PositioningDeactivation,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "PositioningDeactivation"},
};
static const asn_TYPE_tag2member_t asn_MAP_value_tag2el_5[] = {
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0,
     18}, /* E-CIDMeasurementInitiationRequest */
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1,
     17}, /* OTDOAInformationRequest */
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -2,
     16}, /* PositioningInformationRequest */
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, -3, 15}, /* MeasurementRequest */
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 4, -4,
     14}, /* TRPInformationRequest */
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 5, -5,
     13}, /* PositioningActivationRequest */
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 6, -6,
     12}, /* E-CIDMeasurementFailureIndication */
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 7, -7,
     11}, /* E-CIDMeasurementReport */
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 8, -8,
     10}, /* E-CIDMeasurementTerminationCommand */
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 9, -9, 9},   /* ErrorIndication */
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 10, -10, 8}, /* PrivateMessage */
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 11, -11,
     7}, /* AssistanceInformationControl */
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 12, -12,
     6}, /* AssistanceInformationFeedback */
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 13, -13,
     5}, /* PositioningInformationUpdate */
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 14, -14, 4}, /* MeasurementReport */
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 15, -15, 3}, /* MeasurementUpdate */
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 16, -16, 2}, /* MeasurementAbort */
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 17, -17,
     1}, /* MeasurementFailureIndication */
    {(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 18, -18,
     0} /* PositioningDeactivation */
};
static asn_CHOICE_specifics_t asn_SPC_value_specs_5 = {
    sizeof(struct InitiatingMessage__value),
    offsetof(struct InitiatingMessage__value, _asn_ctx),
    offsetof(struct InitiatingMessage__value, present),
    sizeof(((struct InitiatingMessage__value*) 0)->present),
    asn_MAP_value_tag2el_5,
    19, /* Count of tags in the map */
    0,
    0,
    -1 /* Extensions start */
};
static /* Use -fall-defs-global to expose */
    asn_TYPE_descriptor_t asn_DEF_value_5 = {
        "value",
        "value",
        &asn_OP_OPEN_TYPE,
        0, /* No effective tags (pointer) */
        0, /* No effective tags (count) */
        0, /* No tags (pointer) */
        0, /* No tags (count) */
        {0, 0, OPEN_TYPE_constraint},
        asn_MBR_value_5,
        19,                    /* Elements count */
        &asn_SPC_value_specs_5 /* Additional specs */
};

asn_TYPE_member_t asn_MBR_InitiatingMessage_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct InitiatingMessage, procedureCode),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_ProcedureCode,
     0,
     {0, &asn_PER_memb_procedureCode_constr_2, memb_procedureCode_constraint_1},
     0,
     0, /* No default value */
     "procedureCode"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct InitiatingMessage, criticality),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Criticality,
     select_InitiatingMessage_criticality_type,
     {0, &asn_PER_memb_criticality_constr_3, memb_criticality_constraint_1},
     0,
     0, /* No default value */
     "criticality"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct InitiatingMessage, nrppatransactionID),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NRPPATransactionID,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "nrppatransactionID"},
    {ATF_OPEN_TYPE | ATF_NOFLAGS,
     0,
     offsetof(struct InitiatingMessage, value),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     +1, /* EXPLICIT tag at current level */
     &asn_DEF_value_5,
     select_InitiatingMessage_value_type,
     {0, &asn_PER_memb_value_constr_5, memb_value_constraint_1},
     0,
     0, /* No default value */
     "value"},
};
static const ber_tlv_tag_t asn_DEF_InitiatingMessage_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t asn_MAP_InitiatingMessage_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* procedureCode */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* criticality */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* nrppatransactionID */
    {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}  /* value */
};
asn_SEQUENCE_specifics_t asn_SPC_InitiatingMessage_specs_1 = {
    sizeof(struct InitiatingMessage),
    offsetof(struct InitiatingMessage, _asn_ctx),
    asn_MAP_InitiatingMessage_tag2el_1,
    4, /* Count of tags in the map */
    0,
    0,
    0,  /* Optional elements (not needed) */
    -1, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_InitiatingMessage = {
    "InitiatingMessage",
    "InitiatingMessage",
    &asn_OP_SEQUENCE,
    asn_DEF_InitiatingMessage_tags_1,
    sizeof(asn_DEF_InitiatingMessage_tags_1) /
        sizeof(asn_DEF_InitiatingMessage_tags_1[0]), /* 1 */
    asn_DEF_InitiatingMessage_tags_1,                /* Same as above */
    sizeof(asn_DEF_InitiatingMessage_tags_1) /
        sizeof(asn_DEF_InitiatingMessage_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_InitiatingMessage_1,
    4,                                 /* Elements count */
    &asn_SPC_InitiatingMessage_specs_1 /* Additional specs */
};
