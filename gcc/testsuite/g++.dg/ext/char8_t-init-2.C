// Test initialization from UTF-8 literals when -fchar8_t is enabled.
// { dg-do compile }
// { dg-options "-std=c++17 -fchar8_t" }

char c1 = 'x';
char c2 = u8'x';
char8_t c3 = 'x';
char8_t c4 = u8'x';

const char *pc1 = "x";
const char *pc2 = u8"x"; // { dg-error "invalid conversion from .const char8_t.. to .const char.." "char8_t" }
const char8_t *pc3 = "x"; // { dg-error "invalid conversion from .const char.. to .const char8_t.." "char8_t" }
const char8_t *pc4 = u8"x";

const char (&rca1)[2] = "x";
const char (&rca2)[2] = u8"x"; // { dg-error "invalid initialization of reference of type .const char ....... from expression of type .const char8_t ...." "char8_t" }
const char8_t (&rca3)[2] = "x"; // { dg-error "invalid initialization of reference of type .const char8_t ....... from expression of type .const char ...." "char8_t" }
const char8_t (&rca4)[2] = u8"x";

char ca1[] = "x";
char ca2[] = u8"x"; // { dg-error "char-array initialized from wide string" "char8_t" }
char8_t ca3[] = "x"; // { dg-error "int-array initialized from non-wide string" "char8_t" { xfail *-*-* } }
char8_t ca4[] = u8"x"; // { dg-bogus "char-array initialized from wide string" "char8_t" { xfail *-*-* } }
