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

#include "DefaultPagingDrx.hpp"

namespace oai::ngap {

//------------------------------------------------------------------------------
DefaultPagingDrx::DefaultPagingDrx() {
  m_PagingDrx = Ngap_PagingDRX_v32;
}

//------------------------------------------------------------------------------
DefaultPagingDrx::~DefaultPagingDrx() {}

//------------------------------------------------------------------------------
void DefaultPagingDrx::set(const e_Ngap_PagingDRX& pagingDrx) {
  m_PagingDrx = pagingDrx;
}

//------------------------------------------------------------------------------
e_Ngap_PagingDRX DefaultPagingDrx::get() const {
  return m_PagingDrx;
}

//------------------------------------------------------------------------------
bool DefaultPagingDrx::encode(Ngap_PagingDRX_t& pagingDrx) const {
  pagingDrx = m_PagingDrx;
  return true;
}

//------------------------------------------------------------------------------
bool DefaultPagingDrx::decode(const Ngap_PagingDRX_t& pagingDrx) {
  switch (pagingDrx) {
    case 32: {
      m_PagingDrx = Ngap_PagingDRX_v32;
    } break;
    case 64: {
      m_PagingDrx = Ngap_PagingDRX_v64;
    } break;

    case 128: {
      m_PagingDrx = Ngap_PagingDRX_v128;
    } break;

    case 256: {
      m_PagingDrx = Ngap_PagingDRX_v256;
    } break;

    default: {
      m_PagingDrx = (e_Ngap_PagingDRX) pagingDrx;
    }
  }

  return true;
}

}  // namespace oai::ngap
