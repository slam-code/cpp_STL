//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <string>

// template<> struct char_traits<char16_t>

// static constexpr bool eq(char_type c1, char_type c2);

#include <string>
#include <cassert>

#include "test_macros.h"

int main()
{
#ifndef _LIBCPP_HAS_NO_UNICODE_CHARS
#if TEST_STD_VER >= 11
    char16_t c = u'\0';
    assert(std::char_traits<char16_t>::eq(u'a', u'a'));
    assert(!std::char_traits<char16_t>::eq(u'a', u'A'));
#endif
#endif  // _LIBCPP_HAS_NO_UNICODE_CHARS
}
