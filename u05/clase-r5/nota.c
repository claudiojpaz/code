#include <stdio.h>

int main (void) {
  int nota;

  printf("Ingrese la nota: ");
  scanf("%d", &nota);

  if (nota >= 6)
  {
    printf("Aprobado\n");
    printf("Felicitaciones!\n");
  }

  return 0;
}

