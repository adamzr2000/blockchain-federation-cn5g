/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
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

#ifndef FILE_UDR_SEEN
#define FILE_UDR_SEEN

#include <string>

#define HEART_BEAT_TIMER 10
#define NRF_REGISTRATION_RETRY_TIMER 5

#define MAX_FIRST_CONNECTION_RETRY 100
#define MAX_CONNECTION_RETRY 3

#define _unused(x) ((void) (x))

#define NUDR_DR_AUTH_STATUS "authentication-status"
#define NUDR_DR_AUTH_SUBS "authentication-subscription"
#define NUDR_DR_AMF_XGPP_ACCESS "amf-3gpp-access"
#define NUDR_DR_AM_DATA "am-data"
#define NUDR_DR_SDM_SUBS "sdm-subscriptions"
#define NUDR_DR_SM_DATA "sm-data"
#define NUDR_DR_SMF_REG "smf-registrations"
#define NUDR_DR_SMF_SELECT "smf-selection-subscription-data"

typedef enum db_type_s {
  DB_TYPE_UNKNOWN   = 0,
  DB_TYPE_MYSQL     = 1,
  DB_TYPE_CASSANDRA = 2,
  DB_TYPE_MONGODB   = 3
} db_type_t;

static std::string db_type_to_string(db_type_t db_type) {
  switch (db_type) {
    case db_type_t::DB_TYPE_UNKNOWN:
      return "Unknown";
    case db_type_t::DB_TYPE_MYSQL:
      return "MySQL";
    case db_type_t::DB_TYPE_CASSANDRA:
      return "Cassandra";
    case db_type_t::DB_TYPE_MONGODB:
      return "MongoDb";
    default:
      return "Unknown";
  }
  return "Unknown";
}

#endif
