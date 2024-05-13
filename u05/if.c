#include <stdio.h>

int main (void) {
  int nota_ok = 1;
  int nota;

  printf("Ingrese la calificación: ");
  scanf("%d", &nota);

  if (nota >= 6)
    nota_ok = 1;
  else
    nota_ok = 0;

  if (nota_ok == 1)
    printf("Aprobado\n");

  return 0;
}

