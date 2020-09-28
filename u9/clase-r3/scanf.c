#include <stdio.h>

int main (void)
{
  char apellido[5] = {0};
  char nombre[5] = {0};
  char segundo[5] = {0};

  printf("Ingrese su nombre: ");
  scanf(" %4[^\n]s", nombre);
  printf("hola, %s !", apellido);

  return 0;
}
