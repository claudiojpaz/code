#include <stdio.h>

int main (void) {
  int i, j;
  int n;
  int c = 0;

  printf("ingrese cuantas veces repetir: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%5d", c++);
    }
    printf("\n");
  }


  return 0;
}

