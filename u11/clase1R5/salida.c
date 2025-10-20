#include <stdio.h>

int main(void){
  FILE *fp;

  fp = stdout;

  stdout = fopen("salida.txt", "w");
  for (int i = 0; i < 10; i++)
    printf("%d Hola, mundo!\n", i);

  fclose(stdout);
  stdout = fp;
  printf("Hola, mundo!\n");
  return 0;
}

