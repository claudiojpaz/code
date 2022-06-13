#include <stdio.h>

#define N 50

int main (void) {
  int vec[N] = {[N/2 ... (N+1)/2]=1};

  for (int i = 0; i < N; i++)
    printf("%d %d\n", i, i % 2 == 0 ? (char)vec[i]: vec[i] );

  return 0;
}

