#include <stdio.h>

void imprimir_cadena(const char *p) {
  printf("%s\n", p);
}

void copiar_cadena(const char * const src, char *dst) {
  for (int i = 0; *(src+i) != '\0'; i++)
    *(dst+i) = *(src+i);
}

int main (void) {
  char cadena1[] = "Hola, mundo!";
  char cadena2[20];

  copiar_cadena(cadena1, cadena2);
  imprimir_cadena(cadena2);


  return 0;
}

