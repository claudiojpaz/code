#include <stdio.h>

int main (void) {
  char *numeros[5] = {"cero", "uno", "dos", "tres", "cuatro"};

  printf("%p\n", numeros);
  printf("%p\n", &numeros[0]);

  printf("%p\n", &numeros[0][0]);
  printf("%p\n", numeros[0]);

  return 0;
}

