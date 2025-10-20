#include <stdio.h>

int main(void){
  FILE *fp;
  char buff[80];

  fp = fopen("frutas.txt", "r");
  if (fp == NULL) {
    printf("No se puede abrir el archivo.\n");
    return 1;
  }

  while(!feof(fp)) {
    fscanf(fp, "%s", buff);
    if(!feof(fp))
        printf("%s\n",buff);
  }

  rewind(fp);

  while(!feof(fp)) {
    fscanf(fp, "%s", buff);
    if(!feof(fp))
        printf("%s\n",buff);
  }

  fclose(fp);

  return 0;
}

