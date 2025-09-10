#include <stdio.h>

void addone (int *p) {
  *p += 1;

  p+=1;

  printf("p: %p\n", (void*) p);
}

int main (void) {
  int n = 3;

  int *q = &n;
  printf("q: %p\n", (void*) q);
  addone(q);
  printf("q: %p\n", (void*) q);

  printf("%d\n", n);

  return 0;
}

