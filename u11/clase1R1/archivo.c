#include <stdio.h>

int main(void){
  FILE *fp;

  fp = fopen("prueba.txt", "a");
  fprintf(fp, "Hola, mundo!\n");

  fclose(fp);
  return 0;
}

