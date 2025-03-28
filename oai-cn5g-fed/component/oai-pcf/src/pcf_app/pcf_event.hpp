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

/*! \file pcf_event.hpp
 \brief
 \author Tien-Thinh NGUYEN (EURECOM)
 \company
 \date 2022
 \email: contact@openairinterface.org
 */

#ifndef FILE_PCF_EVENT_HPP_SEEN
#define FILE_PCF_EVENT_HPP_SEEN

#include <boost/signals2.hpp>
namespace bs2 = boost::signals2;

#include "pcf_event_sig.hpp"
#include "task_manager.hpp"

namespace oai::pcf::app {
class task_manager;
class pcf_event {
 public:
  pcf_event(){};
  pcf_event(pcf_event const&) = delete;
  void operator=(pcf_event const&) = delete;

  static pcf_event& get_instance() {
    static pcf_event instance;
    return instance;
  }

  // class register/handle event
  friend class pcf_app;
  friend class pcf_nrf;
  friend class task_manager;

  //------------------------------------------------------------------------------
  /*
   * Subscribe to the task tick event
   * @param [const task_sig_t::slot_type &] sig
   * @param [uint64_t] period: interval between two events
   * @param [uint64_t] start:
   * @return void
   */
  bs2::connection subscribe_task_nf_heartbeat(
      const task_sig_t::slot_type& sig, uint64_t period, uint64_t start = 0);
  //------------------------------------------------------------------------------
  /*
   * Subscribe to UE Loss of Connectivity Status signal
   * @param [const loss_of_connectivity_sig_t::slot_type&] sig: slot_type
   * parameter
   * @return boost::signals2::connection: the connection between the signal and
   * the slot
   */
  bs2::connection subscribe_loss_of_connectivity(
      const loss_of_connectivity_sig_t::slot_type& sig);

  /*
   * Subscribe to UE Reachability for Data signal
   * @param [const ue_reachability_for_data_sig_t::slot_type&] sig: slot_type
   * parameter
   * @return boost::signals2::connection: the connection between the signal and
   * the slot
   */
  bs2::connection subscribe_ue_reachability_for_data(
      const ue_reachability_for_data_sig_t::slot_type& sig);

 private:
  task_sig_t task_tick;

  loss_of_connectivity_sig_t
      loss_of_connectivity;  // Signal for Loss of Connectivity Report
  ue_reachability_for_data_sig_t
      ue_reachability_for_data;  // Signal for UE Reachability for Data Report
};
}  // namespace oai::pcf::app
#endif
