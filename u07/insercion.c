#include <stdio.h>

#define N 8

void ordenar_menor_a_mayor_insercion (int [], int);
void imprimir_arreglo (int [], int);

int main (void) {
  int vec[8] = {4,1,6,5,3,10,7,2};

  imprimir_arreglo(vec, N);
  ordenar_menor_a_mayor_insercion(vec, N);
  imprimir_arreglo(vec, N);

  return 0;
}

void ordenar_menor_a_mayor_insercion (int vec[], int n) {
  for(int j = 1; j < n; j++) {
    int tmp = vec[j];
    int i = j;
    while(i > 0 && vec[i-1] > tmp ) {
      vec[i] = vec[i-1];
      i--;
    }

    vec[i] = tmp;
  }
}

void imprimir_arreglo (int vec[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%5d", vec[i]);
  }
  printf("\n");
}
