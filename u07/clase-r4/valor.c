#include <stdio.h>

int mitad (int n) {
  n /= 2;

  return n;
}

int main (void) {
  int a = 10;

  printf("%d ", mitad(a));
  printf("es la mitad de %d\n", a);

  return 0;
}

