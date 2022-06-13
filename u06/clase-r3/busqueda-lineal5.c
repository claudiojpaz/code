#include <stdio.h>

#define N 15

int main (void) {
  int notas[N] = {3,1,2,4,5,7,10,5,6,3,10,7,8,9,4};
  int max, min;
  int i_max, i_min;

  max = notas[0];
  min = notas[0];
  for (int i = 0; i < N; i++) {
    if (notas[i] >= max) {
      max = notas[i];
      i_max = i;
    }

    if (notas[i] <= min) {
      min = notas[i];
      i_min = i;
    }
  }

  printf("La nota máxima es %d y la obtuvo %d\n", max, i_max);
  printf("La nota mínima es %d y la obtuvo %d\n", min, i_min);

  return 0;
}

