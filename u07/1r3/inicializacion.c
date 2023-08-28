#include <stdio.h>

int main (void) {
  int n = 5;

  int vec[10] = {n};

  for (int i = 0; i < 10; i++)
    printf("%d ", vec[i]);

  return 0;
}

