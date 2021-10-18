#include <stdio.h>


int main (void) {
  FILE *fp;
  char archivo[] = "nombres.txt";
  char apellido[] = "paz";

  fp = fopen(archivo, "w");

  fprintf(fp, "%s\n", apellido);

  fclose(fp);
  return 0;
}

