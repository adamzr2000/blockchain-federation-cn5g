/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 *file except in compliance with the License. You may obtain a copy of the
 *License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

#ifndef FILE_NRF_SEEN
#define FILE_NRF_SEEN

#define _unused(x) ((void) (x))

typedef enum nf_type_s {
  NF_TYPE_NRF     = 0,
  NF_TYPE_UDM     = 1,
  NF_TYPE_AMF     = 2,
  NF_TYPE_SMF     = 3,
  NF_TYPE_AUSF    = 4,
  NF_TYPE_NEF     = 5,
  NF_TYPE_PCF     = 6,
  NF_TYPE_SMSF    = 7,
  NF_TYPE_NSSF    = 8,
  NF_TYPE_UDR     = 9,
  NF_TYPE_LMF     = 10,
  NF_TYPE_GMLC    = 11,
  NF_TYPE_5G_EIR  = 12,
  NF_TYPE_SEPP    = 13,
  NF_TYPE_UPF     = 14,
  NF_TYPE_N3IWF   = 15,
  NF_TYPE_AF      = 16,
  NF_TYPE_UDSF    = 17,
  NF_TYPE_BSF     = 18,
  NF_TYPE_CHF     = 19,
  NF_TYPE_NWDAF   = 20,
  NF_TYPE_UNKNOWN = 21
} nf_type_t;

typedef enum patch_op_type_s {
  PATCH_OP_ADD     = 0,
  PATCH_OP_REMOVE  = 1,
  PATCH_OP_REPLACE = 2,
  PATCH_OP_MOVE    = 3,
  PATCH_OP_COPY    = 4,
  PATCH_OP_TEST    = 5,
  PATCH_OP_UNKNOWN = 6

} patch_op_type_t;

// Event Subscription IDs)
typedef uint32_t evsub_id_t;
#define INVALID_EVSUB_ID ((evsub_id_t) 0x00000000)
#define UNASSIGNED_EVSUB_ID ((evsub_id_t) 0x00000000)

#define NF_CURL_TIMEOUT_MS 1000L

#define MAX_WAIT_MSECS 20000  // 1 second

#endif
