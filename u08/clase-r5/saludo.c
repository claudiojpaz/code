#include <stdio.h>

void copia(const char *const src, char *dst) {
  for (int i = 0; i < 20; i++)
    *(dst+i) = *(src+i);

  if (*dst >= 'a' && *dst <= 'z')
    *dst -= ' ';
}

int main (void) {
  //char nombre[20] = {'j','u','a','n'};
  char nombre[20] = "juan";
  char nombre2[20];

  copia(nombre, nombre2);
  printf("hola, %s!\n", nombre);
  printf("hola, %s!\n", nombre2);

  return 0;
}

