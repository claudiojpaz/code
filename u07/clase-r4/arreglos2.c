#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 15

void cargar (int vec[], int n) {
  for(int i = 0; i < n; i++) {
    vec[i] = 1 + rand()%6;
  }
}

void imprimir(int vec[], int n) {
  for(int i = 0; i < n; i++)
    printf("%d ", vec[i]);
  printf("\n");
}

int main (void) {
  int arreglo[N];
  srand(time(NULL));


  cargar(arreglo, N);
  imprimir(arreglo, N);


  return 0;
}

