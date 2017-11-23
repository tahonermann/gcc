// Test that char8_t is recognized as a type specifier if -fchar8_t is enabled.
// { dg-do compile }
// { dg-options "-fchar8_t" }

char8_t c8; /* { dg-bogus ".char8_t. does not name a type" } */
/* { dg-bogus "expected unqualified-id before .char8_t." "char8_t" { xfail *-*-* } 5 } */
