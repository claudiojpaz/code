#include <stdio.h>

int main (void) {
  int nota;

  printf("  Ingrese una calificación: ");
  scanf("%d", &nota);

  if (nota == 10)
    printf("  A\n");
  if (nota == 9)
    printf("  B\n");
  if (nota == 8)
    printf("  C\n");
  if (nota == 7 || nota == 6)
    printf("  D\n");
  if (nota >= 1 && nota <= 5)
    printf("  F\n");


  return 0;
}

