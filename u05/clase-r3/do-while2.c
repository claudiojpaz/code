#include <stdio.h>

int main (void) {
  int nota;

  do {
    printf("Ingrese la nota: ");
    scanf("%d", &nota);
    if (nota < 1 || nota > 10)
      printf("fuera de rango\n");
  } while (nota < 1 || nota > 10);

  printf("nota: %d\n", nota);

  return 0;
}

