#include <stdio.h>

int main (void) {
  int nota;

  // no se recomienda validar con while (usar do-while)
  printf("Ingrese una calificación: ");
  scanf("%d", &nota);
  while (nota < 1 || nota > 10) {
    printf("Ingrese una calificación: ");
    scanf("%d", &nota);
  }

  printf("Ud ingresó %d\n", nota);

  return 0;
}

