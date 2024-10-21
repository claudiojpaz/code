#include <stdio.h>
#define N 5

void tam (int vec[], int n) {
  vec[0] = 0;
}

int main (void) {
  int vec[N] = {1,2,3,4,5};

  tam(vec, N);
  printf("%lu\n", sizeof vec / sizeof vec[0]);

  return 0;
}

