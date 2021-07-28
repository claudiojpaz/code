#include <stdio.h>

#define N 10


int main (void) {
  int arreglo[N] = {1,5,8,10,32,40,53,65,70,98};
  int busqueda = 8;
  int i = -1;
  int inicial, medio, final;

  inicial = 0;
  final = N-1;

  while (inicial <= final) {
    medio = (inicial + final) / 2;

    for (int i = inicial; i <= final; i++)
      printf("%d ", arreglo[i]);

    printf("\n");

    if (arreglo[medio] == busqueda) {
      i = medio;
      break;
    }

    if (busqueda > arreglo[medio])
      inicial = medio+1;
    else
      final = medio-1;
  }

  if (i != -1)
    printf("El elemento está en %d\n", i);
  else
    printf("El elemento no está\n");

  return 0;
}

