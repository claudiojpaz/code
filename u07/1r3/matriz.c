#include <stdio.h>

#define N 10

void imprimir_matriz_cuadrada (int m[][N], int n) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++)
      printf("%3d", m[i][j]);
    printf("\n");
  }
}

void cargar_identidad (int m[][N], int n) {
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      if (i == j)
        m[i][j] = 1;
      else
        m[i][j] = 0;
}

int main (void) {
  int mat[N][N];

  cargar_identidad(mat, N);

  imprimir_matriz_cuadrada(mat, N);

  return 0;
}

