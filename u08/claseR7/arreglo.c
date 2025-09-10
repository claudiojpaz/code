#include <stdio.h>

void add_one(int *p) {
  (*p)++;
  printf("en add_one: %p\n", (void*)p);
  printf("en add_one: %d\n", *p);
  p++;
  printf("en add_one: %p\n", (void*)p);
}

int main (void) {
  int var = 3;
  int *q = &var;

  printf("en main: %p\n", (void*)q);
  printf("en main: %d\n", var);
  add_one(q);
  printf("en main: %p\n", (void*)q);
  printf("en main: %d\n", var);

  return 0;
}

