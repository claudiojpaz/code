#include <stdio.h>
#include <stdlib.h>

int main (void) {
  int *p;

  p = malloc(40);

  for (int i = 0; i < 10; i++)
    *(p+i) = i;

  for (int i = 0; i < 10; i++)
    printf("%d\n", *(p+i));

  free(p);
  return 0;
}

