#include <stdio.h>

int main (void)
{
  char apellido[5];
  char nombre[80];
  char segundo[5];

  printf("Ingrese su nombre: ");
  scanf(" %80[^\n]s", nombre);
  printf("Hola, %s\n", apellido);

  return 0;
}
