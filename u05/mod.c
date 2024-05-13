#include <stdio.h>

int main (void) {
  int n;

  printf("Ingrese un número: ");
  scanf("%d", &n);

  if (n % 2 == 1)
    printf("El número es impar\n");
  else
    printf("El número es par\n");

  return 0;
}

