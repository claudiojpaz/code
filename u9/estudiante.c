#include <stdio.h>

#define N 3

struct notas {
  int parcial1;
  int parcial2;
  int final;
};

struct estudiante {
  int legajo;
  char apellido[80];
  char nombre[80];
  struct notas info1;
};

void imprimir_registro (struct estudiante);
void imprimir_n_registros (struct estudiante *, int n);
void cargar_registro (struct estudiante *);
void cargar_n_registros (struct estudiante *, int n);

int main (void) {
  struct estudiante e[N];

  //cargar_n_registros(e, N);

  for (int i = 0; i < N; i++)
    cargar_registro(&e[i]);

  for (int i = 0; i < N; i++)
    imprimir_registro(e[i]);

  return 0;
}

void imprimir_registro (struct estudiante e) {
  printf("Legajo: %d\n", e.legajo);
  printf("Nombre: %s, %s\n", e.apellido, e.nombre );
  printf("Parcial 1: %d\n", e.info1.parcial1);
  printf("Parcial 2: %d\n\n", e.info1.parcial2);
}

void cargar_n_registros (struct estudiante *p, int n) {
  for (int i = 0; i < n; i++) {
    printf("Legajo: "); scanf("%d", &(p+i)->legajo);
    printf("Nombre: "); scanf("%s", (p+i)->nombre);
    printf("Apellido: "); scanf("%s", (p+i)->apellido);
    printf("Parcial 1: "); scanf("%d", &(p+i)->info1.parcial1);
    printf("Parcial 2: "); scanf("%d", &(p+i)->info1.parcial2);
  }
}

void cargar_registro (struct estudiante *p) {
  printf("Legajo: "); scanf("%d", &p->legajo);
  printf("Nombre: "); scanf("%s", p->nombre);
  printf("Apellido: "); scanf("%s", p->apellido);
  printf("Parcial 1: "); scanf("%d", &p->info1.parcial1);
  printf("Parcial 2: "); scanf("%d", &p->info1.parcial2);
}
