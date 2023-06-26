#include <stdio.h>

int main (void) {
  int a, b;

  {
  printf("Ingrese a: ");
  scanf("%d", &a);
  printf("Ingrese b: ");
  scanf("%d", &b);
  }

  if (a > b) {
    printf("El mayor es a que es %d\n", a);
  } else {
    if (b > a) {
      printf("El mayor es b que es %d\n", b);
    } else {
      printf("Son iguales\n");
    }
  }


  return 0;
}

