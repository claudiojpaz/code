#include <stdio.h>

struct estudiante {
  int legajo;
  char nombre[80];
  int nota;
};

int main(void){
  struct estudiante est[3] = {0};
  struct estudiante e = {0};
  FILE *fp;

  fp = fopen("estudiante.bin", "rb");
  fseek(fp, 1 * sizeof e, SEEK_SET);
  fread(&e, sizeof est, 1, fp);
  fclose(fp);

  printf("%d %s %d\n", e.legajo, e.nombre, e.nota);

  return 0;
}

