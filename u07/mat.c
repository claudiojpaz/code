#include <stdio.h>

#define N 10

int main (void) {
  int mat[N][N] = {0};

  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      if (i==j)
        mat[i][j] = 1;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++)
      printf(" %d", mat[i][j]);
    printf("\n");
  }

  return 0;
}

