#include <stdio.h>

int main (void) {
  FILE *fp = NULL;

  fp = fopen("frutas.txt", "r");

  fclose(fp);
  return 0;
}

