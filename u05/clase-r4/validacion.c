#include <stdio.h>

int main (void) {
  int nota;

  /*
  printf("Ingrese una nota: ");
  scanf("%d", &nota);
  while (nota < 1 || nota > 10) {
    printf("Ingrese una nota: ");
    scanf("%d", &nota);
  }
  */

  do {
    printf("Ingrese una nota: ");
    scanf("%d", &nota);
  } while (nota < 1 || nota > 10);

  printf("%d\n", nota);

  return 0;
}

