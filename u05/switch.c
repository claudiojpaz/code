#include <stdio.h>

int main (void) {
  char op = '&';
  int a = 2;
  int b = 3;

  switch (op) {
    case '+':
      printf("%d\n", a+b);
      break;
    case '-':
      printf("%d\n", a-b);
      break;
    case '*':
      printf("%d\n", a*b);
      break;
    default:
      printf("Operador incorrecto\n");
  }

  return 0;
}

