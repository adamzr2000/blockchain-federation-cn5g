/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-CommonDataTypes"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#ifndef _NRPPATransactionID_H_
#define _NRPPATransactionID_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NRPPATransactionID */
typedef long NRPPATransactionID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NRPPATransactionID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NRPPATransactionID;
asn_struct_free_f NRPPATransactionID_free;
asn_struct_print_f NRPPATransactionID_print;
asn_constr_check_f NRPPATransactionID_constraint;
ber_type_decoder_f NRPPATransactionID_decode_ber;
der_type_encoder_f NRPPATransactionID_encode_der;
xer_type_decoder_f NRPPATransactionID_decode_xer;
xer_type_encoder_f NRPPATransactionID_encode_xer;
per_type_decoder_f NRPPATransactionID_decode_uper;
per_type_encoder_f NRPPATransactionID_encode_uper;
per_type_decoder_f NRPPATransactionID_decode_aper;
per_type_encoder_f NRPPATransactionID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif /* _NRPPATransactionID_H_ */
#include <asn_internal.h>
