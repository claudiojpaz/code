#include <stdio.h>

#define N 6

int main (void) {

  for (int i = 0; i < N; i++) {
    printf("%d", i);
  }

  for (int i = N; i >= 0; i--) {
    printf("%d", i);
  }

  printf("\n");

  return 0;
}

