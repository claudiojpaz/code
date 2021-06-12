#include <stdio.h>

int main (void) {
  int nota;

  do {
    printf("Ingrese la calificación: ");
    scanf("%d", &nota);

    if (nota < 1 || nota > 10) {
      printf("Error. Rango válido: 1-10\n");
    }

  } while (nota < 1 || nota > 10);

  /*
  !(1 <= nota <= 10)
  !(1 <= nota && nota <= 10)
    1 > nota || nota > 10
    nota < 1 || nota > 10
  */

  printf("Ingresó un %d\n", nota);

  return 0;
}

