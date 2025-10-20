#include <stdio.h>

int main(void){
  FILE *fp;
  char buff[80];
  int c;

  fp = fopen("fruta.txt", "r");
  if (fp == NULL) {
    printf("No se puede abrir el archivo.\n");
    return 1;
  }

  fscanf(fp, "%s %d", buff, &c);

  printf("Leído: %d %s\n", c+1, buff);

  fclose(fp);

  return 0;
}

