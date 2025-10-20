#include <stdio.h>

union num {
  int entero;
  float real;
  struct {
    short int r;
    short int i;
  } complejo;
};

int main(void){
  union num u;

  u.entero = 42;
  printf("%d\n", u.complejo.j);

  return 0;
}

