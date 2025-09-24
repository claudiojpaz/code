#include <stdio.h>

int main (void) {
  int a, b;
  char op;

  printf("+%d -%d *%d /%d\n\n", '+', '-', '*', '/');

  printf("operación: ");
  scanf("%d%c%d", &a, &op, &b);

  printf("%d\n", op-42);

  return 0;
}

