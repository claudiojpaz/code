#include <stdio.h>

#define ERR

int main (void) {
  int nota;

#ifndef ERR
  do {
    printf("Ingrese una calificación: ");
    scanf("%d", &nota);
  } while ( nota > 10 || nota < 1);
#endif


  printf("calificación ok\n");

  return 0;
}

