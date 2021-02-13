// { dg-do compile }
// { dg-options "-fchar8_t" }

#include <cuchar>

namespace gnu
{
#if _GLIBCXX_USE_UCHAR_CHAR8_T
  using std::mbrtoc8;
  using std::c8rtomb;
#endif
}
