#include <stdio.h>

int main (void) {
  int nota = 0;
  int i = 0;

  switch (nota) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      printf("Desaprobado\n");
      break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      printf("Aprobado\n");
      break;
    default:
      printf("Nota no válida\n");
  }

  return 0;
}

