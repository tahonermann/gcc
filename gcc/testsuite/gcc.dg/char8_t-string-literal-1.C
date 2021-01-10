// Test that UTF-8 string literals have type char[] if -fchar8_t is not enabled.
// { dg-do compile { target c11 } }
// { dg-options "-fno-char8_t" }

void f(void)
{
  int i = _Generic(u8"text", char*: 1, unsigned char*: (void)0);
}
