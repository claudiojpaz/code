#include <stdio.h>

#define N 6

int main (void) {

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}

