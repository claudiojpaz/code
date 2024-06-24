#include <stdio.h>
void inc_var (void);

static int var;

int main (void) {
  var = 0;

  inc_var();

  printf("%d\n", var);

  return 0;
}

