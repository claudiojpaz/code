#include <stdio.h>

int main (void) {
  int nota;

  do {
    printf("Ingrese la calificación: ");
    scanf("%d", &nota);

    if (nota < 1 || nota > 10) {
      printf("Error. Rango válido: 1-10\n");
    }

  } while (nota < 1 || nota > 10);
  printf("Ingresó un %d\n", nota);


  // lo mimso pero solo con while (ojo! más difícil de leer)
  printf("Ingrese la calificación: ");
  scanf("%d", &nota);
  while (nota < 1 || nota > 10) {
    printf("Error. Rango válido: 1-10\n");
    printf("Ingrese la calificación: ");
    scanf("%d", &nota);
  }
  printf("Ingresó un %d\n", nota);
  //
  // lo mimso pero solo con while (ojo! más difícil de leer)
  nota = -1;
  while (nota < 1 || nota > 10) {
    printf("Ingrese la calificación: ");
    scanf("%d", &nota);

    if (nota < 1 || nota > 10) {
      printf("Error. Rango válido: 1-10\n");
    }

  }
  printf("Ingresó un %d\n", nota);

  return 0;
}

