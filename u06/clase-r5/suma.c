#include <stdio.h>

int suma (int a, int b) {
  return a+b;
}

int main (void) {
  int n1, n2;
  int resultado;

  printf("ingrese un número: ");
  scanf("%d", &n1);
  printf("ingrese otro número: ");
  scanf("%d", &n2);

  resultado = suma(n1, n2);

  printf("%d\n", resultado);

  return 0;
}

