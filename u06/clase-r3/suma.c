#include <stdio.h>

int suma (int a, int b) {
  return a+b;
}

int main (void) {
  int n1 = 3, n2 = 4;
  int resultado;

  resultado = suma(n1, n2);

  printf("%d\n", resultado);

  return 0;
}

