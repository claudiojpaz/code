#include <stdio.h>

int main(void){
  FILE *fp;

  printf("Abriendo archivo\n");
  fp = fopen("salida.txt", "w");

  fprintf(fp, "Hola, mundo!\n");
  fprintf(fp, "%f\n", 3.14);

  fclose(fp);
  printf("Cerrando archivo\n");

  return 0;
}

