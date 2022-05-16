#include <stdio.h>

int main (void) {
  int nota;

  do {
    printf("Ingrese una calificación: ");
    scanf("%d", &nota);
  } while ( nota > 10 || nota < 1);


  printf("calificación ok\n");

  return 0;
}

