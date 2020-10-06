#include <stdio.h>

struct time {
  unsigned char h:5;
  unsigned char m:6;
  unsigned char s:6;
};

// hhhhh000 00000000 00000000 00000000
// mmmmmmss ssss0000 00000000 00000000

int main (void)
{
  struct time t = {23, 59, 59};

  printf("%02d:%02d:%02d\n", t.h, t.m, t.s);
  printf("%lu\n", sizeof(struct time));

  return 0;
}
