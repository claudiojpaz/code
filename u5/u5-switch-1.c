#include <stdio.h>

int main (void) {
  int n;

  printf("Ingrese un calificación: ");
  scanf("%d", &n);

  switch (n) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      printf("F\n");
      break;
    case 6:
      printf("E\n");
      break;
    case 7:
      printf("D\n");
      break;
    case 8:
      printf("C\n");
      break;
    case 9:
      printf("B\n");
      break;
    case 10:
      printf("A\n");
      break;
    default:
      printf("Nota no válida\n");
  }

  return 0;
}

