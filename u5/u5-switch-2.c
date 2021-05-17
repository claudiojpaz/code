#include <stdio.h>

int main (void) {
  int op;
  int n1, n2;

  int salir = 0;

  printf("Calculadora\n");
  do {
    printf("0 - suma\n");
    printf("1 - resta\n");
    printf("2 - producto\n");
    printf("4 - salir\n");
    printf("Ingrese una opción: ");
    scanf("%d", &op);

    if (op != 4) {
      printf("Ingrese dos números: ");
      scanf("%d %d", &n1, &n2);
    }

    switch (op) {
      case 0:
        printf("%d+%d=%d\n", n1, n2, n1+n2);
        break;
      case 1:
        printf("%d-%d=%d\n", n1, n2, n1-n2);
        break;
      case 2:
        printf("%d*%d=%d\n", n1, n2, n1*n2);
        break;
      case 4:
        salir = 1;
        break;
      default:
        printf("Opción no válida\n");
    }
  } while (salir == 0);

  return 0;
}

