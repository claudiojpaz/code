#include <stdio.h>

int main (void) {
  fclose(stdout);

  stdout = fopen("pantalla.txt", "a");

  printf("Hola, mundo!\n");

  return 0;
}

