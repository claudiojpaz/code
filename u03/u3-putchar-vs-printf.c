#include <stdio.h>
// u3-putchar-vs-printf.c

int main (void)
{
  int numero;

  printf("Ingrese un número (1-127): ");
  scanf("%d", &numero);

  printf("En la tabla ASCII: ");
  putchar(numero);
  printf("\n");

  printf("En la tabla ASCII: %c\n", numero);

  return 0;
}
