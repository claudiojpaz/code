#include <stdio.h>
#include <stdlib.h>

int main (void) {
  int *p;
  int n = 10;

  p = calloc(n,sizeof *p);

  for (int i = 0; i < n; i++)
    printf("%d\n", *(p+i));

  free(p);

  return 0;
}

