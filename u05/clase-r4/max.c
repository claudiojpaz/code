#include <stdio.h>

int main (void) {
  int a, b;

  printf("ingrese a: ");
  scanf("%d", &a);
  printf("ingrese b: ");
  scanf("%d", &b);

  if (a == b)
    printf("Son iguales\n");
  else
    if (a > b)
      printf("El mayor es a\n");
    else
      printf("El mayor es b\n");


  return 0;
}

