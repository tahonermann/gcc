// Test that char8_t is not a keyword if -fchar8_t is not enabled.
// { dg-do compile }
// { dg-options "-fno-char8_t" }

int char8_t; // { dg-bogus "multiple types in one declaration|declaration does not declare anything" }

// FIXME: Add support for -fno-char8_t.
// { dg-bogus "unrecognized command line option .-fno-char8_t." "no-char8_t" { xfail *-*-* } 0 }
