#include <stdio.h>
#include <stdlib.h>

#define N 100

struct estudiante {
  int legajo;
  char nombre[40];
  char apellido[40];
  int nota;
};

void cargar (struct estudiante [], int, FILE *);
float promedio (struct estudiante *p, int);
void mostrar (struct estudiante [], int);
void mostrar_con_nota (struct estudiante [], int, int nota);

int main (int argc, char *argv[])
{
  struct estudiante estudiantes[N] = {{0}};
  FILE *fp;

  if (argc != 2) {
    printf("Se necesita nombre de archivo..\n");
    exit(EXIT_FAILURE);
  }

  fp = fopen(argv[1], "r");
  if ( fp == NULL ) {
    printf("No se pudo abrir el archivo..\n");
    exit(EXIT_FAILURE);
  }

  cargar(estudiantes, N, fp);
  //mostrar(estudiantes, N);
  mostrar_con_nota(estudiantes, N, 8);
  printf("El promedio es %.2f\n", promedio(estudiantes, N));
  fclose(fp);
  return 0;
}

void cargar (struct estudiante e[], int n, FILE *fp)
{

  // versión 1
  // int i = 0;
  // do {
  //   fscanf(fp, "%d %s %s %d", &e[i].legajo, e[i].nombre, e[i].apellido, &e[i].nota);
  //   i++;
  // } while ( !feof(fp) );

  // versión 2
  // int i = 0;
  // fscanf(fp, "%d %s %s %d", &e[i].legajo, e[i].nombre, e[i].apellido, &e[i].nota);
  // while ( !feof(fp) ) {
  //   i++;
  //   fscanf(fp, "%d %s %s %d", &e[i].legajo, e[i].nombre, e[i].apellido, &e[i].nota);
  // }

  // versión 3
  // for (int i = 0; i < n; i++) {
  //   fscanf(fp, "%d %s %s %d", &e[i].legajo, e[i].nombre, e[i].apellido, &e[i].nota);
  // }

  // versión 4
  for (int i = 0; i < n && !feof(fp) ; i++) {
    fscanf(fp, "%d %s %s %d", &e[i].legajo, e[i].nombre, e[i].apellido, &e[i].nota);
  }

}

void mostrar (struct estudiante e[], int n)
{
  for (int i = 0; i < n; i++){
    printf("%d ", e[i].legajo);
    printf("%s ", e[i].nombre);
    printf("%s ", e[i].apellido);
    printf("%d\n", e[i].nota);
  }
}

float promedio (struct estudiante *p, int n)
{
  int suma = 0;

  for (int i = 0; i < n; i++) {
    // suma += (*(p+i)).nota;
    suma += (p+i)->nota;
    // suma += p[i].nota;
  }

  return (float) suma / n;
}

void mostrar_con_nota (struct estudiante e[], int n, int nota)
{
  for (int i = 0; i < n; i++) {
    if (e[i].nota == nota) {
      printf("%d ", e[i].legajo);
      printf("%s ", e[i].nombre);
      printf("%s ", e[i].apellido);
      printf("%d\n", e[i].nota);
    }
  }
}
