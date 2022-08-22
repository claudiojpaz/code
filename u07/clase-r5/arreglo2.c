#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000

void carga (int vec[], int n) {
  for (int i = 0; i < n; i++) {
    vec[i] = 1 + rand() % 6;
  }
}

void imprimir (int vec[], int n) {
  for (int i = 0; i < n; i++)
    printf("%d ", vec[i]);

  printf("\n");
}


int main (void) {
  int arreglo[N];
  srand(time(NULL));

  carga(arreglo, 5);

  imprimir(arreglo, 5);

  return 0;
}

