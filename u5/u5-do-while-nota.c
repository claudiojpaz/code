#include <stdio.h>

int main (void) {
  int nota;

  do {
    printf("Ingrese una calificación: ");
    scanf("%d", &nota);
  //} while (!(1 <= nota && nota <= 10));
  } while (nota < 1 || nota > 10);

  printf("Ud ingresó %d\n", nota);

  return 0;
}

