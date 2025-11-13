#include <stdio.h>

int main(void){
  FILE *fp;

  fp = fopen("/root/fruta.txt", "w");
  fprintf(fp, "%f", 3.14);
  fclose(fp);

  return 0;
}

