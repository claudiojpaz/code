#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10

struct estudiante {
  int cod;
  char nombre[40];
  int nota;
};

FILE* crear_db (FILE*);
void leer_db (FILE *);
void modificar_db (FILE *);
void borrar_registro(FILE *);
void menu (FILE *);
int menu_option (void);

int main (void)
{
  FILE *fp;

  fp = fopen("base.dat", "r+");

  menu(fp);

  fclose(fp);
  return 0;
}

FILE* crear_db (FILE *fp)
{
  FILE *fpo;

  char respuesta[10];

  struct estudiante est_cero = {0};

  printf("La db si existe se borrará. ¿Esta seguro? (SI/NO): ");
  scanf("%10s", respuesta);

  if (strcmp(respuesta, "SI") == 0) {
    if (fp != NULL)
      fclose(fp);

    fp = fopen("base.dat", "wb");

    for (int i = 0 ; i < N; i++) {
      est_cero.cod = i;
      fwrite(&est_cero, sizeof(struct estudiante), 1, fp);
    }

    fclose(fp);
    fpo = fopen("base.dat", "rb+");

  } else {
    printf("No se crea nada...\n");
  }

  return fpo;
}

void leer_db (FILE *fp)
{
  struct estudiante est;

  fseek(fp, 0, SEEK_SET);

  for (int i = 0 ; i < N; i++) {
    fread(&est, sizeof(struct estudiante), 1, fp);
    if (est.nombre[0] != 0) {
      printf("cod: %d ", est.cod);
      printf("nombre: %-40s ", est.nombre);
      printf("nota: %d\n", est.nota);
    }
  }

}

void modificar_db (FILE *fp)
{
  struct estudiante est;

  printf("Ingrese cod: ");
  scanf("%d", &est.cod);
  printf("Ingrese el nombre: ");
  scanf("%s", est.nombre);
  printf("Ingrese la nota: ");
  scanf("%d", &est.nota);

  fseek(fp, est.cod*sizeof(struct estudiante), SEEK_SET);

  fwrite(&est, sizeof(struct estudiante), 1, fp);
}

void menu (FILE *fp)
{
  int salir = 0;
  int op;

  do {
    op = menu_option();
    switch (op) {
      case 0:
        fp = crear_db(fp);
        break;
      case 1:
        modificar_db(fp);
        break;
      case 2:
        leer_db(fp);
        break;
      case 3:
        borrar_registro(fp);
        break;
      case 4:
        salir = 1;
        break;
      default:
        printf("Opción no válida\n");
    }
  } while ( salir == 0 );
}

int menu_option (void)
{
  int op;

  printf("0-Crear db\n");
  printf("1-Modificar\n");
  printf("2-Mostrar\n");
  printf("3-Borrar registro\n");
  printf("4-Salir\n");
  printf("Que quiere? "); scanf("%d", &op);

  return op;
}

void borrar_registro(FILE * fp)
{
  struct estudiante est = {0};

  printf("Ingrese cod: ");
  scanf("%d", &est.cod);

  fseek(fp, est.cod*sizeof(struct estudiante), SEEK_SET);

  fwrite(&est, sizeof(struct estudiante), 1, fp);
}
