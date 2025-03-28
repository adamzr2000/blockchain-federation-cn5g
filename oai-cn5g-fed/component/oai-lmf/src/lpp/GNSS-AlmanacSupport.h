/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _GNSS_AlmanacSupport_H_
#define _GNSS_AlmanacSupport_H_

#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GNSS_AlmanacSupport__almanacModel {
  GNSS_AlmanacSupport__almanacModel_model_1 = 0,
  GNSS_AlmanacSupport__almanacModel_model_2 = 1,
  GNSS_AlmanacSupport__almanacModel_model_3 = 2,
  GNSS_AlmanacSupport__almanacModel_model_4 = 3,
  GNSS_AlmanacSupport__almanacModel_model_5 = 4,
  GNSS_AlmanacSupport__almanacModel_model_6 = 5,
  GNSS_AlmanacSupport__almanacModel_model_7 = 6
} e_GNSS_AlmanacSupport__almanacModel;

/* GNSS-AlmanacSupport */
typedef struct GNSS_AlmanacSupport {
  BIT_STRING_t* almanacModel; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} GNSS_AlmanacSupport_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNSS_AlmanacSupport;
extern asn_SEQUENCE_specifics_t asn_SPC_GNSS_AlmanacSupport_specs_1;
extern asn_TYPE_member_t asn_MBR_GNSS_AlmanacSupport_1[1];

#ifdef __cplusplus
}
#endif

#endif /* _GNSS_AlmanacSupport_H_ */
#include <asn_internal.h>
