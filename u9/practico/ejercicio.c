#include <stdio.h>
#include <stdlib.h>

#define N 100

struct estudiante {
  unsigned int legajo;
  char nombre[80];
};

void carga_p (struct estudiante *);
struct estudiante carga (void);
void cargar_estudiantes (struct estudiante [], int);
void ordenar (struct estudiante [], int);
void imprimir (struct estudiante *, int);
void swap (struct estudiante *, struct estudiante *);

int main(void)
{
  struct estudiante est[N];

  int n = 2;

  // validación (obtenemos n)

  // carga
  cargar_estudiantes(est, n);

  // ordenar

  // imprimir
  imprimir(est, n);

  return 0;
}

void imprimir (struct estudiante *p, int n)
{
  for (int i = 0; i < n; i++) {
    printf("estudiante %d\n", i+1);
    // printf("legajo: %u\n", (*(p+i)).legajo);
    // printf("nombre: %s\n", (*(p+i)).nombre);

    printf("legajo: %u\n", p[i].legajo);
    printf("nombre: %s\n", p[i].nombre);

    // printf("legajo: %u\n", (p+i)->legajo);
    // printf("nombre: %s\n", (p+i)->nombre);
  }
}

void ordenar (struct estudiante est[], int n)
{


}

void swap (struct estudiante *p, struct estudiante *q)
{
  struct estudiante tmp = *p;
  *p = *q;
  *q = tmp;
}

void cargar_estudiantes (struct estudiante est[], int n)
{
  for (int i = 0; i < n; i++) {
    printf("estudiante %d\n", i+1);
    /* est[i] = carga(); */
    carga_p(&est[i]);
  }
}

struct estudiante carga (void)
{
  struct estudiante r;

  printf("ingrese el legajo: ");
  scanf("%u", &r.legajo);
  printf("ingrese el nombre: ");
  scanf(" %s", r.nombre);

  return r;
}

void carga_p (struct estudiante *p)
{
  printf("ingrese el legajo: ");
  scanf("%u", &p->legajo);
  printf("ingrese el nombre: ");
  scanf(" %s", p->nombre);
}
