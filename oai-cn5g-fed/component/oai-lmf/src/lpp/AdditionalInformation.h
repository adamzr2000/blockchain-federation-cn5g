/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _AdditionalInformation_H_
#define _AdditionalInformation_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AdditionalInformation {
  AdditionalInformation_onlyReturnInformationRequested = 0,
  AdditionalInformation_mayReturnAditionalInformation  = 1
  /*
   * Enumeration is extensible
   */
} e_AdditionalInformation;

/* AdditionalInformation */
typedef long AdditionalInformation_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AdditionalInformation_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AdditionalInformation;
extern const asn_INTEGER_specifics_t asn_SPC_AdditionalInformation_specs_1;
asn_struct_free_f AdditionalInformation_free;
asn_struct_print_f AdditionalInformation_print;
asn_constr_check_f AdditionalInformation_constraint;
ber_type_decoder_f AdditionalInformation_decode_ber;
der_type_encoder_f AdditionalInformation_encode_der;
xer_type_decoder_f AdditionalInformation_decode_xer;
xer_type_encoder_f AdditionalInformation_encode_xer;
per_type_decoder_f AdditionalInformation_decode_uper;
per_type_encoder_f AdditionalInformation_encode_uper;
per_type_decoder_f AdditionalInformation_decode_aper;
per_type_encoder_f AdditionalInformation_encode_aper;

#ifdef __cplusplus
}
#endif

#endif /* _AdditionalInformation_H_ */
#include <asn_internal.h>
