#include <stdio.h>

void suma (int *pr1, int *pi1, int r2, int i2) {
  *pr1 += r2;
  *pi1 += i2;
}

int main (void) {
  int r1 = 1, i1 = 2;
  int r2 = 2, i2 = 3;

  suma(&r1, &i1, r2, i2);
  printf("%d+j%d\n", r1, i1);

  return 0;
}

