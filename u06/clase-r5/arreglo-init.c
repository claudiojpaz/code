#include <stdio.h>

#define N 10

int main (void) {
  int vec[N] = { [3]=1 };

  for (int i = 0; i < N; i++)
    printf("%d\n", vec[i]);

  return 0;
}

