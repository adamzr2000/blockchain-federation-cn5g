/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Contents"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -no-gen-example -gen-APER -gen-UPER -no-gen-JER -gen-BER -D src`
 */

#ifndef _Ngap_UplinkRANStatusTransfer_H_
#define _Ngap_UplinkRANStatusTransfer_H_

#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Ngap_UplinkRANStatusTransfer */
typedef struct Ngap_UplinkRANStatusTransfer {
  Ngap_ProtocolIE_Container_9615P43_t protocolIEs;
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} Ngap_UplinkRANStatusTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_UplinkRANStatusTransfer;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_UplinkRANStatusTransfer_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_UplinkRANStatusTransfer_1[1];

#ifdef __cplusplus
}
#endif

#endif /* _Ngap_UplinkRANStatusTransfer_H_ */
#include <asn_internal.h>
