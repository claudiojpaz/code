#include <stdio.h>

int main (void) {
  int var = 257;
  int *p;
  unsigned char *q;
  void *r;

  p = &var;
  r = p;
  q = r;


  printf("%d\n", var);
  printf("%d\n", *q);


  return 0;
}

