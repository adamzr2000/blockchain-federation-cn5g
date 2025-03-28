/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _SBAS_ClockModel_H_
#define _SBAS_ClockModel_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SBAS-ClockModel */
typedef struct SBAS_ClockModel {
  long sbasTo;
  long sbasAgfo;
  long sbasAgf1;
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} SBAS_ClockModel_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SBAS_ClockModel;
extern asn_SEQUENCE_specifics_t asn_SPC_SBAS_ClockModel_specs_1;
extern asn_TYPE_member_t asn_MBR_SBAS_ClockModel_1[3];

#ifdef __cplusplus
}
#endif

#endif /* _SBAS_ClockModel_H_ */
#include <asn_internal.h>
