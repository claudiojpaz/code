#include <stdio.h>

int main (void) {
  int nota;

  printf("Ingrese la calificación: ");
  scanf("%d", &nota);

  if (nota >= 1) {
    if (nota <= 10) {
      if (nota >= 6) {
        printf("Aprobado\n");
        printf("Felicitaciones\n");
      } else {
        printf("Desaprobado\n");
        printf("Hay que estudiar más\n");
      }
    } else {
      printf("Nota debe ser <= 10\n");
    }
  } else {
    printf("Nota debe ser >= 1\n");
  }

  return 0;
}

