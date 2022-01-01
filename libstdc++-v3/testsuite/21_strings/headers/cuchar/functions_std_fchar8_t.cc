// { dg-do compile }
// { dg-options "-fchar8_t" }

#include <cuchar>

namespace gnu
{
#if _GLIBCXX_USE_UCHAR_C8RTOMB_MBRTOC8_FCHAR8_T
  using std::mbrtoc8;
  using std::c8rtomb;
#endif // _GLIBCXX_USE_UCHAR_C8RTOMB_MBRTOC8_FCHAR8_T
}
