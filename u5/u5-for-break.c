#include <stdio.h>
// u5-for-break.c

int main (void) {
  int nota, suma=0;
  int i;

  printf("Ingrese 10 calificaciones, o 0 para terminar\n");
  for (i = 0; i < 10; i++) {
    do {
      printf("Ingrese la calificación %d: ", i+1);
      scanf("%d", &nota);
    } while (nota < 0 || nota > 10);

    if (nota == 0)
      break;

    suma += nota;
  }

  printf("El promedio es %.2f\n", (float) suma / i);

  return 0;
}

