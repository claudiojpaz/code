#include <stdio.h>

#define N 15

int main (void) {
  int notas[N] = {3,1,2,4,5,7,8,5,5,3,10,7,8,9,4};
  int busqueda;
  int i_busqueda;

  busqueda = 8;
  i_busqueda = -1;
  for (int i = 0; i < N; i++) {
    if (notas[i] == busqueda) {
      i_busqueda = i;
      break;
    }
  }

  if (i_busqueda != -1)
    printf("Encontrado en %d\n", i_busqueda);
  else
    printf("No encontrado\n");

  return 0;
}

