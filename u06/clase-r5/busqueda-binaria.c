#include <stdio.h>

#define N 10

int main (void) {
  int nums[N] = {4,2,3,1,10,8,5,0,7,9};

  // ordenamos por selección
  for (int i = 0; i < N-1; i++) {
    int minimo = i;
    for (int j = i+1; j < N; j++) {
      if (nums[j] < nums[minimo])
        minimo = j;
    }
    int tmp = nums[i];
    nums[i] = nums[minimo];
    nums[minimo] = tmp;
  }

  // mostramos ordenado
  for (int i = 0; i < N; i++)
    printf("%d ", nums[i]);

  printf("\n");

  // Arranca busqueda binaria

  int inicio, fin, mitad;
  int buscado = 2;
  int encontrado = -1;

  inicio = 0;
  fin = N-1;

  while (inicio <= fin) {
    mitad = (inicio + fin) / 2;
    if (nums[mitad] == buscado) {
      encontrado = mitad;
      break;
    }

    if (nums[mitad] < buscado)
      inicio = mitad + 1;
    else
      fin = mitad - 1;
  }

  if (encontrado != -1)
    printf("%d se encontró en %d\n", buscado, encontrado);
  else
    printf("%d no se encontró\n", buscado);



  return 0;
}

