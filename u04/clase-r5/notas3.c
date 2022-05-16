#include <stdio.h>

int main (void) {
  int nota;

  printf("Ingrese la calificación: ");
  scanf("%d", &nota);

  if (nota >= 6) {
    printf("Aprobado\n");

    if (nota >= 8)
      printf("Felicitaciones\n");
    else
      printf("Bien, pero no tan bien\n");

  } else {
    printf("Desaprobado\n");
  }


  return 0;
}

