#include <stdio.h>

int suma (int, int);
int resta (int, int);
int producto (int, int);
int division (int, int);

int main (void) {
  int (*operacion[])(int, int) = {producto, suma, NULL, resta, NULL, division};
  int a, b;
  char op;

  printf("operación: ");
  scanf("%d%c%d", &a, &op, &b);

  // Falta proteger contra indices que no existen
  printf("%d%c%d=%d\n", a, op, b, (*operacion[op-42])(a, b));

  return 0;
}

int suma (int a, int b) {
  return a + b;
}

int resta (int a, int b) {
  return a - b;
}

int producto (int a, int b) {
  return a * b;
}

int division (int a, int b) {
  int div = 0;
  if (b != 0)
    div = a / b;

  return div;
}
