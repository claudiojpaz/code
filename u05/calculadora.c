#include <stdio.h>

int main (void) {
  char op;
  int n1, n2;
  int resultado;

  printf("Ingrese un número entero: ");
  scanf("%d", &n1);

  printf("Ingrese otro número entero: ");
  scanf("%d", &n2);

  do {
    printf("Ingrese la operación a realizar (+, -, *): ");
    scanf(" %c", &op);

    switch (op) {
      case '+':
        resultado = n1 + n2;
        break;

      case '-':
        resultado = n1 - n2;
        break;

      case '*':
        resultado = n1 * n2;
        break;

      default:
        printf("Operador incorrecto\n");
        op = -1;
    }
  } while (op == -1);

  printf("%d %c %d = %d\n", n1, op, n2, resultado);

  return 0;
}

