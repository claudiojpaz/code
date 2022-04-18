#include <stdio.h>

int main (void) {
  int n1, n2;
  int resultado;

  printf("Ingrese dos números: ");
  scanf("%d %d", &n1, &n2);

  resultado = n1 + n2;

  printf("%d + %d = %d\n", n1, n2, resultado);

  return 0;
}

