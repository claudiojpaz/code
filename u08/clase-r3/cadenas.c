#include <stdio.h>
#include <string.h>

void copia2(const char * const p, char * const q) {
  for (int i = 0; *(p+i) != 0; i++)
    *(q+i) = *(p+i);

  if (*q >= 97 && *q <= 124)
    *q -= ' ';
}

void copia(char *p, char *q) {
  for (int i = 0; *p != 0; i++)
    *q++ = *p++;
}

int main (void) {
  // char nombre[20] = {'j','u','a','n'};
  char nombre[20] = "juan";
  char nombre2[20];

  copia2 (nombre, nombre2);

  printf("hola, %s\n", nombre);
  printf("hola, %s\n", nombre2);

  return 0;
}

