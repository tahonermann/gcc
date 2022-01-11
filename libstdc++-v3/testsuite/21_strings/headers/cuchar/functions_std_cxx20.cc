// { dg-do compile { target c8rtomb_mbrtoc8_cxx20 } }
// { dg-options "-std=c++20" }

#include <cuchar>

namespace gnu
{
  using std::mbrtoc8;
  using std::c8rtomb;
}
