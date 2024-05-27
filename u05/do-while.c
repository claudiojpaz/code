#include <stdio.h>

int main (void) {
  int n;

  do {
    printf("Ingrese un calificación: ");
    scanf("%d", &n);
  } while (n < 1 || n > 10);

  printf("ok\n");

  return 0;
}

