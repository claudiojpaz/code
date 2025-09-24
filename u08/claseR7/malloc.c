#include <stdio.h>
#include <stdlib.h>

int main (void) {
  int *p;
  int n;

  printf("Cuantos elementos: ");
  scanf("%d", &n);

  p = malloc(n * sizeof (int));

  for(int i = 0; i < n; i++)
    *(p+i) = i*i;

  for(int i = 0; i < n; i++)
    printf("%d\n", *(p+i));

  free(p);

  p = calloc(n, sizeof (int));
  /* p = malloc(n* sizeof (int)); */

  for(int i = 0; i < n; i++)
    printf("%d\n", *(p+i));

  free(p);
  return 0;
}

