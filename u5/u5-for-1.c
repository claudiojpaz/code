#include <stdio.h>

int main (void) {
  int i, j;
  int n;

  printf("ingrese cuantas veces repetir: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("   (%d,%d)", i, j);
    }
    printf("\n");
  }


  return 0;
}

