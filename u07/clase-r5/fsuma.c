#include <stdio.h>

int suma (int, int);

int main (void) {
  int n1, n2;

  printf("Ingrese un número: ");
  scanf("%d", &n1);
  printf("Ingrese un número: ");
  scanf("%d", &n2);

  printf("%d\n", suma(n1,n2));

  return 0;
}

int suma (int a, int b) {
  int resultado;

  resultado = a + b;

  return resultado;
}
