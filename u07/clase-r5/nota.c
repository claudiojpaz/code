#include <stdio.h>

int ingreso_nota (void) {
  int nota;

  do {
    printf("Ingrese una nota: ");
    scanf("%d", &nota);
  } while (nota < 1 || nota > 10);

  return nota;
}

int main (void) {
  int nota;

  nota = ingreso_nota();

  printf("Ud ingresó %d\n", nota);

  return 0;
}

