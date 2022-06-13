#include <stdio.h>

#define N 480
#define M 640

int main (void) {
  int mat[3][N][M] = {0};

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      printf(" %d ", mat[i][j]);
    }
    printf("\n");
  }


  return 0;
}

