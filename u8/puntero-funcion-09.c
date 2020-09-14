#include <stdio.h>

int suma (int a, int b) {
  return a+b;
}
int resta (int a, int b) {
  return a-b;
}
int mult (int a, int b) {
  return a*b;
}
int divi (int a, int b) {
  return b!=0?a/b:0;
}

int main (void) {
  int (*p[4])(int,int);
  int r;

  p[0] = suma;
  p[1] = resta;
  p[2] = mult;
  p[3] = divi;

  for (int i = 0; i < 4; i++) {
    r = (*p[i])(6,2);
    printf("%d\n",  r);
  }
  return 0;
}
