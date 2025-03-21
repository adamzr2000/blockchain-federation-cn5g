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

/*! \file pcf_nrf.hpp
 \brief
 \author  Rohan Kharade
 \company Openairinterface Software Allianse
 \date 2021
 \email: rohan.kharade@openairinterface.org
 */

#pragma once

#include <boost/atomic.hpp>
#include <string>

#include "3gpp_29.500.h"
#include "pcf_profile.hpp"
#include "pcf_event.hpp"
#include "PatchItem.h"
#include "sbi_helper.hpp"

namespace oai::pcf::app {

class pcf_nrf {
  const uint32_t HEART_BEAT_TIMER = 10;

 public:
  explicit pcf_nrf(pcf_event& ev);
  pcf_nrf(pcf_nrf const&) = delete;
  void operator=(pcf_nrf const&) = delete;

  virtual ~pcf_nrf();

  /**
   * Start event nf heartbeat procedure
   */
  void start_event_nf_heartbeat(std::string& remoteURI);
  /**
   * Trigger NF heartbeat procedure
   */
  void trigger_nf_heartbeat_procedure(uint64_t ms);
  /**
   * Trigger NF instance registration to NRF
   */
  void register_to_nrf();

  /**
   * Trigger NF instance de-registration to NRF
   */
  void deregister_to_nrf();

 private:
  pcf_profile m_nf_instance_profile;  // PCF profile
  std::string m_pcf_instance_id;      // PCF instance id
  // for Event Handling
  pcf_event& m_event_sub;
  bs2::connection m_task_connection;
  std::string m_nrf_url;

  /**
   * Generate PCF profile and stores it in nf_instance_profile
   */
  void generate_pcf_profile();
};
}  // namespace oai::pcf::app
