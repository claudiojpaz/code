#include <stdio.h>

int main(void){
  FILE *fp;
  int numero = 970;

  fp = fopen("archivo.bin", "wb");
  fwrite(&numero, sizeof numero, 1, fp);

  fclose(fp);

  return 0;
}

