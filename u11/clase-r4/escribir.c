#include <stdio.h>

int main (void) {
  FILE *fp;

  fp = fopen("frutas.txt", "r");



  fclose(fp);
  return 0;
}

