#include <stdio.h>

int add(int a, int b) {
  return a + b;
}

int sub(int a, int b) {
  return a - b;
}

int operation(int (*p)(int, int), int a, int b) {
  return (*p)(a, b);
}

int main (void) {

  printf("%d\n", operation(sub, 3, 4));

  return 0;
}

