#include "lib.h"
int myfun(bool b, int (*callback)(int)) {
  int num = -1;

  if (b) {
    num = callback(num);
  }
  if (callback != 0) {
    ;
    ; // intentional extra-semicolon
  }
  if (callback == nullptr) {
    return (*callback)(3); // intentional nullptr dereference
  }
  else {
    return 42;
  }
  return 0; // intentional dead code
}
