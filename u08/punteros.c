#include <stdio.h>

int main (void) {
  char var = 3;
  const char *p;

  p = &var;

  var = 4;

  printf("%d\n", *p);
  printf("%d\n", var);


  return 0;
}

