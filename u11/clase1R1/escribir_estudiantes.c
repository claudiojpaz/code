#include <stdio.h>

struct estudiante {
  int legajo;
  char nombre[80];
  int nota;
};

int main(void){
  struct estudiante e[2] = {{123, "Claudio", 9}, {456, "José", 5}};
  FILE *fp;

  fp = fopen("db_estudiantes.dat", "wb");
  fwrite(&e, sizeof (struct estudiante), 2, fp);
  fclose(fp);

  return 0;
}

