#include <stdio.h>

int main (void) {
  int n;

  printf("Cuantas notas ingresará: ");
  scanf("%d", &n);

  printf("Ingresará %d nota%c\n", n, n > 1 ? 's' : 0);

  return 0;
}

