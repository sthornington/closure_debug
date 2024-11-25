#include "f.hpp"
#include "g.hpp"
#include <iostream>

Thunk h() { return schedule(f(55), HERE()); }

auto main(int argc, char *argv[]) -> int {
  Thunk f0 = h();
  f0();
  return 0;
}
