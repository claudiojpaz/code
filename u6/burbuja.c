#include <stdio.h>

#define N 10

int main (void) {
  int arreglo[N] = {9,1,2,5,7,8,4,9,6,0};
  int tmp;

  for (int i = 0; i < N; i++)
    printf("%d ", arreglo[i]);

  printf("\n");

  // burbuja (y mejorada con el -j)
  for (int j = 0; j < N-1; j++) {
    for (int i = 0; i < N-1-j; i++) {
      if (arreglo[i] > arreglo[i+1]) {
        tmp = arreglo[i];
        arreglo[i] = arreglo[i+1];
        arreglo[i+1] = tmp;
      }
    }
  }

  for (int i = 0; i < N; i++)
    printf("%d ", arreglo[i]);

  printf("\n");

  return 0;
}

