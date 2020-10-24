#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

struct herramienta {
  int registro;
  char nombre[40];
  int stock;
  float costo;
};

void cargar_db (FILE *);
void leer_db (FILE *);
void leer_registro (FILE *);
void modificar_db (FILE *);
void borrar_registro(FILE *);
void menu (FILE *);
int menu_option (void);

int main (void)
{
  FILE *fp;

  fp = fopen("hardware.dat", "rb+");
  if (fp == NULL) {
    fp = fopen("hardware.dat", "wb");
    if (fp == NULL) {
      printf("Algo no salió bien\n");
      return 1;
      // exit(EXIT_FAILURE);
    }
    cargar_db(fp);
    fclose(fp);
    fp = fopen("base.dat", "rb+");
  }

  menu(fp);

  fclose(fp);
  return 0;
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
        leer_registro(fp);
        break;
      case 4:
        borrar_registro(fp);
        break;
      case 5:
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

  printf("1-Modificar\n");
  printf("2-Mostrar db\n");
  printf("3-Mostrar registro\n");
  printf("4-Borrar registro\n");
  printf("5-Salir\n");
  printf("Que quiere? "); scanf("%d", &op);

  return op;
}

void cargar_db (FILE *fp)
{
  struct herramienta h = {0};

  for (int i = 0; i < N; i++) {
    h.registro = i;
    fwrite(&h, sizeof(struct herramienta), 1, fp);
  }
}

void leer_db (FILE *fp)
{
  struct herramienta h = {0};
  // struct herramienta ha[N] = {0};

  fseek(fp, 0, SEEK_SET);

  for (int i = 0; i < N; i++) {
    fread(&h, sizeof(struct herramienta), 1, fp);
    printf("%2d %-40s %3d $%8.2f\n", h.registro, h.nombre, h.stock, h.costo);
  }

  // fread(ha, sizeof(struct herramienta), N, fp);
}

void modificar_db (FILE *fp)
{
  struct herramienta h = {0};

  printf("Ingrese el número de registro: ");
  scanf("%d", &h.registro);
  printf("Ingrese el nombre: ");
  scanf("%s", h.nombre);
  printf("Ingrese el stock ");
  scanf("%d", &h.stock);
  printf("Ingrese el costo");
  scanf("%f", &h.costo);

  fseek(fp, h.registro*sizeof(struct herramienta), SEEK_SET);
  fwrite(&h, sizeof(struct herramienta), 1, fp);
}

void borrar_registro(FILE *fp)
{}

void leer_registro (FILE *fp)
{
  struct herramienta h = {0};
  int registro;

  printf("Ingrese el número de registro: ");
  scanf("%d", &registro);

  fseek(fp, registro*sizeof(struct herramienta), SEEK_SET);
  fread(&h, sizeof(struct herramienta), 1, fp);

  printf("%2d %-40s %3d $%8.2f\n", h.registro, h.nombre, h.stock, h.costo);
}
