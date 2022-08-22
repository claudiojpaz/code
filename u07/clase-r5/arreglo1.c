#include <stdio.h>

#define N 5

void inc (int vec[N]) {
  for (int i = 0; i < N; i++)
    vec[i]++;
}

void imprimir (int vec[N]) {
  for (int i = 0; i < N; i++)
    printf("%d ", vec[i]);

  printf("\n");
}


int main (void) {
  int arreglo[N] = {0,1,2,3,4};

  inc(arreglo);

  imprimir(arreglo);

  return 0;
}

