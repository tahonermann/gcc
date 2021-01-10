/* Test atomic_is_lock_free for char8_t.  */
/* { dg-do run } */
/* { dg-options "-std=c11 -fchar8_t -pedantic-errors" } */

#include <stdatomic.h>
#include <stdint.h>

extern void abort (void);

#if defined(__STDC_CHAR8_T) && __STDC_CHAR8_T > 0
_Atomic __CHAR8_TYPE__ ac8a;
atomic_char8_t ac8t;
#endif

#define CHECK_TYPE(MACRO, V1, V2)		\
  do						\
    {						\
      int r1 = MACRO;				\
      int r2 = atomic_is_lock_free (&V1);	\
      int r3 = atomic_is_lock_free (&V2);	\
      if (r1 != 0 && r1 != 1 && r1 != 2)	\
	abort ();				\
      if (r2 != 0 && r2 != 1)			\
	abort ();				\
      if (r3 != 0 && r3 != 1)			\
	abort ();				\
      if (r1 == 2 && r2 != 1)			\
	abort ();				\
      if (r1 == 2 && r3 != 1)			\
	abort ();				\
      if (r1 == 0 && r2 != 0)			\
	abort ();				\
      if (r1 == 0 && r3 != 0)			\
	abort ();				\
    }						\
  while (0)

int
main ()
{
#if defined(__STDC_CHAR8_T) && __STDC_CHAR8_T > 0
  CHECK_TYPE (ATOMIC_CHAR8_T_LOCK_FREE, ac8a, ac8t);
#endif

  return 0;
}
