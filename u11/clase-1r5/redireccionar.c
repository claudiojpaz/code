#include <stdio.h>

int main (void) {
  fclose(stdout);

  stdout = fopen("salida.txt", "a");
  printf("Hola, mundo!\n");

  fclose(stdout);

  return 0;
}

