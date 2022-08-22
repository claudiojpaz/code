#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void carga (int vec[], int n) {
  for (int i = 0; i < n; i++)
    vec[i] = 1 + rand() % 6;

}

int main (void) {
  int arreglo[N] = {0,1,2,3,4};
  srand(time(NULL));

  carga(arreglo, N);

  for (int i = 0; i < N; i++)
    printf("%d ", arreglo[i]);

  printf("\n");

  return 0;
}

