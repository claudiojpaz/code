#include <stdio.h>

int main (void) {
  FILE *tmp;

  tmp = stdout;

  //fclose(stdout);

  stdout = fopen("pantalla.txt", "w");

  printf("hola, mundo 1!\n");

  stdout = tmp;
  printf("hola, mundo 2!\n");

  return 0;
}

