#include <stdio.h>

struct time {
  unsigned int h:5;
  unsigned int m:6;
  unsigned int s:6;
};

union int_hora {
  unsigned int hora;
  struct time t;
};

union int_4char {
  char byte[4];
  union int_hora h;
};

// 00000MMM MMMMMMMs sssssmmm mmmhhhhh

int main (void) {
  struct time t = {23, 59, 59};

  printf("%d\n", t.h);
  printf("%d\n", t.m);
  printf("%d\n", t.s);

  return 0;
}

