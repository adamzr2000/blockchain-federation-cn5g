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

#ifndef _UE_AGGREGATE_MAX_BITRATE_H_
#define _UE_AGGREGATE_MAX_BITRATE_H_

extern "C" {
#include "Ngap_UEAggregateMaximumBitRate.h"
}

namespace oai::ngap {

class UeAggregateMaxBitRate {
 public:
  UeAggregateMaxBitRate();
  virtual ~UeAggregateMaxBitRate();

  void set(const uint64_t& dl, const uint64_t& ul);
  bool get(uint64_t& dl, uint64_t& ul) const;

  bool encode(Ngap_UEAggregateMaximumBitRate_t& bitrate) const;
  bool decode(const Ngap_UEAggregateMaximumBitRate_t& bitrate);

 private:
  uint64_t m_Dl;
  uint64_t m_Ul;
};

}  // namespace oai::ngap

#endif
