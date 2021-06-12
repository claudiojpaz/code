#include <stdio.h>

#define N 3
#define M 3

int main (void) {
  int mat[N][M] = {0};

  mat[1][1] = 1;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      printf("%5d", mat[i][j]);
    }
    printf("\n");
  }

  return 0;
}

