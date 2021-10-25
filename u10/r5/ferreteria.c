#include <stdio.h>

struct item {
  int codigo;
  char nombre[80];
  float precio;
  int stock;
  int estado; // 0 baja 1 activo
};

void menu(FILE*);
void cargar_item(FILE*);
void mostrar_item(FILE*, int);
void mostrar_items(FILE*);
void modificar_item(FILE*, int);

int main (void) {
  struct item herramienta;
  FILE *fp;

  fp = fopen("ferreteria.dat", "rb+");
  if (fp == NULL) {
    fp = fopen("ferreteria.dat", "wb");
    for (int i = 0; i < 100; i++) {
      herramienta.codigo = i;
      fwrite(&herramienta, sizeof(struct item), 1, fp);
    }
    fclose(fp);
    fp = fopen("ferreteria.dat", "rb+");
  }

  //menu(fp);

  fclose(fp);
  return 0;
}

