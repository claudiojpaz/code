#include <stdio.h>

int main (void) {
  int nota;

  printf("Ingrese una calificación: ");
  scanf("%d", &nota);

  switch (nota) {
    case 10:
      printf("A\n");
      break;
    case 9:
      printf("B\n");
      break;
    case 8:
      printf("C\n");
      break;
    case 7:
    case 6:
      printf("D\n");
      break;
    default:
      if (nota >= 1 && nota <= 5)
        printf("F\n");
      else
        printf("Nota incorrecta\n");
  }



  return 0;
}

