#include <stdio.h>

struct estudiante {
  int legajo;
  char nombre[80];
  int nota;
};

int main(void){
  struct estudiante e;
  FILE *fp;

  fp = fopen("db_estudiantes.dat", "rb");
  fread(&e, sizeof (struct estudiante), 1, fp);
  fclose(fp);

  printf("Legajo: %d\n", e.legajo);
  printf("Nombre: %s\n", e.nombre);
  printf("Nota: %d\n", e.nota);

  return 0;
}

