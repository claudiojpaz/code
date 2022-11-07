#include <stdio.h>

int main (void) {
  int nota;
  FILE *fp;

  fp = fopen("not.txt", "r");

  fscanf(fp, "%d", &nota);
  printf("ingresó: %d\n", nota);

  fclose(fp);
  return 0;
}

