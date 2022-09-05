#include <stdio.h>

void capitalize(char *p) {
  if (*p >= 'a' && *p <= 'z')
    *p -= 32;
}

void copia(const char * const src, char * const dst) {
  for (int i = 0; *(src+i) != 0; i++)
    *(dst+i) = *(src+i);

}

int main (void) {
  // char nombre[20] = {'j','u','a','n'};
  // char nombre[20] = "juan";
  char nombre[20];
  char nombre2[20];

  printf("Ingrese su nombre: ");
  //scanf("%[^\n]s", nombre);
  scanf("%s", nombre);

  copia(nombre, nombre2);
  capitalize(nombre2);

  printf("hola, %s\n", nombre);
  printf("hola, %s\n", nombre2);

  return 0;
}

