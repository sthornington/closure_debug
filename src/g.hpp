#pragma once

#include "f.hpp"
#include <stdio.h>

struct Whence {
  const char *fn;
  const char *file;
  int line;
};

#define HERE()                                                                 \
  Whence { __FUNCTION__, __FILE__, __LINE__ }

inline Thunk schedule(Thunk f, Whence w) {
  return [w, f]() {
    printf("%s %s:%d\n", w.fn, w.file, w.line);
    f();
  };
}
