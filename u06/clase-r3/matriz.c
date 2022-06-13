#include <stdio.h>

#define N 5
#define M 5

int main (void) {
  int mat[N][M];
  int c = -5;

  for (int i = 0; i < N; i++)
    for (int j = 0; j < M; j++)
      mat[i][j] = c++;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }



  return 0;
}

