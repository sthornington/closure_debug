#pragma once

#include <functional>

using Thunk = std::function<void(void)>;

Thunk f(int x) {
  return [x]() { printf("Thunk says x*2 = %d\n", x*2); };
}
