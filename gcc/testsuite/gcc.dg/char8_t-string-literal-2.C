// Test that UTF-8 string literals have type unsigned char[] if -fchar8_t is enabled.
// { dg-do compile { target c11 } }
// { dg-options "-fchar8_t" }

void f(void)
{
  int i = _Generic(u8"text", char*: (void)0, unsigned char*: 1);
}
