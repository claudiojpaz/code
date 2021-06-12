#include <stdio.h>
// u5-for-break.c

int main (void) {
  int nota, suma;
  int i;
  int s,c;

  suma = 0;
  printf("Ingrese 10 calificaciones, o 0 para terminar\n");
  for (i = 0; i < 10; i++) {
    do {
      printf("Ingrese la calificación: ");
      s = scanf("%d", &nota);
      if (s == 0) {
        printf("Ingreso incorrecto. Intente de nuevo\n");
        while((c = getchar()) != '\n')
          /* discard */ ;
        nota = -1;
      }

    } while (nota < 0 || nota > 10);

    if (nota == 0)
      break;

    suma += nota;
  }

  printf("El promedio es %.2f\n", (float) suma / i);

  return 0;
}

