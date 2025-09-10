#include <stdio.h>

int main (void) {
  int var[5] = {1,2,3,4,5};
  int *p;
  void *q = &var[0];
  char *pq = q;

  p = &var[0];

  for (int i = 0; i < 5; i++) {
      printf("var: %d\n", *(p+i));
      printf("dir: %p\n", (void *) (p+i));
  }

  for (int i = 0; i < 20; i++) {
      printf("var: %d\n", *(pq+i));
  }


  return 0;
}

