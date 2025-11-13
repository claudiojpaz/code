#include <stdio.h>

int main(void){
  FILE *fp;
  char buffer[80];

  fp = fopen("carpeta/frutas.txt", "r");
  if (fp == NULL) {
    printf("No se pudo abrir el archivo. Finaliza el programa\n");
    return 1;
  }

  fscanf(fp, "%s", buffer);
  while ( !feof(fp) ) {
    printf("%s\n", buffer);
    fscanf(fp, "%s", buffer);
  }

  fclose(fp);



  return 0;
}

