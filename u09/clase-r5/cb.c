#include <stdio.h>

struct time {
  unsigned int h:5;
  unsigned int :0;
  unsigned int m:6;
  unsigned int s:6;
};

int main (void) {
  struct time t = {23, 59, 59};

  printf("%02d:%02d:%02d\n", t.h, t.m, t.s);
  printf("%ld\n", sizeof t);

  return 0;
}

