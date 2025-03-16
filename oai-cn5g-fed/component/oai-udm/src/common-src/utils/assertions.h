/*
 * Copyright (c) 2015, EURECOM (www.eurecom.fr)
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are
 * those of the authors and should not be interpreted as representing official
 * policies, either expressed or implied, of the FreeBSD Project.
 */

#include <inttypes.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#include "backtrace.h"

#ifndef ASSERTIONS_H_
#define ASSERTIONS_H_

#define _Assert_Exit_                                                          \
  {                                                                            \
    fprintf(stderr, "\nExiting execution\n");                                  \
    display_backtrace();                                                       \
    fflush(stdout);                                                            \
    fflush(stderr);                                                            \
    exit(EXIT_FAILURE);                                                        \
  }

#define _Assert_SegFault_                                                      \
  {                                                                            \
    fprintf(                                                                   \
        stderr,                                                                \
        "\n Will Intentionaly raise SEGFAULT to be catched by GDB!\n");        \
    display_backtrace();                                                       \
    fflush(stdout);                                                            \
    fflush(stderr);                                                            \
    *(int*) 0 = 0;                                                             \
    exit(EXIT_FAILURE);                                                        \
  }

#define _Assert_(cOND, aCTION, fORMAT, aRGS...)                                \
  do {                                                                         \
    if (!(cOND)) {                                                             \
      fprintf(                                                                 \
          stderr,                                                              \
          "\nAssertion (" #cOND                                                \
          ") failed!\n"                                                        \
          "In %s() %s:%d\n" fORMAT,                                            \
          __FUNCTION__, __FILE__, __LINE__, ##aRGS);                           \
      aCTION;                                                                  \
    }                                                                          \
  } while (0)

#define _ASSERT_FINAL_ _Assert_SegFault_

#define AssertFatal(cOND, ...) _Assert_(cOND, _ASSERT_FINAL_, ##__VA_ARGS__)
#define DevCheck(cOND, vALUE1, vALUE2, vALUE3)                                 \
  _Assert_(                                                                    \
      cOND, _ASSERT_FINAL_,                                                    \
      #vALUE1 ": %" PRIdMAX "\n" #vALUE2 ": %" PRIdMAX "\n" #vALUE3            \
              ": %" PRIdMAX "\n\n",                                            \
      (intmax_t) vALUE1, (intmax_t) vALUE2, (intmax_t) vALUE3)

#define DevCheck4(cOND, vALUE1, vALUE2, vALUE3, vALUE4)                        \
  _Assert_(                                                                    \
      cOND, _ASSERT_FINAL_,                                                    \
      #vALUE1 ": %" PRIdMAX "\n" #vALUE2 ": %" PRIdMAX "\n" #vALUE3            \
              ": %" PRIdMAX "\n" #vALUE4 ": %" PRIdMAX "\n\n",                 \
      (intmax_t) vALUE1, (intmax_t) vALUE2, (intmax_t) vALUE3,                 \
      (intmax_t) vALUE4)

#define DevAssert(cOND) _Assert_(cOND, _ASSERT_FINAL_, "")

#define DevMessage(mESSAGE) _Assert_(0, _ASSERT_FINAL_, #mESSAGE)

#define CHECK_INIT_RETURN(fCT)                                                 \
  do {                                                                         \
    int fct_ret;                                                               \
    if ((fct_ret = (fCT)) != 0) {                                              \
      fprintf(                                                                 \
          stderr,                                                              \
          "Function " #fCT                                                     \
          " has failed\n"                                                      \
          "returning %d\n",                                                    \
          fct_ret);                                                            \
      fflush(stdout);                                                          \
      fflush(stderr);                                                          \
      exit(EXIT_FAILURE);                                                      \
    }                                                                          \
  } while (0)

#define AssertError(cOND, aCTION, fORMAT, aRGS...)                             \
  _Assert_(cOND, aCTION, fORMAT, ##aRGS)
#define DevParam(vALUE1, vALUE2, vALUE3) DevCheck(0, vALUE1, vALUE2, vALUE3)

#endif /* ASSERTIONS_H_ */
