/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under
 *one or more contributor license agreements.  See the NOTICE file distributed
 *with this work for additional information regarding copyright ownership. The
 *OpenAirInterface Software Alliance licenses this file to You under the OAI
 *Public License, Version 1.1  (the "License"); you may not use this file except
 *in compliance with the License. You may obtain a copy of the License at
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

#include "udr_config.hpp"

#include "config.hpp"
#include "logger.hpp"

namespace oai::udr::config {

//------------------------------------------------------------------------------
udr_config::udr_config()
    : db_conf(), instance(), udr_name(), pid_dir(), nudr() {
  nudr.api_version = "v1";
  db_type          = DB_TYPE_MYSQL;
  use_http2        = false;
  register_nrf     = false;
  log_level        = spdlog::level::debug;
  http_request_timeout =
      oai::config::NF_CONFIG_HTTP_REQUEST_TIMEOUT_DEFAULT_VALUE;
}

//------------------------------------------------------------------------------
udr_config::~udr_config() {}

}  // namespace oai::udr::config
