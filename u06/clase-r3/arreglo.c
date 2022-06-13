#include <stdio.h>

#define N 10

int main (void) {
  int vec[N];

  for (int i = 0; i < N; i++)
    vec[i] = i*i;

  for (int i = 0; i < N; i++)
    printf("%d\n", vec[i]);

  return 0;
}

