#include <stdio.h>

#define N 10

int main (void) {
  int arreglo[N] = {1,5,8,10,12,50,65,78,80,98};
  int busqueda = 65;
  int inicial, medio, final;
  int i = -1;

  for (int i = 0; i < N; i++)
    printf("%d ", arreglo[i]);
  printf("\n");

  inicial = 0;
  final = N-1;

  while (inicial <= final) {
    medio = (inicial+final) / 2;
    if (busqueda == arreglo[medio]) {
      i = medio;
      break;
    }

    if (busqueda > arreglo[medio])
      inicial = medio + 1;
    else
      final = medio - 1;
  }

  if (i != -1)
    printf("Lo encontré en %d\n", i);
  else
    printf("No lo encontré\n");

  return 0;
}

