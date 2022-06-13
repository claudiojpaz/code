#include <stdio.h>
#include <stdlib.h>

int main (void) {
  int a = 5, b = 2;

#ifdef __unix
  system("clear");
#else
  system("cls");
#endif

#ifdef DEBUG
  printf("a=%d\n", a);
  printf("b=%d\n", b);
#endif
  printf("%.2f\n", (float) a/b);

  return 0;
}

