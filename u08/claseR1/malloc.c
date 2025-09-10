#include <stdio.h>
#include <stdlib.h>

int *reserva(int n) {
  int *p = malloc(n * sizeof (int));
  if (p == NULL) {
    printf("No se pudo hacer la reserva\n");
    exit(EXIT_FAILURE);
  }
  return p;
}

void reserva2(int **q, int n) {
  *q = malloc(n * sizeof (int));
  if (*q == NULL) {
    printf("No se pudo hacer la reserva\n");
    exit(EXIT_FAILURE);
  }
}

int main (void) {
  int *p;
  int n;

  printf("Cuantos elementos: ");
  scanf("%d", &n);

  /* p = reserva(n); */
  reserva2(&p, n);

  for(int i = 0; i < n; i++)
    *(p+i) = i*i;

  for(int i = 0; i < n; i++)
    printf("%d\n", *(p+i));

  free(p);
  return 0;
}

