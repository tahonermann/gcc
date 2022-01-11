// { dg-do compile { target c8rtomb_mbrtoc8_fchar8_t } }
// { dg-options "-fchar8_t" }

#include <cuchar>

namespace gnu
{
  using std::mbrtoc8;
  using std::c8rtomb;
}
