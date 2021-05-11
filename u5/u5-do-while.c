#include <stdio.h>

int main (void) {
  int nota;

  do {
    printf("Ingrese una nota: ");
    scanf("%d", &nota);
  } while (nota < 1 || nota > 10);

  printf("Ingresó %d\n", nota);


  return 0;
}
