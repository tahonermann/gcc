/* Test that char, signed char, and unsigned char buffers can all be initialized
   by UTF-8 string literals if -fchar8_t is not enabled.  */
/* { dg-do compile { target c11 } } */
/* { dg-options "-fno-char8_t" } */

char cbuf1[] = u8"text";
char cbuf2[] = { u8"text" };

signed char scbuf1[] = u8"text";
signed char scbuf2[] = { u8"text" };

unsigned char ucbuf1[] = u8"text";
unsigned char ucbuf2[] = { u8"text" };
