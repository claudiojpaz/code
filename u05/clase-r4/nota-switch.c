#include <stdio.h>

int main (void) {
  int nota;
  int error;

  do {
    error = 0;

    printf("  Ingrese una calificación: ");
    scanf("%d", &nota);

    switch (nota) {
      case 10:
        printf("  A\n");
        break;
      case 9:
        printf("  B\n");
        break;
      case 8:
        printf("  C\n");
        break;
      case 7:
      case 6:
        printf("  D\n");
        break;
      case 5:
      case 4:
      case 3:
      case 2:
      case 1:
        printf("  F\n");
        break;
      default:
        printf("  Calificación no válida\n");
        error = 1;
        break;
    }

  } while (error);

  return 0;
}

