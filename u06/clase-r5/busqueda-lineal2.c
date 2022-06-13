#include <stdio.h>

#define N 15

int main (void) {
  int notas[N] = {3,1,2,4,6,9,4,5,6,9,3,7,1,8,3};
  int max;

  max = notas[0];
  for (int i = 0; i < N; i++)
    if (notas[i] > max)
      max = notas[i];

  printf("El máximo es %d\n", max);

  return 0;
}

