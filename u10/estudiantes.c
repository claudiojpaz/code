#include <stdio.h>

void agregar(FILE *);
void mostrar(FILE *);
void menu (FILE *);
int menu_option (void);

int main (void) {
  FILE *fp;

  fp = fopen("db.txt","a+");
  menu(fp);

  fclose(fp);
  return 0;
}

void menu (FILE *fp) {
  int salir = 0;
  int op;
  do {
    op = menu_option();
    switch (op) {
      case 1:
        agregar(fp);
        break;
      case 2:
        mostrar(fp);
        break;
      case 3:
        salir = 1;
        break;
      default:
        printf("Opción no válida\n");
    }
  } while ( salir == 0 );
}

int menu_option (void) {
  int op;
  printf("1-Agregar\n");
  printf("2-Mostrar\n");
  printf("3-Salir\n");
  printf("Que quiere? "); scanf("%d", &op);
  return op;
}

void agregar(FILE *fp) {
  int legajo;
  char nombre[80];
  char apellido[80];

  printf("Ingrese el nombre: "); scanf(" %80[^\n]s", nombre);
  printf("Ingrese el apellido: "); scanf(" %80[^\n]s", apellido);
  printf("Ingrese el legajo: "); scanf("%d", &legajo);

  fprintf(fp, "%d %s, %s\n", legajo, apellido, nombre);
}

void mostrar(FILE *fp) {
  char linea[160];

  rewind(fp);

  fgets(linea, 160, fp);
  while (!feof(fp)) {
    //fputs(linea, stdout);
    puts(linea);
    fgets(linea, 160, fp);
  }
}
