// Test that char8_t is recognized as a keyword if -fchar8_t is enabled.
// { dg-do compile }
// { dg-options "-fchar8_t" }

int char8_t; /* { dg-error "multiple types in one declaration|declaration does not declare anything" "char8_t" { xfail *-*-* } } */

// FIXME: Add support for -fchar8_t.
// { dg-bogus "unrecognized command line option .-fchar8_t." "char8_t" { xfail *-*-* } 0 }
