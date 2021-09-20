#include <stdio.h>

int main (void) {
  char *numeros[5] = {"cero", "uno", "dos", "tres", "cuatro"};

  for(int i = 0; i < 5; i++)
    printf("%p\n", (void*) numeros[i]);


  return 0;
}

