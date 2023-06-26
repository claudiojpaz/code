#include <stdio.h>

int main (void) {
  int nota;

  /*
  printf("Ingrese la nota: ");
  scanf("%d", &nota);
  while (nota < 1 || nota > 10) {
    printf("Nota incorrecta\n");
    printf("Ingrese la nota: ");
    scanf("%d", &nota);
  }
  */

  do {
    printf("Ingrese la nota: ");
    scanf("%d", &nota);
    if (nota < 1 || nota > 10)
      printf("Nota incorrecta\n");
  } while (nota < 1 || nota > 10);

  printf("%d\n", nota);

  return 0;
}

