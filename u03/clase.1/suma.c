#include <stdio.h>

int main (void) {
  int n1, n2;
  int suma;

  printf("Ingrese dos números: ");
  scanf("%d %d", &n1, &n2);

  suma = n1 + n2;

  printf("%d+%d=%d\n", n1, n2, suma);

  return 0;
}

