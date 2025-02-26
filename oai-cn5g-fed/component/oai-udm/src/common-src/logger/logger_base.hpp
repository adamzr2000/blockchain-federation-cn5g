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

/*! \file logger_base.hpp
\brief
\author Stefan Spettel
\company OpenAirInterface Software Alliance
\date 2022
\email: stefan.spettel@eurecom.fr
*/

#pragma once

#include "spd_logger_base.hpp"
#include "lttng_logger_base.hpp"
#include <cstdarg>
#include <memory>
#include <stdexcept>
#include <unordered_map>
#include <vector>

static const std::string LOGGER_COMMON = "common";

namespace oai::logger {

class printf_logger {
 private:
  bool m_is_lttng_active{false};
  std::shared_ptr<spd_logger> m_spd_logger{nullptr};
  std::shared_ptr<lttng_logger> m_lttng_logger{nullptr};

 public:
  explicit printf_logger(
      const std::string& nf_name, const std::string& category, bool log_stdout,
      bool log_rot_file, bool isLTTngActive)
      : m_is_lttng_active(isLTTngActive) {
    if (m_is_lttng_active) {
      m_lttng_logger = std::make_shared<lttng_logger>(
          nf_name, category, log_stdout, log_rot_file);
    } else {
      m_spd_logger = std::make_shared<spd_logger>(
          nf_name, category, log_stdout, log_rot_file);
    }
  }

  bool should_log(spdlog::level::level_enum level) {
    if (m_is_lttng_active) {
      return m_lttng_logger->should_log(level);
    } else {
      return m_spd_logger->should_log(level);
    }
  }

  void set_level(spdlog::level::level_enum level) {
    if (m_is_lttng_active) {
      m_lttng_logger->set_level(level);
    } else {
      m_spd_logger->set_level(level);
    }
  }

  template<typename... T>
  void trace(const std::string& fmt, const T&... args) const {
    if (m_is_lttng_active)
      m_lttng_logger->log_printf(spdlog::level::trace, fmt, args...);
    else
      m_spd_logger->log_printf(spdlog::level::trace, fmt, args...);
  }

  template<typename... T>
  void trace(const char* fmt, const T&... args) const {
    if (m_is_lttng_active)
      m_lttng_logger->log_printf(spdlog::level::trace, fmt, args...);
    else
      m_spd_logger->log_printf(spdlog::level::trace, fmt, args...);
  }

  template<typename... T>
  void debug(const std::string& fmt, const T&... args) const {
    if (m_is_lttng_active)
      m_lttng_logger->log_printf(spdlog::level::debug, fmt, args...);
    else
      m_spd_logger->log_printf(spdlog::level::debug, fmt, args...);
  }

  template<typename... T>
  void debug(const char* fmt, const T&... args) const {
    if (m_is_lttng_active)
      m_lttng_logger->log_printf(spdlog::level::debug, fmt, args...);
    else
      m_spd_logger->log_printf(spdlog::level::debug, fmt, args...);
  }

  template<typename... T>
  void info(const std::string& fmt, const T&... args) const {
    if (m_is_lttng_active)
      m_lttng_logger->log_printf(spdlog::level::info, fmt, args...);
    else
      m_spd_logger->log_printf(spdlog::level::info, fmt, args...);
  }

  template<typename... T>
  void info(const char* fmt, const T&... args) const {
    if (m_is_lttng_active)
      m_lttng_logger->log_printf(spdlog::level::info, fmt, args...);
    else
      m_spd_logger->log_printf(spdlog::level::info, fmt, args...);
  }

  template<typename... T>
  void startup(const std::string& fmt, const T&... args) const {
    if (m_is_lttng_active)
      m_lttng_logger->log_printf(spdlog::level::warn, fmt, args...);
    else
      m_spd_logger->log_printf(spdlog::level::warn, fmt, args...);
  }

  template<typename... T>
  void startup(const char* fmt, const T&... args) const {
    if (m_is_lttng_active)
      m_lttng_logger->log_printf(spdlog::level::warn, fmt, args...);
    else
      m_spd_logger->log_printf(spdlog::level::warn, fmt, args...);
  }

  template<typename... T>
  void warn(const std::string& fmt, const T&... args) const {
    if (m_is_lttng_active)
      m_lttng_logger->log_printf(spdlog::level::err, fmt, args...);
    else
      m_spd_logger->log_printf(spdlog::level::err, fmt, args...);
  }

  template<typename... T>
  void warn(const char* fmt, const T&... args) const {
    if (m_is_lttng_active)
      m_lttng_logger->log_printf(spdlog::level::err, fmt, args...);
    else
      m_spd_logger->log_printf(spdlog::level::err, fmt, args...);
  }

  template<typename... T>
  void error(const std::string& fmt, const T&... args) const {
    if (m_is_lttng_active)
      m_lttng_logger->log_printf(spdlog::level::critical, fmt, args...);
    else
      m_spd_logger->log_printf(spdlog::level::critical, fmt, args...);
  }

  template<typename... T>
  void error(const char* fmt, const T&... args) const {
    if (m_is_lttng_active)
      m_lttng_logger->log_printf(spdlog::level::critical, fmt, args...);
    else
      m_spd_logger->log_printf(spdlog::level::critical, fmt, args...);
  }
};

class logger_registry {
 public:
  static void register_logger(
      const std::string& nf_name, const std::string& logger_name,
      bool log_stdout, bool log_rot_file);

  static const printf_logger& get_logger(const std::string& logger);
  static void set_level(spdlog::level::level_enum level);
  static void set_lttng_is_active(bool isActive) {
#ifdef LOGGER_CAN_USE_LTTNG
    m_is_lttng_active = isActive;
#endif
  }
  static bool should_log(spdlog::level::level_enum level) {
    if (logger_map.empty()) {
      return false;
    }
    const auto& it = logger_map.begin();
    return it->second.should_log(level);
  }

 private:
  static std::unordered_map<std::string, printf_logger> logger_map;
  static bool m_is_lttng_active;
};

class logger_common {
 public:
  logger_common(
      const std::string& name, const bool log_stdout, const bool log_rot_file) {
    oai::logger::logger_registry::register_logger(
        name, LOGGER_COMMON, log_stdout, log_rot_file);
  }
};

}  // namespace oai::logger
