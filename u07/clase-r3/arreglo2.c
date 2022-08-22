#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 15
#define M 15

void carga (int mat[][M], int n, int m) {
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      mat[i][j] = rand() % 10;

}

void imprimir (int mat[][M], int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      printf("%5d", mat[i][j]);

    printf("\n");
  }

}

int main (void) {
  int arreglo[N][M];
  srand(time(NULL));

  carga(arreglo, N, M);

  imprimir(arreglo, N, M);

  printf("\n");

  return 0;
}

