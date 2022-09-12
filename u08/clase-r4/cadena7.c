#include <stdio.h>

int main (void) {
  char *numeros[5] = {"cero", "uno", "dos", "tres", "cuatro"};

  printf("%p\n", (void*) numeros);
  printf("%p\n", (void*) &numeros[0]);
  printf("%p\n", (void*) numeros[0]);
  printf("%p\n", (void*) &numeros[0][0]);

  return 0;
}

