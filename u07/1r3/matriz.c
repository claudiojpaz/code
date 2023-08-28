#include <stdio.h>

#define N 10
#define M 10

int main (void) {
  int mat[N][M];

  for (int i = 0; i < N; i++)
    for (int j = 0; j < M; j++)
      mat[i][j] = 0;

  for (int i = 0; i < N; i++)
    mat[0][i] = 1;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++)
      printf("%3d", mat[i][j]);
    printf("\n");
  }


  return 0;
}

