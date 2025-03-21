/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#ifndef _ResultUTRAN_Item_H_
#define _ResultUTRAN_Item_H_

#include <asn_application.h>

/* Including external dependencies */
#include "UARFCN.h"
#include "UTRA-RSCP.h"
#include "UTRA-EcN0.h"
#include "PhysCellIDUTRA-FDD.h"
#include "PhysCellIDUTRA-TDD.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ResultUTRAN_Item__physCellIDUTRAN_PR {
  ResultUTRAN_Item__physCellIDUTRAN_PR_NOTHING, /* No components present */
  ResultUTRAN_Item__physCellIDUTRAN_PR_physCellIDUTRA_FDD,
  ResultUTRAN_Item__physCellIDUTRAN_PR_physCellIDUTRA_TDD
} ResultUTRAN_Item__physCellIDUTRAN_PR;

/* Forward declarations */
struct ProtocolExtensionContainer;

/* ResultUTRAN-Item */
typedef struct ResultUTRAN_Item {
  UARFCN_t uARFCN;
  struct ResultUTRAN_Item__physCellIDUTRAN {
    ResultUTRAN_Item__physCellIDUTRAN_PR present;
    union ResultUTRAN_Item__physCellIDUTRAN_u {
      PhysCellIDUTRA_FDD_t physCellIDUTRA_FDD;
      PhysCellIDUTRA_TDD_t physCellIDUTRA_TDD;
    } choice;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } physCellIDUTRAN;
  UTRA_RSCP_t* uTRA_RSCP;                           /* OPTIONAL */
  UTRA_EcN0_t* uTRA_EcN0;                           /* OPTIONAL */
  struct ProtocolExtensionContainer* iE_Extensions; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} ResultUTRAN_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ResultUTRAN_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_ResultUTRAN_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_ResultUTRAN_Item_1[5];

#ifdef __cplusplus
}
#endif

#endif /* _ResultUTRAN_Item_H_ */
#include <asn_internal.h>
