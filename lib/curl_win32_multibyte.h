/***************************************************************************
 *                                  _   _ ____  _
 *  Project                     ___| | | |  _ \| |
 *                             / __| | | | |_) | |
 *                            | (__| |_| |  _ <| |___
 *                             \___|\___/|_| \_\_____|
 *
 * Copyright (C) 1998 - 2012, Daniel Stenberg, <daniel@haxx.se>, et al.
 *
 * This software is licensed as described in the file COPYING, which
 * you should have received as part of this distribution. The terms
 * are also available at http://curl.haxx.se/docs/copyright.html.
 *
 * You may opt to use, copy, modify, merge, publish, distribute and/or sell
 * copies of the Software, and permit persons to whom the Software is
 * furnished to do so, under the terms of the COPYING file.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ***************************************************************************/

#ifndef _CURL_WIN32_MULTIBYTE_H
#define _CURL_WIN32_MULTIBYTE_H

#include "setup.h"

// Generally Windows has ANSI and UNICODE versions of methods defined,
// but when compiling on WinCE only wide character versions are available.

#if defined(USE_WINDOWS_MULTIBYTE_CONVERSION)

wchar_t *_curl_win32_UTF8_to_wchar(const char *str_utf8);
const char *_curl_win32_wchar_to_UTF8(const wchar_t *str_w);

#endif

#endif
