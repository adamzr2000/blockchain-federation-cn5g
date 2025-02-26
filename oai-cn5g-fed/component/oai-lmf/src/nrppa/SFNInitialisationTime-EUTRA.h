/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "38455.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D nrppa`
 */

#ifndef _SFNInitialisationTime_EUTRA_H_
#define _SFNInitialisationTime_EUTRA_H_

#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SFNInitialisationTime-EUTRA */
typedef BIT_STRING_t SFNInitialisationTime_EUTRA_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SFNInitialisationTime_EUTRA_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SFNInitialisationTime_EUTRA;
asn_struct_free_f SFNInitialisationTime_EUTRA_free;
asn_struct_print_f SFNInitialisationTime_EUTRA_print;
asn_constr_check_f SFNInitialisationTime_EUTRA_constraint;
ber_type_decoder_f SFNInitialisationTime_EUTRA_decode_ber;
der_type_encoder_f SFNInitialisationTime_EUTRA_encode_der;
xer_type_decoder_f SFNInitialisationTime_EUTRA_decode_xer;
xer_type_encoder_f SFNInitialisationTime_EUTRA_encode_xer;
per_type_decoder_f SFNInitialisationTime_EUTRA_decode_uper;
per_type_encoder_f SFNInitialisationTime_EUTRA_encode_uper;
per_type_decoder_f SFNInitialisationTime_EUTRA_decode_aper;
per_type_encoder_f SFNInitialisationTime_EUTRA_encode_aper;

#ifdef __cplusplus
}
#endif

#endif /* _SFNInitialisationTime_EUTRA_H_ */
#include <asn_internal.h>
