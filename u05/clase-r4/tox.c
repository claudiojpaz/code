#include <stdio.h>

int main (void) {
  int n;

  printf("Cuantas notas ingresará: ");
  scanf("%d", &n);

  printf("ingresará %d nota%c\n", n, n == 1 ? 0 : 's');

  return 0;
}

