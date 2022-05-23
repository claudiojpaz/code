#include <stdio.h>

#define N 10

int main (void) {
  // comentario

  for (int i = 0; i < N; i++) {
    if (i == 5)
      continue;

    printf("%d\n", i);
  }

  return 0;
}

