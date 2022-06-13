#include <stdio.h>

#define N 10

int main (void) {
  int notas[N] = {4,1,4,6,3,5,10,9,3,7};
  int buscado;
  int i_buscado, c_buscado = 0;

  buscado = 3;
  i_buscado = -1;
  for (int i = 0; i < N; i++)
    if (notas[i] == buscado) {
      i_buscado = i;
      c_buscado++;
    }

  if (i_buscado != -1) {
    printf("El elemento %d está %d veces\n", buscado, c_buscado);
    printf("El último está en el índice %d\n", i_buscado);
  } else
    printf("No está\n");


  return 0;
}

