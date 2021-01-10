// { dg-do compile }
// { dg-options "-fchar8_t" }

#include <cuchar>

namespace gnu
{
#if defined(__STDC_CHAR8_T) && __STDC_CHAR8_T > 0
  using std::mbrtoc8;
  using std::c8rtomb;
#endif
}
