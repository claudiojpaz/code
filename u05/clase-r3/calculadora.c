#include <stdio.h>

int main (void) {
  int a, b;
  char op;

  printf("ingrese la operación: ");
  scanf("%d %c %d", &a, &op, &b);

  switch (op) {
    case '+':
      printf("%d+%d=%d\n", a, b, a+b);
      break;
    case '-':
      printf("%d-%d=%d\n", a, b, a-b);
      break;
    case '*':
      printf("%d*%d=%d\n", a, b, a*b);
      break;
    default:
      printf("Operación desconocida\n");

  }


  return 0;
}

