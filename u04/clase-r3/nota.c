#include <stdio.h>

int main (void) {
  int nota;

  printf("Ingrese la calificación: ");
  scanf("%d", &nota);

  if (nota >= 6) {
    if (nota <= 10) {
      printf("Aprobado\n");
      printf("Felicitaciones\n");
    } else {
      printf("Nota fuera de rango (1-10)\n");
    }
  } else {
    if (nota >= 1) {
      printf("Desaprobado\n");
      printf("Hay que estudiar más\n");
    } else {
      printf("Nota fuera de rango (1-10)\n");
    }
  }

  return 0;
}

