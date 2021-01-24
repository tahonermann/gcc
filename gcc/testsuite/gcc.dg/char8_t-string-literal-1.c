// Test that UTF-8 string literals have type char[] if -fchar8_t is not enabled.
// { dg-do compile }
// { dg-options "-std=c11 -fno-char8_t" }

_Static_assert (_Generic (u8"text", char*: 1, unsigned char*: 2) == 1, "UTF-8 string literals have an unexpected type");
_Static_assert (_Generic (u8"x"[0], char:  1, unsigned char:  2) == 1, "UTF-8 string literal elements have an unexpected type");
