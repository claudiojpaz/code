#include <stdio.h>

#define N 5
#define M 7

void inc (int vec[], int n) {
  for(int i = 0; i < n; i++)
    vec[i]++;
}

void imprimir(int vec[], int n) {
  for(int i = 0; i < n; i++)
    printf("%d ", vec[i]);
  printf("\n");
}

int main (void) {
  int arreglo[N] = {0,1,2,3,4};
  int vector[M] = {10,11,12,13,14,15,16};

  inc(arreglo, N);
  imprimir(arreglo, N);

  inc(vector, M);
  imprimir(vector, M);

  return 0;
}

