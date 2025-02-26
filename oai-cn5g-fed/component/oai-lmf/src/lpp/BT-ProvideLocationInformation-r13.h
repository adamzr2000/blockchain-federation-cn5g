/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "37355-g60.asn"
 * 	`asn1c -no-gen-OER -fcompound-names -no-gen-example -findirect-choice
 * -fno-include-deps -D lpp`
 */

#ifndef _BT_ProvideLocationInformation_r13_H_
#define _BT_ProvideLocationInformation_r13_H_

#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BT_MeasurementInformation_r13;
struct BT_Error_r13;

/* BT-ProvideLocationInformation-r13 */
typedef struct BT_ProvideLocationInformation_r13 {
  struct BT_MeasurementInformation_r13*
      bt_MeasurementInformation_r13; /* OPTIONAL */
  struct BT_Error_r13* bt_Error_r13; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} BT_ProvideLocationInformation_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BT_ProvideLocationInformation_r13;
extern asn_SEQUENCE_specifics_t
    asn_SPC_BT_ProvideLocationInformation_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_BT_ProvideLocationInformation_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif /* _BT_ProvideLocationInformation_r13_H_ */
#include <asn_internal.h>
