#include <stdio.h>

int main (void) {
  int n = 4;
  int vec[10] = {n};

  for (int i = 0; i < 10; i++)
    printf("%3d", vec[i]);

  printf("\n%lu\n", sizeof vec / sizeof vec[0]);


  return 0;
}

