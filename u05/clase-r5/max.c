#include <stdio.h>

int main (void) {
  int a, b;

  printf("ingrese a: ");
  scanf("%d", &a);
  printf("ingrese b: ");
  scanf("%d", &b);

  if (a > b)
    printf("el mayor es a que es %d\n", a);
  else
    if (b > a)
      printf("el mayor es b que es %d\n", b);
    else
      printf("Son iguales\n");


  return 0;
}

