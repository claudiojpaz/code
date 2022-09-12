#include <stdio.h>
#include <stdlib.h>

int main (void) {
  int *p;
  int n = 10;

  p = malloc(n*sizeof *p);

  for (int i = 0; i < n; i++)
    *(p+i) = i;

  for (int i = 0; i < 10; i++) {
    printf("%d ", *(p+i));
    printf("%p\n", (void*)(p+i));
  }

  free(p);

  printf("%p\n", (void*)p);
  printf("%d\n", *p);

  return 0;
}

