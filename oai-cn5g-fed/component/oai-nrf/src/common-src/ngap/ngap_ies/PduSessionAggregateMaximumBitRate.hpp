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

#ifndef _PDU_SESSION_AGGREGATE_MAXIMUM_BIT_RATE_H_
#define _PDU_SESSION_AGGREGATE_MAXIMUM_BIT_RATE_H_

extern "C" {
#include "Ngap_PDUSessionAggregateMaximumBitRate.h"
}

namespace oai::ngap {

class PduSessionAggregateMaximumBitRate {
 public:
  PduSessionAggregateMaximumBitRate();
  PduSessionAggregateMaximumBitRate(
      const long& bitRateDl, const long& bitRateUl);
  virtual ~PduSessionAggregateMaximumBitRate();

  void set(const long& bitRateDl, const long& bitRateUl);
  bool get(long& bitRateDl, long& bitRateUl) const;

  bool encode(Ngap_PDUSessionAggregateMaximumBitRate_t& bitRate) const;
  bool decode(const Ngap_PDUSessionAggregateMaximumBitRate_t& bitRate);

 private:
  long m_Dl;
  long m_Ul;
};

}  // namespace oai::ngap

#endif
