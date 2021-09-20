#include <stdio.h>

int main (void) {
  int vect[10] = {0};
  int *p;

  p = vect;

  for (int i = 0; i < 10; i++)
    *(p+i) = i;

  for (int i = 0; i < 10; i++)
    printf("%d\n",vect[i]);


  return 0;
}

