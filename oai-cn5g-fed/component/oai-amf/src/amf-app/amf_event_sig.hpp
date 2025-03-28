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

#ifndef FILE_SMF_EVENT_SIG_HPP_SEEN
#define FILE_SMF_EVENT_SIG_HPP_SEEN

#include <boost/signals2.hpp>

#include "CommunicationFailure.h"
#include "UserLocation.h"

namespace bs2 = boost::signals2;

namespace amf_application {

// Signal for UE Location Report
// SUPI, User Location, HTTP version
typedef bs2::signal_type<
    void(std::string, oai::model::common::UserLocation, uint8_t),
    bs2::keywords::mutex_type<bs2::dummy_mutex>>::type ue_location_report_sig_t;

// TODO: Presence-In-AOI-Report
// TODO: Time-Zone-Report
// TODO: Access-Type-Report

// Signal for UE Reachability Report
// SUPI, status, HTTP version
typedef bs2::signal_type<
    void(std::string, uint8_t, uint8_t),
    bs2::keywords::mutex_type<bs2::dummy_mutex>>::type
    ue_reachability_status_sig_t;

// Signal for UE Registration State Report
// SUPI, registration state, HTTP version
typedef bs2::signal_type<
    void(std::string, uint8_t, uint8_t, uint32_t, long),
    bs2::keywords::mutex_type<bs2::dummy_mutex>>::type
    ue_registration_state_sig_t;

// Signal for Connectivity State Report
// SUPI, connectivity state, HTTP version
typedef bs2::signal_type<
    void(std::string, uint8_t, uint8_t),
    bs2::keywords::mutex_type<bs2::dummy_mutex>>::type
    ue_connectivity_state_sig_t;

// Signal for Loss of Connectivity
// SUPI, status, HTTP version,
// RAN UE NGAP ID, AMF UE NGAP ID
typedef bs2::signal_type<
    void(std::string, uint8_t, uint8_t, uint32_t, long),
    bs2::keywords::mutex_type<bs2::dummy_mutex>>::type
    ue_loss_of_connectivity_sig_t;

// Signal for Communication Failure Report
// SUPI, Communication Failure codes, HTTP version
typedef bs2::signal_type<
    void(std::string, oai::model::amf::CommunicationFailure, uint8_t),
    bs2::keywords::mutex_type<bs2::dummy_mutex>>::type
    ue_communication_failure_sig_t;

// TODO: UEs-In-Area-Report

}  // namespace amf_application
#endif
