#include <stdio.h>

#define N 10

int main (void) {
  int notas[N] = {4,1,4,6,3,5,10,9,3,7};
  int inotas[N];
  int buscado;
  int c_buscado;

  for (int i = 0; i < N; i++)
    inotas[i] = -1;

  buscado = 3;
  c_buscado = 0;
  for (int i = 0; i < N; i++)
    if (notas[i] == buscado)
      inotas[c_buscado++] = i;

  if (c_buscado > 0) {
    printf("El elemento %d está %d veces\n", buscado, c_buscado);
  } else
    printf("No está\n");

  for (int i = 0; inotas[i] != -1; i++)
    printf(" %d ", inotas[i]);

  return 0;
}

