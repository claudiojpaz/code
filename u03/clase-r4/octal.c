#include <stdio.h>

int main (void) {
  int octal;

  printf("Ingrese un número octal: ");
  scanf("%i", &octal);

  printf("Ingresó un %d en base diez\n", octal);
  printf("Ingresó un 0x%X en base 16\n", octal);
  printf("Ingresó un %o en base 8\n", octal);

  return 0;
}

