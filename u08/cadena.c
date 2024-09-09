#include <stdio.h>

void copiar (const char *src, char *dst)
{
  for (int i = 0; *(src+i) != 0; i++)
    *(dst+i) = *(src+i);

  dst[0] -= ' ';
}

int main (void) {
  char origen[20] = "hola";
  char destino[20];

  copiar(origen, destino);

  printf("%s\n", destino);

  return 0;
}

