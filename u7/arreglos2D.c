#include <stdio.h>

#define N 3
#define M 3

void carga (int mat[][M], int n, int m) {
  int c = 1;

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      mat[i][j] = c++;

}

int main (void) {
  int mat[N][M] = {0};

  carga(mat, N, M);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++)
      printf("%5d", mat[i][j]);
    printf("\n");
  }

  return 0;
}
