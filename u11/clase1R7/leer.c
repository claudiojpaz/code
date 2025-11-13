#include <stdio.h>

int main(void){
  FILE *fp;
  char buffer[80] = {0};

  fp = fopen("frutas.txt", "r");
  if (fp == NULL) {
    printf("No se puede abrir el archivo. Finaliza programa\n");
    return 1;
  }

  while ( !feof(fp) ) {
    fscanf(fp, "%s", buffer);
    if ( !feof(fp) )
      printf("%s\n", buffer);
  }

  fclose(fp);
  return 0;
}

