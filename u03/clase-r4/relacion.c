#include <stdio.h>

int main (void) {
  int n1, n2;

  printf("ingrese dos números: ");
  scanf("%d %d", &n1, &n2);
  printf("%d>%d devuelve %d\n",n1, n2, n1>n2);

  return 0;
}

