#include <stdio.h>

int main(void){
  fclose(stdout);

  stdout = fopen("salida.txt", "w");

  printf("Hola, mundo!\n");
  printf("%f\n", 3.14);

  return 0;
}

