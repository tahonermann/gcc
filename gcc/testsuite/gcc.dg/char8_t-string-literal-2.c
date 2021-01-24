// Test that UTF-8 string literals have type unsigned char[] if -fchar8_t is enabled.
// { dg-do compile }
// { dg-options "-std=c11 -fchar8_t" }

_Static_assert (_Generic (u8"text", char*: 1, unsigned char*: 2) == 2, "UTF-8 string literals have an unexpected type");
_Static_assert (_Generic (u8"x"[0], char:  1, unsigned char:  2) == 2, "UTF-8 string literal elements have an unexpected type");
