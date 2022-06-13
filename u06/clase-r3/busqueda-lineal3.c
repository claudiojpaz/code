#include <stdio.h>

#define N 15

int main (void) {
  int notas[N] = {3,1,2,4,5,7,10,5,6,3,2,7,8,9,4};
  int max, min;

  max = notas[0];
  min = notas[0];
  for (int i = 0; i < N; i++) {
    if (notas[i] > max)
      max = notas[i];
    }

  printf("La nota máxima es %d\n", max);

  return 0;
}

