#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 80
#define STUDENT_LEN 80

struct estudiante {
  int legajo;
  char nombre[NAME_LEN];
  int notas[3];
  float promedio;
  char estado; // A, R, L
};

struct estudiante cargar_estudiante(void) {
  struct estudiante e;

  printf("Ingrese el nombre: ");
  scanf(" %[^\n]s", e.nombre);

  return e;
}

int main (void) {
  struct estudiante *pp;
  int n = 3;

  pp = malloc(n * sizeof (struct estudiante));
  if (pp != NULL)
      printf("Pude reservar %lu bytes\n", n * sizeof (struct estudiante));

  for (int i = 0; i < n; i++) {
    /* (*(pp+i)).legajo = i; */
    /* printf("Ingrese el nombre: "); */
    /* scanf(" %[^\n]s", (*(pp+i)).nombre); */
    /* (pp+i)->legajo = i; */
    /* printf("Ingrese el nombre: "); */
    /* scanf(" %[^\n]s", (pp+i)->nombre); */
    *(pp+i) = cargar_estudiante();
    (pp+i)->legajo = i;
  }

  for (int i = 0; i < n; i++)
    printf("%d %s\n", (*(pp+i)).legajo, (*(pp+i)).nombre);

  free(pp);
  return 0;
}

