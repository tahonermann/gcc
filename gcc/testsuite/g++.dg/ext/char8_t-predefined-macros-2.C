// Test that char8_t related predefined macros are present when -fchar8_t is
// enabled.
// { dg-do compile }
// { dg-options "-fchar8_t" }

#if !defined(__CHAR8_TYPE__)
#error __CHAR8_TYPE__ is not defined! // { dg-bogus "#error __CHAR8_TYPE__ is not defined!" "char8_t" { xfail *-*-* } }
#endif
