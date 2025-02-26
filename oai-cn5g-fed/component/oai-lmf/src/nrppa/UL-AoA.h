/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#ifndef _UL_AoA_H_
#define _UL_AoA_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_AoA__angleCoordinateSystem {
  UL_AoA__angleCoordinateSystem_lCS = 0,
  UL_AoA__angleCoordinateSystem_gCS = 1
} e_UL_AoA__angleCoordinateSystem;

/* Forward declarations */
struct ProtocolExtensionContainer;

/* UL-AoA */
typedef struct UL_AoA {
  long azimuthAoA;
  long* zenithAoA;                                  /* OPTIONAL */
  long* angleCoordinateSystem;                      /* OPTIONAL */
  struct ProtocolExtensionContainer* iE_extensions; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} UL_AoA_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_angleCoordinateSystem_4;	// (Use
 * -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UL_AoA;
extern asn_SEQUENCE_specifics_t asn_SPC_UL_AoA_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_AoA_1[4];

#ifdef __cplusplus
}
#endif

#endif /* _UL_AoA_H_ */
#include <asn_internal.h>
