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
  return b != 0 ? a / b: 0;
}

void cargar_operandos(int *p, int *q) {
  printf("Ingrese el primer operando: ");
  scanf("%d", p);
  printf("Ingrese el segundo operando: ");
  scanf("%d", q);
}

int main (void) {
  int (*operacion[])(int,int) = {suma, resta, producto, division};
  int opcion;
  int a, b;

  do {
    printf("0 - Suma\n");
    printf("1 - Resta\n");
    printf("2 - Producto\n");
    printf("3 - División\n");
    printf("4 - Salir\n");
    printf("Ingrese la opción: ");
    scanf("%d", &opcion);

    if (opcion >= 0 && opcion <= 4) {
      if (opcion != 4) {
        cargar_operandos(&a, &b);
        printf("El resultado es %d\n", (*operacion[opcion])(a,b));
      } else
        break;
    } else {
      printf("Opción desconocida\n");
    }
  } while (opcion != 4);


  return 0;
}

