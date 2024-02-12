#include <emscripten.h>
extern "C" {
  EMSCRIPTEN_KEEPALIVE int cppAdd(int a, int b) {
    return a + b;
  }
}