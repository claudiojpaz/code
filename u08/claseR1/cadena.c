#include <stdio.h>

void copiar_cadena(char * src, const char * dst) {
  for (int i = 0; *src != 0 ; i++)
    *dst++ = *src++;
}

void imprimir_cadena(const char *p) {
  printf("%s", p);
}

int main (void) {
  char cadena[20] = "Hola, mundo!\n";
  char destino[20] = {0};

  copiar_cadena(cadena, destino);
  imprimir_cadena(destino);

  return 0;
}

