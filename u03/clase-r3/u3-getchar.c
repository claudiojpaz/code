#include <stdio.h>

int main (void)
{
  int numero;

  printf("Ingrese un caracter de la tabla ASCII: ");
  numero = getchar();
  printf("En la tabla ASCII es el %d\n", numero);

  printf("Ingrese un caracter de la tabla ASCII: ");
  numero = getchar();
  printf("En la tabla ASCII es el %d\n", numero);

  return 0;
}
