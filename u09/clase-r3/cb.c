#include <stdio.h>
struct time {
  unsigned int h:5;
  unsigned int m:6;
  unsigned int s:6;
};
int main (void)
{
  struct time t = {23, 59, 59};

  t.h = 63;
  printf("%02d:%02d:%02d\n", t.h, t.m, t.s);
  return 0;
}

