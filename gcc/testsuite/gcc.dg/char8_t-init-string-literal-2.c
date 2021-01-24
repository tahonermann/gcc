/* Test that char and signed char buffers cannot be initialized by UTF-8
   string literals and that unsigned char (char8_t) buffers can be if
   -fchar8_t is enabled.  */
/* { dg-do compile } */
/* { dg-options "-fchar8_t" } */

char cbuf1[] = "text";
char cbuf2[] = { "text" };
char cbuf3[] = u8"text";		/* { dg-error "from a string literal with type array of .unsigned char." } */
char cbuf4[] = { u8"text" };		/* { dg-error "from a string literal with type array of .unsigned char." } */

signed char scbuf1[] = "text";
signed char scbuf2[] = { "text" };
signed char scbuf3[] = u8"text";	/* { dg-error "from a string literal with type array of .unsigned char." } */
signed char scbuf4[] = { u8"text" };	/* { dg-error "from a string literal with type array of .unsigned char." } */

unsigned char ucbuf3[] = "text";
unsigned char ucbuf4[] = { "text" };
unsigned char ucbuf1[] = u8"text";
unsigned char ucbuf2[] = { u8"text" };
