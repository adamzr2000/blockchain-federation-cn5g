/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#ifndef _TRPInformationItem_H_
#define _TRPInformationItem_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "SFNInitialisationTime.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TRPInformationItem_PR {
  TRPInformationItem_PR_NOTHING, /* No components present */
  TRPInformationItem_PR_pCI_NR,
  TRPInformationItem_PR_nG_RAN_CGI,
  TRPInformationItem_PR_aRFCN,
  TRPInformationItem_PR_pRSConfiguration,
  TRPInformationItem_PR_sSBinformation,
  TRPInformationItem_PR_sFNInitialisationTime,
  TRPInformationItem_PR_spatialDirectionInformation,
  TRPInformationItem_PR_geographicalCoordinates,
  TRPInformationItem_PR_choice_extension
} TRPInformationItem_PR;

/* Forward declarations */
struct NG_RAN_CGI;
struct PRSConfiguration;
struct SSBInfo;
struct SpatialDirectionInformation;
struct GeographicalCoordinates;
struct ProtocolIE_Single_Container;

/* TRPInformationItem */
typedef struct TRPInformationItem {
  TRPInformationItem_PR present;
  union TRPInformationItem_u {
    long pCI_NR;
    struct NG_RAN_CGI* nG_RAN_CGI;
    long aRFCN;
    struct PRSConfiguration* pRSConfiguration;
    struct SSBInfo* sSBinformation;
    SFNInitialisationTime_t sFNInitialisationTime;
    struct SpatialDirectionInformation* spatialDirectionInformation;
    struct GeographicalCoordinates* geographicalCoordinates;
    struct ProtocolIE_Single_Container* choice_extension;
  } choice;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} TRPInformationItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TRPInformationItem;
extern asn_CHOICE_specifics_t asn_SPC_TRPInformationItem_specs_1;
extern asn_TYPE_member_t asn_MBR_TRPInformationItem_1[9];
extern asn_per_constraints_t asn_PER_type_TRPInformationItem_constr_1;

#ifdef __cplusplus
}
#endif

#endif /* _TRPInformationItem_H_ */
#include <asn_internal.h>
