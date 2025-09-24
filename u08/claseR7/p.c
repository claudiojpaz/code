#include <stdio.h>

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
  return b != 0 ? a / b : 0;
}

int main (void) {
  int (*p[4])(int, int) = {suma, resta, producto, division};
  int op;
  int a, b;

  do {
    printf("0-suma\n");
    printf("1-resta\n");
    printf("2-producto\n");
    printf("3-division\n");
    printf("4-salir\n");
    printf("Ingrese una opción: ");
    scanf("%d", &op);

    if (op >= 0 && op <= 4)
      if (op != 4) {
        printf("Ingrese operando: ");
        scanf("%d", &a);
        printf("Ingrese otro operando: ");
        scanf("%d", &b);
        printf("%d\n", (*p[op])(a, b));
      } else
        break;
    else
      printf("Opción no válida\n");
  } while (op != 4);

  return 0;
}

