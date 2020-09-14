#include<stdio.h>
#include<stdlib.h>

struct personal {
  int dni;
  char nombre[80];
  int legajo;
};

int main (void)
{
  struct personal *p;
  int i, n=3;

  p = malloc (n*sizeof (struct personal));

  for(i = 0; i < n; i++) {
    printf("Ingrese Nombre: "); scanf(" %80[^\n]s", (p+i)->nombre);
    printf("Ingrese DNI: "); scanf("%d", &(p+i)->dni);
    printf("Ingrese Legajo: "); scanf("%d", &(p+i)->legajo);
  }

  for(i = 0; i < n; i++) {
    printf("Nombre: %s\n", (p+i)->nombre);
    printf("DNI: %d\n", (p+i)->dni);
    printf("Legajo: %d\n", (p+i)->legajo);
  }

  free(p);
  return 0;
}

