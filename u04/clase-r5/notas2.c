#include <stdio.h>

int main (void) {
  int nota;
  int nota_aprueba = 6;

  printf("Ingrese la calificación: ");
  scanf("%d", &nota);

  if (nota >= nota_aprueba) {
    printf("Aprobado\n");
    printf("Felicitaciones\n");
  } else {
    printf("Desaprobado\n");
  }


  return 0;
}

