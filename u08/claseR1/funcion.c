#include <stdio.h>


int suma (int, int);
int resta (int, int);
int producto (int, int);
int division (int, int);

int main (void) {
  int (*operacion[4])(int, int) = {suma, resta, producto, division};
  int a, b;
  int op;

  do {
    printf("0 - suma\n");
    printf("1 - resta\n");
    printf("2 - producto\n");
    printf("3 - division\n");
    printf("4 - salir\n");
    printf("Ingrese la opción: ");
    scanf("%d", &op);
    if (op >= 0 && op <= 4)
      if (op != 4) {
        printf("Ingrese operando: ");
        scanf("%d", &a);
        printf("Ingrese operando: ");
        scanf("%d", &b);
        printf("%d\n", (*operacion[op])(a, b));
      }
      else
        break;
    else
      printf("Opción no válida\n");

  } while (op != 4);


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
