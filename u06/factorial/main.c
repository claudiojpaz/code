#include <stdio.h>
#include <stdlib.h>
#include "factorial.h"
#include "factorial.h"

int main (void) {
  int n;

#ifdef __unix
  system("clear");
#endif
#ifdef _win32
  system("cls");
#endif

  printf("Ingrese un número: ");
  scanf("%d", &n);

  printf("el factorial de %d es %d\n", n, factorial(n));

  return 0;
}

