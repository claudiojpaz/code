#include <stdio.h>

#define N 10
#define M 15

int main (void) {
  int mat[N][M];

  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      mat[i][j] = 0;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++)
      printf("%3d", mat[i][j]);
    printf("\n");
  }


  return 0;
}

