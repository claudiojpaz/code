#include <stdio.h>

int main (void) {
  fclose(stdout);

  stdout = fopen("pantalla.txt", "w");

  printf("Hola, MUNDO!\n");

  fclose(stdout);
  return 0;
}

