#include <stdio.h>

int suma (int a, int b) {
  int resultado;

  resultado = a + b;

  return resultado;
}

int main (void) {

  printf("%d\n", suma());

  return 0;
}

