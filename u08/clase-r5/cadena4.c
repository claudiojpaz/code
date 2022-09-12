#include <stdio.h>

int main (void) {
  char numeros[5][10] = {"cero", "uno", "dos", "tres", "cuatro"};

  //for(int i = 0; i < 5; i++) {
  //  printf("%p\n", &numeros[i][0]);
  //  printf("%p\n", numeros[i]);
  //}

  printf("%p\n", numeros);
  printf("%p\n", &numeros[0][0]);
  printf("%p\n", numeros[0]);
  printf("%p\n", &numeros[0]);


  return 0;
}

