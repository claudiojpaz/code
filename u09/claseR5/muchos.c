#include <stdio.h>
#include <stdlib.h>

struct estudiante {
  int legajo;
  char nombre[80];
  int parcial[3];
  float promedio;
  int final;
  char estado; // A, R, L
};

void imprimir_estudiante(struct estudiante e) {
    printf("%d %s\n", e.legajo, e.nombre);
}

struct estudiante carga_estudiante(void) {
  struct estudiante e;

  printf("Ingrese el legajo: ");
  scanf("%d", &e.legajo);
  printf("Ingrese el nombre: ");
  scanf(" %[^\n]s", e.nombre);

  return e;
}

int main (void) {
  struct estudiante *p;
  int n = 3;

  p = malloc (n * sizeof (struct estudiante));
  if (p != NULL)
    printf("Asignados %lu bytes\n", n * sizeof (struct estudiante));

  for (int i = 0; i < n; i++) {
    *(p+i) = carga_estudiante();
  }

  for (int i = 0; i < n; i++)
    imprimir_estudiante(*(p+i));

  free(p);
  return 0;
}

