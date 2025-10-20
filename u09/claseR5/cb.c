#include <stdio.h>

struct time {
  unsigned int h:5;
  unsigned int m:6;
  unsigned int s:6;
};

int main (void) {
  struct time t;
  int tmp;

  printf("Ingrese hora: ");
  scanf("%d", &tmp);
  //scanf("%d", &t.h);
  t.h = tmp;
  printf("Ingrese minuto: ");
  scanf("%d", &tmp);
  t.m = tmp;
  printf("Ingrese segundo: ");
  scanf("%d", &tmp);
  t.s = tmp;

  printf("%02d:%02d:%02d\n", t.h, t.m, t.s);

  return 0;
}
