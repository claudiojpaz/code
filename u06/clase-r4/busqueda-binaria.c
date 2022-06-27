#include <stdio.h>

#define N 10

int main (void) {
  int nums[N] = {5,4,1,3,7,9,10,8,6,2};

  // Ordenamos por selección
  for (int j = 0; j < N-1; j++) {
    int minimo = j;
    for (int i = j+1; i < N; i++) {
      if (nums[i] < nums[minimo])
        minimo = i;
    }

    int tmp = nums[j];
    nums[j] = nums[minimo];
    nums[minimo] = tmp;
  }

  for (int i = 0; i < N; i++)
    printf("%d ", nums[i]);

  printf("\n");

  // ahora buscamos
  int buscado = 8;
  int encontrado = -1;
  int inicio, fin, mitad;

  inicio = 0;
  fin = N-1;

  while (inicio <= fin) {
    for (int i = inicio; i <= fin; i++)
      printf("%d ", nums[i]);

    printf("\n");

    mitad = (inicio + fin ) / 2;

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
    printf("%d está en %d\n", buscado, encontrado);
  else
    printf("%d no está\n", buscado);



  return 0;
}

