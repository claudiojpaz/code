#include <stdio.h>

int main (void) {
  int nota_ok = 1;
  int nota;

  printf("Ingrese la calificación: ");
  scanf("%d", &nota);

  if (nota <= 10 && nota >= 1)
    if (nota >= 6)
      nota_ok = 1;
    else
      nota_ok = 0;
  else
    nota_ok = -1;

  if (nota_ok == 0)
    printf("Desaprobado\n");
  else
    if (nota_ok == 1)
      printf("Aprobado\n");
    else
      printf("Nota incorrecta\n");

  return 0;
}

