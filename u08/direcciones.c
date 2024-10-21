#include <stdio.h>

int main (void) {
  char mat[3][3] = {{0,1,2},{3,4,5},{6,7,8}};
  char (*p)[];

  p = &mat[1];

  printf("%p\n", (void*) p);

  return 0;
}

