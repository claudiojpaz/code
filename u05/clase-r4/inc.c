#include <stdio.h>

int main (void) {
  int a=4,b=5;
  int c;

  // a = a + 1;
  //++a;
  //c = a++ + b;

  c=a+(++b);

  printf("c=%d\n", c);
  printf("a=%d\n", a);


  return 0;
}

