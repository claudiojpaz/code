#include <stdio.h>

union int_char {
  int entero;
  char byte;
};

// 00000000 00000000 00000010 00000001

int main (void) {
  union int_char u;

  u.entero = 512;


  printf("%d\n", u.entero);

  u.byte = 1;

  printf("%d\n", u.byte);
  printf("%d\n", u.entero);



  return 0;
}

