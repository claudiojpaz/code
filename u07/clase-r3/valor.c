#include <stdio.h>

int mitad (int a) {
  a /= 2;

  return a;
}

int main (void) {
  int n = 10;

  printf("%d ", mitad(n));
  printf("es la mitad de %d\n", n);

  return 0;
}

