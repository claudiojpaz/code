#include <stdio.h>

#define N 5

int main (void) {
  int notas[N] = {4,1,10,6,3};
  int max, min;

  max = notas[0];
  min = notas[0];
  for (int i = 0; i < N; i++) {
    if (notas[i] > max)
      max = notas[i];
    if (notas[i] < min)
      min = notas[i];
  }

  printf("El máximo es %d\n", max);
  printf("El mínimo es %d\n", min);

  return 0;
}

