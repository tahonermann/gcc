// Test initialization from UTF-8 literals when -fchar8_t is not enabled.
// { dg-do compile }
// { dg-options "-std=c++17 -fno-char8_t" }

char c1 = 'x';
char c2 = u8'x';

const char *pc1 = "x";
const char *pc2 = u8"x";

const char (&rca1)[2] = "x";
const char (&rca2)[2] = u8"x";

char ca1[] = "x";
char ca2[] = u8"x";
