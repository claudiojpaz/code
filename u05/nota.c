#include <stdio.h>

int main (void) {
  int nota;

  printf("Ingrese la calificación: ");
  scanf("%d", &nota);

  if ( nota >= 6 )
    if ( nota >= 9 )
      printf("Excelente!\n");
    else
      printf("Aprobado!\n");
  else
    printf("Desaprobado\n");

  return 0;
}

