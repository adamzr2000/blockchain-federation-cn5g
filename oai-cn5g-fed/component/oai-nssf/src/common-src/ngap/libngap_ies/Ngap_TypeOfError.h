/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -no-gen-example -gen-APER -gen-UPER -no-gen-JER -gen-BER -D src`
 */

#ifndef _Ngap_TypeOfError_H_
#define _Ngap_TypeOfError_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_TypeOfError {
  Ngap_TypeOfError_not_understood = 0,
  Ngap_TypeOfError_missing        = 1
  /*
   * Enumeration is extensible
   */
} e_Ngap_TypeOfError;

/* Ngap_TypeOfError */
typedef long Ngap_TypeOfError_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_TypeOfError_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_TypeOfError;
extern const asn_INTEGER_specifics_t asn_SPC_Ngap_TypeOfError_specs_1;
asn_struct_free_f Ngap_TypeOfError_free;
asn_struct_print_f Ngap_TypeOfError_print;
asn_constr_check_f Ngap_TypeOfError_constraint;
ber_type_decoder_f Ngap_TypeOfError_decode_ber;
der_type_encoder_f Ngap_TypeOfError_encode_der;
xer_type_decoder_f Ngap_TypeOfError_decode_xer;
xer_type_encoder_f Ngap_TypeOfError_encode_xer;
oer_type_decoder_f Ngap_TypeOfError_decode_oer;
oer_type_encoder_f Ngap_TypeOfError_encode_oer;
per_type_decoder_f Ngap_TypeOfError_decode_uper;
per_type_encoder_f Ngap_TypeOfError_encode_uper;
per_type_decoder_f Ngap_TypeOfError_decode_aper;
per_type_encoder_f Ngap_TypeOfError_encode_aper;

#ifdef __cplusplus
}
#endif

#endif /* _Ngap_TypeOfError_H_ */
#include <asn_internal.h>
