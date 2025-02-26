/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _EarlyFixReport_r12_H_
#define _EarlyFixReport_r12_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EarlyFixReport_r12 {
  EarlyFixReport_r12_noMoreMessages       = 0,
  EarlyFixReport_r12_moreMessagesOnTheWay = 1
} e_EarlyFixReport_r12;

/* EarlyFixReport-r12 */
typedef long EarlyFixReport_r12_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_EarlyFixReport_r12_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_EarlyFixReport_r12;
extern const asn_INTEGER_specifics_t asn_SPC_EarlyFixReport_r12_specs_1;
asn_struct_free_f EarlyFixReport_r12_free;
asn_struct_print_f EarlyFixReport_r12_print;
asn_constr_check_f EarlyFixReport_r12_constraint;
ber_type_decoder_f EarlyFixReport_r12_decode_ber;
der_type_encoder_f EarlyFixReport_r12_encode_der;
xer_type_decoder_f EarlyFixReport_r12_decode_xer;
xer_type_encoder_f EarlyFixReport_r12_encode_xer;
per_type_decoder_f EarlyFixReport_r12_decode_uper;
per_type_encoder_f EarlyFixReport_r12_encode_uper;
per_type_decoder_f EarlyFixReport_r12_decode_aper;
per_type_encoder_f EarlyFixReport_r12_encode_aper;

#ifdef __cplusplus
}
#endif

#endif /* _EarlyFixReport_r12_H_ */
#include <asn_internal.h>
