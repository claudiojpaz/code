#include <stdio.h>

void add_one(int *q) {
  (*q)++;
  printf("%d\n\n", *q);
  printf(" q vale %p\n", (void*) q);
  q++;
  printf(" q vale %p\n", (void*) q);
}

int main (void) {
  int var = 3;
  printf(" %p\n", (void*) &var);

  printf("%d\n", var);
  add_one(&var);
  printf("%d\n", var);

  printf(" %p\n", (void*) &var);

  return 0;
}

