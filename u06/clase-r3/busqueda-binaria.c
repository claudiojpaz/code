#include <stdio.h>

#define N 10

int main (void) {
  int nums[N] = {3,1,9,5,4,7,6,8,0,11};

  // ordenamos por selección
  for (int i = 0; i < N-1; i++) {
    int minimo = i;
    for (int j = i + 1; j < N; j++) {
      if (nums[j] < nums[minimo])
        minimo = j;
    }

    int tmp = nums[i];
    nums[i] = nums[minimo];
    nums[minimo] = tmp;

  }

  for (int i = 0; i < N; i++)
    printf("%d ", nums[i]);

  printf("\n");

  // Ahora si buscamos
  int inicio, fin, mitad;
  int buscado = 5;
  int encontrado = -1;

  inicio = 0;
  fin = N - 1;

  while (inicio <= fin) {
    for (int i = inicio; i <= fin; i++)
      printf("%d ", nums[i]);

    printf("\n");

    mitad = (inicio + fin) / 2;
    if (nums[mitad] == buscado) {
      encontrado = mitad;
      break;
    }
    if (nums[mitad] > buscado)
      fin = mitad - 1;
    else
      inicio = mitad + 1;


  }

  if (encontrado != -1)
    printf("%d se encontró en %d\n", buscado, encontrado);
  else
    printf("%d no se encontró\n", buscado);



  return 0;
}

