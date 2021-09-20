#include <stdio.h>

int i = 10;

int contador(void);

int main (void) {
  int i = 3;

  {
    int i = 20;
    for (int i = 0; i < 5; i++) {
      printf("i dentro del for: %d  %d\n", i, contador());
    }
    printf("i dentro del bloque: %d\n", i);
  }

  printf("i dentro del main: %d\n", i);

  return 0;
}

int contador(void) {
  static int c = 0;

  return c++;
}

