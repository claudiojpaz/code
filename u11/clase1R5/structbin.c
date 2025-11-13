#include <stdio.h>

struct estudiante {
  int legajo;
  char nombre[80];
  int nota;
};

int main(void){
  struct estudiante est[3] = {0};
  FILE *fp;

  printf("Ingrese legajo: ");
  scanf("%d", &est[1].legajo);
  printf("Ingrese nombre: ");
  scanf("%s", est[1].nombre);
  printf("Ingrese nota: ");
  scanf("%d", &est[1].nota);

  fp = fopen("estudiante.bin", "wb");
  fwrite(est, sizeof (struct estudiante), 3, fp);

  fclose(fp);

  return 0;
}

