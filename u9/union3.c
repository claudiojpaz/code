#include <stdio.h>

union int_4char {
  int entero;
  char byte[4];
};

//                                   i
// 00000000 00000000 00000010 00000001
//                                   c

int main (void) {
  union int_4char u;

  u.entero = 513;

  printf("%d\n", u.entero);

  for (int i = 0; i < 4; i++)
    printf("%d\n", u.byte[i]);

  return 0;
}

