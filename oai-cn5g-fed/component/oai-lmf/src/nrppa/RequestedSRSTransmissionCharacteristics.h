/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#ifndef _RequestedSRSTransmissionCharacteristics_H_
#define _RequestedSRSTransmissionCharacteristics_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include "BandwidthSRS.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RequestedSRSTransmissionCharacteristics__resourceType {
  RequestedSRSTransmissionCharacteristics__resourceType_periodic        = 0,
  RequestedSRSTransmissionCharacteristics__resourceType_semi_persistent = 1,
  RequestedSRSTransmissionCharacteristics__resourceType_aperiodic       = 2
  /*
   * Enumeration is extensible
   */
} e_RequestedSRSTransmissionCharacteristics__resourceType;

/* Forward declarations */
struct SSBInfo;
struct ProtocolExtensionContainer;
struct SRSResourceSet_Item;

/* RequestedSRSTransmissionCharacteristics */
typedef struct RequestedSRSTransmissionCharacteristics {
  long* numberOfTransmissions; /* OPTIONAL */
  long resourceType;
  BandwidthSRS_t bandwidth;
  struct RequestedSRSTransmissionCharacteristics__listOfSRSResourceSet {
    A_SEQUENCE_OF(struct SRSResourceSet_Item) list;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } * listOfSRSResourceSet;
  struct SSBInfo* sSBInformation;                   /* OPTIONAL */
  struct ProtocolExtensionContainer* iE_Extensions; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} RequestedSRSTransmissionCharacteristics_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_resourceType_3;	// (Use
 * -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RequestedSRSTransmissionCharacteristics;
extern asn_SEQUENCE_specifics_t
    asn_SPC_RequestedSRSTransmissionCharacteristics_specs_1;
extern asn_TYPE_member_t asn_MBR_RequestedSRSTransmissionCharacteristics_1[6];

#ifdef __cplusplus
}
#endif

#endif /* _RequestedSRSTransmissionCharacteristics_H_ */
#include <asn_internal.h>
