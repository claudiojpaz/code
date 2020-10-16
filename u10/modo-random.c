#include <stdio.h>

#define N 10

struct estudiante {
  int legajo;
  char nombre[40];
  int nota;
};

void crear_db (void);
void leer_db (FILE *);
void modificar_db (FILE *);
void menu (FILE *);
int menu_option (void);

int main (void)
{
  FILE *fp;

  fp = fopen("base.bin", "rb+");

  menu(fp);

  fclose(fp);
  return 0;
}

void crear_db (void)
{
  FILE *fp;

  struct estudiante est_cero = {0};

  fp = fopen("base.bin", "wb");

  for (int i = 0 ; i < N; i++) {
    est_cero.legajo = i;
    fwrite(&est_cero, sizeof(struct estudiante), 1, fp);
  }

  fclose(fp);
}

void leer_db (FILE *fp)
{
  struct estudiante est;

  fseek(fp, 0, SEEK_SET);

  for (int i = 0 ; i < N; i++) {
    fread(&est, sizeof(struct estudiante), 1, fp);
    printf("legajo: %d ", est.legajo);
    printf("nombre: %-40s ", est.nombre);
    printf("nota: %d\n", est.nota);
  }

}

void modificar_db (FILE *fp)
{
  struct estudiante est;

  printf("Ingrese legajo: ");
  scanf("%d", &est.legajo);
  printf("Ingrese el nombre: ");
  scanf("%s", est.nombre);
  printf("Ingrese la nota: ");
  scanf("%d", &est.nota);

  fseek(fp, est.legajo*sizeof(struct estudiante), SEEK_SET);

  fwrite(&est, sizeof(struct estudiante), 1, fp);
}

void menu (FILE *fp)
{
  int salir = 0;
  int op;

  do {
    op = menu_option();
    switch (op) {
      case 1:
        modificar_db(fp);
        break;
      case 2:
        leer_db(fp);
        break;
      case 3:
        salir = 1;
        break;
      case 10:
        crear_db();
      default:
        printf("Opción no válida\n");
    }
  } while ( salir == 0 );
}

int menu_option (void)
{
  int op;

  printf("1-Modificar\n");
  printf("2-Mostrar\n");
  printf("3-Salir\n");
  printf("Que quiere? "); scanf("%d", &op);

  return op;
}
