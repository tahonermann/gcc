/* Test C2X predefined macros.  */
/* { dg-do compile } */
/* { dg-options "-std=c2x" } */

#if !defined(__CHAR8_TYPE__)
# error __CHAR8_TYPE__ is not defined!
#endif

#if !defined(__GCC_ATOMIC_CHAR8_T_LOCK_FREE)
# error __GCC_ATOMIC_CHAR8_T_LOCK_FREE is not defined!
#endif
