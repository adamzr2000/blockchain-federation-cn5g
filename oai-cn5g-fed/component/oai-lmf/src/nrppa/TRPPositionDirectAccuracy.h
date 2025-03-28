/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#ifndef _TRPPositionDirectAccuracy_H_
#define _TRPPositionDirectAccuracy_H_

#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TRPPositionDirectAccuracy_PR {
  TRPPositionDirectAccuracy_PR_NOTHING, /* No components present */
  TRPPositionDirectAccuracy_PR_tRPPosition,
  TRPPositionDirectAccuracy_PR_tRPHAposition,
  TRPPositionDirectAccuracy_PR_choice_extension
} TRPPositionDirectAccuracy_PR;

/* Forward declarations */
struct NG_RANAccessPointPosition;
struct NGRANHighAccuracyAccessPointPosition;
struct ProtocolIE_Single_Container;

/* TRPPositionDirectAccuracy */
typedef struct TRPPositionDirectAccuracy {
  TRPPositionDirectAccuracy_PR present;
  union TRPPositionDirectAccuracy_u {
    struct NG_RANAccessPointPosition* tRPPosition;
    struct NGRANHighAccuracyAccessPointPosition* tRPHAposition;
    struct ProtocolIE_Single_Container* choice_extension;
  } choice;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} TRPPositionDirectAccuracy_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TRPPositionDirectAccuracy;
extern asn_CHOICE_specifics_t asn_SPC_TRPPositionDirectAccuracy_specs_1;
extern asn_TYPE_member_t asn_MBR_TRPPositionDirectAccuracy_1[3];
extern asn_per_constraints_t asn_PER_type_TRPPositionDirectAccuracy_constr_1;

#ifdef __cplusplus
}
#endif

#endif /* _TRPPositionDirectAccuracy_H_ */
#include <asn_internal.h>
