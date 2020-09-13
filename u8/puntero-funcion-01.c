#include <stdio.h>

int suma (int a, int b) {
  return a+b;
}
int resta (int a, int b) {
  return a-b;
}

int main (void) {
  int (*p)(int,int);
  int r;

  p = suma;
  r = (*p)(5,4);
  printf("%d\n",  r);

  p = resta;
  r = (*p)(5,4);
  printf("%d\n",  r);

  return 0;
}

