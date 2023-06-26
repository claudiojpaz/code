#include <stdio.h>

int main (void) {
  int a, b;
  int max;

  printf("Ingrese dos números: ");
  scanf("%d %d", &a, &b);

  if (a > b)
    max = a;
  else
    max = b;

  printf("El mayor es %d");

  return 0;
}

