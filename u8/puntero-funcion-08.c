#include <stdio.h>

void alta (void) {
  printf("alta\n");
}
void baja (void) {
  printf("baja\n");
}
void modificacion (void) {
  printf("modificación\n");
}
void impresion (void) {
  printf("impresión\n");
}

int main (void) {
  void (*p[4])(void) = {alta, baja, modificacion, impresion};
  int op;

  do {
    printf("0-Alta\n1-Baja\n2-Modificación\n");
    printf("3-Impresión\nCualquier otra-Salir\n");
    printf("Ingrese que opción desea: ");
    scanf("%d", &op);
    if (op >= 0 && op < 4)
      (*p[op])();
  } while (op >= 0 && op < 4);

  return 0;
}



