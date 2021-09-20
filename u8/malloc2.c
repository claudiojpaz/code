#include <stdio.h>
#include <stdlib.h>

void cargar (int *p, int n) {
  for(int i = 0; i < n; i++)
    p[i] = i*i;

}

void imprimir (int *p, int n) {
  for(int i = 0; i < n; i++)
    printf("%d\n", *(p+i));

}

int main (void) {
  int *p;
  int n;

  printf("Cuantos elementos cargará? ");
  scanf("%d", &n);

  //p = malloc(n * sizeof (int));
  p = calloc(n, sizeof (int));
  if (p == NULL) {
    printf("No se pudo reservar memoria\n");
    return 1;
  }

  cargar(p, n);
  imprimir(p, n);

  printf("acá cambio\n");
  n = 20;
  p = realloc(p, n);
  if (p == NULL) {
    printf("No se pudo reservar memoria\n");
    return 1;
  }

  imprimir(p, n);


  free(p);
  return 0;
}

