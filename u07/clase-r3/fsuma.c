#include <stdio.h>

int suma (int a, int b) {
  return a + b;
}

int main (void) {
  int n1, n2;
  int r;

  printf("ingrese un número: ");
  scanf("%d", &n1);
  printf("ingrese un número: ");
  scanf("%d", &n2);

  r = suma(n1, n2);

  printf("%d\n", r);

  return 0;
}

