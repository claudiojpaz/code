#include <stdio.h>

struct persona {
  int dni;
  char nombre[80];
};

struct persona carga (void) {
  struct persona r;

  printf("Ingrese su DNI: ");
  scanf("%d", &r.dni);
  printf("Ingrese su nombre: ");
  scanf("%s", r.nombre);

  return r;
}

int main (void)
{
  struct persona p;

  p = carga();

  printf("dni: %d\n", p.dni);
  printf("nombre: %s\n", p.nombre);

  return 0;
}


