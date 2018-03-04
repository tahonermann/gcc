// 1999-08-16 bkoz

// Copyright (C) 1999-2018 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

// 27.6.2.5.4 basic_ostream character inserters

// { dg-options "-fchar8_t" }

#include <string>
#include <ostream>
#include <sstream>
#include <testsuite_hooks.h>

// stringstream and large strings
void
test04() 
{
  std::string str_01;
  std::string str_tmp;
  const int i_max=250;

  std::ostringstream oss_02(str_01, std::ios_base::out);
  std::ostringstream oss_03(std::ios_base::out);

  // template<_CharT, _Traits>
  //  basic_ostream& operator<<(ostream&, const char*)
  for (int i = 0; i < i_max; ++i) 
    oss_02 << "Test: " << i << std::endl;
  str_tmp = oss_02.str();
  VERIFY( !oss_02.bad() );
  VERIFY( oss_02.good() );
  VERIFY( str_tmp != str_01 );
  VERIFY( str_tmp.size() == 2390 );

  // template<_CharT, _Traits>
  //  basic_ostream& operator<<(ostream&, const signed char*)
  oss_03 = std::ostringstream("Test: ", std::ios_base::app);
  const signed char sca1[] = { 's', 'i', 'g', 'n', 'e', 'd', '\0' };
  const signed char *scp1 = sca1;
  oss_03 << scp1 << std::endl;
  VERIFY ( !oss_03.bad() );
  VERIFY ( oss_03.good() );
  VERIFY ( oss_03.str() == "Test: signed\n" );

  // template<_CharT, _Traits>
  //  basic_ostream& operator<<(ostream&, const unsigned char*)
  oss_03 = std::ostringstream("Test: ", std::ios_base::app);
  const unsigned char uca1[] = { 'u', 'n', 's', 'i', 'g', 'n', 'e', 'd', '\0' };
  const unsigned char *ucp1 = uca1;
  oss_03 << ucp1 << std::endl;
  VERIFY ( !oss_03.bad() );
  VERIFY ( oss_03.good() );
  VERIFY ( oss_03.str() == "Test: unsigned\n" );

  // template<_CharT, _Traits>
  //  basic_ostream& operator<<(ostream&, const char8_t*)
  oss_03 = std::ostringstream("Test: ", std::ios_base::app);
  const char8_t c8a1[] = { 'c', 'h', 'a', 'r', '8', '_', 't', '\0' };
  const char8_t *c8p1 = c8a1;
  oss_03 << c8p1 << std::endl;
  VERIFY ( !oss_03.bad() );
  VERIFY ( oss_03.good() );
  VERIFY ( oss_03.str() == "Test: char8_t\n" );
}

int main()
{
  test04();
  return 0;
}
