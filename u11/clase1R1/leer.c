#include <stdio.h>

int main(void){
  FILE *fp;
  char buffer[80];
  int entero;

  fp = fopen("fruta.txt", "r");
  fscanf(fp, "%s %d", buffer, &entero);
  fclose(fp);

  printf("%s\n", buffer);
  printf("%d\n", entero);

  return 0;
}

