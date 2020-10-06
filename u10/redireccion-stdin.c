#include <stdio.h>

int main (void)
{
  fclose(stdout);
  stdout = fopen("salida.txt", "w");

  printf("Hola, mundo!\n");

  return 0;
}
