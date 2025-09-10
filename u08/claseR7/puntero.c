#include <stdio.h>

int main (void) {
  int var[5] = {1,2,3,4,5};
  int *p;

  p = &var[0];

  for (int i = 0; i < 5; i++) {
    printf("dirección de var[%d]: %p\n", i, (void *) (p+i));
  }


  return 0;
}

