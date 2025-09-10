#include <stdio.h>

void copiar_cadena(const char * const p, char *q) {
  for (int i = 0; *(p+i) != 0; i++)
    *(q+i) = *(p+i);
}

int main (void) {
  char cadena[] = "hola, mundo!";
  char destino[20] = {0};

  copiar_cadena(cadena, destino);
  printf("%s\n", destino);
  printf("%s\n", cadena);

  return 0;
}

