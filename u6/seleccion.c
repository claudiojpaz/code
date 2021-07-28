#include <stdio.h>

#define N 10

int main (void) {
  int arreglo[N] = {8,3,2,0,7,9,4,1,6,5};
  int min, min_i;
  int tmp;

  for (int i = 0; i < N; i++)
    printf("%d ", arreglo[i]);

  printf("\n");

  // selección
  for (int j = 0; j < N-1; j++) {
    min = arreglo[j];
    min_i = j;
    for (int i = j; i < N; i++) {
      if (arreglo[i] < min) {
        min = arreglo[i];
        min_i = i;
      }
    }

    tmp = arreglo[j];
    arreglo[j] = arreglo[min_i];
    arreglo[min_i] = tmp;
  }

  for (int i = 0; i < N; i++)
    printf("%d ", arreglo[i]);

  printf("\n");

  return 0;
}

