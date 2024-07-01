#include <stdio.h>

int recursiva (int n) {
  n = 3;
  recursiva(n);
  return n;
}

int main (void) {

  recursiva(1);

  return 0;
}
