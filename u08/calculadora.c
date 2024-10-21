#include <stdio.h>

int suma (int a, int b) {
  return a + b;
}

int main (void) {
  int op;
  int n1, n2;
  int res;
  char mensaje[] = "Ingrese dos números: ";

  int (*p[4])(int, int);
  p[0] = suma;

  printf(mensaje);
  scanf("%d %d", &n1, &n2);

  printf("0-suma\n");
  printf("Ingrese operación: ");
  scanf("%d", &op);


  if (op >= 0 && op < 4) {
      res = (*p[op])(n1, n2);
      printf("El resultado es %d\n", res);
  } else {
      printf("Opción desconocida\n");
  }


  return 0;
}

