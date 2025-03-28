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

#include "api_conversions.hpp"

#include <ctype.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string/classification.hpp>
#include <boost/algorithm/string/split.hpp>
#include <boost/date_time/posix_time/posix_time_types.hpp>
#include <boost/date_time/posix_time/time_parsers.hpp>
#include <nlohmann/json.hpp>
#include <regex>

#include "3gpp_29.510.h"
#include "AmfInfo.h"
#include "common_defs.h"
#include "logger.hpp"
#include "nrf.h"
#include "string.hpp"

using namespace oai::model::nrf;
using namespace oai::model::common;
using namespace oai::nrf::app;
using namespace oai::nrf;
using namespace oai::common::sbi;

//------------------------------------------------------------------------------
bool api_conv::profile_api_to_nrf_profile(
    const NFProfile& api_profile, std::shared_ptr<nrf_profile>& profile) {
  Logger::nrf_app().debug(
      "Convert a json-type profile to a NF profile (profile ID: %s)",
      api_profile.getNfInstanceId().c_str());

  profile.get()->set_nf_instance_id(api_profile.getNfInstanceId());
  profile.get()->set_nf_instance_name(api_profile.getNfInstanceName());
  Logger::nrf_app().debug(
      "\tInstance name: %s", profile.get()->get_nf_instance_name().c_str());

  profile.get()->set_nf_status(api_profile.getNfStatus());
  profile.get()->set_custom_info(api_profile.getCustomInfo());
  Logger::nrf_app().debug(
      "getCustomInfo -> %s", api_profile.getCustomInfo().dump().c_str());
  Logger::nrf_app().debug(
      "\tStatus: %s", profile.get()->get_nf_status().c_str());
  profile.get()->set_nf_heartBeat_timer(api_profile.getHeartBeatTimer());
  Logger::nrf_app().debug(
      "\tHeartbeat timer: %d", profile.get()->get_nf_heartBeat_timer());
  profile.get()->set_nf_priority(api_profile.getPriority());
  Logger::nrf_app().debug("\tPriority: %d", profile.get()->get_nf_priority());
  profile.get()->set_nf_capacity(api_profile.getCapacity());
  Logger::nrf_app().debug("\tCapacity: %d", profile.get()->get_nf_capacity());
  // SNSSAIs
  std::vector<Snssai> snssai = api_profile.getSNssais();
  for (auto s : snssai) {
    snssai_t sn = {};
    sn.sd       = s.getSd();
    sn.sst      = s.getSst();
    profile.get()->add_snssai(sn);
    Logger::nrf_app().debug(
        "\tSNSSAI (SD, SST): %d, %s", sn.sst, sn.sd.c_str());
  }
  if (api_profile.plmnListIsSet()) {
    NFProfile nf_profile        = api_profile;
    std::vector<PlmnId>& plmnid = nf_profile.getPlmnList();
    for (auto s : plmnid) {
      plmn_t sn = {};
      sn.mcc    = s.getMcc();
      sn.mnc    = s.getMnc();
      profile.get()->add_plmn_list(sn);
      Logger::nrf_app().debug(
          "\tPLMN_List (MCC, MNC): %s, %s", sn.mcc.c_str(), sn.mnc.c_str());
    }
  }
  if (api_profile.fqdnIsSet()) {
    profile.get()->set_fqdn(api_profile.getFqdn());
    Logger::nrf_app().debug("\tFQDN: %s", api_profile.getFqdn().c_str());
  }
  if (api_profile.ipv4AddressesIsSet()) {
    std::vector<std::string> ipv4_addr_str = api_profile.getIpv4Addresses();
    for (auto address : ipv4_addr_str) {
      struct in_addr addr4 = {};
      unsigned char buf_in_addr[sizeof(struct in_addr)];
      if (inet_pton(AF_INET, oai::utils::trim(address).c_str(), buf_in_addr) ==
          1) {
        memcpy(&addr4, buf_in_addr, sizeof(struct in_addr));
      } else {
        Logger::nrf_app().warn(
            "Address conversion: Bad value %s",
            oai::utils::trim(address).c_str());
      }

      Logger::nrf_app().debug("\tIPv4 Addr: %s", address.c_str());
      profile.get()->add_nf_ipv4_addresses(addr4);
    }
  }
  // ToDo: For ipv6
  // if (api_profile.ipv6AddressesIsSet()) {
  //   std::vector<Ipv6Addr> ipv6_addr = api_profile.getIpv6Addresses();
  //   for (auto address : ipv6_addr) {
  //     struct in6_addr addr6 = {};
  //     unsigned char buf_in_addr[sizeof(struct in6_addr)];
  //     if (inet_pton(AF_INET6, oai::utils::trim(address).c_str(), buf_in_addr)
  //     == 1)
  //     {
  //       memcpy(&addr6, buf_in_addr, sizeof(struct in6_addr));
  //     } else {
  //       Logger::nrf_app().warn(
  //           "Address conversion: Bad value %s",
  //           oai::utils::trim(address).c_str());
  //     }

  //     Logger::nrf_app().debug("\tIPv6 Addr: %s", address.c_str());
  //     profile.get()->add_nf_ipv6_addresses(addr6);
  //   }
  // }

  nf_type_t nf_type = string_to_nf_type(api_profile.getNfType());

  switch (nf_type) {
    case NF_TYPE_AMF: {
      Logger::nrf_app().debug("\tAMF profile, AMF Info");
      profile.get()->set_nf_type(NF_TYPE_AMF);
      amf_info_t info      = {};
      AmfInfo amf_info_api = api_profile.getAmfInfo();
      info.amf_region_id   = amf_info_api.getAmfRegionId();
      info.amf_set_id      = amf_info_api.getAmfSetId();

      Logger::nrf_app().debug(
          "\t\tAMF Set ID: %s, AMF Region ID: %s", info.amf_set_id.c_str(),
          info.amf_region_id.c_str());

      for (auto g : amf_info_api.getGuamiList()) {
        guami_t guami  = {};
        guami.amf_id   = g.getAmfId();
        guami.plmn.mcc = g.getPlmnId().getMcc();
        guami.plmn.mnc = g.getPlmnId().getMnc();
        info.guami_list.push_back(guami);
        Logger::nrf_app().debug(
            "\t\tAMF GUAMI, AMF_ID:  %s", guami.amf_id.c_str());
        Logger::nrf_app().debug(
            "\t\tAMF GUAMI, PLMN (MCC: %s, MNC: %s)", guami.plmn.mcc.c_str(),
            guami.plmn.mnc.c_str());
      }
      (std::static_pointer_cast<amf_profile>(profile))
          .get()
          ->add_amf_info(info);
    } break;
    case NF_TYPE_SMF: {
      Logger::nrf_app().debug("\tSMF profile, SMF Info");
      profile.get()->set_nf_type(NF_TYPE_SMF);
      smf_info_t info      = {};
      SmfInfo smf_info_api = api_profile.getSmfInfo();

      for (auto s : smf_info_api.getSNssaiSmfInfoList()) {
        snssai_smf_info_item_t snssai = {};
        snssai.snssai.sd              = s.getSNssai().getSd();
        snssai.snssai.sst             = s.getSNssai().getSst();
        Logger::nrf_app().debug(
            "\t\tNSSAI SD: %s, SST: %d", snssai.snssai.sd.c_str(),
            snssai.snssai.sst);
        for (auto d : s.getDnnSmfInfoList()) {
          dnn_smf_info_item_t dnn = {};
          dnn.dnn                 = d.getDnn();
          snssai.dnn_smf_info_list.push_back(dnn);
          Logger::nrf_app().debug("\t\tDNN: %s", dnn.dnn.c_str());
        }
        info.snssai_smf_info_list.push_back(snssai);
      }

      (std::static_pointer_cast<smf_profile>(profile))
          .get()
          ->add_smf_info(info);

    } break;
    case NF_TYPE_UPF: {
      Logger::nrf_app().debug("\tUPF profile, UPF Info");
      profile.get()->set_nf_type(NF_TYPE_UPF);
      upf_info_t info      = {};
      UpfInfo upf_info_api = api_profile.getUpfInfo();

      for (auto s : upf_info_api.getSNssaiUpfInfoList()) {
        snssai_upf_info_item_t snssai = {};
        snssai.snssai.sd              = s.getSNssai().getSd();
        snssai.snssai.sst             = s.getSNssai().getSst();
        Logger::nrf_app().debug(
            "\t\tNSSAI SD: %s, SST: %d", snssai.snssai.sd.c_str(),
            snssai.snssai.sst);
        for (auto d : s.getDnnUpfInfoList()) {
          dnn_upf_info_item_t upf_info   = {};
          upf_info.dnn                   = d.getDnn();
          upf_info.dnai_list             = d.getDnaiList();
          upf_info.dnai_nw_instance_list = d.getDnaiNwInstanceList();
          snssai.dnn_upf_info_list.insert(upf_info);
          Logger::nrf_app().debug("\t\tDNN: %s", upf_info.dnn.c_str());
        }
        info.snssai_upf_info_list.push_back(snssai);
      }

      if (upf_info_api.interfaceUpfInfoListIsSet()) {
        for (auto s : upf_info_api.getInterfaceUpfInfoList()) {
          interface_upf_info_item_t interface = {};
          nf_up_interface_type_t up_interface_type =
              string_to_up_interface_type(s.getInterfaceType().getEnumString());
          switch (up_interface_type) {
            case N3: {
              interface.interface_type = "N3";
            } break;
            case N6: {
              interface.interface_type = "N6";
            } break;
            case N9: {
              interface.interface_type = "N9";
            } break;
            case DATA_FORWARDING: {
              interface.interface_type = "DATA_FORWARDING";
            } break;
            default: {
              interface.interface_type = "UNKNOWN";
            }
          }
          if (s.endpointFqdnIsSet())
            interface.endpoint_fqdn = s.getEndpointFqdn();
          if (s.networkInstanceIsSet())
            interface.network_instance = s.getNetworkInstance();
          if (s.ipv4EndpointAddressesIsSet()) {
            std::vector<std::string> ipv4_addr_str =
                s.getIpv4EndpointAddresses();
            for (auto address : ipv4_addr_str) {
              struct in_addr addr4 = {};
              unsigned char buf_in_addr[sizeof(struct in_addr)];
              if (inet_pton(
                      AF_INET, oai::utils::trim(address).c_str(),
                      buf_in_addr) == 1) {
                memcpy(&addr4, buf_in_addr, sizeof(struct in_addr));
              } else {
                Logger::nrf_app().warn(
                    "Address conversion: Bad value %s",
                    oai::utils::trim(address).c_str());
              }
              Logger::nrf_app().debug(
                  "\t\tEndpoint: %s, IPv4 Addr: %s, FQDN: %s, NWI: %s",
                  interface.interface_type.c_str(), address.c_str(),
                  interface.endpoint_fqdn.c_str(),
                  interface.network_instance.c_str());
              interface.ipv4_addresses.push_back(addr4);
            }
          }
          // ToDo for ipv6
          // if (s.ipv6EndpointAddressesIsSet()) {
          //   std::vector<Ipv6Addr> ipv6_addr_str =
          //       s.getIpv6EndpointAddresses();
          //   for (auto address : ipv6_addr_str) {
          //     struct in6_addr addr6 = {};
          //     unsigned char buf_in_addr[sizeof(struct in6_addr)];
          //     if (inet_pton(
          //             AF_INET, oai::utils::trim(address).c_str(),
          //             buf_in_addr) == 1) {
          //       memcpy(&addr6, buf_in_addr, sizeof(struct in6_addr));
          //     } else {
          //       Logger::nrf_app().warn(
          //           "Address conversion: Bad value %s",
          //           oai::utils::trim(address).c_str());
          //     }
          //     Logger::nrf_app().debug("\tIPv4 Addr: %s", address.c_str());
          //     interface.ipv6_addresses.push_back(addr6);
          //   }
          // }
          info.interface_upf_info_list.push_back(interface);
        }
      }

      (std::static_pointer_cast<upf_profile>(profile))
          .get()
          ->add_upf_info(info);
    } break;
    case NF_TYPE_AUSF: {
      Logger::nrf_app().debug("\tAUSF profile, AUSF Info");
      profile.get()->set_nf_type(NF_TYPE_AUSF);
      ausf_info_t info       = {};
      AusfInfo ausf_info_api = api_profile.getAusfInfo();
      info.groupid           = ausf_info_api.getGroupId();
      Logger::nrf_app().debug("\t\t GroupId - %s", info.groupid.c_str());
      for (auto s : ausf_info_api.getSupiRanges()) {
        supi_range_info_item_t supiRange = {};
        supiRange.supi_range.start       = s.getStart();
        supiRange.supi_range.end         = s.getEnd();
        supiRange.supi_range.pattern     = s.getPattern();
        info.supi_ranges.push_back(supiRange);
        Logger::nrf_app().debug(
            "\t\t SupiRanges: Start - %s, End - %s, Pattern - %s",
            supiRange.supi_range.start.c_str(),
            supiRange.supi_range.end.c_str(),
            supiRange.supi_range.pattern.c_str());
      }
      for (auto s : ausf_info_api.getRoutingIndicators()) {
        info.routing_indicators.push_back(s);
      }
      (std::static_pointer_cast<ausf_profile>(profile))
          .get()
          ->add_ausf_info(info);

    } break;
    case NF_TYPE_UDM: {
      Logger::nrf_app().debug("\tUDM profile, UDM Info");
      profile.get()->set_nf_type(NF_TYPE_UDM);
      udm_info_t info      = {};
      UdmInfo udm_info_api = api_profile.getUdmInfo();
      info.groupid         = udm_info_api.getGroupId();
      Logger::nrf_app().debug("\t\t GroupId - %s", info.groupid.c_str());
      if (udm_info_api.supiRangesIsSet()) {
        for (auto s : udm_info_api.getSupiRanges()) {
          supi_range_info_item_t supiRange = {};
          supiRange.supi_range.start       = s.getStart();
          supiRange.supi_range.end         = s.getEnd();
          supiRange.supi_range.pattern     = s.getPattern();
          info.supi_ranges.push_back(supiRange);
          Logger::nrf_app().debug(
              "\t\t SupiRanges: Start - %s, End - %s, Pattern - %s",
              supiRange.supi_range.start.c_str(),
              supiRange.supi_range.end.c_str(),
              supiRange.supi_range.pattern.c_str());
        }
      }
      if (udm_info_api.gpsiRangesIsSet()) {
        for (auto s : udm_info_api.getGpsiRanges()) {
          identity_range_info_item_t gpsiRange = {};
          gpsiRange.identity_range.start       = s.getStart();
          gpsiRange.identity_range.end         = s.getEnd();
          gpsiRange.identity_range.pattern     = s.getPattern();
          info.gpsi_ranges.push_back(gpsiRange);
          Logger::nrf_app().debug(
              "\t\t GpsiRanges: Start - %s, End - %s, Pattern - %s",
              gpsiRange.identity_range.start.c_str(),
              gpsiRange.identity_range.end.c_str(),
              gpsiRange.identity_range.pattern.c_str());
        }
      }
      if (udm_info_api.externalGroupIdentifiersRangesIsSet()) {
        for (auto s : udm_info_api.getExternalGroupIdentifiersRanges()) {
          identity_range_info_item_t ExtGrpId = {};
          ExtGrpId.identity_range.start       = s.getStart();
          ExtGrpId.identity_range.end         = s.getEnd();
          ExtGrpId.identity_range.pattern     = s.getPattern();
          info.ext_grp_id_ranges.push_back(ExtGrpId);
          Logger::nrf_app().debug(
              "\t\t Ext_Id_Ranges: Start - %s, End - %s, Pattern - %s",
              ExtGrpId.identity_range.start.c_str(),
              ExtGrpId.identity_range.end.c_str(),
              ExtGrpId.identity_range.pattern.c_str());
        }
      }
      if (udm_info_api.routingIndicatorsIsSet()) {
        for (auto s : udm_info_api.getRoutingIndicators()) {
          info.routing_indicator.push_back(s);
          Logger::nrf_app().debug("\t\t Routing Indicators: %s", s.c_str());
        }
      }
      // ToDo:- InternalGroupIdentifiersRanges
      // for (auto s : udm_info_api.getInternalGroupIdentifiersRanges()) {
      //   internal_grpid_range_info_item_t IntGrpId = {};
      //   IntGrpId.int_grpid_range.start            = s.getStart();
      //   IntGrpId.int_grpid_range.end              = s.getEnd();
      //   IntGrpId.int_grpid_range.pattern          = s.getPattern();
      //   info.ext_grp_id_ranges.push_back(IntGrpId);
      // }
      (std::static_pointer_cast<udm_profile>(profile))
          .get()
          ->add_udm_info(info);
    } break;
    case NF_TYPE_UDR: {
      Logger::nrf_app().debug("\tUDR profile, UDR Info");
      profile.get()->set_nf_type(NF_TYPE_UDR);
      udr_info_t info      = {};
      UdrInfo udr_info_api = api_profile.getUdrInfo();
      info.groupid         = udr_info_api.getGroupId();
      Logger::nrf_app().debug("\t\t GroupId - %s", info.groupid.c_str());
      if (udr_info_api.supiRangesIsSet()) {
        for (auto s : udr_info_api.getSupiRanges()) {
          supi_range_info_item_t supiRange = {};
          supiRange.supi_range.start       = s.getStart();
          supiRange.supi_range.end         = s.getEnd();
          supiRange.supi_range.pattern     = s.getPattern();
          info.supi_ranges.push_back(supiRange);
          Logger::nrf_app().debug(
              "\t\t SupiRanges: Start - %s, End - %s, Pattern - %s",
              supiRange.supi_range.start.c_str(),
              supiRange.supi_range.end.c_str(),
              supiRange.supi_range.pattern.c_str());
        }
      }
      if (udr_info_api.gpsiRangesIsSet()) {
        for (auto s : udr_info_api.getGpsiRanges()) {
          identity_range_info_item_t gpsiRange = {};
          gpsiRange.identity_range.start       = s.getStart();
          gpsiRange.identity_range.end         = s.getEnd();
          gpsiRange.identity_range.pattern     = s.getPattern();
          info.gpsi_ranges.push_back(gpsiRange);
          Logger::nrf_app().debug(
              "\t\t GpsiRanges: Start - %s, End - %s, Pattern - %s",
              gpsiRange.identity_range.start.c_str(),
              gpsiRange.identity_range.end.c_str(),
              gpsiRange.identity_range.pattern.c_str());
        }
      }
      if (udr_info_api.externalGroupIdentifiersRangesIsSet()) {
        for (auto s : udr_info_api.getExternalGroupIdentifiersRanges()) {
          identity_range_info_item_t ExtGrpId = {};
          ExtGrpId.identity_range.start       = s.getStart();
          ExtGrpId.identity_range.end         = s.getEnd();
          ExtGrpId.identity_range.pattern     = s.getPattern();
          info.ext_grp_id_ranges.push_back(ExtGrpId);
          Logger::nrf_app().debug(
              "\t\t Ext_Grp_Id_Ranges: Start - %s, End - %s, Pattern - %s",
              ExtGrpId.identity_range.start.c_str(),
              ExtGrpId.identity_range.end.c_str(),
              ExtGrpId.identity_range.pattern.c_str());
        }
      }
      // ToDo:- s.getInterfaceType() Not Implemented
      // for (auto s : udr_info_api.getSupportedDataSets()) {
      // info.data_set_id.push_back(s);
      // Logger::nrf_app().debug("\t\t Supported Data Sets: %s", s.c_str());
      // }
      (std::static_pointer_cast<udr_profile>(profile))
          .get()
          ->add_udr_info(info);
    } break;
    case NF_TYPE_PCF: {
      Logger::nrf_app().debug("\tPCF profile, PCF Info");
      profile.get()->set_nf_type(NF_TYPE_PCF);
      pcf_info_t info      = {};
      PcfInfo pcf_info_api = api_profile.getPcfInfo();
      info.groupid         = pcf_info_api.getGroupId();
      Logger::nrf_app().debug("\t\t GroupId - %s", info.groupid.c_str());
      if (pcf_info_api.dnnListIsSet()) {
        for (auto s : pcf_info_api.getDnnList()) {
          Logger::nrf_app().debug("\t\t DNN - %s", s.c_str());
          info.dnn_list.push_back(s);
        }
      }
      if (pcf_info_api.supiRangesIsSet()) {
        for (auto s : pcf_info_api.getSupiRanges()) {
          supi_range_info_item_t supiRange = {};
          supiRange.supi_range.start       = s.getStart();
          supiRange.supi_range.end         = s.getEnd();
          supiRange.supi_range.pattern     = s.getPattern();
          info.supi_ranges.push_back(supiRange);
          Logger::nrf_app().debug(
              "\t\t SupiRanges: Start - %s, End - %s, Pattern - %s",
              supiRange.supi_range.start.c_str(),
              supiRange.supi_range.end.c_str(),
              supiRange.supi_range.pattern.c_str());
        }
      }
      if (pcf_info_api.gpsiRangesIsSet()) {
        for (auto s : pcf_info_api.getGpsiRanges()) {
          identity_range_info_item_t gpsiRange = {};
          gpsiRange.identity_range.start       = s.getStart();
          gpsiRange.identity_range.end         = s.getEnd();
          gpsiRange.identity_range.pattern     = s.getPattern();
          info.gpsi_ranges.push_back(gpsiRange);
          Logger::nrf_app().debug(
              "\t\t GpsiRanges: Start - %s, End - %s, Pattern - %s",
              gpsiRange.identity_range.start.c_str(),
              gpsiRange.identity_range.end.c_str(),
              gpsiRange.identity_range.pattern.c_str());
        }
      }
      (std::static_pointer_cast<pcf_profile>(profile))
          .get()
          ->add_pcf_info(info);
    } break;
    default: {
    }
  }

  // nf_services
  if (api_profile.nfServicesIsSet()) {
    std::vector<NFService> nf_services = api_profile.getNfServices();
    for (auto service : nf_services) {
      nf_service_t ns        = {};
      ns.service_instance_id = service.getServiceInstanceId();
      ns.service_name        = service.getServiceName();
      ns.scheme              = service.getScheme();
      for (auto v : service.getVersions()) {
        nf_service_version_t version = {};
        version.api_full_version     = v.getApiFullVersion();
        version.api_version_in_uri   = v.getApiVersionInUri();
        ns.versions.push_back(version);
      }
      ns.nf_service_status = service.getNfServiceStatus();
      if (service.ipEndPointsIsSet()) {
        for (auto v : service.getIpEndPoints()) {
          ip_endpoint_t ip_end;
          IPV4_STR_ADDR_TO_INADDR(
              v.getIpv4Address().c_str(), ip_end.ipv4_address, "");
          ip_end.port = v.getPort();
          // ip_end.transport = v.getTransport();
          ns.ip_endpoints.push_back(ip_end);
        }
      }
      profile.get()->add_nf_service(ns);
    }
  }
  return true;
}

//------------------------------------------------------------------------------
bool api_conv::subscription_api_to_nrf_subscription(
    const SubscriptionData& api_sub, std::shared_ptr<nrf_subscription>& sub) {
  Logger::nrf_app().debug(
      "Convert a json-type Subscription data a NRF subscription data");
  sub.get()->set_notification_uri(api_sub.getNfStatusNotificationUri());
  subscription_condition_t sub_condition = {};

  /*
  if (api_sub.subscrCondIsSet()) {
    subscription_condition_api_t sub_condition_api = {};
    api_sub.getSubscrCond(sub_condition_api);
    switch (sub_condition_api.type) {
      case NF_INSTANCE_ID_COND: {
        Logger::nrf_app().debug(
            "Subscription condition type: NF_INSTANCE_ID_COND");
        sub_condition.type = NF_INSTANCE_ID_COND;
        sub_condition.nf_instance_id =
            sub_condition_api.nfInstanceIdCond.getNfInstanceId();
      } break;
      case NF_TYPE_COND: {
        Logger::nrf_app().debug("Subscription condition type: NF_TYPE_COND");
        sub_condition.type = NF_TYPE_COND;
        sub_condition.nf_type = sub_condition_api.nfTypeCond.getNfType();
      } break;
      case SERVICE_NAME_COND: {
        Logger::nrf_app().debug(
            "Subscription condition type: SERVICE_NAME_COND");
        sub_condition.type = SERVICE_NAME_COND;
        sub_condition.service_name =
            sub_condition_api.serviceNameCond.getServiceName();
      } break;
      case AMF_COND: {
        Logger::nrf_app().debug("Subscription condition type: AMF_COND");
        sub_condition.type = AMF_COND;
        sub_condition.amf_info.amf_set_id =
            sub_condition_api.amfCond.getAmfSetId();
        sub_condition.amf_info.amf_region_id =
            sub_condition_api.amfCond.getAmfRegionId();
      } break;
      case GUAMI_LIST_COND: {
        Logger::nrf_app().debug("Subscription condition type:
  GUAMI_LIST_COND"); sub_condition.type = GUAMI_LIST_COND;
        // TODO:
      } break;
      case NETWOTK_SLICE_COND: {
        Logger::nrf_app().debug(
            "Subscription condition type: NETWOTK_SLICE_COND");
        sub_condition.type = NETWOTK_SLICE_COND;
        // TODO:
      } break;
      case NF_GROUP_COND: {
        Logger::nrf_app().debug("Subscription condition type: NF_GROUP_COND");
        sub_condition.type = NF_GROUP_COND;
        // TODO:
      } break;
      default: {
        Logger::nrf_app().debug("Subscription condition type: Unknown");
        return false;
      }
    }
  }
  */

  if (api_sub.subscrCondIsSet()) {
    nlohmann::json sub_condition_api = {};
    api_sub.getSubscrCond(sub_condition_api);

    if (sub_condition_api.find("NfInstanceIdCond") != sub_condition_api.end()) {
      sub_condition.type = NF_INSTANCE_ID_COND;
      sub_condition.nf_instance_id =
          sub_condition_api["NfInstanceIdCond"]["nfInstanceId"]
              .get<std::string>();
      Logger::nrf_app().debug(
          "Subscription condition type: NfInstanceIdCond, nfInstanceId: %s",
          sub_condition.nf_instance_id.c_str());
    }

    if (sub_condition_api.find("NfTypeCond") != sub_condition_api.end()) {
      sub_condition.type = NF_TYPE_COND;
      sub_condition.nf_type =
          sub_condition_api["NfTypeCond"]["nfType"].get<std::string>();
      Logger::nrf_app().debug(
          "Subscription condition type: NfTypeCond, nf_type: %s",
          sub_condition.nf_type.c_str());
    }

    if (sub_condition_api.find("ServiceNameCond") != sub_condition_api.end()) {
      sub_condition.type = SERVICE_NAME_COND;
      sub_condition.service_name =
          sub_condition_api["ServiceNameCond"]["serviceName"]
              .get<std::string>();
      Logger::nrf_app().debug(
          "Subscription condition type: ServiceNameCond, serviceName: %s",
          sub_condition.service_name.c_str());
    }
    if (sub_condition_api.find("AmfCond") != sub_condition_api.end()) {
      sub_condition.type = AMF_COND;
      sub_condition.amf_info.amf_set_id =
          sub_condition_api["AmfCond"]["amfSetId"].get<std::string>();
      sub_condition.amf_info.amf_region_id =
          sub_condition_api["AmfCond"]["amfRegionId"].get<std::string>();
      Logger::nrf_app().debug(
          "Subscription condition type: AmfCond, amfSetId: %s, amfRegionId: "
          "%s ",
          sub_condition.amf_info.amf_set_id.c_str(),
          sub_condition.amf_info.amf_region_id.c_str());
    }

    if (sub_condition_api.find("GuamiListCond") != sub_condition_api.end()) {
      sub_condition.type = GUAMI_LIST_COND;
      // TODO
    }

    Logger::nrf_app().debug(
        "Subscription condition type: %s",
        subscription_condition_type_e2str[sub_condition.type].c_str());

    if (sub_condition.type != UNKNOWN_CONDITION) {
      sub.get()->set_sub_condition(sub_condition);
    }
  }

  // NotificationEventType
  if (api_sub.reqNotifEventsIsSet()) {
    for (auto n : api_sub.getReqNotifEvents()) {
      if (n.compare("NF_REGISTERED") == 0) {
        sub.get()->add_notif_event(NOTIFICATION_TYPE_NF_REGISTERED);
        Logger::nrf_app().debug("ReqNotifEvents: %s", n.c_str());
      } else if (n.compare("NF_DEREGISTERED") == 0) {
        sub.get()->add_notif_event(NOTIFICATION_TYPE_NF_DEREGISTERED);
        Logger::nrf_app().debug("ReqNotifEvents: %s", n.c_str());
      } else if (n.compare("NF_PROFILE_CHANGED") == 0) {
        sub.get()->add_notif_event(NOTIFICATION_TYPE_NF_PROFILE_CHANGED);
      } else {
        sub.get()->add_notif_event(NOTIFICATION_TYPE_UNKNOWN_EVENT);
      }
    }
  }

  if (api_sub.validityTimeIsSet()) {
    std::string str = api_sub.getValidityTime();
    boost::posix_time::ptime p(boost::posix_time::from_iso_string(str));
    sub.get()->set_validity_time(p);
    Logger::nrf_app().debug("Validity Time: %s", str.c_str());
  }
  // TODO:
  return true;
}

//------------------------------------------------------------------------------
nf_type_t api_conv::string_to_nf_type(const std::string& str) {
  if (str.compare("NRF") == 0) return NF_TYPE_NRF;
  if (str.compare("UDM") == 0) return NF_TYPE_UDM;
  if (str.compare("AMF") == 0) return NF_TYPE_AMF;
  if (str.compare("SMF") == 0) return NF_TYPE_SMF;
  if (str.compare("AUSF") == 0) return NF_TYPE_AUSF;
  if (str.compare("NEF") == 0) return NF_TYPE_NEF;
  if (str.compare("PCF") == 0) return NF_TYPE_PCF;
  if (str.compare("SMSF") == 0) return NF_TYPE_SMSF;
  if (str.compare("NSSF") == 0) return NF_TYPE_NSSF;
  if (str.compare("UDR") == 0) return NF_TYPE_UDR;
  if (str.compare("LMF") == 0) return NF_TYPE_LMF;
  if (str.compare("GMLC") == 0) return NF_TYPE_GMLC;
  if (str.compare("5G_EIR") == 0) return NF_TYPE_5G_EIR;
  if (str.compare("SEPP") == 0) return NF_TYPE_SEPP;
  if (str.compare("UPF") == 0) return NF_TYPE_UPF;
  if (str.compare("N3IWF") == 0) return NF_TYPE_N3IWF;
  if (str.compare("AF") == 0) return NF_TYPE_AF;
  if (str.compare("UDSF") == 0) return NF_TYPE_UDSF;
  if (str.compare("BSF") == 0) return NF_TYPE_BSF;
  if (str.compare("CHF") == 0) return NF_TYPE_CHF;
  if (str.compare("NWDAF") == 0) return NF_TYPE_NWDAF;
  // default
  return NF_TYPE_UNKNOWN;
}

//------------------------------------------------------------------------------
std::string api_conv::nf_type_to_string(const nf_type_t& nf_type) {
  switch (nf_type) {
    case NF_TYPE_NRF: {
      return "NRF";
    } break;
    case NF_TYPE_AMF: {
      return "AMF";
    } break;
    case NF_TYPE_AUSF: {
      return "AUSF";
    } break;
    case NF_TYPE_NEF: {
      return "NEF";
    } break;
    case NF_TYPE_NWDAF: {
      return "NWDAF";
    } break;
    case NF_TYPE_PCF: {
      return "PCF";
    } break;
    case NF_TYPE_NSSF: {
      return "NSSF";
    } break;
    case NF_TYPE_SMF: {
      return "SMF";
    } break;
    case NF_TYPE_UDM: {
      return "UDM";
    } break;
    case NF_TYPE_UDR: {
      return "UDR";
    } break;
    case NF_TYPE_UDSF: {
      return "UDSF";
    } break;
    case NF_TYPE_UPF: {
      return "UPF";
    } break;
    case NF_TYPE_LMF: {
      return "LMF";
    } break;
    case NF_TYPE_SMSF: {
      return "SMSF";
    } break;
    case NF_TYPE_GMLC: {
      return "GMLC";
    } break;
    case NF_TYPE_5G_EIR: {
      return "5G_EIR";
    } break;
    case NF_TYPE_SEPP: {
      return "SEPP";
    } break;
    case NF_TYPE_N3IWF: {
      return "N3IWF";
    } break;
    case NF_TYPE_AF: {
      return "AF";
    } break;
    case NF_TYPE_BSF: {
      return "BSF";
    } break;
    case NF_TYPE_CHF: {
      return "CHF";
    } break;
    default:
      return "NF TYPE UNKNOWN";
  }

  return "NF TYPE UNKNOWN";
}
//------------------------------------------------------------------------------
nf_up_interface_type_t api_conv::string_to_up_interface_type(
    const std::string& str) {
  if (str.compare("N3") == 0) return N3;
  if (str.compare("N6") == 0) return N6;
  if (str.compare("N9") == 0) return N9;
  if (str.compare("DATA_FORWARDING") == 0) return DATA_FORWARDING;
  // default
  return TYPE_UNKNOWN;
}
//------------------------------------------------------------------------------
patch_op_type_t api_conv::string_to_patch_operation(const std::string& str) {
  if (str.compare("add") == 0) return PATCH_OP_ADD;
  if (str.compare("copy") == 0) return PATCH_OP_COPY;
  if (str.compare("move") == 0) return PATCH_OP_MOVE;
  if (str.compare("remove") == 0) return PATCH_OP_REMOVE;
  if (str.compare("replace") == 0) return PATCH_OP_REPLACE;
  if (str.compare("test") == 0) return PATCH_OP_TEST;
  // default
  return PATCH_OP_UNKNOWN;
}

bool api_conv::validate_uuid(const std::string& str) {
  // should be verified with Capital letter
  static const std::regex e(
      "[a-f0-9]{8}-[a-f0-9]{4}-[0-5][a-f0-9]{3}-[89aAbB][a-f0-9]{3}-[a-f0-9]{"
      "12}");
  return regex_match(str, e);
}
