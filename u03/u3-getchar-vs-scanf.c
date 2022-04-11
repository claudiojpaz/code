#include <stdio.h>
// u3-getchar-vs-scanf.c

int main (void)
{
  int numero;
  char n;

  printf("Ingrese un caracter de la tabla ASCII: ");
  numero = getchar();

  printf("En la tabla ASCII es el %d\n", numero);

  printf("Ingrese un caracter de la tabla ASCII: ");
  scanf(" %c", &n); // el espacio elimina el enter de la carga anterior

  printf("En la tabla ASCII es el %d\n", n);

  return 0;
}
