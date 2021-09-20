#include <stdio.h>

void copy (const char *p, char *q) {
  while (*p != 0)
    *q++ = *p++;
}

int main (void) {
  char nombre1[80] = {0};
  char nombre2[80] = {0};

  printf("Ingrese su nombre: ");
  scanf("%s", nombre1);

  copy(nombre1, nombre2);

  printf("Hola, %s\n", nombre2);

  return 0;
}

