#include <stdio.h>

struct time {
  unsigned int h:5;
  unsigned int  :3;
  unsigned int m:6;
  unsigned int  :2;
  unsigned int s:6;
};

// 00000000 0000000s sssssmmm mmmhhhhh
// 00000000 00ssssss 00mmmmmm 000hhhhh

int main (void) {
  struct time t = {23,59,58};

  printf("%d\n", t.h);
  printf("%d\n", t.m);
  printf("%d\n", t.s);


  return 0;
}

