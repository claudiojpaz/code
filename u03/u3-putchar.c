#include <stdio.h>
// u3-putchar.c

int main (void)
{
  int numero;

  printf("Ingrese un número (1-127): ");
  scanf("%d", &numero);

  printf("En la tabla ASCII: ");
  putchar(numero);

  return 0;
}
